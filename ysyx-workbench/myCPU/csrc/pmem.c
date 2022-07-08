#include <pmem.h>

static uint8_t pmem[MSIZE] __attribute((aligned(4096))) = {};

word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
  }
  //should not reach here
  return 0; 
}

void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
	case 8: *(uint64_t *)addr = data; return;
  }
}

word_t paddr_read(paddr_t addr, int len)
{
	return host_read(guest_to_host(addr), len);
}

void paddr_write(paddr_t addr, int len, word_t data)
{
	host_write(guest_to_host(addr), data, len);
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MBASE;}
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MBASE;}
