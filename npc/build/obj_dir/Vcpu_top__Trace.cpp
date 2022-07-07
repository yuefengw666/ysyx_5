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
    VlWide<4>/*127:0*/ __Vtemp40;
    VlWide<4>/*127:0*/ __Vtemp41;
    VlWide<4>/*127:0*/ __Vtemp42;
    VlWide<4>/*127:0*/ __Vtemp43;
    VlWide<4>/*127:0*/ __Vtemp44;
    VlWide<4>/*127:0*/ __Vtemp45;
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
            tracep->chgQData(oldp+13,(vlSelf->cpu_top__DOT__alu_res_to_lsu),64);
            tracep->chgBit(oldp+15,(((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
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
            tracep->chgQData(oldp+16,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                         & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                        | ((- (QData)((IData)(
                                                              ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))))) 
                                           & vlSelf->cpu_top__DOT__pc_to_ifu)) 
                                       + vlSelf->cpu_top__DOT__op2_jp_s_to_exu)),64);
            tracep->chgCData(oldp+18,(vlSelf->cpu_top__DOT__ls_info_bus_to_isu),7);
            tracep->chgQData(oldp+19,(((IData)((0x12U 
                                                == 
                                                (0x17U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))
                                        ? vlSelf->cpu_top__DOT__op2_jp_s_to_exu
                                        : 0ULL)),64);
            tracep->chgQData(oldp+21,(((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
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
                                                 & vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)) 
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
            tracep->chgBit(oldp+23,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                           >> 1U))));
            tracep->chgCData(oldp+24,((0xffU & ((((1U 
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
            tracep->chgQData(oldp+25,(((2U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                        ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                        : 0ULL)),64);
            tracep->chgQData(oldp+27,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
            tracep->chgQData(oldp+29,(vlSelf->cpu_top__DOT__rs2_data_to_idu),64);
            tracep->chgQData(oldp+31,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
            tracep->chgBit(oldp+33,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
            tracep->chgBit(oldp+34,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_000));
            tracep->chgBit(oldp+35,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100));
            tracep->chgBit(oldp+36,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_101));
            tracep->chgBit(oldp+37,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_110));
            tracep->chgBit(oldp+38,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00));
            tracep->chgBit(oldp+39,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01));
            tracep->chgBit(oldp+40,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11));
            tracep->chgBit(oldp+41,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM));
            tracep->chgBit(oldp+42,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I));
            tracep->chgBit(oldp+43,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L));
            tracep->chgBit(oldp+44,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S));
            tracep->chgBit(oldp+45,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B));
            tracep->chgBit(oldp+46,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI));
            tracep->chgBit(oldp+47,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC));
            tracep->chgBit(oldp+48,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL));
            tracep->chgBit(oldp+49,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                      & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100)) 
                                     & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))));
            tracep->chgBit(oldp+50,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM));
            tracep->chgBit(oldp+51,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I));
            tracep->chgQData(oldp+52,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
            tracep->chgBit(oldp+54,(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu));
            tracep->chgBit(oldp+55,(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu));
            tracep->chgBit(oldp+56,(vlSelf->cpu_top__DOT__idu_u0__DOT__lwu));
            tracep->chgBit(oldp+57,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
            tracep->chgBit(oldp+58,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
            tracep->chgQData(oldp+59,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
            tracep->chgBit(oldp+61,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+62,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+63,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM))));
            tracep->chgBit(oldp+64,(((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
            tracep->chgBit(oldp+65,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+66,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))));
            tracep->chgBit(oldp+67,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B))));
            tracep->chgBit(oldp+68,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
            tracep->chgSData(oldp+69,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),16);
            tracep->chgBit(oldp+70,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgSData(oldp+71,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),16);
            tracep->chgBit(oldp+72,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S))));
            tracep->chgBit(oldp+73,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lwu))));
            tracep->chgSData(oldp+74,(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus),16);
            tracep->chgSData(oldp+75,(vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus),16);
            tracep->chgBit(oldp+76,((IData)((0x4000U 
                                             == (0x4007U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+77,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+78,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+79,((2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+80,((3U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+81,(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop));
            tracep->chgBit(oldp+82,((IData)((8U == 
                                             (0xfU 
                                              & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+83,(((((IData)((8U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                       | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                     | (2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+84,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
            tracep->chgBit(oldp+85,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need));
            tracep->chgBit(oldp+86,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_add_sub));
            tracep->chgQData(oldp+87,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_in2),64);
            tracep->chgQData(oldp+89,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need)
                                        ? 1ULL : 0ULL)),64);
            tracep->chgBit(oldp+91,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout));
            tracep->chgQData(oldp+92,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),64);
            tracep->chgQData(oldp+94,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res)))),64);
            tracep->chgQData(oldp+96,(vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res),64);
            tracep->chgBit(oldp+98,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sll));
            tracep->chgQData(oldp+99,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res)))),64);
            tracep->chgQData(oldp+101,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        >> (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgBit(oldp+103,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_srl));
            tracep->chgIData(oldp+104,(vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res),32);
            tracep->chgQData(oldp+105,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res)))),64);
            tracep->chgQData(oldp+107,(VL_SHIFTRS_QQI(64,64,6, vlSelf->cpu_top__DOT__op1_to_exu, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgBit(oldp+109,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sra));
            tracep->chgQData(oldp+110,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res)))),64);
            tracep->chgIData(oldp+112,(vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res),32);
            tracep->chgQData(oldp+113,((QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))),64);
            tracep->chgBit(oldp+115,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt));
            tracep->chgBit(oldp+116,(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res));
            tracep->chgQData(oldp+117,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))))),64);
            tracep->chgBit(oldp+119,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sltu));
            tracep->chgBit(oldp+120,((1U & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
            tracep->chgQData(oldp+121,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+123,((IData)((0x100U 
                                              == (0x107U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+124,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        | vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+126,((IData)((0x800U 
                                              == (0x807U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+127,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        & vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+129,((IData)((0x1000U 
                                              == (0x1007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+130,((IData)((0x2000U 
                                              == (0x2007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+131,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
            tracep->chgBit(oldp+132,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
            tracep->chgBit(oldp+133,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))));
            tracep->chgBit(oldp+134,((0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res)));
            tracep->chgBit(oldp+135,((1U & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))));
            tracep->chgBit(oldp+136,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq));
            tracep->chgBit(oldp+137,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))));
            tracep->chgBit(oldp+138,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne));
            tracep->chgBit(oldp+139,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                      & (0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))));
            tracep->chgBit(oldp+140,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt));
            tracep->chgBit(oldp+141,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt) 
                                      & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))));
            tracep->chgBit(oldp+142,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge));
            tracep->chgBit(oldp+143,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))));
            tracep->chgBit(oldp+144,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu));
            tracep->chgBit(oldp+145,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
            tracep->chgBit(oldp+146,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
            tracep->chgBit(oldp+147,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                      & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout))));
            tracep->chgBit(oldp+148,((IData)((0xaU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+149,((IData)((0x12U 
                                              == (0x17U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+150,((IData)((0x22U 
                                              == (0x27U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+151,((IData)((0x42U 
                                              == (0x47U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+152,((IData)((0x82U 
                                              == (0x87U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+153,((IData)((0x102U 
                                              == (0x107U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+154,((IData)((0x202U 
                                              == (0x207U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+155,((1U & ((IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu) 
                                            >> 3U))));
            tracep->chgWData(oldp+156,(vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t),128);
            tracep->chgBit(oldp+160,((IData)((0x13U 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+161,((((QData)((IData)(
                                                         vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[0U])))),64);
            tracep->chgBit(oldp+163,((IData)((0x23U 
                                              == (0x2fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+164,((((QData)((IData)(
                                                         vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[2U])))),64);
            tracep->chgBit(oldp+166,((IData)((0x43U 
                                              == (0x4fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            VL_EXTEND_WQ(128,64, __Vtemp40, vlSelf->cpu_top__DOT__op1_to_exu);
            VL_EXTEND_WQ(128,64, __Vtemp41, vlSelf->cpu_top__DOT__op2_to_exu);
            VL_MUL_W(4, __Vtemp42, __Vtemp40, __Vtemp41);
            tracep->chgQData(oldp+167,((((QData)((IData)(
                                                         __Vtemp42[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp42[2U])))),64);
            VL_EXTEND_WQ(128,64, __Vtemp43, vlSelf->cpu_top__DOT__op1_to_exu);
            VL_EXTEND_WQ(128,64, __Vtemp44, vlSelf->cpu_top__DOT__op2_to_exu);
            VL_MUL_W(4, __Vtemp45, __Vtemp43, __Vtemp44);
            tracep->chgWData(oldp+169,(__Vtemp45),128);
            tracep->chgBit(oldp+173,((IData)((0x83U 
                                              == (0x8fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+174,((IData)((0x103U 
                                              == (0x10fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+175,(VL_DIV_QQQ(64, vlSelf->cpu_top__DOT__op1_to_exu, vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+177,((IData)((0x203U 
                                              == (0x20fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+178,((IData)((0x403U 
                                              == (0x40fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgQData(oldp+179,(VL_MODDIV_QQQ(64, vlSelf->cpu_top__DOT__op1_to_exu, vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+181,((IData)((0x803U 
                                              == (0x80fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+182,((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))));
            tracep->chgBit(oldp+183,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 2U))));
            tracep->chgBit(oldp+184,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 3U))));
            tracep->chgBit(oldp+185,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 4U))));
            tracep->chgBit(oldp+186,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 5U))));
            tracep->chgBit(oldp+187,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                            >> 6U))));
            tracep->chgQData(oldp+188,(((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                         ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                         : 0ULL)),64);
            tracep->chgQData(oldp+190,(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata),64);
            tracep->chgBit(oldp+192,((IData)((9U == 
                                              (0xdU 
                                               & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+193,((IData)((0x11U 
                                              == (0x15U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+194,((IData)((0x21U 
                                              == (0x25U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+195,((IData)((0x41U 
                                              == (0x45U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+196,((IData)((0xdU 
                                              == (0xdU 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+197,((IData)((0x15U 
                                              == (0x15U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgBit(oldp+198,((IData)((0x25U 
                                              == (0x25U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
            tracep->chgQData(oldp+199,(((((((((- (QData)((IData)(
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
                                              & vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)) 
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
            tracep->chgQData(oldp+201,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0]),64);
            tracep->chgQData(oldp+203,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[1]),64);
            tracep->chgQData(oldp+205,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[2]),64);
            tracep->chgQData(oldp+207,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[3]),64);
            tracep->chgQData(oldp+209,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[4]),64);
            tracep->chgQData(oldp+211,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[5]),64);
            tracep->chgQData(oldp+213,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[6]),64);
            tracep->chgQData(oldp+215,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[7]),64);
            tracep->chgQData(oldp+217,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[8]),64);
            tracep->chgQData(oldp+219,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[9]),64);
            tracep->chgQData(oldp+221,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[10]),64);
            tracep->chgQData(oldp+223,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[11]),64);
            tracep->chgQData(oldp+225,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[12]),64);
            tracep->chgQData(oldp+227,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[13]),64);
            tracep->chgQData(oldp+229,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[14]),64);
            tracep->chgQData(oldp+231,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[15]),64);
            tracep->chgQData(oldp+233,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[16]),64);
            tracep->chgQData(oldp+235,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[17]),64);
            tracep->chgQData(oldp+237,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[18]),64);
            tracep->chgQData(oldp+239,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[19]),64);
            tracep->chgQData(oldp+241,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[20]),64);
            tracep->chgQData(oldp+243,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[21]),64);
            tracep->chgQData(oldp+245,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[22]),64);
            tracep->chgQData(oldp+247,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[23]),64);
            tracep->chgQData(oldp+249,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[24]),64);
            tracep->chgQData(oldp+251,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[25]),64);
            tracep->chgQData(oldp+253,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[26]),64);
            tracep->chgQData(oldp+255,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[27]),64);
            tracep->chgQData(oldp+257,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[28]),64);
            tracep->chgQData(oldp+259,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[29]),64);
            tracep->chgQData(oldp+261,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[30]),64);
            tracep->chgQData(oldp+263,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+265,(vlSelf->clk));
        tracep->chgBit(oldp+266,(vlSelf->rst));
        tracep->chgIData(oldp+267,(vlSelf->inst_val),32);
        tracep->chgBit(oldp+268,(vlSelf->rdata_63_32));
        tracep->chgBit(oldp+269,(((0U != (0x1fU & (vlSelf->inst_val 
                                                   >> 7U))) 
                                  & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->chgCData(oldp+270,((0x1fU & (vlSelf->inst_val 
                                             >> 7U))),5);
        tracep->chgCData(oldp+271,((0x1fU & (vlSelf->inst_val 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+272,((0x1fU & (vlSelf->inst_val 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+273,((1U & (~ (((((((((
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
        tracep->chgCData(oldp+274,((0x7fU & vlSelf->inst_val)),7);
        tracep->chgCData(oldp+275,((7U & (vlSelf->inst_val 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+276,((vlSelf->inst_val 
                                    >> 0x19U)),7);
        tracep->chgBit(oldp+277,((IData)((4U == (0x1cU 
                                                 & vlSelf->inst_val)))));
        tracep->chgBit(oldp+278,((IData)((0xcU == (0x1cU 
                                                   & vlSelf->inst_val)))));
        tracep->chgBit(oldp+279,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                   & (IData)((4U == 
                                              (0x1cU 
                                               & vlSelf->inst_val)))) 
                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))));
        tracep->chgQData(oldp+280,((((- (QData)((IData)(
                                                        (vlSelf->inst_val 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst_val 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst_val 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+282,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+284,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->inst_val 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->inst_val))))),64);
        tracep->chgQData(oldp+286,((((- (QData)((IData)(
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
        tracep->chgBit(oldp+288,((0U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+289,((1U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+290,((2U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+291,((3U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+292,((4U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+293,((5U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+294,((6U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+295,((7U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+296,((0U == (vlSelf->inst_val 
                                         >> 0x19U))));
        tracep->chgBit(oldp+297,((1U == (vlSelf->inst_val 
                                         >> 0x19U))));
        tracep->chgBit(oldp+298,((0x20U == (vlSelf->inst_val 
                                            >> 0x19U))));
        tracep->chgBit(oldp+299,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+300,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+301,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+302,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+303,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+304,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+305,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+306,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+307,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+308,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+309,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+310,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+311,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+312,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+313,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+314,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+315,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+316,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+317,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+318,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+319,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+320,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+321,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (0x20U == (vlSelf->inst_val 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+322,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+323,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+324,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+325,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+326,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+327,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+328,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+329,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (2U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+330,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (3U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+331,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (4U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+332,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I))) 
                                          & (0x5000U 
                                             == (0x40007000U 
                                                 & vlSelf->inst_val))))));
        tracep->chgBit(oldp+333,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I))) 
                                          & (0x40005000U 
                                             == (0x40007000U 
                                                 & vlSelf->inst_val))))));
        tracep->chgBit(oldp+334,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (6U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+335,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                  & (7U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+336,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+337,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+338,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))) 
                                          & (0x5000U 
                                             == (0x40007000U 
                                                 & vlSelf->inst_val))))));
        tracep->chgBit(oldp+339,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))) 
                                          & (0x40005000U 
                                             == (0x40007000U 
                                                 & vlSelf->inst_val))))));
        tracep->chgBit(oldp+340,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+341,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+342,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  & (2U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+343,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  & (3U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+344,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+345,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+346,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (4U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+347,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (5U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+348,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (6U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+349,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  & (7U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+350,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                  & (0U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+351,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                  & (1U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+352,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                  & (2U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+353,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                  & (3U == (7U & (vlSelf->inst_val 
                                                  >> 0xcU))))));
        tracep->chgBit(oldp+354,((0U == (0x1fU & (vlSelf->inst_val 
                                                  >> 7U)))));
        tracep->chgBit(oldp+355,((((((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                        & (1U != (vlSelf->inst_val 
                                                  >> 0x19U))) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
        tracep->chgBit(oldp+356,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+357,((((0U != (0x1fU & 
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
    }
}
