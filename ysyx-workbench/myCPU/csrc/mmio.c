#include <mmio.h>
#include <cstdlib>
#include <log.h>
#include <pmem.h>

#define NR_MAP 16
#define IO_SPACE_MAX (2 * 1024 * 1024)

static IOMap maps[NR_MAP] = {};
static int nr_map = 0;
static uint8_t *p_space = NULL;
static uint8_t *io_space = NULL;


static inline bool map_inside(IOMap *maps, int size, paddr_t addr){
	return (addr >= maps->low && addr <= maps->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, paddr_t addr){
	int i;
	for(i = 0; i < size; i++){
		if(map_inside(maps + i, size, addr)){
			difftest_skip_ref();
			return i;
		}
	}
	return -1;
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write){
	if(c != NULL) { c(offset, len, is_write);}
}

static IOMap* fetch_mmio_map(paddr_t addr){
	int mapid = find_mapid_by_addr(maps, nr_map, addr);
	if(mapid != -1)
		return maps + mapid;
	else
		return NULL;
}

void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback){
	assert(nr_map < NR_MAP);
	maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
							.space = space, .callback = callback };
	Log("Add mmio map '%s' at [ %lx , %lx ]",
		maps[nr_map].name, maps[nr_map].low, maps[nr_map].high);
	
	nr_map ++;
}

word_t mmio_read(paddr_t addr, int len){
	return map_read(addr, len, fetch_mmio_map(addr));
}

void mmio_write(paddr_t addr, int len, word_t data){
	map_write(addr, len, data, fetch_mmio_map(addr));
}

uint8_t* new_space(int size){
	uint8_t *p = p_space;
	size = (size + PAGE_SIZE - 1) & (~PAGE_MASK);
	p_space += size;
	return p;
}

void init_map(){
	io_space = (uint8_t *)malloc(IO_SPACE_MAX);
	assert(io_space);
	p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map){
	paddr_t offset = addr - map->low;
	invoke_callback(map->callback, offset, len, false);
	word_t ret = host_read((uint8_t*)(map->space) + offset, len);
	return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map){
	paddr_t offset = addr - map->low;
	host_write((uint8_t*)(map->space) + offset, len, data);
	invoke_callback(map->callback, offset, len, true);
}

