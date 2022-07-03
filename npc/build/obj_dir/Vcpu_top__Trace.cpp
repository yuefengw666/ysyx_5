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
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp47;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->cpu_top__DOT__pc_to_ifu),64);
            tracep->chgQData(oldp+2,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[0]),64);
            tracep->chgQData(oldp+4,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[1]),64);
            tracep->chgQData(oldp+6,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[2]),64);
            tracep->chgQData(oldp+8,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[3]),64);
            tracep->chgQData(oldp+10,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[4]),64);
            tracep->chgQData(oldp+12,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[5]),64);
            tracep->chgQData(oldp+14,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[6]),64);
            tracep->chgQData(oldp+16,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[7]),64);
            tracep->chgQData(oldp+18,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[8]),64);
            tracep->chgQData(oldp+20,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[9]),64);
            tracep->chgQData(oldp+22,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[10]),64);
            tracep->chgQData(oldp+24,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[11]),64);
            tracep->chgQData(oldp+26,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[12]),64);
            tracep->chgQData(oldp+28,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[13]),64);
            tracep->chgQData(oldp+30,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[14]),64);
            tracep->chgQData(oldp+32,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[15]),64);
            tracep->chgQData(oldp+34,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[16]),64);
            tracep->chgQData(oldp+36,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[17]),64);
            tracep->chgQData(oldp+38,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[18]),64);
            tracep->chgQData(oldp+40,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[19]),64);
            tracep->chgQData(oldp+42,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[20]),64);
            tracep->chgQData(oldp+44,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[21]),64);
            tracep->chgQData(oldp+46,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[22]),64);
            tracep->chgQData(oldp+48,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[23]),64);
            tracep->chgQData(oldp+50,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[24]),64);
            tracep->chgQData(oldp+52,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[25]),64);
            tracep->chgQData(oldp+54,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[26]),64);
            tracep->chgQData(oldp+56,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[27]),64);
            tracep->chgQData(oldp+58,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[28]),64);
            tracep->chgQData(oldp+60,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[29]),64);
            tracep->chgQData(oldp+62,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[30]),64);
            tracep->chgQData(oldp+64,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+66,((IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)),32);
            tracep->chgBit(oldp+67,(((0U != (0x1fU 
                                             & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 7U)))) 
                                     & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+68,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+69,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgCData(oldp+70,((0x1fU & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 7U)))),5);
            tracep->chgCData(oldp+71,((0x1fU & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 0xfU)))),5);
            tracep->chgCData(oldp+72,((0x1fU & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 0x14U)))),5);
            tracep->chgQData(oldp+73,(vlSelf->cpu_top__DOT__op1_to_exu),64);
            tracep->chgQData(oldp+75,(vlSelf->cpu_top__DOT__op2_to_exu),64);
            tracep->chgQData(oldp+77,(((- (QData)((IData)(
                                                          (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                       & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)),64);
            tracep->chgSData(oldp+79,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),15);
            tracep->chgBit(oldp+80,((1U & (~ ((((((
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
            tracep->chgQData(oldp+81,(((((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+83,((1U & ((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
                                                 | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                                | (0U 
                                                   == 
                                                   ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                                     | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                                    | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))) 
                                               | (0U 
                                                  != 
                                                  ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                                    | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                                   | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))) 
                                              | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]) 
                                             | (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])) 
                                            | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]) 
                                           | (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])))));
            tracep->chgQData(oldp+84,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
            tracep->chgQData(oldp+86,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
            tracep->chgCData(oldp+88,((0x7fU & (IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))),7);
            tracep->chgCData(oldp+89,((7U & (IData)(
                                                    (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                     >> 0xcU)))),3);
            tracep->chgCData(oldp+90,((0x7fU & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 0x19U)))),7);
            tracep->chgBit(oldp+91,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R));
            tracep->chgBit(oldp+92,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I));
            tracep->chgBit(oldp+93,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L));
            tracep->chgBit(oldp+94,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S));
            tracep->chgBit(oldp+95,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B));
            tracep->chgBit(oldp+96,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL));
            tracep->chgBit(oldp+97,((IData)((0x67ULL 
                                             == (0x7fULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)))));
            tracep->chgBit(oldp+98,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI));
            tracep->chgBit(oldp+99,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC));
            tracep->chgBit(oldp+100,((IData)((0x73ULL 
                                              == (0x7fULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)))));
            tracep->chgQData(oldp+101,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
            tracep->chgQData(oldp+103,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+105,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+107,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(
                                                                   (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                    >> 0xcU)) 
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+109,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                        >> 0x1fU)))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
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
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                         << 0x2cU) 
                                        | ((QData)((IData)(
                                                           ((IData)(
                                                                    (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                     >> 0xcU)) 
                                                            << 0xcU))) 
                                           << 0xcU))),64);
            tracep->chgBit(oldp+113,((0U == (0x7fU 
                                             & (IData)(
                                                       (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                        >> 5U))))));
            tracep->chgBit(oldp+114,((0x20U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                           >> 5U))))));
            tracep->chgBit(oldp+115,((0U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))));
            tracep->chgBit(oldp+116,((1U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))));
            tracep->chgBit(oldp+117,((2U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))));
            tracep->chgBit(oldp+118,((3U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))));
            tracep->chgBit(oldp+119,((4U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))));
            tracep->chgBit(oldp+120,((5U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))));
            tracep->chgBit(oldp+121,((6U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))));
            tracep->chgBit(oldp+122,((7U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))));
            tracep->chgBit(oldp+123,((0U == (0x7fU 
                                             & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+124,((0x20U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0x19U))))));
            tracep->chgBit(oldp+125,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+126,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x40000000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+127,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x1000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+128,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x2000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+129,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x3000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+130,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x4000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+131,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x5000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+132,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x40005000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+133,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x6000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+134,((IData)(((1U == 
                                               (1U 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                              & (0x7000ULL 
                                                 == 
                                                 (0xfe007000ULL 
                                                  & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
            tracep->chgBit(oldp+135,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (0U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+136,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                       & (1U == (7U 
                                                 & (IData)(
                                                           (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                            >> 0xcU))))) 
                                      & (0U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+137,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (2U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+138,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (3U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+139,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (4U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+140,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                       & (5U == (7U 
                                                 & (IData)(
                                                           (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                            >> 0xcU))))) 
                                      & (0U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+141,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                       & (5U == (7U 
                                                 & (IData)(
                                                           (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                            >> 0xcU))))) 
                                      & (0x20U == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                              >> 5U)))))));
            tracep->chgBit(oldp+142,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (6U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+143,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (7U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+144,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      & (0U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+145,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      & (1U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+146,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      & (4U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+147,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      & (5U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+148,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      & (6U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+149,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      & (7U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+150,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
            tracep->chgBit(oldp+151,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
            tracep->chgQData(oldp+152,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
            tracep->chgBit(oldp+154,((0U == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 7U))))));
            tracep->chgBit(oldp+155,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+156,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+157,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgBit(oldp+158,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
            tracep->chgBit(oldp+159,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+160,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))));
            tracep->chgBit(oldp+161,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgBit(oldp+162,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
            tracep->chgSData(oldp+163,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),15);
            tracep->chgBit(oldp+164,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgSData(oldp+165,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),15);
            tracep->chgBit(oldp+166,((1U & ((IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+167,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+168,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+169,((((IData)((8U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                       | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr))));
            tracep->chgBit(oldp+170,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
            tracep->chgBit(oldp+171,(((((IData)((8U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                        | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                       | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub))));
            __Vtemp40[0U] = (IData)(vlSelf->cpu_top__DOT__op1_to_exu);
            __Vtemp40[1U] = (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                     >> 0x20U));
            __Vtemp40[2U] = (1U & (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                           >> 0x3fU)));
            tracep->chgWData(oldp+172,(__Vtemp40),65);
            if (vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) {
                __Vtemp44[0U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U]);
                __Vtemp44[1U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U]);
                __Vtemp44[2U] = (1U & (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]));
            } else {
                __Vtemp44[0U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U];
                __Vtemp44[1U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U];
                __Vtemp44[2U] = (1U & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]);
            }
            tracep->chgWData(oldp+175,(__Vtemp44),65);
            __Vtemp47[0U] = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)
                              ? 1U : 0U);
            __Vtemp47[1U] = 0U;
            __Vtemp47[2U] = 0U;
            tracep->chgWData(oldp+178,(__Vtemp47),65);
            tracep->chgWData(oldp+181,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),65);
            tracep->chgWData(oldp+184,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2),65);
            tracep->chgBit(oldp+187,((IData)((0x20U 
                                              == (0x27U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+188,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        << (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+190,((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                         & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])
                                         ? 1ULL : 0ULL)),64);
            tracep->chgBit(oldp+192,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu));
            tracep->chgBit(oldp+193,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                      & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
            tracep->chgQData(oldp+194,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+196,((IData)((0x100U 
                                              == (0x107U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+197,(vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res),64);
            tracep->chgBit(oldp+199,((IData)((0x200U 
                                              == (0x207U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+200,((vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                                        | (~ (1ULL 
                                              >> (0x3fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))))),64);
            tracep->chgBit(oldp+202,((IData)((0x400U 
                                              == (0x407U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+203,((1ULL >> (0x3fU 
                                                 & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+205,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        | vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+207,((IData)((0x800U 
                                              == (0x807U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+208,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        & vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+210,((IData)((0x1000U 
                                              == (0x1007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+211,((IData)((0x2000U 
                                              == (0x2007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+212,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
            tracep->chgBit(oldp+213,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
            tracep->chgBit(oldp+214,((IData)((0x21U 
                                              == (0x27U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+215,((0U == ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                              | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                             | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))));
            tracep->chgBit(oldp+216,((IData)((0x41U 
                                              == (0x47U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+217,((0U != ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                              | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                             | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))));
            tracep->chgBit(oldp+218,((IData)((0x81U 
                                              == (0x87U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+219,((1U & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
            tracep->chgBit(oldp+220,((IData)((0x101U 
                                              == (0x107U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+221,((1U & (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))));
            tracep->chgBit(oldp+222,((IData)((0x201U 
                                              == (0x207U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+223,((IData)((0x401U 
                                              == (0x407U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+224,((((0U != (0x1fU 
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
        tracep->chgBit(oldp+225,(vlSelf->clk));
        tracep->chgBit(oldp+226,(vlSelf->rst));
        tracep->chgBit(oldp+227,(vlSelf->rdata_63_32));
        tracep->chgQData(oldp+228,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                     & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                    | ((- (QData)((IData)(
                                                          ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                       & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
        tracep->chgQData(oldp+230,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
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
        tracep->chgQData(oldp+232,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))
                                     ? vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs
                                    [(0x1fU & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0x14U)))]
                                     : 0ULL)),64);
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
