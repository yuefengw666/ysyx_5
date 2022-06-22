#ifndef __NPC_COMMON_H__
#define __NPC_COMMON_H__

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <cstring>
#include <cassert>

//CONFIG
#define CONFIG_VCD 0
#define CONFIG_SDB 0
#define CONFIG_WATCHPOINT 0
#define CONFIG_DIFFTEST 0

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)


typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

extern uint8_t pmem[CONFIG_MSIZE];

/*
uint8_t* guest_to_host(paddr_t paddr);
static inline word_t host_read(void *addr);
static inline void host_write(void *addr, word_t data);
word_t pmem_read(paddr_t addr);
void pmem_write(paddr_t addr, word_t data);
*/

#endif
