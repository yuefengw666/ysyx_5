#include "npc_state.h"

void set_npc_state(int state, int halt_ret){
    //difftest_skip_ref()
    npc_state.state = state;
    npc_state.halt_pc = npc_cpu.pc;
    npc_state.halt_ret = halt_ret;
}