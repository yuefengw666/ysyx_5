#ifndef __MEM_H__
#define __MEM_H__

#include "npc_common.h"


uint8_t* guest_to_host(paddr_t paddr);
uint8_t* npc_guest_mem(long long addr);

word_t host_read(void *addr);
void host_write(void *addr, word_t data);
word_t pmem_read(paddr_t addr);
void pmem_write(paddr_t addr, word_t data);

extern uint8_t pmem[CONFIG_MSIZE];

#endif