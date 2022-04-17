// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_file.h for the primary calling header

#include "Vreg_file___024root.h"
#include "Vreg_file__Syms.h"

//==========


void Vreg_file___024root___ctor_var_reset(Vreg_file___024root* vlSelf);

Vreg_file___024root::Vreg_file___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vreg_file___024root___ctor_var_reset(this);
}

void Vreg_file___024root::__Vconfigure(Vreg_file__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vreg_file___024root::~Vreg_file___024root() {
}

void Vreg_file___024root___eval_initial(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vreg_file___024root___combo__TOP__1(Vreg_file___024root* vlSelf);

void Vreg_file___024root___eval_settle(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_settle\n"); );
    // Body
    Vreg_file___024root___combo__TOP__1(vlSelf);
}

void Vreg_file___024root___final(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___final\n"); );
}

void Vreg_file___024root___ctor_var_reset(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_Q(33);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_idu__DOT__opcode = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_reg_file__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
