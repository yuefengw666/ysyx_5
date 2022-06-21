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
            tracep->chgIData(oldp+8,((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op1_jump)),32);
            tracep->chgIData(oldp+9,((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op2_jump)),32);
            tracep->chgBit(oldp+10,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jal) 
                                     | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr))));
            tracep->chgBit(oldp+11,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en));
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr),5);
            tracep->chgBit(oldp+13,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en));
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr),5);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_data),64);
            tracep->chgIData(oldp+17,((IData)(((1U 
                                                == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode))
                                                ? ((QData)((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op1_jump)) 
                                                   + (QData)((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op2_jump)))
                                                : 0ULL))),32);
            tracep->chgQData(oldp+18,((QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op1_jump)) 
                                                        + (QData)((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op2_jump)))
                                                        : 0ULL)))),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op1_jump),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op2_jump),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__src_i),64);
            tracep->chgBit(oldp+26,((((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi) 
                                      | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_ebreak)) 
                                     | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr))));
            tracep->chgBit(oldp+27,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc) 
                                     | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui))));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jal));
            tracep->chgCData(oldp+29,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type),6);
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc));
            tracep->chgBit(oldp+32,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui));
            tracep->chgBit(oldp+33,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr));
            tracep->chgQData(oldp+34,((QData)((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op1_jump))),64);
            tracep->chgQData(oldp+36,((QData)((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op2_jump))),64);
            tracep->chgQData(oldp+38,(((1U == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode))
                                        ? ((QData)((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op1_jump)) 
                                           + (QData)((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT____Vcellout__ysyx_22040237_idu_u0__op2_jump)))
                                        : 0ULL)),64);
            tracep->chgBit(oldp+40,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en) 
                                     & (0U != (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[1]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[2]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[3]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[4]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[5]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[6]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[7]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[8]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[9]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[10]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[11]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[12]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[13]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[14]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[15]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[16]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[17]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[18]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[19]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[20]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[21]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[22]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[23]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[24]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[25]),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[26]),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[27]),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[28]),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[29]),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[30]),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+105,(vlSelf->clk));
        tracep->chgBit(oldp+106,(vlSelf->rst));
        tracep->chgIData(oldp+107,(vlSelf->inst_in),32);
        tracep->chgQData(oldp+108,(vlSelf->pc),64);
        tracep->chgQData(oldp+110,(vlSelf->rs2_data),64);
        tracep->chgBit(oldp+112,((1U & (~ ((((((((~ (IData)(
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
        tracep->chgCData(oldp+113,((0x7fU & vlSelf->inst_in)),7);
        tracep->chgCData(oldp+114,((0x1fU & (vlSelf->inst_in 
                                             >> 7U))),5);
        tracep->chgCData(oldp+115,((7U & (vlSelf->inst_in 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+116,((0x1fU & (vlSelf->inst_in 
                                             >> 0xfU))),5);
        tracep->chgSData(oldp+117,((vlSelf->inst_in 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+118,((vlSelf->inst_in 
                                    >> 0xcU)),20);
        tracep->chgQData(oldp+119,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->inst_in 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->inst_in))))),64);
        tracep->chgIData(oldp+121,((((- (IData)((vlSelf->inst_in 
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
        tracep->chgBit(oldp+122,((IData)((0x23U == 
                                          (0x7fU & vlSelf->inst_in)))));
        tracep->chgBit(oldp+123,((1U & (~ (IData)((0U 
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
