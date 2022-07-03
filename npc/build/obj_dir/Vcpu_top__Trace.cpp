// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top__Syms.h"


void Vcpu_top___024root__traceChgSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep);

void Vcpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu_top___024root* const __restrict vlSelf = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vcpu_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu_top___024root__traceChgSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp41;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->cpu_top__DOT__pc_to_ifu),64);
            tracep->chgIData(oldp+2,((IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)),32);
            tracep->chgBit(oldp+3,(((0U != (0x1fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 7U)))) 
                                    & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+4,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+5,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgCData(oldp+6,((0x1fU & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 7U)))),5);
            tracep->chgCData(oldp+7,((0x1fU & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xfU)))),5);
            tracep->chgCData(oldp+8,((0x1fU & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0x14U)))),5);
            tracep->chgQData(oldp+9,(vlSelf->cpu_top__DOT__op1_to_exu),64);
            tracep->chgQData(oldp+11,(vlSelf->cpu_top__DOT__op2_to_exu),64);
            tracep->chgQData(oldp+13,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                        & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                       | ((- (QData)((IData)(
                                                             ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                          & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
            tracep->chgQData(oldp+15,(((- (QData)((IData)(
                                                          (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                       & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)),64);
            tracep->chgSData(oldp+17,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),15);
            tracep->chgBit(oldp+18,((1U & (~ ((((((
                                                   ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                                 | (IData)(
                                                           (0x67ULL 
                                                            == 
                                                            (0x7fULL 
                                                             & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)))) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                              | (IData)(
                                                        (0x73ULL 
                                                         == 
                                                         (0x7fULL 
                                                          & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))))));
            tracep->chgQData(oldp+19,(((((((((((- (QData)((IData)(
                                                                  ((((IData)(
                                                                             (8U 
                                                                              == 
                                                                              (0xfU 
                                                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                                                     | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                                                    | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub))))) 
                                               & (((QData)((IData)(
                                                                   vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U])))) 
                                              | ((- (QData)((IData)(
                                                                    (0x20U 
                                                                     == 
                                                                     (0x27U 
                                                                      & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                 & (vlSelf->cpu_top__DOT__op1_to_exu 
                                                    << 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->cpu_top__DOT__op2_to_exu))))) 
                                             | ((- (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu))) 
                                                & (((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                                    & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])
                                                    ? 1ULL
                                                    : 0ULL))) 
                                            | ((- (QData)((IData)(
                                                                  (0x100U 
                                                                   == 
                                                                   (0x107U 
                                                                    & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                               & (vlSelf->cpu_top__DOT__op1_to_exu 
                                                  ^ vlSelf->cpu_top__DOT__op2_to_exu))) 
                                           | ((- (QData)((IData)(
                                                                 (0x200U 
                                                                  == 
                                                                  (0x207U 
                                                                   & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                              & vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res)) 
                                          | ((- (QData)((IData)(
                                                                (0x400U 
                                                                 == 
                                                                 (0x407U 
                                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                             & (vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                                                | (~ 
                                                   (1ULL 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->cpu_top__DOT__op2_to_exu))))))) 
                                         | ((- (QData)((IData)(
                                                               (0x800U 
                                                                == 
                                                                (0x807U 
                                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                            & (vlSelf->cpu_top__DOT__op1_to_exu 
                                               | vlSelf->cpu_top__DOT__op2_to_exu))) 
                                        | ((- (QData)((IData)(
                                                              (0x1000U 
                                                               == 
                                                               (0x1007U 
                                                                & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                           & (vlSelf->cpu_top__DOT__op1_to_exu 
                                              & vlSelf->cpu_top__DOT__op2_to_exu))) 
                                       | ((- (QData)((IData)(
                                                             (0x2000U 
                                                              == 
                                                              (0x2007U 
                                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                          & vlSelf->cpu_top__DOT__op2_to_exu))),64);
            tracep->chgBit(oldp+21,(((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
                                           | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                          | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res)) 
                                         | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                            & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res)))) 
                                        | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res)) 
                                       | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                          & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res)))) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res)) 
                                     | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                        & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res))))));
            tracep->chgQData(oldp+22,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                         & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                        | ((- (QData)((IData)(
                                                              ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                           & vlSelf->cpu_top__DOT__pc_to_ifu)) 
                                       + ((- (QData)((IData)(
                                                             (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                          & vlSelf->cpu_top__DOT__idu_u0__DOT__imm))),64);
            tracep->chgQData(oldp+24,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
            tracep->chgQData(oldp+26,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))
                                        ? vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs
                                       [(0x1fU & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0x14U)))]
                                        : 0ULL)),64);
            tracep->chgQData(oldp+28,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
            tracep->chgCData(oldp+30,((0x7fU & (IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))),7);
            tracep->chgCData(oldp+31,((7U & (IData)(
                                                    (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                     >> 0xcU)))),3);
            tracep->chgCData(oldp+32,((0x7fU & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 0x19U)))),7);
            tracep->chgBit(oldp+33,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R));
            tracep->chgBit(oldp+34,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I));
            tracep->chgBit(oldp+35,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L));
            tracep->chgBit(oldp+36,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S));
            tracep->chgBit(oldp+37,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B));
            tracep->chgBit(oldp+38,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL));
            tracep->chgBit(oldp+39,((IData)((0x67ULL 
                                             == (0x7fULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)))));
            tracep->chgBit(oldp+40,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI));
            tracep->chgBit(oldp+41,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC));
            tracep->chgBit(oldp+42,((IData)((0x73ULL 
                                             == (0x7fULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)))));
            tracep->chgQData(oldp+43,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
            tracep->chgQData(oldp+45,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                       >> 0x1fU)))))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x19U)) 
                                                                        << 5U)) 
                                                                    | (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 7U)))))))),64);
            tracep->chgQData(oldp+47,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                       >> 0x1fU)))))) 
                                        << 0xdU) | (QData)((IData)(
                                                                   ((0x1000U 
                                                                     & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x1fU)) 
                                                                        << 0xcU)) 
                                                                    | ((0x800U 
                                                                        & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 7U)) 
                                                                           << 0xbU)) 
                                                                       | ((0x7e0U 
                                                                           & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x19U)) 
                                                                              << 5U)) 
                                                                          | (0x1eU 
                                                                             & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 8U)) 
                                                                                << 1U))))))))),64);
            tracep->chgQData(oldp+49,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(
                                                                             (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                              >> 0xcU)) 
                                                                     << 0xcU))))),64);
            tracep->chgQData(oldp+51,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                       >> 0x1fU)))))) 
                                        << 0x15U) | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x1fU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xff000U 
                                                                         & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0xcU)) 
                                                                            << 0xcU)) 
                                                                        | ((0x800U 
                                                                            & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x14U)) 
                                                                               << 0xbU)) 
                                                                           | (0x7feU 
                                                                              & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x15U)) 
                                                                                << 1U))))))))),64);
            tracep->chgQData(oldp+53,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                               >> 0x1fU))))))) 
                                        << 0x2cU) | 
                                       ((QData)((IData)(
                                                        ((IData)(
                                                                 (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                  >> 0xcU)) 
                                                         << 0xcU))) 
                                        << 0xcU))),64);
            tracep->chgBit(oldp+55,((0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U))))));
            tracep->chgBit(oldp+56,((0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U))))));
            tracep->chgBit(oldp+57,((0U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+58,((1U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+59,((2U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+60,((3U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+61,((4U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+62,((5U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+63,((6U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+64,((7U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+65,((0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0x19U))))));
            tracep->chgBit(oldp+66,((0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0x19U))))));
            tracep->chgBit(oldp+67,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+68,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x40000000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+69,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x1000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+70,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x2000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+71,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x3000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+72,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x4000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+73,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x5000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+74,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x40005000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+75,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x6000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+76,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                             & (0x7000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+77,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (0U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+78,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (1U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))) 
                                     & (0U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
            tracep->chgBit(oldp+79,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (2U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+80,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (3U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+81,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (4U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+82,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (5U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))) 
                                     & (0U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
            tracep->chgBit(oldp+83,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (5U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))) 
                                     & (0x20U == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
            tracep->chgBit(oldp+84,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (6U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+85,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (7U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+86,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (0U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+87,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (1U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+88,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (4U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+89,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (5U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+90,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (6U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+91,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (7U == (7U & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0xcU)))))));
            tracep->chgBit(oldp+92,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
            tracep->chgBit(oldp+93,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
            tracep->chgQData(oldp+94,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
            tracep->chgBit(oldp+96,((0U == (0x1fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 7U))))));
            tracep->chgBit(oldp+97,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+98,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+99,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgBit(oldp+100,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
            tracep->chgBit(oldp+101,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+102,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))));
            tracep->chgBit(oldp+103,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgBit(oldp+104,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))));
            tracep->chgSData(oldp+105,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),15);
            tracep->chgBit(oldp+106,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgSData(oldp+107,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),15);
            tracep->chgBit(oldp+108,((IData)((0x4000U 
                                              == (0x4007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+109,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+110,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+111,((((IData)((8U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                       | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr))));
            tracep->chgBit(oldp+112,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
            tracep->chgBit(oldp+113,(((((IData)((8U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                        | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                       | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub))));
            __Vtemp34[0U] = (IData)(vlSelf->cpu_top__DOT__op1_to_exu);
            __Vtemp34[1U] = (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                     >> 0x20U));
            __Vtemp34[2U] = (1U & (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                           >> 0x3fU)));
            tracep->chgWData(oldp+114,(__Vtemp34),65);
            if (vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) {
                __Vtemp38[0U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U]);
                __Vtemp38[1U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U]);
                __Vtemp38[2U] = (1U & (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]));
            } else {
                __Vtemp38[0U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U];
                __Vtemp38[1U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U];
                __Vtemp38[2U] = (1U & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]);
            }
            tracep->chgWData(oldp+117,(__Vtemp38),65);
            __Vtemp41[0U] = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)
                              ? 1U : 0U);
            __Vtemp41[1U] = 0U;
            __Vtemp41[2U] = 0U;
            tracep->chgWData(oldp+120,(__Vtemp41),65);
            tracep->chgWData(oldp+123,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),65);
            tracep->chgWData(oldp+126,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2),65);
            tracep->chgBit(oldp+129,((IData)((0x20U 
                                              == (0x27U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+130,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        << (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+132,((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                         & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])
                                         ? 1ULL : 0ULL)),64);
            tracep->chgBit(oldp+134,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu));
            tracep->chgBit(oldp+135,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                      & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
            tracep->chgQData(oldp+136,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+138,((IData)((0x100U 
                                              == (0x107U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+139,(vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res),64);
            tracep->chgBit(oldp+141,((IData)((0x200U 
                                              == (0x207U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+142,((vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                                        | (~ (1ULL 
                                              >> (0x3fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))))),64);
            tracep->chgBit(oldp+144,((IData)((0x400U 
                                              == (0x407U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+145,((1ULL >> (0x3fU 
                                                 & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+147,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        | vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+149,((IData)((0x800U 
                                              == (0x807U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+150,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        & vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+152,((IData)((0x1000U 
                                              == (0x1007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+153,((IData)((0x2000U 
                                              == (0x2007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+154,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
            tracep->chgBit(oldp+155,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
            tracep->chgBit(oldp+156,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq));
            tracep->chgBit(oldp+157,(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res));
            tracep->chgBit(oldp+158,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne));
            tracep->chgBit(oldp+159,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res)))));
            tracep->chgBit(oldp+160,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt));
            tracep->chgBit(oldp+161,(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res));
            tracep->chgBit(oldp+162,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge));
            tracep->chgBit(oldp+163,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res)))));
            tracep->chgBit(oldp+164,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu));
            tracep->chgBit(oldp+165,(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res));
            tracep->chgBit(oldp+166,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
            tracep->chgBit(oldp+167,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res)))));
            tracep->chgQData(oldp+168,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[0]),64);
            tracep->chgQData(oldp+170,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[1]),64);
            tracep->chgQData(oldp+172,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[2]),64);
            tracep->chgQData(oldp+174,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[3]),64);
            tracep->chgQData(oldp+176,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[4]),64);
            tracep->chgQData(oldp+178,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[5]),64);
            tracep->chgQData(oldp+180,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[6]),64);
            tracep->chgQData(oldp+182,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[7]),64);
            tracep->chgQData(oldp+184,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[8]),64);
            tracep->chgQData(oldp+186,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[9]),64);
            tracep->chgQData(oldp+188,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[10]),64);
            tracep->chgQData(oldp+190,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[11]),64);
            tracep->chgQData(oldp+192,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[12]),64);
            tracep->chgQData(oldp+194,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[13]),64);
            tracep->chgQData(oldp+196,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[14]),64);
            tracep->chgQData(oldp+198,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[15]),64);
            tracep->chgQData(oldp+200,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[16]),64);
            tracep->chgQData(oldp+202,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[17]),64);
            tracep->chgQData(oldp+204,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[18]),64);
            tracep->chgQData(oldp+206,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[19]),64);
            tracep->chgQData(oldp+208,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[20]),64);
            tracep->chgQData(oldp+210,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[21]),64);
            tracep->chgQData(oldp+212,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[22]),64);
            tracep->chgQData(oldp+214,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[23]),64);
            tracep->chgQData(oldp+216,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[24]),64);
            tracep->chgQData(oldp+218,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[25]),64);
            tracep->chgQData(oldp+220,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[26]),64);
            tracep->chgQData(oldp+222,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[27]),64);
            tracep->chgQData(oldp+224,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[28]),64);
            tracep->chgQData(oldp+226,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[29]),64);
            tracep->chgQData(oldp+228,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[30]),64);
            tracep->chgQData(oldp+230,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[31]),64);
            tracep->chgBit(oldp+232,((((0U != (0x1fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 7U)))) 
                                       & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                                      & (0U != (0x1fU 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 7U)))))));
        }
        tracep->chgBit(oldp+233,(vlSelf->clk));
        tracep->chgBit(oldp+234,(vlSelf->rst));
        tracep->chgBit(oldp+235,(vlSelf->rdata_63_32));
    }
}

void Vcpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vcpu_top___024root* const __restrict vlSelf = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
