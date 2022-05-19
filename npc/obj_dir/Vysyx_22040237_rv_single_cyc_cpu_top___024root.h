// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040237_rv_single_cyc_cpu_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040237_RV_SINGLE_CYC_CPU_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040237_RV_SINGLE_CYC_CPU_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040237_rv_single_cyc_cpu_top__Syms;
class Vysyx_22040237_rv_single_cyc_cpu_top_VerilatedVcd;
class Vysyx_22040237_rv_single_cyc_cpu_top___024unit;


//----------

VL_MODULE(Vysyx_22040237_rv_single_cyc_cpu_top___024root) {
  public:
    // CELLS
    Vysyx_22040237_rv_single_cyc_cpu_top___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst_in,31,0);
    VL_OUT(pc,31,0);
    VL_OUT64(rs2_data,63,0);

    // LOCAL SIGNALS
    CData/*7:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode;
    CData/*0:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en;
    CData/*4:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr;
    CData/*0:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en;
    CData/*4:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr;
    CData/*5:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type;
    CData/*0:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi;
    CData/*0:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc;
    CData/*0:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui;
    QData/*63:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1;
    QData/*63:0*/ ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040237_rv_single_cyc_cpu_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22040237_rv_single_cyc_cpu_top___024root(const char* name);
    ~Vysyx_22040237_rv_single_cyc_cpu_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040237_rv_single_cyc_cpu_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
