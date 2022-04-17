// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreg_file__Syms.h"


void Vreg_file___024root__traceChgSub0(Vreg_file___024root* vlSelf, VerilatedVcd* tracep);

void Vreg_file___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vreg_file___024root* const __restrict vlSelf = static_cast<Vreg_file___024root*>(voidSelf);
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vreg_file___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vreg_file___024root__traceChgSub0(Vreg_file___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__u_reg_file__DOT__regs[0]),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__u_reg_file__DOT__regs[1]),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__u_reg_file__DOT__regs[2]),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__u_reg_file__DOT__regs[3]),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__u_reg_file__DOT__regs[4]),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__u_reg_file__DOT__regs[5]),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__u_reg_file__DOT__regs[6]),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__u_reg_file__DOT__regs[7]),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__u_reg_file__DOT__regs[8]),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__u_reg_file__DOT__regs[9]),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__u_reg_file__DOT__regs[10]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__u_reg_file__DOT__regs[11]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__u_reg_file__DOT__regs[12]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__u_reg_file__DOT__regs[13]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__u_reg_file__DOT__regs[14]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__u_reg_file__DOT__regs[15]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__u_reg_file__DOT__regs[16]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__u_reg_file__DOT__regs[17]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__u_reg_file__DOT__regs[18]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__u_reg_file__DOT__regs[19]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__u_reg_file__DOT__regs[20]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__u_reg_file__DOT__regs[21]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__u_reg_file__DOT__regs[22]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__u_reg_file__DOT__regs[23]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__u_reg_file__DOT__regs[24]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__u_reg_file__DOT__regs[25]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__u_reg_file__DOT__regs[26]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__u_reg_file__DOT__regs[27]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__u_reg_file__DOT__regs[28]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__u_reg_file__DOT__regs[29]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__u_reg_file__DOT__regs[30]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__u_reg_file__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+64,(vlSelf->clk));
        tracep->chgBit(oldp+65,(vlSelf->rstn));
        tracep->chgQData(oldp+66,(vlSelf->inst),33);
        tracep->chgIData(oldp+68,(vlSelf->pc),32);
        tracep->chgQData(oldp+69,(vlSelf->result),64);
        tracep->chgCData(oldp+71,((0x1fU & (IData)(
                                                   (vlSelf->inst 
                                                    >> 0xfU)))),5);
        tracep->chgCData(oldp+72,((0x1fU & (IData)(
                                                   (vlSelf->inst 
                                                    >> 7U)))),5);
        tracep->chgQData(oldp+73,((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x1fU)))))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (0xfffU 
                                                                & (IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x14U))))))),64);
        tracep->chgQData(oldp+75,(vlSelf->top__DOT__u_reg_file__DOT__regs
                                  [(0x1fU & (IData)(
                                                    (vlSelf->inst 
                                                     >> 0xfU)))]),64);
        tracep->chgIData(oldp+77,((IData)(vlSelf->inst)),32);
        tracep->chgCData(oldp+78,(vlSelf->top__DOT__u_idu__DOT__opcode),7);
        tracep->chgCData(oldp+79,((7U & (IData)((vlSelf->inst 
                                                 >> 0xcU)))),3);
        tracep->chgSData(oldp+80,((0xfffU & (IData)(
                                                    (vlSelf->inst 
                                                     >> 0x14U)))),12);
    }
}

void Vreg_file___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vreg_file___024root* const __restrict vlSelf = static_cast<Vreg_file___024root*>(voidSelf);
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
