// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_file.h for the primary calling header

#include "Vreg_file___024root.h"
#include "Vreg_file__Syms.h"

//==========

VL_INLINE_OPT void Vreg_file___024root___combo__TOP__1(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__u_idu__DOT__opcode = (0x7fU & (IData)(vlSelf->inst));
}

VL_INLINE_OPT void Vreg_file___024root___sequent__TOP__3(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->result = 0ULL;
    }
    vlSelf->pc = ((IData)(vlSelf->rstn) ? ((IData)(4U) 
                                           + vlSelf->pc)
                   : 0x80000000U);
    if (__Vdlyvset__top__DOT__u_reg_file__DOT__regs__v0) {
        vlSelf->top__DOT__u_reg_file__DOT__regs[0U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[1U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[2U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[3U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[4U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[5U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[6U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[7U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[8U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[9U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0xaU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0xbU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0xcU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0xdU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0xeU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0xfU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x10U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x11U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x12U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x13U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x14U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x15U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x16U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x17U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x18U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x19U] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x1aU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x1bU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x1cU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x1dU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x1eU] = 0ULL;
        vlSelf->top__DOT__u_reg_file__DOT__regs[0x1fU] = 0ULL;
    }
}

void Vreg_file___024root___eval(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval\n"); );
    // Body
    Vreg_file___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vreg_file___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vreg_file___024root___change_request_1(Vreg_file___024root* vlSelf);

VL_INLINE_OPT QData Vreg_file___024root___change_request(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___change_request\n"); );
    // Body
    return (Vreg_file___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vreg_file___024root___change_request_1(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vreg_file___024root___eval_debug_assertions(Vreg_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->inst & 0ULL))) {
        Verilated::overWidthError("inst");}
}
#endif  // VL_DEBUG
