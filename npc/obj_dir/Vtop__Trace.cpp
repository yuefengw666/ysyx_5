// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__rd),5);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__imm_I),64);
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__reg_wr));
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__u_reg_file__DOT__regs
                                     [vlSelf->top__DOT__rs1]),64);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__u_reg_file__DOT__regs[0]),64);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__u_reg_file__DOT__regs[1]),64);
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__u_reg_file__DOT__regs[2]),64);
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__u_reg_file__DOT__regs[3]),64);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__u_reg_file__DOT__regs[4]),64);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__u_reg_file__DOT__regs[5]),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__u_reg_file__DOT__regs[6]),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__u_reg_file__DOT__regs[7]),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__u_reg_file__DOT__regs[8]),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__u_reg_file__DOT__regs[9]),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__u_reg_file__DOT__regs[10]),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__u_reg_file__DOT__regs[11]),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__u_reg_file__DOT__regs[12]),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__u_reg_file__DOT__regs[13]),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__u_reg_file__DOT__regs[14]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__u_reg_file__DOT__regs[15]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__u_reg_file__DOT__regs[16]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__u_reg_file__DOT__regs[17]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__u_reg_file__DOT__regs[18]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__u_reg_file__DOT__regs[19]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__u_reg_file__DOT__regs[20]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__u_reg_file__DOT__regs[21]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__u_reg_file__DOT__regs[22]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__u_reg_file__DOT__regs[23]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__u_reg_file__DOT__regs[24]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__u_reg_file__DOT__regs[25]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__u_reg_file__DOT__regs[26]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__u_reg_file__DOT__regs[27]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__u_reg_file__DOT__regs[28]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__u_reg_file__DOT__regs[29]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__u_reg_file__DOT__regs[30]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__u_reg_file__DOT__regs[31]),64);
            tracep->chgBit(oldp+71,(((IData)(vlSelf->top__DOT__reg_wr) 
                                     & (0U != (IData)(vlSelf->top__DOT__rd)))));
        }
        tracep->chgBit(oldp+72,(vlSelf->clk));
        tracep->chgBit(oldp+73,(vlSelf->rstn));
        tracep->chgIData(oldp+74,(vlSelf->inst),32);
        tracep->chgIData(oldp+75,(vlSelf->pc),32);
        tracep->chgQData(oldp+76,(vlSelf->result),64);
        tracep->chgBit(oldp+78,(vlSelf->top__DOT__addi));
        tracep->chgCData(oldp+79,(vlSelf->top__DOT__u_idu__DOT__opcode),7);
        tracep->chgCData(oldp+80,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgSData(oldp+81,((vlSelf->inst >> 0x14U)),12);
        tracep->chgCData(oldp+82,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+83,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
