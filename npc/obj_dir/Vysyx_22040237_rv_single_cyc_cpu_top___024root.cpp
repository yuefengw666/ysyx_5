// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040237_rv_single_cyc_cpu_top.h for the primary calling header

#include "Vysyx_22040237_rv_single_cyc_cpu_top___024root.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22040237_rv_single_cyc_cpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void Vysyx_22040237_rv_single_cyc_cpu_top___024root___sequent__TOP__2(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32;
    // Body
    if ((IData)((0x73U == (0x707fU & vlSelf->inst_in)))) {
        Vysyx_22040237_rv_single_cyc_cpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : ((IData)(4U) + vlSelf->pc));
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en) 
                & (0U != (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr)))) {
        __Vdlyvval__ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs__v32 
            = ((IData)(vlSelf->rst) ? 0ULL : ((0x11U 
                                               == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode))
                                               ? (vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1 
                                                  + vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2)
                                               : 0ULL));
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

VL_INLINE_OPT void Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__3(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->inst_in)));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc 
        = (IData)((0x17U == (0x7fU & vlSelf->inst_in)));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode 
        = (0xf3U & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode 
        = (0x3fU & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type 
        = (((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc) 
            << 4U) | (2U & (((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi) 
                             | (IData)((0x73U == (0x707fU 
                                                  & vlSelf->inst_in)))) 
                            << 1U)));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode 
        = ((0xfcU & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode)) 
           | ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi) 
                                          | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc))));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode 
        = ((0xcfU & (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode)) 
           | (((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi) 
                                           | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc))) 
              << 4U));
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en = 0U;
    if ((2U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en = 1U;
    }
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr = 0U;
    if ((2U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr 
            = (0x1fU & (vlSelf->inst_in >> 0xfU));
    }
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en = 0U;
    if ((2U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en = 1U;
    } else if ((0x10U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en = 1U;
    }
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2 = 0ULL;
    if ((2U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2 
            = (((- (QData)((IData)((vlSelf->inst_in 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->inst_in >> 0x14U))));
    } else if ((0x10U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2 
            = (QData)((IData)((0xfffff000U & vlSelf->inst_in)));
    }
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr = 0U;
    if ((2U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr 
            = (0x1fU & (vlSelf->inst_in >> 7U));
    } else if ((0x10U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr 
            = (0x1fU & (vlSelf->inst_in >> 7U));
    }
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1 = 0ULL;
    if ((2U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1 
            = ((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en)
                ? vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs
               [vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr]
                : 0ULL);
    } else if ((0x10U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type))) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1 
            = ((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc)
                ? (QData)((IData)(vlSelf->pc)) : 0ULL);
    }
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040237_rv_single_cyc_cpu_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22040237_rv_single_cyc_cpu_top___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
