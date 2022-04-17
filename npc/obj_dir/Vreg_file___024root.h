// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreg_file.h for the primary calling header

#ifndef VERILATED_VREG_FILE___024ROOT_H_
#define VERILATED_VREG_FILE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vreg_file__Syms;
class Vreg_file_VerilatedVcd;


//----------

VL_MODULE(Vreg_file___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT(pc,31,0);
    VL_IN64(inst,32,0);
    VL_OUT64(result,63,0);

    // LOCAL SIGNALS
    CData/*6:0*/ top__DOT__u_idu__DOT__opcode;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__u_reg_file__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vreg_file__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vreg_file___024root);  ///< Copying not allowed
  public:
    Vreg_file___024root(const char* name);
    ~Vreg_file___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vreg_file__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
