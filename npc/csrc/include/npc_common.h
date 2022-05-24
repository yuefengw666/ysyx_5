#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <cstring>
#include <cassert>

//CONFIG
#define CONFIG_SDB 0
#define CONFIG_WATCHPOINT 0

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0


typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

//mem
extern uint8_t pmem[CONFIG_MSIZE];
uint8_t* guest_to_host(paddr_t paddr);
static inline word_t host_read(void *addr);
static inline void host_write(void *addr, word_t data);
word_t pmem_read(paddr_t addr);
void pmem_write(paddr_t addr, word_t data);

/*
typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} NPC_CPU;

extern NPC_CPU npc_cpu;
*/

/*const char *npc_regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
*/
