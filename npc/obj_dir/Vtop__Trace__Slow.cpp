// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+65,"clk", false,-1);
        tracep->declBit(c+66,"rstn", false,-1);
        tracep->declBus(c+67,"inst", false,-1, 31,0);
        tracep->declBus(c+68,"pc", false,-1, 31,0);
        tracep->declQuad(c+69,"result", false,-1, 63,0);
        tracep->declBit(c+65,"top clk", false,-1);
        tracep->declBit(c+66,"top rstn", false,-1);
        tracep->declBus(c+67,"top inst", false,-1, 31,0);
        tracep->declBus(c+68,"top pc", false,-1, 31,0);
        tracep->declQuad(c+69,"top result", false,-1, 63,0);
        tracep->declBus(c+71,"top rs1", false,-1, 4,0);
        tracep->declBus(c+72,"top rd", false,-1, 4,0);
        tracep->declQuad(c+73,"top imm_I", false,-1, 63,0);
        tracep->declBit(c+75,"top reg_wr", false,-1);
        tracep->declBit(c+75,"top addi", false,-1);
        tracep->declQuad(c+76,"top src1", false,-1, 63,0);
        tracep->declBit(c+65,"top u_pc_reg clk", false,-1);
        tracep->declBit(c+66,"top u_pc_reg rstn", false,-1);
        tracep->declBus(c+68,"top u_pc_reg pc", false,-1, 31,0);
        tracep->declBus(c+67,"top u_idu inst", false,-1, 31,0);
        tracep->declBus(c+71,"top u_idu rs1", false,-1, 4,0);
        tracep->declBus(c+72,"top u_idu rd", false,-1, 4,0);
        tracep->declQuad(c+73,"top u_idu imm_I", false,-1, 63,0);
        tracep->declBit(c+75,"top u_idu reg_wr", false,-1);
        tracep->declBit(c+75,"top u_idu addi", false,-1);
        tracep->declBus(c+78,"top u_idu opcode", false,-1, 6,0);
        tracep->declBus(c+79,"top u_idu funct3", false,-1, 2,0);
        tracep->declBus(c+80,"top u_idu imm", false,-1, 11,0);
        tracep->declBit(c+65,"top u_reg_file clk", false,-1);
        tracep->declBit(c+66,"top u_reg_file rstn", false,-1);
        tracep->declBus(c+71,"top u_reg_file r1_rd_addr", false,-1, 4,0);
        tracep->declBit(c+75,"top u_reg_file reg_wr", false,-1);
        tracep->declBus(c+72,"top u_reg_file wr_addr", false,-1, 4,0);
        tracep->declQuad(c+69,"top u_reg_file wr_data", false,-1, 63,0);
        tracep->declQuad(c+76,"top u_reg_file r1_rd_data", false,-1, 63,0);
        tracep->declQuad(c+82,"top u_reg_file REGS_INIT", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"top u_reg_file regs", true,(i+0), 63,0);}}
        tracep->declBit(c+81,"top u_reg_file wr_en", false,-1);
        tracep->declBit(c+65,"top u_alu clk", false,-1);
        tracep->declBit(c+66,"top u_alu rstn", false,-1);
        tracep->declQuad(c+76,"top u_alu src1", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_alu imm_I", false,-1, 63,0);
        tracep->declBit(c+75,"top u_alu addi", false,-1);
        tracep->declQuad(c+69,"top u_alu result", false,-1, 63,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__u_reg_file__DOT__regs[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__u_reg_file__DOT__regs[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__u_reg_file__DOT__regs[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__u_reg_file__DOT__regs[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__u_reg_file__DOT__regs[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__u_reg_file__DOT__regs[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__u_reg_file__DOT__regs[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__u_reg_file__DOT__regs[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__u_reg_file__DOT__regs[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__u_reg_file__DOT__regs[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__u_reg_file__DOT__regs[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__u_reg_file__DOT__regs[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__u_reg_file__DOT__regs[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__u_reg_file__DOT__regs[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__u_reg_file__DOT__regs[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__u_reg_file__DOT__regs[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__u_reg_file__DOT__regs[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__u_reg_file__DOT__regs[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__u_reg_file__DOT__regs[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__u_reg_file__DOT__regs[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__u_reg_file__DOT__regs[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__u_reg_file__DOT__regs[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__u_reg_file__DOT__regs[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__u_reg_file__DOT__regs[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__u_reg_file__DOT__regs[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__u_reg_file__DOT__regs[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__u_reg_file__DOT__regs[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__u_reg_file__DOT__regs[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__u_reg_file__DOT__regs[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__u_reg_file__DOT__regs[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__u_reg_file__DOT__regs[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__u_reg_file__DOT__regs[31]),64);
        tracep->fullBit(oldp+65,(vlSelf->clk));
        tracep->fullBit(oldp+66,(vlSelf->rstn));
        tracep->fullIData(oldp+67,(vlSelf->inst),32);
        tracep->fullIData(oldp+68,(vlSelf->pc),32);
        tracep->fullQData(oldp+69,(vlSelf->result),64);
        tracep->fullCData(oldp+71,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+72,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+73,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x14U))))),64);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__addi));
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__u_reg_file__DOT__regs
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]),64);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__u_idu__DOT__opcode),7);
        tracep->fullCData(oldp+79,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullSData(oldp+80,((vlSelf->inst >> 0x14U)),12);
        tracep->fullBit(oldp+81,(((IData)(vlSelf->top__DOT__addi) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->inst 
                                             >> 7U))))));
        tracep->fullQData(oldp+82,(0ULL),64);
    }
}
