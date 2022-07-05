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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->cpu_top__DOT__pc_to_ifu),64);
            tracep->chgBit(oldp+2,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+3,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM))));
            tracep->chgQData(oldp+4,(vlSelf->cpu_top__DOT__op1_to_exu),64);
            tracep->chgQData(oldp+6,(vlSelf->cpu_top__DOT__op2_to_exu),64);
            tracep->chgQData(oldp+8,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                       & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                      | ((- (QData)((IData)(
                                                            ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))))) 
                                         & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
            tracep->chgQData(oldp+10,(vlSelf->cpu_top__DOT__op2_jp_s_to_exu),64);
            tracep->chgSData(oldp+12,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),16);
            tracep->chgBit(oldp+13,(((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
                                           | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                          | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))) 
                                         | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                            & (0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))) 
                                        | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt) 
                                           & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))) 
                                       | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                          & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))) 
                                      | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu) 
                                         & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))) 
                                     | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                        & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
            tracep->chgQData(oldp+14,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                         & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                        | ((- (QData)((IData)(
                                                              ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))))) 
                                           & vlSelf->cpu_top__DOT__pc_to_ifu)) 
                                       + vlSelf->cpu_top__DOT__op2_jp_s_to_exu)),64);
            tracep->chgCData(oldp+16,(vlSelf->cpu_top__DOT__ls_info_bus_to_isu),7);
            tracep->chgQData(oldp+17,(((IData)((0x12U 
                                                == 
                                                (0x17U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))
                                        ? vlSelf->cpu_top__DOT__op2_jp_s_to_exu
                                        : 0ULL)),64);
            tracep->chgBit(oldp+19,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                           >> 1U))));
            tracep->chgCData(oldp+20,((0xffU & ((((1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                    >> 3U))))) 
                                                  | (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                      >> 4U)))))) 
                                                 | (0xfU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                     >> 5U)))))) 
                                                | (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                 >> 6U))))))),8);
            tracep->chgQData(oldp+21,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
            tracep->chgQData(oldp+23,(vlSelf->cpu_top__DOT__rs2_data_to_idu),64);
            tracep->chgQData(oldp+25,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
            tracep->chgBit(oldp+27,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
            tracep->chgBit(oldp+28,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_000));
            tracep->chgBit(oldp+29,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100));
            tracep->chgBit(oldp+30,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_101));
            tracep->chgBit(oldp+31,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_110));
            tracep->chgBit(oldp+32,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00));
            tracep->chgBit(oldp+33,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01));
            tracep->chgBit(oldp+34,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11));
            tracep->chgBit(oldp+35,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM));
            tracep->chgBit(oldp+36,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I));
            tracep->chgBit(oldp+37,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L));
            tracep->chgBit(oldp+38,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S));
            tracep->chgBit(oldp+39,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B));
            tracep->chgBit(oldp+40,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI));
            tracep->chgBit(oldp+41,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC));
            tracep->chgBit(oldp+42,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL));
            tracep->chgBit(oldp+43,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                      & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100)) 
                                     & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))));
            tracep->chgBit(oldp+44,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM));
            tracep->chgBit(oldp+45,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I));
            tracep->chgQData(oldp+46,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
            tracep->chgBit(oldp+48,((0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U))))));
            tracep->chgBit(oldp+49,((0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U))))));
            tracep->chgBit(oldp+50,(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu));
            tracep->chgBit(oldp+51,(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu));
            tracep->chgBit(oldp+52,(vlSelf->cpu_top__DOT__idu_u0__DOT__lwu));
            tracep->chgBit(oldp+53,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
            tracep->chgBit(oldp+54,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
            tracep->chgQData(oldp+55,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
            tracep->chgBit(oldp+57,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+58,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+59,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM))));
            tracep->chgBit(oldp+60,(((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
            tracep->chgBit(oldp+61,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+62,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))));
            tracep->chgBit(oldp+63,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B))));
            tracep->chgBit(oldp+64,((((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I)) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
            tracep->chgBit(oldp+65,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
            tracep->chgSData(oldp+66,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),16);
            tracep->chgBit(oldp+67,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgSData(oldp+68,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),16);
            tracep->chgBit(oldp+69,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S))));
            tracep->chgBit(oldp+70,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lwu))));
            tracep->chgSData(oldp+71,(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus),16);
            tracep->chgBit(oldp+72,((IData)((0x4000U 
                                             == (0x4007U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+73,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+74,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+75,((2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+76,(vlSelf->cpu_top__DOT__exu_u0__DOT__wop));
            tracep->chgBit(oldp+77,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_add));
            tracep->chgBit(oldp+78,(((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_add) 
                                       | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                     | (2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+79,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
            tracep->chgBit(oldp+80,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need));
            tracep->chgBit(oldp+81,(((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_add) 
                                         | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                        | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                       | (2U == (7U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)) 
                                     & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__wop)))));
            tracep->chgQData(oldp+82,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_in2),64);
            tracep->chgQData(oldp+84,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need)
                                        ? 1ULL : 0ULL)),64);
            tracep->chgBit(oldp+86,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout));
            tracep->chgQData(oldp+87,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),64);
            tracep->chgBit(oldp+89,((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_add) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)) 
                                     & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__wop))));
            tracep->chgQData(oldp+90,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res)))),64);
            tracep->chgQData(oldp+92,(vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res),64);
            tracep->chgBit(oldp+94,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sll));
            tracep->chgQData(oldp+95,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res)))),64);
            tracep->chgBit(oldp+97,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sll) 
                                     & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__wop))));
            tracep->chgQData(oldp+98,(vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res),64);
            tracep->chgBit(oldp+100,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_srl));
            tracep->chgBit(oldp+101,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_srl) 
                                      & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__wop))));
            tracep->chgQData(oldp+102,((QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))),64);
            tracep->chgBit(oldp+104,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt));
            tracep->chgBit(oldp+105,(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res));
            tracep->chgQData(oldp+106,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))))),64);
            tracep->chgBit(oldp+108,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sltu));
            tracep->chgBit(oldp+109,((1U & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
            tracep->chgQData(oldp+110,(vlSelf->cpu_top__DOT__exu_u0__DOT__sra_res),64);
            tracep->chgBit(oldp+112,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sra));
            tracep->chgQData(oldp+113,((1ULL >> (0x3fU 
                                                 & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+115,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->cpu_top__DOT__exu_u0__DOT__sra_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__sra_res)))),64);
            tracep->chgBit(oldp+117,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sra) 
                                      & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__wop))));
            tracep->chgQData(oldp+118,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+120,((IData)((0x100U 
                                              == (0x107U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+121,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        | vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+123,((IData)((0x800U 
                                              == (0x807U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+124,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        & vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+126,((IData)((0x1000U 
                                              == (0x1007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+127,((IData)((0x2000U 
                                              == (0x2007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+128,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
            tracep->chgBit(oldp+129,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
            tracep->chgBit(oldp+130,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))));
            tracep->chgBit(oldp+131,((0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res)));
            tracep->chgBit(oldp+132,((1U & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))));
            tracep->chgBit(oldp+133,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq));
            tracep->chgBit(oldp+134,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))));
            tracep->chgBit(oldp+135,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne));
            tracep->chgBit(oldp+136,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                      & (0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))));
            tracep->chgBit(oldp+137,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt));
            tracep->chgBit(oldp+138,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt) 
                                      & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))));
            tracep->chgBit(oldp+139,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge));
            tracep->chgBit(oldp+140,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))));
            tracep->chgBit(oldp+141,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu));
            tracep->chgBit(oldp+142,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
            tracep->chgBit(oldp+143,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
            tracep->chgBit(oldp+144,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                      & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout))));
            tracep->chgBit(oldp+145,((IData)((0xaU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+146,((IData)((0x12U 
                                              == (0x17U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+147,((IData)((0x22U 
                                              == (0x27U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+148,((IData)((0x42U 
                                              == (0x47U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+149,((IData)((0x82U 
                                              == (0x87U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+150,((IData)((0x102U 
                                              == (0x107U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+151,((IData)((0x202U 
                                              == (0x207U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+152,((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))));
            tracep->chgBit(oldp+153,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 2U))));
            tracep->chgBit(oldp+154,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 3U))));
            tracep->chgBit(oldp+155,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 4U))));
            tracep->chgBit(oldp+156,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 5U))));
            tracep->chgBit(oldp+157,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 6U))));
            tracep->chgBit(oldp+158,((IData)((9U == 
                                              (0xdU 
                                               & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+159,((IData)((0x11U 
                                              == (0x15U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+160,((IData)((0x21U 
                                              == (0x25U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+161,((IData)((0x41U 
                                              == (0x45U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+162,((IData)((0xdU 
                                              == (0xdU 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+163,((IData)((0x15U 
                                              == (0x15U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+164,((IData)((0x25U 
                                              == (0x25U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgQData(oldp+165,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0]),64);
            tracep->chgQData(oldp+167,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[1]),64);
            tracep->chgQData(oldp+169,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[2]),64);
            tracep->chgQData(oldp+171,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[3]),64);
            tracep->chgQData(oldp+173,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[4]),64);
            tracep->chgQData(oldp+175,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[5]),64);
            tracep->chgQData(oldp+177,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[6]),64);
            tracep->chgQData(oldp+179,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[7]),64);
            tracep->chgQData(oldp+181,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[8]),64);
            tracep->chgQData(oldp+183,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[9]),64);
            tracep->chgQData(oldp+185,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[10]),64);
            tracep->chgQData(oldp+187,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[11]),64);
            tracep->chgQData(oldp+189,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[12]),64);
            tracep->chgQData(oldp+191,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[13]),64);
            tracep->chgQData(oldp+193,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[14]),64);
            tracep->chgQData(oldp+195,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[15]),64);
            tracep->chgQData(oldp+197,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[16]),64);
            tracep->chgQData(oldp+199,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[17]),64);
            tracep->chgQData(oldp+201,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[18]),64);
            tracep->chgQData(oldp+203,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[19]),64);
            tracep->chgQData(oldp+205,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[20]),64);
            tracep->chgQData(oldp+207,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[21]),64);
            tracep->chgQData(oldp+209,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[22]),64);
            tracep->chgQData(oldp+211,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[23]),64);
            tracep->chgQData(oldp+213,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[24]),64);
            tracep->chgQData(oldp+215,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[25]),64);
            tracep->chgQData(oldp+217,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[26]),64);
            tracep->chgQData(oldp+219,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[27]),64);
            tracep->chgQData(oldp+221,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[28]),64);
            tracep->chgQData(oldp+223,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[29]),64);
            tracep->chgQData(oldp+225,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[30]),64);
            tracep->chgQData(oldp+227,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+229,(vlSelf->cpu_top__DOT__alu_res_to_lsu),64);
            tracep->chgQData(oldp+231,(vlSelf->cpu_top__DOT__exu_u0__DOT__wop_srl_res),64);
            tracep->chgQData(oldp+233,(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata),64);
        }
        tracep->chgBit(oldp+235,(vlSelf->clk));
        tracep->chgBit(oldp+236,(vlSelf->rst));
        tracep->chgIData(oldp+237,(vlSelf->inst_val),32);
        tracep->chgBit(oldp+238,(vlSelf->rdata_63_32));
        tracep->chgBit(oldp+239,(((0U != (0x1fU & (vlSelf->inst_val 
                                                   >> 7U))) 
                                  & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->chgCData(oldp+240,((0x1fU & (vlSelf->inst_val 
                                             >> 7U))),5);
        tracep->chgCData(oldp+241,((0x1fU & (vlSelf->inst_val 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+242,((0x1fU & (vlSelf->inst_val 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+243,((1U & (~ (((((((((
                                                   (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I)) 
                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L)) 
                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                                | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                                    & (IData)(
                                                              (4U 
                                                               == 
                                                               (0x1cU 
                                                                & vlSelf->inst_val)))) 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                             | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                                 & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100)) 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))))));
        tracep->chgQData(oldp+244,(((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                     ? ((((((((- (QData)((IData)(
                                                                 (9U 
                                                                  == 
                                                                  (0xdU 
                                                                   & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                              & (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                                >> 7U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                             | ((- (QData)((IData)(
                                                                   (0x11U 
                                                                    == 
                                                                    (0x15U 
                                                                     & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                                & (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))))) 
                                            | ((- (QData)((IData)(
                                                                  (0x21U 
                                                                   == 
                                                                   (0x25U 
                                                                    & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                               & (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))) 
                                           | ((- (QData)((IData)(
                                                                 (0x41U 
                                                                  == 
                                                                  (0x45U 
                                                                   & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                              & (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))) 
                                          | ((- (QData)((IData)(
                                                                (0xdU 
                                                                 == 
                                                                 (0xdU 
                                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                             & (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                         | ((- (QData)((IData)(
                                                               (0x15U 
                                                                == 
                                                                (0x15U 
                                                                 & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                            & (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                        | ((- (QData)((IData)(
                                                              (0x25U 
                                                               == 
                                                               (0x25U 
                                                                & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                           & (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))
                                     : vlSelf->cpu_top__DOT__alu_res_to_lsu)),64);
        tracep->chgQData(oldp+246,(((2U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                     ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                     : 0ULL)),64);
        tracep->chgCData(oldp+248,((0x7fU & vlSelf->inst_val)),7);
        tracep->chgCData(oldp+249,((7U & (vlSelf->inst_val 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+250,((vlSelf->inst_val 
                                    >> 0x19U)),7);
        tracep->chgBit(oldp+251,((IData)((4U == (0x1cU 
                                                 & vlSelf->inst_val)))));
        tracep->chgBit(oldp+252,((IData)((0xcU == (0x1cU 
                                                   & vlSelf->inst_val)))));
        tracep->chgBit(oldp+253,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                   & (IData)((4U == 
                                              (0x1cU 
                                               & vlSelf->inst_val)))) 
                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))));
        tracep->chgQData(oldp+254,((((- (QData)((IData)(
                                                        (vlSelf->inst_val 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst_val 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst_val 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+256,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+258,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->inst_val 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->inst_val))))),64);
        tracep->chgQData(oldp+260,((((- (QData)((IData)(
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
        tracep->chgBit(oldp+262,((0U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+263,((1U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+264,((2U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+265,((3U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+266,((4U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+267,((5U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+268,((6U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+269,((7U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+270,((0U == (vlSelf->inst_val 
                                         >> 0x19U))));
        tracep->chgBit(oldp+271,((0x20U == (vlSelf->inst_val 
                                            >> 0x19U))));
        tracep->chgBit(oldp+272,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+273,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+274,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+275,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+276,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+277,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+278,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+279,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+280,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+281,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+282,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+283,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+284,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+285,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+286,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+287,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+288,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+289,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (2U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+290,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (3U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+291,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (4U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+292,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (5U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+293,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
        tracep->chgBit(oldp+294,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (6U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+295,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (7U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+296,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+297,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
        tracep->chgBit(oldp+298,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                                  & (5U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+299,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
        tracep->chgBit(oldp+300,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+301,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+302,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  & (2U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+303,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  & (3U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+304,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+305,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+306,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (4U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+307,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (5U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+308,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (6U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+309,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (7U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+310,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+311,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+312,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                  & (2U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+313,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                  & (3U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+314,((0U == (0x1fU & (vlSelf->inst_val 
                                                  >> 7U)))));
        tracep->chgQData(oldp+315,(((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                     ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                     : 0ULL)),64);
        tracep->chgQData(oldp+317,(((((((((- (QData)((IData)(
                                                             (9U 
                                                              == 
                                                              (0xdU 
                                                               & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                         | ((- (QData)((IData)(
                                                               (0x11U 
                                                                == 
                                                                (0x15U 
                                                                 & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                               >> 0xfU)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))))) 
                                        | ((- (QData)((IData)(
                                                              (0x21U 
                                                               == 
                                                               (0x25U 
                                                                & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                           & (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))) 
                                       | ((- (QData)((IData)(
                                                             (0x41U 
                                                              == 
                                                              (0x45U 
                                                               & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                          & (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))) 
                                      | ((- (QData)((IData)(
                                                            (0xdU 
                                                             == 
                                                             (0xdU 
                                                              & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                         & (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                     | ((- (QData)((IData)(
                                                           (0x15U 
                                                            == 
                                                            (0x15U 
                                                             & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                        & (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                    | ((- (QData)((IData)(
                                                          (0x25U 
                                                           == 
                                                           (0x25U 
                                                            & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                       & (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))),64);
        tracep->chgBit(oldp+319,((((0U != (0x1fU & 
                                           (vlSelf->inst_val 
                                            >> 7U))) 
                                   & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
