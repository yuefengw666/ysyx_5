#ifndef __MEM_H__
#define __MEM_H__

#include "npc_common.h"

//nemu host.h
static inline word_t host_read(void *addr, int len){
    switch(len){
      case 1: return *(uint8_t  *)addr;
      case 2: return *(uint16_t *)addr;
      case 4: return *(uint32_t *)addr;
      case 8: return *(uint64_t *)addr;
      //default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
    }
}

static inline void host_write(void *addr, int len, word_t data){
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    //IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}

uint8_t* guest_to_host(paddr_t paddr);
uint8_t* npc_guest_mem(long long addr);

//word_t host_read(void *addr);
//void host_write(void *addr, word_t data);
word_t pmem_read(paddr_t addr);
void pmem_write(paddr_t addr, word_t data);

extern uint8_t pmem[CONFIG_MSIZE];

#endif