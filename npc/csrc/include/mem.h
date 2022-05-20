//#include "npc_common.h"

uint8_t* guest_to_host(paddr_t paddr);
static inline word_t host_read(void *addr);
static inline void host_write(void *addr, word_t data);
word_t pmem_read(paddr_t addr);
void pmem_write(paddr_t addr, word_t data);
