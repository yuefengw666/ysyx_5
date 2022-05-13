// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040237_rv_single_cyc_cpu_top.h for the primary calling header

#include "Vysyx_22040237_rv_single_cyc_cpu_top___024root.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__2(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode 
        = (0xf3U & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode 
        = (0x3fU & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->inst_in)));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode 
        = ((0xfcU & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode)) 
           | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi)));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode 
        = ((0xcfU & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode)) 
           | (((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi)) 
              << 4U));
}

VL_INLINE_OPT void Vysyx_22040237_rv_single_cyc_cpu_top___024root___sequent__TOP__3(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32;
    // Body
    __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32 = 0U;
    vlSelf->pc_o = ((IData)(vlSelf->rst) ? 0x80000000U
                     : ((IData)(4U) + vlSelf->pc_o));
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v0 = 1U;
    } else if ((((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type) 
                                             >> 1U)) 
                & (0U != (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr)))) {
        __Vdlyvval__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32 
            = vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_data;
        __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32 = 1U;
        __Vdlyvdim0__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32 
            = vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr;
    }
    if (__Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v0) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[1U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[2U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[3U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[4U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[5U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[6U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[7U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[8U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[9U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0xaU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0xbU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0xcU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0xdU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0xeU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0xfU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x10U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x11U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x12U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x13U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x14U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x15U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x16U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x17U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x18U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x19U] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x1aU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x1bU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x1cU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x1dU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x1eU] = 0ULL;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[__Vdlyvdim0__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32] 
            = __Vdlyvval__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32;
    }
}

VL_INLINE_OPT void Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__4(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type 
        = ((0x3dU & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type)) 
           | (((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi)) 
              << 1U));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr = 0U;
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_data = 0ULL;
    } else {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr 
            = ((2U & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))
                ? (0x1fU & (vlSelf->inst_in >> 7U))
                : 0U);
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_data 
            = ((0x11U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode))
                ? (((IData)(vlSelf->rst) ? 0ULL : (
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))
                                                    ? 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->rst)) 
                                                        & ((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type) 
                                                           >> 1U)))
                                                     ? 
                                                    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs
                                                    [
                                                    ((IData)(vlSelf->rst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->inst_in 
                                                          >> 0xfU))
                                                       : 0U))]
                                                     : 0ULL)
                                                    : 0ULL)) 
                   + ((IData)(vlSelf->rst) ? 0ULL : 
                      ((0U != (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))
                        ? (((- (QData)((IData)((vlSelf->inst_in 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->inst_in 
                                                        >> 0x14U))))
                        : 0ULL))) : 0ULL);
    }
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval\n"); );
    // Body
    Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040237_rv_single_cyc_cpu_top___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22040237_rv_single_cyc_cpu_top___024root___change_request_1(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040237_rv_single_cyc_cpu_top___024root___change_request(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040237_rv_single_cyc_cpu_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040237_rv_single_cyc_cpu_top___024root___change_request_1(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval_debug_assertions(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
