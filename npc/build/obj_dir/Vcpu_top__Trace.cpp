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
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp41;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(((0U != (0x1fU & 
                                            ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                             >> 7U))) 
                                    & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+1,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+2,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgQData(oldp+3,(((- (QData)((IData)(
                                                         (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                      & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)),64);
            tracep->chgSData(oldp+5,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),15);
            tracep->chgBit(oldp+6,((1U & (~ (((((((
                                                   (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                                | (IData)(
                                                          (0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))))) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                             | (IData)(
                                                       (0x73U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->cpu_top__DOT__inst_to_idu)))))))));
            tracep->chgBit(oldp+7,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R));
            tracep->chgBit(oldp+8,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I));
            tracep->chgBit(oldp+9,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L));
            tracep->chgBit(oldp+10,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S));
            tracep->chgBit(oldp+11,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B));
            tracep->chgBit(oldp+12,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL));
            tracep->chgBit(oldp+13,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI));
            tracep->chgBit(oldp+14,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC));
            tracep->chgQData(oldp+15,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
            tracep->chgBit(oldp+17,((0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U))))));
            tracep->chgBit(oldp+18,((0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U))))));
            tracep->chgBit(oldp+19,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (0U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+20,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (0U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+21,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (1U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+22,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (2U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+23,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (3U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+24,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (4U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+25,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (5U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+26,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (5U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+27,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (6U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+28,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      & (7U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+29,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (0U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+30,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (1U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
            tracep->chgBit(oldp+31,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (2U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+32,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (3U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+33,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (4U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+34,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (5U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
            tracep->chgBit(oldp+35,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      & (5U == (7U 
                                                & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                     & (0x20U == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
            tracep->chgBit(oldp+36,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (6U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+37,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     & (7U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+38,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (0U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+39,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (1U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+40,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (4U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+41,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (5U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+42,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (6U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+43,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     & (7U == (7U & 
                                               ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+44,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
            tracep->chgBit(oldp+45,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
            tracep->chgQData(oldp+46,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
            tracep->chgBit(oldp+48,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
            tracep->chgBit(oldp+49,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+50,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgBit(oldp+51,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
            tracep->chgBit(oldp+52,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgBit(oldp+53,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))));
            tracep->chgBit(oldp+54,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
            tracep->chgBit(oldp+55,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))));
            tracep->chgSData(oldp+56,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),15);
            tracep->chgBit(oldp+57,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
            tracep->chgSData(oldp+58,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),15);
            tracep->chgBit(oldp+59,((IData)((0x4000U 
                                             == (0x4007U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+60,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+61,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
            tracep->chgBit(oldp+62,((((IData)((8U == 
                                               (0xfU 
                                                & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                     | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr))));
            tracep->chgBit(oldp+63,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
            tracep->chgBit(oldp+64,(((((IData)((8U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                       | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                      | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                     | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub))));
            __Vtemp36[0U] = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)
                              ? 1U : 0U);
            __Vtemp36[1U] = 0U;
            __Vtemp36[2U] = 0U;
            tracep->chgWData(oldp+65,(__Vtemp36),65);
            tracep->chgBit(oldp+68,((IData)((0x20U 
                                             == (0x27U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+69,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu));
            tracep->chgBit(oldp+70,((IData)((0x100U 
                                             == (0x107U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+71,((IData)((0x200U 
                                             == (0x207U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+72,((IData)((0x400U 
                                             == (0x407U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+73,((IData)((0x800U 
                                             == (0x807U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+74,((IData)((0x1000U 
                                             == (0x1007U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+75,((IData)((0x2000U 
                                             == (0x2007U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
            tracep->chgBit(oldp+76,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
            tracep->chgBit(oldp+77,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
            tracep->chgBit(oldp+78,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq));
            tracep->chgBit(oldp+79,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne));
            tracep->chgBit(oldp+80,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt));
            tracep->chgBit(oldp+81,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge));
            tracep->chgBit(oldp+82,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu));
            tracep->chgBit(oldp+83,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
            tracep->chgBit(oldp+84,((((0U != (0x1fU 
                                              & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                 >> 7U))) 
                                      & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                                     & (0U != (0x1fU 
                                               & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 7U))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+85,(vlSelf->cpu_top__DOT__pc_to_ifu),64);
            tracep->chgQData(oldp+87,(vlSelf->cpu_top__DOT__op1_to_exu),64);
            tracep->chgQData(oldp+89,(vlSelf->cpu_top__DOT__op2_to_exu),64);
            tracep->chgQData(oldp+91,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                        & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                       | ((- (QData)((IData)(
                                                             ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                          & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
            tracep->chgQData(oldp+93,(((((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+95,(((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
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
            tracep->chgQData(oldp+96,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
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
            tracep->chgQData(oldp+98,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
            tracep->chgQData(oldp+100,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))
                                         ? vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                        [(0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0x14U))]
                                         : 0ULL)),64);
            tracep->chgQData(oldp+102,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
            __Vtemp37[0U] = (IData)(vlSelf->cpu_top__DOT__op1_to_exu);
            __Vtemp37[1U] = (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                     >> 0x20U));
            __Vtemp37[2U] = (1U & (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                           >> 0x3fU)));
            tracep->chgWData(oldp+104,(__Vtemp37),65);
            if (vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) {
                __Vtemp41[0U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U]);
                __Vtemp41[1U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U]);
                __Vtemp41[2U] = (1U & (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]));
            } else {
                __Vtemp41[0U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U];
                __Vtemp41[1U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U];
                __Vtemp41[2U] = (1U & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]);
            }
            tracep->chgWData(oldp+107,(__Vtemp41),65);
            tracep->chgWData(oldp+110,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),65);
            tracep->chgWData(oldp+113,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2),65);
            tracep->chgQData(oldp+116,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        << (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+118,((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                         & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])
                                         ? 1ULL : 0ULL)),64);
            tracep->chgBit(oldp+120,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                      & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
            tracep->chgQData(oldp+121,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgQData(oldp+123,(vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res),64);
            tracep->chgQData(oldp+125,((vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                                        | (~ (1ULL 
                                              >> (0x3fU 
                                                  & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))))),64);
            tracep->chgQData(oldp+127,((1ULL >> (0x3fU 
                                                 & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
            tracep->chgQData(oldp+129,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        | vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgQData(oldp+131,((vlSelf->cpu_top__DOT__op1_to_exu 
                                        & vlSelf->cpu_top__DOT__op2_to_exu)),64);
            tracep->chgBit(oldp+133,(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res));
            tracep->chgBit(oldp+134,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res)))));
            tracep->chgBit(oldp+135,(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res));
            tracep->chgBit(oldp+136,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res)))));
            tracep->chgBit(oldp+137,(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res));
            tracep->chgBit(oldp+138,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res)))));
            tracep->chgQData(oldp+139,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0]),64);
            tracep->chgQData(oldp+141,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[1]),64);
            tracep->chgQData(oldp+143,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[2]),64);
            tracep->chgQData(oldp+145,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[3]),64);
            tracep->chgQData(oldp+147,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[4]),64);
            tracep->chgQData(oldp+149,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[5]),64);
            tracep->chgQData(oldp+151,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[6]),64);
            tracep->chgQData(oldp+153,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[7]),64);
            tracep->chgQData(oldp+155,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[8]),64);
            tracep->chgQData(oldp+157,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[9]),64);
            tracep->chgQData(oldp+159,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[10]),64);
            tracep->chgQData(oldp+161,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[11]),64);
            tracep->chgQData(oldp+163,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[12]),64);
            tracep->chgQData(oldp+165,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[13]),64);
            tracep->chgQData(oldp+167,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[14]),64);
            tracep->chgQData(oldp+169,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[15]),64);
            tracep->chgQData(oldp+171,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[16]),64);
            tracep->chgQData(oldp+173,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[17]),64);
            tracep->chgQData(oldp+175,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[18]),64);
            tracep->chgQData(oldp+177,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[19]),64);
            tracep->chgQData(oldp+179,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[20]),64);
            tracep->chgQData(oldp+181,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[21]),64);
            tracep->chgQData(oldp+183,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[22]),64);
            tracep->chgQData(oldp+185,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[23]),64);
            tracep->chgQData(oldp+187,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[24]),64);
            tracep->chgQData(oldp+189,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[25]),64);
            tracep->chgQData(oldp+191,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[26]),64);
            tracep->chgQData(oldp+193,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[27]),64);
            tracep->chgQData(oldp+195,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[28]),64);
            tracep->chgQData(oldp+197,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[29]),64);
            tracep->chgQData(oldp+199,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[30]),64);
            tracep->chgQData(oldp+201,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+203,(vlSelf->clk));
        tracep->chgBit(oldp+204,(vlSelf->rst));
        tracep->chgIData(oldp+205,(vlSelf->inst_val),32);
        tracep->chgBit(oldp+206,(vlSelf->rdata_63_32));
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
