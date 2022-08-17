#ifndef __PMEM_H__
#define __PMEM_H__

//header included
#include <stdint.h>
#include <common.h>

//macro
#define MBASE 0x80000000
#define MSIZE 0x8000000
#define SERIAL_BASE 0xa00003f8
#define RTC_BASE 0xa0000048

enum slave_state {IDLE, RADDR_RESP, RDATA_RESP, WADDR_RESP, WDATA_RESP, W_ACK};
void host_write(void *addr, int len, word_t data);
word_t host_read(void *addr, int len);
uint8_t* guest_to_host(paddr_t paddr);
paddr_t host_to_guest(uint8_t *haddr);
word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);
//extern "C" void pmem_read(long long raddr, long long *rdata);
extern "C" uint64_t pmem_read(long long raddr, uint32_t len);
extern "C" void pmem_write(long long waddr, long long wdata, char wmask);
extern "C" void pc_read(long long raddr, long long *rdata);
//extern axi4_mem<32,64,4> mem(4096l*1024*1024);
extern slave_state mem_state;
void mem_sync();
void mem_step();

#endif