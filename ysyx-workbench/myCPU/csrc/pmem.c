#include <pmem.h>
#include <cstdio>
#include <reg.h>
#include <state.h>

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

void pc_read(long long raddr, long long *rdata){
	uint64_t addr = (uint64_t) raddr & ~(0x7);
	*rdata = host_read(guest_to_host(addr), 8);
	//printf("pc_data: %lx\n", *rdata);
}

void pmem_read(long long raddr, long long *rdata){
	uint64_t addr = (uint64_t) raddr & ~(0x7);
	if(addr + 8 >= 0x88000000 || addr < 0x80000000)
	{
		printf("addr:%lx is out of bound\n", addr);
		set_bad();
		state = NEMU_ABORT;
		return;
	}

	*rdata = host_read(guest_to_host(addr), 8);
}

void pmem_write(long long waddr, long long wdata, char mask){
	uint64_t addr = (uint64_t) waddr & ~(0x07);
	uint8_t *arr = (uint8_t *) &wdata;
	int i;
	uint8_t tmp = 0x01;

	if(addr >= 0x88000000 || addr < 0x80000000)
	{
		printf("addr:%lx is out of bound\n", addr);
		set_bad();
		state = NEMU_ABORT;
		return;
	}

	for(i = 0; i < 8; i++)
	{
		if((mask & tmp) != 0)
			host_write(guest_to_host(addr + i), 1, arr[i]);
		tmp = tmp << 1;
	}
}

word_t paddr_read(paddr_t addr, int len)
{
	return host_read(guest_to_host(addr), len);
}

void paddr_write(paddr_t addr, int len, word_t data)
{
	host_write(guest_to_host(addr), len, data);
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MBASE;}
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MBASE;}
