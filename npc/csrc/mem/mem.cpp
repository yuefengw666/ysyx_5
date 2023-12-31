#include "npc_common.h"
#include <mem.h>
uint8_t pmem[CONFIG_MSIZE] = {0};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint8_t* npc_guest_mem(long long addr) { return pmem + addr - CONFIG_MBASE; }

/*
static inline word_t host_read(void *addr){
    return *((uint64_t *)addr);
}

static inline void host_write(void *addr, word_t data){
    *(uint64_t *)addr = data;
    return;
}
*/
word_t pmem_read(paddr_t addr){
    if( (addr >= CONFIG_MBASE) && (addr < (paddr_t)CONFIG_MBASE + CONFIG_MSIZE) ){
      word_t ret = host_read(guest_to_host(addr));
      return ret;
    }
    printf("read address = %x is out of bound of pmem.\n",addr);
    return 0;
}

void pmem_write(paddr_t addr, word_t data){
    if( (addr >= CONFIG_MBASE) && (addr < (paddr_t)CONFIG_MBASE + CONFIG_MSIZE) ){
        host_write(guest_to_host(addr), data);
        return;
    }
    printf("write address = %x is out of bound of pmem.", addr);
}
