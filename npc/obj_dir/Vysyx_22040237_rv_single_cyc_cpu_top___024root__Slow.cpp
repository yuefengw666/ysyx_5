// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040237_rv_single_cyc_cpu_top.h for the primary calling header

#include "Vysyx_22040237_rv_single_cyc_cpu_top___024root.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040237_rv_single_cyc_cpu_top___024root___ctor_var_reset(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf);

Vysyx_22040237_rv_single_cyc_cpu_top___024root::Vysyx_22040237_rv_single_cyc_cpu_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040237_rv_single_cyc_cpu_top___024root___ctor_var_reset(this);
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root::__Vconfigure(Vysyx_22040237_rv_single_cyc_cpu_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040237_rv_single_cyc_cpu_top___024root::~Vysyx_22040237_rv_single_cyc_cpu_top___024root() {
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root___settle__TOP__1(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->rs2_data = 0ULL;
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

void Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval_initial(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval_settle(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040237_rv_single_cyc_cpu_top___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root___final(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___final\n"); );
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root___ctor_var_reset(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040237_rv_single_cyc_cpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_in = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
