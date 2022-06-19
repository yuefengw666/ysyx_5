//#include "npc_common.h"

typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} NPC_CPU;

extern NPC_CPU npc_cpu;

const char *npc_regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};