// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/yfwu/ysyx-workbench/npc/vsrc/single_cyc/ysyx_22040237_exu.v:2:30
    extern void invalid_inst_o();
    // DPI import at /home/yfwu/ysyx-workbench/npc/vsrc/single_cyc/ysyx_22040237_ifu.v:1:30
    extern void mem_read(long long raddr, long long* rdata);
    // DPI import at /home/yfwu/ysyx-workbench/npc/vsrc/single_cyc/ysyx_22040237_wbu.v:1:30
    extern void mem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/yfwu/ysyx-workbench/npc/vsrc/single_cyc/ysyx_22040237_regs.v:1:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/yfwu/ysyx-workbench/npc/vsrc/single_cyc/ysyx_22040237_exu.v:1:30
    extern void sim_ebreak();

#ifdef __cplusplus
}
#endif
