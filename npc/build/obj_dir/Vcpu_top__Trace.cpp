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
            tracep->chgBit(oldp+2,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+3,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgQData(oldp+4,(vlSelf->cpu_top__DOT__op1_to_exu),64);
            tracep->chgQData(oldp+6,(vlSelf->cpu_top__DOT__op2_to_exu),64);
            tracep->chgQData(oldp+8,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                       & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                      | ((- (QData)((IData)(
                                                            ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                         & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
            tracep->chgQData(oldp+10,(((- (QData)((IData)(
                                                          (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                       & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)),64);
            tracep->chgSData(oldp+12,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),15);
            tracep->chgQData(oldp+13,(((((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+15,(((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
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
            tracep->chgQData(oldp+16,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
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
            tracep->chgQData(oldp+18,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
            tracep->chgQData(oldp+20,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
            tracep->chgBit(oldp+22,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R));
            tracep->chgBit(oldp+23,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I));
            tracep->chgBit(oldp+24,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L));
            tracep->chgBit(oldp+25,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S));
            tracep->chgBit(oldp+26,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B));
            tracep->chgBit(oldp+27,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL));
            tracep->chgBit(oldp+28,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI));
            tracep->chgBit(oldp+29,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC));
            tracep->chgQData(oldp+30,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
            tracep->chgBit(oldp+32,((0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U))))));
            tracep->chgBit(oldp+33,((0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U))))));
            tracep->chgBit(oldp+34,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
            tracep->chgBit(oldp+35,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
            tracep->chgQData(oldp+36,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
            tracep->chgBit(oldp+38,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+39,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+40,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgBit(oldp+41,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
            tracep->chgBit(oldp+42,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+43,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))));
            tracep->chgBit(oldp+44,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgBit(oldp+45,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))));
            tracep->chgSData(oldp+46,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),15);
            tracep->chgBit(oldp+47,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgSData(oldp+48,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),15);
            tracep->chgBit(oldp+49,((IData)((0x4000U 
                                             == (0x4007U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+50,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+51,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+52,((((IData)((8U == 
                                               (0xfU 
                                                & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                     | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr))));
            tracep->chgBit(oldp+53,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
            tracep->chgBit(oldp+54,(((((IData)((8U 
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
            tracep->chgWData(oldp+55,(__Vtemp34),65);
            if (vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) {
                __Vtemp38[0U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U]);
                __Vtemp38[1U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U]);
                __Vtemp38[2U] = (1U & (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]));
            } else {
                __Vtemp38[0U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U];
                __Vtemp38[1U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U];
                __Vtemp38[2U] = (1U & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]);
            }
            tracep->chgWData(oldp+58,(__Vtemp38),65);
            __Vtemp41[0U] = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)
                              ? 1U : 0U);
            __Vtemp41[1U] = 0U;
            __Vtemp41[2U] = 0U;
            tracep->chgWData(oldp+61,(__Vtemp41),65);
            tracep->chgWData(oldp+64,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),65);
            tracep->chgWData(oldp+67,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2),65);
            tracep->chgBit(oldp+70,((IData)((0x20U 
                                             == (0x27U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+71,((vlSelf->cpu_top__DOT__op1_to_exu 
                                       << (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+73,((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                        & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])
                                        ? 1ULL : 0ULL)),64);
            tracep->chgBit(oldp+75,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu));
            tracep->chgBit(oldp+76,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                     & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
            tracep->chgQData(oldp+77,((vlSelf->cpu_top__DOT__op1_to_exu 
                                       ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+79,((IData)((0x100U 
                                             == (0x107U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+80,(vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res),64);
            tracep->chgBit(oldp+82,((IData)((0x200U 
                                             == (0x207U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+83,((vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                                       | (~ (1ULL >> 
                                             (0x3fU 
                                              & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))))),64);
            tracep->chgBit(oldp+85,((IData)((0x400U 
                                             == (0x407U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+86,((1ULL >> (0x3fU 
                                                & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+88,((vlSelf->cpu_top__DOT__op1_to_exu 
                                       | vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+90,((IData)((0x800U 
                                             == (0x807U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+91,((vlSelf->cpu_top__DOT__op1_to_exu 
                                       & vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+93,((IData)((0x1000U 
                                             == (0x1007U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+94,((IData)((0x2000U 
                                             == (0x2007U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+95,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
            tracep->chgBit(oldp+96,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
            tracep->chgBit(oldp+97,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq));
            tracep->chgBit(oldp+98,(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res));
            tracep->chgBit(oldp+99,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne));
            tracep->chgBit(oldp+100,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res)))));
            tracep->chgBit(oldp+101,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt));
            tracep->chgBit(oldp+102,(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res));
            tracep->chgBit(oldp+103,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge));
            tracep->chgBit(oldp+104,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res)))));
            tracep->chgBit(oldp+105,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu));
            tracep->chgBit(oldp+106,(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res));
            tracep->chgBit(oldp+107,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
            tracep->chgBit(oldp+108,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res)))));
            tracep->chgQData(oldp+109,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0]),64);
            tracep->chgQData(oldp+111,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[1]),64);
            tracep->chgQData(oldp+113,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[2]),64);
            tracep->chgQData(oldp+115,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[3]),64);
            tracep->chgQData(oldp+117,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[4]),64);
            tracep->chgQData(oldp+119,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[5]),64);
            tracep->chgQData(oldp+121,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[6]),64);
            tracep->chgQData(oldp+123,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[7]),64);
            tracep->chgQData(oldp+125,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[8]),64);
            tracep->chgQData(oldp+127,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[9]),64);
            tracep->chgQData(oldp+129,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[10]),64);
            tracep->chgQData(oldp+131,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[11]),64);
            tracep->chgQData(oldp+133,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[12]),64);
            tracep->chgQData(oldp+135,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[13]),64);
            tracep->chgQData(oldp+137,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[14]),64);
            tracep->chgQData(oldp+139,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[15]),64);
            tracep->chgQData(oldp+141,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[16]),64);
            tracep->chgQData(oldp+143,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[17]),64);
            tracep->chgQData(oldp+145,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[18]),64);
            tracep->chgQData(oldp+147,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[19]),64);
            tracep->chgQData(oldp+149,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[20]),64);
            tracep->chgQData(oldp+151,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[21]),64);
            tracep->chgQData(oldp+153,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[22]),64);
            tracep->chgQData(oldp+155,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[23]),64);
            tracep->chgQData(oldp+157,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[24]),64);
            tracep->chgQData(oldp+159,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[25]),64);
            tracep->chgQData(oldp+161,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[26]),64);
            tracep->chgQData(oldp+163,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[27]),64);
            tracep->chgQData(oldp+165,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[28]),64);
            tracep->chgQData(oldp+167,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[29]),64);
            tracep->chgQData(oldp+169,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[30]),64);
            tracep->chgQData(oldp+171,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+173,(vlSelf->clk));
        tracep->chgBit(oldp+174,(vlSelf->rst));
        tracep->chgIData(oldp+175,(vlSelf->inst_val),32);
        tracep->chgBit(oldp+176,(vlSelf->rdata_63_32));
        tracep->chgBit(oldp+177,(((0U != (0x1fU & (vlSelf->inst_val 
                                                   >> 7U))) 
                                  & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->chgCData(oldp+178,((0x1fU & (vlSelf->inst_val 
                                             >> 7U))),5);
        tracep->chgCData(oldp+179,((0x1fU & (vlSelf->inst_val 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+180,((0x1fU & (vlSelf->inst_val 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+181,((1U & (~ ((((((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                              | (IData)(
                                                        (0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst_val)))) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                           | (IData)(
                                                     (0x73U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst_val))))))));
        tracep->chgQData(oldp+182,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))
                                     ? vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                    [(0x1fU & (vlSelf->inst_val 
                                               >> 0x14U))]
                                     : 0ULL)),64);
        tracep->chgCData(oldp+184,((0x7fU & vlSelf->inst_val)),7);
        tracep->chgCData(oldp+185,((7U & (vlSelf->inst_val 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+186,((vlSelf->inst_val 
                                    >> 0x19U)),7);
        tracep->chgBit(oldp+187,((IData)((0x67U == 
                                          (0x7fU & vlSelf->inst_val)))));
        tracep->chgBit(oldp+188,((IData)((0x73U == 
                                          (0x7fU & vlSelf->inst_val)))));
        tracep->chgQData(oldp+189,((((- (QData)((IData)(
                                                        (vlSelf->inst_val 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst_val 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst_val 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+191,((((- (QData)((IData)(
                                                        (vlSelf->inst_val 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->inst_val 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->inst_val 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->inst_val 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->inst_val 
                                                                             >> 7U))))))))),64);
        tracep->chgQData(oldp+193,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->inst_val 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->inst_val))))),64);
        tracep->chgQData(oldp+195,((((- (QData)((IData)(
                                                        (vlSelf->inst_val 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->inst_val 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->inst_val) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->inst_val 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->inst_val 
                                                                              >> 0x14U))))))))),64);
        tracep->chgBit(oldp+197,((0U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+198,((1U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+199,((2U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+200,((3U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+201,((4U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+202,((5U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+203,((6U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+204,((7U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+205,((0U == (vlSelf->inst_val 
                                         >> 0x19U))));
        tracep->chgBit(oldp+206,((0x20U == (vlSelf->inst_val 
                                            >> 0x19U))));
        tracep->chgBit(oldp+207,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+208,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+209,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+210,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+211,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+212,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+213,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+214,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+215,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+216,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+217,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+218,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
        tracep->chgBit(oldp+219,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (2U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+220,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (3U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+221,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (4U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+222,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
        tracep->chgBit(oldp+223,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
        tracep->chgBit(oldp+224,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (6U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+225,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (7U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+226,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+227,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+228,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (4U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+229,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (5U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+230,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (6U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+231,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (7U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+232,((0U == (0x1fU & (vlSelf->inst_val 
                                                  >> 7U)))));
        tracep->chgBit(oldp+233,((((0U != (0x1fU & 
                                           (vlSelf->inst_val 
                                            >> 7U))) 
                                   & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->inst_val 
                                             >> 7U))))));
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
