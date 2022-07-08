#ifndef __PMEM_H__
#define __PMEM_H__

//header included
#include <stdint.h>
#include <common.h>

//macro
#define MBASE 0x80000000
#define MSIZE 0x8000000

uint8_t* guest_to_host(paddr_t paddr);
paddr_t host_to_guest(uint8_t *haddr);
word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);
#endif