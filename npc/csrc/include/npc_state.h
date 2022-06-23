#ifndef __NPC_STATE_H__
#define __NPC_STATE_H__

#include "npc_common.h"

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} NPC_CPU;

extern NPC_CPU npc_cpu;

extern const char *npc_regs[];

// ----------- state -----------

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCstate;

extern NPCstate npc_state;

#endif