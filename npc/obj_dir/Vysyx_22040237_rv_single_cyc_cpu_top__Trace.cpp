// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Syms.h"


void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceChgSub0(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040237_rv_single_cyc_cpu_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040237_rv_single_cyc_cpu_top___024root*>(voidSelf);
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceChgSub0(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_data),64);
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_ebreak));
            tracep->chgCData(oldp+3,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode),8);
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1),64);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2),64);
            tracep->chgIData(oldp+8,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1_jump),32);
            tracep->chgIData(oldp+9,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2_jump),32);
            tracep->chgBit(oldp+10,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jal) 
                                     | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr))));
            tracep->chgBit(oldp+11,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en));
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr),5);
            tracep->chgBit(oldp+13,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en));
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr),5);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_data),64);
            tracep->chgIData(oldp+17,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__pc_jump_addr),32);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__src_i),64);
            tracep->chgBit(oldp+20,((((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi) 
                                      | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_ebreak)) 
                                     | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr))));
            tracep->chgBit(oldp+21,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc) 
                                     | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui))));
            tracep->chgBit(oldp+22,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jal));
            tracep->chgCData(oldp+23,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type),6);
            tracep->chgBit(oldp+24,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi));
            tracep->chgBit(oldp+25,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc));
            tracep->chgBit(oldp+26,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui));
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr));
            tracep->chgBit(oldp+28,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en) 
                                     & (0U != (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr)))));
        }
        tracep->chgBit(oldp+29,(vlSelf->clk));
        tracep->chgBit(oldp+30,(vlSelf->rst));
        tracep->chgIData(oldp+31,(vlSelf->inst_in),32);
        tracep->chgIData(oldp+32,(vlSelf->pc),32);
        tracep->chgQData(oldp+33,(vlSelf->rs2_data),64);
        tracep->chgBit(oldp+35,((1U & (~ ((((((((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelf->inst_in)))) 
                                                | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi)) 
                                               | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_ebreak)) 
                                              | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc)) 
                                             | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jal)) 
                                           | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr)) 
                                          | (IData)(
                                                    (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst_in))))))));
        tracep->chgCData(oldp+36,((0x7fU & vlSelf->inst_in)),7);
        tracep->chgCData(oldp+37,((0x1fU & (vlSelf->inst_in 
                                            >> 7U))),5);
        tracep->chgCData(oldp+38,((7U & (vlSelf->inst_in 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+39,((0x1fU & (vlSelf->inst_in 
                                            >> 0xfU))),5);
        tracep->chgSData(oldp+40,((vlSelf->inst_in 
                                   >> 0x14U)),12);
        tracep->chgIData(oldp+41,((vlSelf->inst_in 
                                   >> 0xcU)),20);
        tracep->chgQData(oldp+42,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->inst_in 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->inst_in))))),64);
        tracep->chgIData(oldp+44,((((- (IData)((vlSelf->inst_in 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->inst_in 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->inst_in) 
                                                    | ((0x800U 
                                                        & (vlSelf->inst_in 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->inst_in 
                                                             >> 0x14U))))))),32);
        tracep->chgBit(oldp+45,((IData)((0x23U == (0x7fU 
                                                   & vlSelf->inst_in)))));
        tracep->chgBit(oldp+46,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->inst_in)))))));
    }
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040237_rv_single_cyc_cpu_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040237_rv_single_cyc_cpu_top___024root*>(voidSelf);
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
