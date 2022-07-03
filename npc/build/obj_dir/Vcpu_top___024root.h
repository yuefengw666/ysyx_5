// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_top.h for the primary calling header

#ifndef VERILATED_VCPU_TOP___024ROOT_H_
#define VERILATED_VCPU_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcpu_top__Syms;
class Vcpu_top_VerilatedVcd;
class Vcpu_top___024unit;


//----------

VL_MODULE(Vcpu_top___024root) {
  public:
    // CELLS
    Vcpu_top___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(rdata_63_32,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64_R;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64_I;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64_L;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64_S;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64_B;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64_JAL;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64_LUI;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64_AUIPC;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__jalr;
    CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__ebreak;
    CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_sub;
    CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_slt_sltu;
    CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_jal;
    CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_jalr;
    VlWide<3>/*64:0*/ cpu_top__DOT__exu_u0__DOT__adder_res;
    VlWide<3>/*64:0*/ cpu_top__DOT__exu_u0__DOT__adder_op2;
    QData/*63:0*/ cpu_top__DOT__pc_to_ifu;
    QData/*63:0*/ cpu_top__DOT__op1_to_exu;
    QData/*63:0*/ cpu_top__DOT__op2_to_exu;
    QData/*63:0*/ cpu_top__DOT__op1_jp_to_exu;
    QData/*63:0*/ cpu_top__DOT__rs1_data_to_idu;
    QData/*63:0*/ cpu_top__DOT__ifu_u0__DOT__rdata;
    QData/*63:0*/ cpu_top__DOT__idu_u0__DOT__imm_i;
    QData/*63:0*/ cpu_top__DOT__idu_u0__DOT__imm;
    QData/*63:0*/ cpu_top__DOT__exu_u0__DOT__srl_res;
    VlUnpacked<CData/*0:0*/, 15> cpu_top__DOT__idu_u0__DOT__alu_info_bus;
    VlUnpacked<QData/*63:0*/, 32> cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs;
    VlUnpacked<QData/*63:0*/, 33> cpu_top__DOT__ysyx_22040237_regs_u0__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_mem_read__0__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu_top___024root);  ///< Copying not allowed
  public:
    Vcpu_top___024root(const char* name);
    ~Vcpu_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcpu_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
