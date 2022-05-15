
#include "include/npc_common.h"
#include "mem.h"

uint8_t pmem[CONFIG_MSIZE] = {0};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }

static inline word_t host_read(void *addr){
    return *((uint64_t *)addr);
}

static inline void host_write(void *addr, word_t data){
    printf("in host _write data:%lx\n",data);
    *(uint64_t *)addr = data;
    printf("write data:%lx\n",*((uint64_t *)addr));
    return;
}

word_t pmem_read(paddr_t addr){
    if( (addr >= CONFIG_MBASE) && (addr < (paddr_t)CONFIG_MBASE + CONFIG_MSIZE) ){
      printf("in pmem_read,addr=%x\n",addr);
      //word_t *ret = *(host_read(guest_to_host(addr)));
      //printf("read data: %lx\n",ret);

      word_t ret = host_read(guest_to_host(addr));
      printf("read data ret; %lx\n",ret);
      return ret;
      //return host_read(guest_to_host(addr));
    }
    printf("read address = %x is out of bound of pmem.",addr);
    return 0;
}

void pmem_write(paddr_t addr, word_t data){
    if( (addr >= CONFIG_MBASE) && (addr < (paddr_t)CONFIG_MBASE + CONFIG_MSIZE) ){
        printf("in pmem_write\n");
        printf("write data : %lx \n",data);
        host_write(guest_to_host(addr), data);
        return;
    }
    printf("write address = %x is out of bound of pmem.", addr);
}