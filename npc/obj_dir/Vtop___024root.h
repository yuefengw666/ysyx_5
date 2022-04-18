// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    VL_OUT64(result,63,0);

    // LOCAL SIGNALS
    CData/*4:0*/ top__DOT__rs1;
    CData/*4:0*/ top__DOT__rd;
    CData/*0:0*/ top__DOT__reg_wr;
    CData/*0:0*/ top__DOT__add;
    CData/*0:0*/ top__DOT__ebreak;
    CData/*6:0*/ top__DOT__u_idu__DOT__opcode;
    CData/*0:0*/ top__DOT__u_idu__DOT__addi;
    QData/*63:0*/ top__DOT__imm_I;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__u_reg_file__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
