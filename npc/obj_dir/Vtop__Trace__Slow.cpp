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
        tracep->declBit(c+73,"clk", false,-1);
        tracep->declBit(c+74,"rstn", false,-1);
        tracep->declBus(c+75,"inst", false,-1, 31,0);
        tracep->declBus(c+76,"pc", false,-1, 31,0);
        tracep->declQuad(c+77,"result", false,-1, 63,0);
        tracep->declBit(c+73,"top clk", false,-1);
        tracep->declBit(c+74,"top rstn", false,-1);
        tracep->declBus(c+75,"top inst", false,-1, 31,0);
        tracep->declBus(c+76,"top pc", false,-1, 31,0);
        tracep->declQuad(c+77,"top result", false,-1, 63,0);
        tracep->declBus(c+1,"top rs1", false,-1, 4,0);
        tracep->declBus(c+2,"top rd", false,-1, 4,0);
        tracep->declQuad(c+3,"top imm_I", false,-1, 63,0);
        tracep->declBit(c+5,"top reg_wr", false,-1);
        tracep->declBit(c+79,"top addi", false,-1);
        tracep->declQuad(c+6,"top src1", false,-1, 63,0);
        tracep->declBit(c+73,"top u_pc_reg clk", false,-1);
        tracep->declBit(c+74,"top u_pc_reg rstn", false,-1);
        tracep->declBus(c+76,"top u_pc_reg pc", false,-1, 31,0);
        tracep->declBit(c+73,"top u_idu clk", false,-1);
        tracep->declBit(c+74,"top u_idu rstn", false,-1);
        tracep->declBus(c+75,"top u_idu inst", false,-1, 31,0);
        tracep->declBus(c+1,"top u_idu rs1", false,-1, 4,0);
        tracep->declBus(c+2,"top u_idu rd", false,-1, 4,0);
        tracep->declQuad(c+3,"top u_idu imm_I", false,-1, 63,0);
        tracep->declBit(c+5,"top u_idu reg_wr", false,-1);
        tracep->declBit(c+79,"top u_idu addi", false,-1);
        tracep->declBus(c+80,"top u_idu opcode", false,-1, 6,0);
        tracep->declBus(c+81,"top u_idu funct3", false,-1, 2,0);
        tracep->declBus(c+82,"top u_idu imm", false,-1, 11,0);
        tracep->declBus(c+83,"top u_idu rs1_t", false,-1, 4,0);
        tracep->declBus(c+84,"top u_idu rd_t", false,-1, 4,0);
        tracep->declBit(c+73,"top u_reg_file clk", false,-1);
        tracep->declBit(c+74,"top u_reg_file rstn", false,-1);
        tracep->declBus(c+1,"top u_reg_file r1_rd_addr", false,-1, 4,0);
        tracep->declBit(c+5,"top u_reg_file reg_wr", false,-1);
        tracep->declBus(c+2,"top u_reg_file wr_addr", false,-1, 4,0);
        tracep->declQuad(c+77,"top u_reg_file wr_data", false,-1, 63,0);
        tracep->declQuad(c+6,"top u_reg_file r1_rd_data", false,-1, 63,0);
        tracep->declQuad(c+85,"top u_reg_file REGS_INIT", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+8+i*2,"top u_reg_file regs", true,(i+0), 63,0);}}
        tracep->declBit(c+72,"top u_reg_file wr_en", false,-1);
        tracep->declBit(c+73,"top u_alu clk", false,-1);
        tracep->declBit(c+74,"top u_alu rstn", false,-1);
        tracep->declQuad(c+6,"top u_alu src1", false,-1, 63,0);
        tracep->declQuad(c+3,"top u_alu imm_I", false,-1, 63,0);
        tracep->declBit(c+79,"top u_alu addi", false,-1);
        tracep->declQuad(c+77,"top u_alu result", false,-1, 63,0);
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
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__rd),5);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__imm_I),64);
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__reg_wr));
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__u_reg_file__DOT__regs
                                  [vlSelf->top__DOT__rs1]),64);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__u_reg_file__DOT__regs[0]),64);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__u_reg_file__DOT__regs[1]),64);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__u_reg_file__DOT__regs[2]),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__u_reg_file__DOT__regs[3]),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__u_reg_file__DOT__regs[4]),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__u_reg_file__DOT__regs[5]),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__u_reg_file__DOT__regs[6]),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__u_reg_file__DOT__regs[7]),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__u_reg_file__DOT__regs[8]),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__u_reg_file__DOT__regs[9]),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__u_reg_file__DOT__regs[10]),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__u_reg_file__DOT__regs[11]),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__u_reg_file__DOT__regs[12]),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__u_reg_file__DOT__regs[13]),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__u_reg_file__DOT__regs[14]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__u_reg_file__DOT__regs[15]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__u_reg_file__DOT__regs[16]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__u_reg_file__DOT__regs[17]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__u_reg_file__DOT__regs[18]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__u_reg_file__DOT__regs[19]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__u_reg_file__DOT__regs[20]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__u_reg_file__DOT__regs[21]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__u_reg_file__DOT__regs[22]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__u_reg_file__DOT__regs[23]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__u_reg_file__DOT__regs[24]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__u_reg_file__DOT__regs[25]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__u_reg_file__DOT__regs[26]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__u_reg_file__DOT__regs[27]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_reg_file__DOT__regs[28]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__u_reg_file__DOT__regs[29]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__u_reg_file__DOT__regs[30]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__u_reg_file__DOT__regs[31]),64);
        tracep->fullBit(oldp+72,(((IData)(vlSelf->top__DOT__reg_wr) 
                                  & (0U != (IData)(vlSelf->top__DOT__rd)))));
        tracep->fullBit(oldp+73,(vlSelf->clk));
        tracep->fullBit(oldp+74,(vlSelf->rstn));
        tracep->fullIData(oldp+75,(vlSelf->inst),32);
        tracep->fullIData(oldp+76,(vlSelf->pc),32);
        tracep->fullQData(oldp+77,(vlSelf->result),64);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__addi));
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__u_idu__DOT__opcode),7);
        tracep->fullCData(oldp+81,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullSData(oldp+82,((vlSelf->inst >> 0x14U)),12);
        tracep->fullCData(oldp+83,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+84,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+85,(0ULL),64);
    }
}
