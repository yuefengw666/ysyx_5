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
    VL_OUT(inst_val,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*6:0*/ cpu_top__DOT__ls_info_bus_to_isu;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__opcode_1_0_11;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__opcode_4_2_000;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__opcode_4_2_100;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__opcode_4_2_101;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__opcode_4_2_110;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__opcode_6_5_00;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__opcode_6_5_01;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__opcode_6_5_11;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64I_RM;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64I_I;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64I_L;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64I_S;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64I_B;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64I_LUI;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64I_JAL;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64IW_RM;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__rv64IW_I;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__lbu;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__lhu;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__lwu;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__jalr;
        CData/*0:0*/ cpu_top__DOT__idu_u0__DOT__ebreak;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__wop;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_add;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_sub;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_sub_need;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__adder_cout;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_sll;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_srl;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_slt;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__slt_cmp_res;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_sltu;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_sra;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_jal;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_jalr;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_beq;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_bne;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_blt;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_bge;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_bltu;
        CData/*0:0*/ cpu_top__DOT__exu_u0__DOT__op_bgeu;
        SData/*15:0*/ cpu_top__DOT__exu_info_bus_to_exu;
        SData/*15:0*/ cpu_top__DOT__idu_u0__DOT__alu_info_bus;
        SData/*15:0*/ cpu_top__DOT__idu_u0__DOT__bjp_info_bus;
        SData/*15:0*/ cpu_top__DOT__idu_u0__DOT__ls_info_bus;
        QData/*63:0*/ cpu_top__DOT__pc_to_ifu;
        QData/*63:0*/ cpu_top__DOT__op1_to_exu;
        QData/*63:0*/ cpu_top__DOT__op2_to_exu;
        QData/*63:0*/ cpu_top__DOT__op1_jp_to_exu;
        QData/*63:0*/ cpu_top__DOT__op2_jp_s_to_exu;
        QData/*63:0*/ cpu_top__DOT__alu_res_to_lsu;
        QData/*63:0*/ cpu_top__DOT__rs1_data_to_idu;
        QData/*63:0*/ cpu_top__DOT__rs2_data_to_idu;
        QData/*63:0*/ cpu_top__DOT__ifu_u0__DOT__rdata;
        QData/*63:0*/ cpu_top__DOT__idu_u0__DOT__imm_i;
        QData/*63:0*/ cpu_top__DOT__idu_u0__DOT__imm;
        QData/*63:0*/ cpu_top__DOT__exu_u0__DOT__adder_in2;
        QData/*63:0*/ cpu_top__DOT__exu_u0__DOT__adder_res;
        QData/*63:0*/ cpu_top__DOT__exu_u0__DOT__sll_res;
        QData/*63:0*/ cpu_top__DOT__exu_u0__DOT__srl_res;
        QData/*63:0*/ cpu_top__DOT__exu_u0__DOT__sra_res;
        QData/*63:0*/ cpu_top__DOT__lsu_u0__DOT__mem_rdata;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 32> cpu_top__DOT__regs_u0__DOT__regs;
        VlUnpacked<QData/*63:0*/, 33> cpu_top__DOT__regs_u0__DOT__rf;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_mem_read__0__rdata;
    QData/*63:0*/ __Vtask_mem_read__3__rdata;
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
