// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v1 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rstn) ? ((IData)(4U) 
                                           + vlSelf->pc)
                   : 0x80000000U);
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 7U))))) {
            __Vdlyvval__top__DOT__u_reg_file__DOT__regs__v0 
                = vlSelf->result;
            __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v0 = 1U;
            __Vdlyvdim0__top__DOT__u_reg_file__DOT__regs__v0 
                = (0x1fU & (vlSelf->inst >> 7U));
        }
    } else {
        __Vdlyvset__top__DOT__u_reg_file__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__top__DOT__u_reg_file__DOT__regs__v0) {
        vlSelf->top__DOT__u_reg_file__DOT__regs[__Vdlyvdim0__top__DOT__u_reg_file__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__u_reg_file__DOT__regs__v0;
    }
    if (__Vdlyvset__top__DOT__u_reg_file__DOT__regs__v1) {
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
    vlSelf->top__DOT__reg_wr = ((IData)(vlSelf->rstn) 
                                & (IData)(vlSelf->top__DOT__addi));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__u_idu__DOT__opcode = (0x7fU & vlSelf->inst);
    vlSelf->top__DOT__addi = (0x13U == ((0x380U & (vlSelf->inst 
                                                   >> 5U)) 
                                        | (IData)(vlSelf->top__DOT__u_idu__DOT__opcode)));
    vlSelf->result = ((IData)(vlSelf->top__DOT__addi)
                       ? (vlSelf->top__DOT__u_reg_file__DOT__regs
                          [(0x1fU & (vlSelf->inst >> 0xfU))] 
                          + (((- (QData)((IData)((vlSelf->inst 
                                                  >> 0x1fU)))) 
                              << 0xcU) | (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U)))))
                       : 0ULL);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
