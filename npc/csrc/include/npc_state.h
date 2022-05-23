#include "npc_common.h"

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} NPC_CPU;

extern NPC_CPU npc_cpu;