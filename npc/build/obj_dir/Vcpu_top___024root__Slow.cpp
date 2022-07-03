// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top___024root.h"
#include "Vcpu_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vcpu_top___024root___ctor_var_reset(Vcpu_top___024root* vlSelf);

Vcpu_top___024root::Vcpu_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcpu_top___024root___ctor_var_reset(this);
}

void Vcpu_top___024root::__Vconfigure(Vcpu_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcpu_top___024root::~Vcpu_top___024root() {
}

void Vcpu_top___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vcpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a);

void Vcpu_top___024root___settle__TOP__1(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___settle__TOP__1\n"); );
    // Variables
    QData/*63:0*/ cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    // Body
    vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i = (((- (QData)((IData)(
                                                                    ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                   >> 0x14U))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L = (IData)(
                                                        (3U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI = (IData)(
                                                          (0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC = (IData)(
                                                            (0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R = (IData)(
                                                        (0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I = (IData)(
                                                        (0x13U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S = (IData)(
                                                        (0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__jalr = (IData)(
                                                      (0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL = (IData)(
                                                          (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B = (IData)(
                                                        (0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))));
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [1U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[1U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [2U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[2U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [3U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[3U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [4U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[4U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [5U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[5U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [6U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[6U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [7U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[7U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [8U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[8U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [9U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[9U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xaU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xaU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xbU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xbU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xcU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xcU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xdU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xdU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xeU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xeU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xfU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xfU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x10U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x10U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x11U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x11U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x12U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x12U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x13U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x13U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x14U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x14U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x15U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x15U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x16U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x16U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x17U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x17U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x18U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x18U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x19U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x19U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1aU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1aU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1bU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1bU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1cU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1cU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1dU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1dU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1eU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1eU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1fU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1fU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x20U] = vlSelf->cpu_top__DOT__pc_to_ifu;
    Vcpu_top___024unit____Vdpiimwrap_mem_read_TOP____024unit(vlSelf->cpu_top__DOT__pc_to_ifu, vlSelf->__Vtask_mem_read__0__rdata);
    vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata = vlSelf->__Vtask_mem_read__0__rdata;
    vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak = ((IData)(
                                                         (0x73U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->cpu_top__DOT__inst_to_idu)))) 
                                                 & (1ULL 
                                                    == vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x7ff0U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                  & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U))) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                   & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                   >> 0xcU))))) | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
              << 3U));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x7f8fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                  & (2U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U))) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                   & (2U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                   >> 0xcU))))) << 6U) 
              | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                     & (1U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                     >> 0xcU)))) & 
                    (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                            >> 0x19U))) | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                            & (1U == 
                                               (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                           & (0U == 
                                              (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))) 
                  << 5U) | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                              & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                              >> 0xcU)))) 
                             & (0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                          >> 0x19U))) 
                            << 4U))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x7c7fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                  & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U))) 
                | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                    & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                    >> 0xcU)))) & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                               >> 5U)))))) 
               << 9U) | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                             & (4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                             >> 0xcU)))) 
                            & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                      >> 0x19U))) | 
                           ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                            & (4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0xcU))))) 
                          << 8U) | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                       & (3U == (7U 
                                                 & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                    >> 0xcU)))) 
                                      & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0x19U))) 
                                     | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                        & (3U == (7U 
                                                  & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                     >> 0xcU))))) 
                                    << 7U))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x63ffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                  & (7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U))) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                   & (7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                   >> 0xcU))))) << 0xcU) 
              | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                     & (6U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                     >> 0xcU)))) & 
                    (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                            >> 0x19U))) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                           & (6U == 
                                              (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))) 
                  << 0xbU) | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                 & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                 >> 0xcU)))) 
                                & (0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                             >> 0x19U))) 
                               | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))) 
                              << 0xaU))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x7ff0U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                  & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U))) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                   & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                   >> 0xcU))))) | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
              << 3U));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x7f8fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                  & (2U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U))) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                   & (2U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                   >> 0xcU))))) << 6U) 
              | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                     & (1U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                     >> 0xcU)))) & 
                    (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                            >> 0x19U))) | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                            & (1U == 
                                               (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                           & (0U == 
                                              (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))) 
                  << 5U) | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                              & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                              >> 0xcU)))) 
                             & (0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                          >> 0x19U))) 
                            << 4U))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x7c7fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                  & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U))) 
                | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                    & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                    >> 0xcU)))) & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                               >> 5U)))))) 
               << 9U) | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                             & (4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                             >> 0xcU)))) 
                            & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                      >> 0x19U))) | 
                           ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                            & (4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0xcU))))) 
                          << 8U) | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                       & (3U == (7U 
                                                 & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                    >> 0xcU)))) 
                                      & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0x19U))) 
                                     | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                        & (3U == (7U 
                                                  & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                     >> 0xcU))))) 
                                    << 7U))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x63ffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                  & (7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U))) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                   & (7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                   >> 0xcU))))) << 0xcU) 
              | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                     & (6U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                     >> 0xcU)))) & 
                    (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                            >> 0x19U))) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                           & (6U == 
                                              (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))) 
                  << 0xbU) | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                 & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                 >> 0xcU)))) 
                                & (0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                             >> 0x19U))) 
                               | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))) 
                              << 0xaU))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__imm = ((((((- (QData)((IData)(
                                                                     (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))))) 
                                                  & vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i) 
                                                 | ((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S))) 
                                                    & (((- (QData)((IData)(
                                                                           ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                              >> 0x14U)) 
                                                                          | (0x1fU 
                                                                             & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                                >> 7U)))))))) 
                                                | ((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))) 
                                                   & (((- (QData)((IData)(
                                                                          ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                           >> 0x1fU)))) 
                                                       << 0xdU) 
                                                      | (QData)((IData)(
                                                                        ((0x1000U 
                                                                          & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                             >> 0x13U)) 
                                                                         | ((0x800U 
                                                                             & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                                >> 7U)))))))))) 
                                               | ((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))) 
                                                  & (((- (QData)((IData)(
                                                                         ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                          >> 0x1fU)))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       ((0x100000U 
                                                                         & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                            >> 0xbU)) 
                                                                        | ((0xff000U 
                                                                            & (IData)(vlSelf->cpu_top__DOT__inst_to_idu)) 
                                                                           | ((0x800U 
                                                                               & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                                >> 9U)) 
                                                                              | (0x7feU 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                                >> 0x14U)))))))))) 
                                              | ((- (QData)((IData)(
                                                                    ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))))) 
                                                 & (((QData)((IData)(
                                                                     (- (IData)(
                                                                                ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                                >> 0x1fU))))) 
                                                     << 0x2cU) 
                                                    | ((QData)((IData)(
                                                                       (0xfffff000U 
                                                                        & (IData)(vlSelf->cpu_top__DOT__inst_to_idu)))) 
                                                       << 0xcU))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus 
        = ((0x7c3fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus)) 
           | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                & (6U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                >> 0xcU)))) << 9U) 
              | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                   & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                   >> 0xcU)))) << 8U) 
                 | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                      & (4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                      >> 0xcU)))) << 7U) 
                    | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                        & (1U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                        >> 0xcU)))) 
                       << 6U)))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus 
        = ((0x3ffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus)) 
           | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
               & (7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                               >> 0xcU)))) << 0xaU));
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus 
        = ((0x7fc0U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus)) 
           | (1U | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                      & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                      >> 0xcU)))) << 5U) 
                    | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr) 
                        << 4U) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                  << 3U)))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus 
        = ((0x7fc0U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus)) 
           | (1U | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                      & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                      >> 0xcU)))) << 5U) 
                    | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr) 
                        << 4U) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                  << 3U)))));
    Vcpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->cpu_top__DOT__regs_u0__DOT__rf);
    vlSelf->rdata_63_32 = (0U != (IData)((vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                          >> 0x20U)));
    vlSelf->inst_val = (IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata);
    vlSelf->cpu_top__DOT__rs1_data_to_idu = (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))
                                              ? 0ULL
                                              : vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                             [(0x1fU 
                                               & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xfU))]);
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x1fffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak) 
               << 0xeU) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI) 
                           << 0xdU)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x1fffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak) 
               << 0xeU) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI) 
                           << 0xdU)));
    vlSelf->cpu_top__DOT__op2_to_exu = ((((- (QData)((IData)(
                                                             ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                          & ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))
                                              ? vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                             [(0x1fU 
                                               & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x14U))]
                                              : 0ULL)) 
                                         | ((- (QData)((IData)(
                                                               (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))))) 
                                            & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)) 
                                        | (4ULL & (- (QData)((IData)(
                                                                     ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)))))));
    vlSelf->cpu_top__DOT__op1_jp_to_exu = (((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                            & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                           | ((- (QData)((IData)(
                                                                 ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                              & vlSelf->cpu_top__DOT__pc_to_ifu));
    vlSelf->cpu_top__DOT__op1_to_exu = (((- (QData)((IData)(
                                                            (1U 
                                                             & (~ 
                                                                (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))))) 
                                         & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                        | ((- (QData)((IData)(
                                                              (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))))) 
                                           & vlSelf->cpu_top__DOT__pc_to_ifu));
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U] 
        = (IData)(vlSelf->cpu_top__DOT__op2_to_exu);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U] 
        = (IData)((vlSelf->cpu_top__DOT__op2_to_exu 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U] 
        = (1U & (IData)((vlSelf->cpu_top__DOT__op2_to_exu 
                         >> 0x3fU)));
    vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res = (vlSelf->cpu_top__DOT__op1_to_exu 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)));
}

void Vcpu_top___024root___settle__TOP__3(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    // Body
    vlSelf->cpu_top__DOT__exu_info_bus_to_exu = (((- (IData)(
                                                             (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
                                                 | ((- (IData)(
                                                               (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)))) 
                                                    & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus)));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal = (IData)(
                                                        (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr = (IData)(
                                                         (0x11U 
                                                          == 
                                                          (0x17U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu 
        = ((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))) 
           & (IData)((0U != (0xc0U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne = (IData)(
                                                        (0x41U 
                                                         == 
                                                         (0x47U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge = (IData)(
                                                        (0x101U 
                                                         == 
                                                         (0x107U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu = (IData)(
                                                         (0x401U 
                                                          == 
                                                          (0x407U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq = (IData)(
                                                        (0x21U 
                                                         == 
                                                         (0x27U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt = (IData)(
                                                        (0x81U 
                                                         == 
                                                         (0x87U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu = (IData)(
                                                         (0x201U 
                                                          == 
                                                          (0x207U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub = (((
                                                   (((((IData)(
                                                               (0x10U 
                                                                == 
                                                                (0x17U 
                                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                                       | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu)) 
                                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq)) 
                                                     | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne)) 
                                                    | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt)) 
                                                   | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
    __Vtemp16[0U] = (IData)(vlSelf->cpu_top__DOT__op1_to_exu);
    __Vtemp16[1U] = (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                             >> 0x20U));
    __Vtemp16[2U] = (1U & (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                   >> 0x3fU)));
    if (vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) {
        __Vtemp18[0U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U]);
        __Vtemp18[1U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U]);
        __Vtemp18[2U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]);
    } else {
        __Vtemp18[0U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U];
        __Vtemp18[1U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U];
        __Vtemp18[2U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U];
    }
    VL_ADD_W(3, __Vtemp19, __Vtemp16, __Vtemp18);
    __Vtemp22[0U] = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)
                      ? 1U : 0U);
    __Vtemp22[1U] = 0U;
    __Vtemp22[2U] = 0U;
    VL_ADD_W(3, __Vtemp23, __Vtemp19, __Vtemp22);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
        = __Vtemp23[0U];
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U] 
        = __Vtemp23[1U];
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U] 
        = (1U & __Vtemp23[2U]);
    vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq) 
                                                  & (0U 
                                                     == 
                                                     ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                                       | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                                      | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
    vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt) 
                                                  & (~ 
                                                     vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]));
    vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu) 
                                                   & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]);
}

void Vcpu_top___024root___eval_initial(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcpu_top___024root___eval_settle(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_settle\n"); );
    // Body
    Vcpu_top___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vcpu_top___024root___settle__TOP__3(vlSelf);
}

void Vcpu_top___024root___final(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___final\n"); );
}

void Vcpu_top___024root___ctor_var_reset(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_val = VL_RAND_RESET_I(32);
    vlSelf->rdata_63_32 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__pc_to_ifu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__op1_to_exu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__op2_to_exu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__op1_jp_to_exu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__exu_info_bus_to_exu = VL_RAND_RESET_I(15);
    vlSelf->cpu_top__DOT__rs1_data_to_idu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__inst_to_idu = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__idu_u0__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus = VL_RAND_RESET_I(15);
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus = VL_RAND_RESET_I(15);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res);
    VL_RAND_RESET_W(65, vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        vlSelf->cpu_top__DOT__regs_u0__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_mem_read__0__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
