#ifndef __CPU_IFETCH_H__

#include <memory/vaddr.h>

static inline uint32_t inst_fetch(vaddr_t *pc, int len) {
  uint32_t inst = vaddr_ifetch(*pc, len);
  printf("111\n");
  (*pc) += len;
  return inst;
}

#endif
