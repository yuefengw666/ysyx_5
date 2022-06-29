#ifndef __VER_SIM_H__
#define __VER_SIM_H__

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_22040237_rv_single_cyc_cpu_top.h"
#include "svdpi.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Dpi.h"
#include "verilated_dpi.h"  //transfer regs

#include "npc_common.h"
#include "mem.h"
#include "npc_state.h"
#include "utils.h"


#define MAX_SIM_TIME 20000
extern vluint64_t sim_time;
extern vluint64_t pos_cnt;

void sim_init();
void npc_reset();
void npc_run(uint64_t n);
void exit_npc(int exit_flag);


//extern Vysyx_22040237_rv_single_cyc_cpu_top* dut;

#endif