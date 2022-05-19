// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Syms.h"


void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceInitSub0(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceInitTop(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceInitSub0(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+78,"clk", false,-1);
        tracep->declBit(c+79,"rst", false,-1);
        tracep->declBus(c+80,"inst_in", false,-1, 31,0);
        tracep->declBus(c+81,"pc", false,-1, 31,0);
        tracep->declQuad(c+82,"rs2_data", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22040237_rv_single_cyc_cpu_top clk", false,-1);
        tracep->declBit(c+79,"ysyx_22040237_rv_single_cyc_cpu_top rst", false,-1);
        tracep->declBus(c+80,"ysyx_22040237_rv_single_cyc_cpu_top inst_in", false,-1, 31,0);
        tracep->declBus(c+81,"ysyx_22040237_rv_single_cyc_cpu_top pc", false,-1, 31,0);
        tracep->declQuad(c+82,"ysyx_22040237_rv_single_cyc_cpu_top rs2_data", false,-1, 63,0);
        tracep->declBus(c+80,"ysyx_22040237_rv_single_cyc_cpu_top inst", false,-1, 31,0);
        tracep->declQuad(c+84,"ysyx_22040237_rv_single_cyc_cpu_top rs1_data", false,-1, 63,0);
        tracep->declBit(c+86,"ysyx_22040237_rv_single_cyc_cpu_top inst_ebreak", false,-1);
        tracep->declBus(c+65,"ysyx_22040237_rv_single_cyc_cpu_top inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+66,"ysyx_22040237_rv_single_cyc_cpu_top op1", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040237_rv_single_cyc_cpu_top op2", false,-1, 63,0);
        tracep->declBit(c+70,"ysyx_22040237_rv_single_cyc_cpu_top rs1_r_en", false,-1);
        tracep->declBus(c+71,"ysyx_22040237_rv_single_cyc_cpu_top rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+100,"ysyx_22040237_rv_single_cyc_cpu_top rs2_r_en", false,-1);
        tracep->declBus(c+101,"ysyx_22040237_rv_single_cyc_cpu_top rs2_r_addr", false,-1, 4,0);
        tracep->declBit(c+72,"ysyx_22040237_rv_single_cyc_cpu_top rd_w_en", false,-1);
        tracep->declBus(c+73,"ysyx_22040237_rv_single_cyc_cpu_top rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_22040237_rv_single_cyc_cpu_top rd_data", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_pc_reg_u0 clk", false,-1);
        tracep->declBit(c+79,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_pc_reg_u0 rst", false,-1);
        tracep->declBus(c+81,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_pc_reg_u0 pc_reg", false,-1, 31,0);
        tracep->declBus(c+80,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_ifu_u0 inst_i", false,-1, 31,0);
        tracep->declBus(c+80,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_ifu_u0 inst_o", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rst", false,-1);
        tracep->declBus(c+81,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 pc", false,-1, 31,0);
        tracep->declBus(c+80,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst", false,-1, 31,0);
        tracep->declQuad(c+84,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs1_data", false,-1, 63,0);
        tracep->declBus(c+65,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+66,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 op1", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 op2", false,-1, 63,0);
        tracep->declBit(c+86,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_ebreak", false,-1);
        tracep->declBit(c+70,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs1_r_en", false,-1);
        tracep->declBus(c+71,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+100,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs2_r_en", false,-1);
        tracep->declBus(c+101,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs2_r_addr", false,-1, 4,0);
        tracep->declBit(c+72,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rd_w_en", false,-1);
        tracep->declBus(c+73,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rd_w_addr", false,-1, 4,0);
        tracep->declBus(c+89,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 opcode", false,-1, 6,0);
        tracep->declBus(c+90,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rd", false,-1, 4,0);
        tracep->declBus(c+91,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 func3", false,-1, 2,0);
        tracep->declBus(c+92,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs1", false,-1, 4,0);
        tracep->declBus(c+93,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 imm_i", false,-1, 11,0);
        tracep->declBus(c+94,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 imm_u", false,-1, 19,0);
        tracep->declQuad(c+95,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 src_i", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 src_u", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_R", false,-1);
        tracep->declBit(c+99,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_I", false,-1);
        tracep->declBit(c+100,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_S", false,-1);
        tracep->declBit(c+100,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_B", false,-1);
        tracep->declBit(c+74,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_U", false,-1);
        tracep->declBit(c+100,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_J", false,-1);
        tracep->declBus(c+75,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_type", false,-1, 5,0);
        tracep->declBit(c+76,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_addi", false,-1);
        tracep->declBit(c+74,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_auipc", false,-1);
        tracep->declBit(c+78,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 clk", false,-1);
        tracep->declBit(c+79,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 rst", false,-1);
        tracep->declBus(c+65,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+66,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 op1", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 op2", false,-1, 63,0);
        tracep->declBit(c+86,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 inst_ebreak", false,-1);
        tracep->declQuad(c+87,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 rd_data", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 clk", false,-1);
        tracep->declBit(c+79,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 rst", false,-1);
        tracep->declBit(c+72,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg_wr_en", false,-1);
        tracep->declBus(c+73,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 wr_addr", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 wr_data", false,-1, 63,0);
        tracep->declBit(c+70,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg1_rd_en", false,-1);
        tracep->declBit(c+100,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg2_rd_en", false,-1);
        tracep->declBus(c+71,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg1_rd_addr", false,-1, 4,0);
        tracep->declBus(c+101,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg2_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+84,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg1_rd_data", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg2_rd_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 regs", true,(i+0), 63,0);}}
        tracep->declBit(c+77,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 r_wr_en", false,-1);
    }
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceRegister(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceFullSub0(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040237_rv_single_cyc_cpu_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040237_rv_single_cyc_cpu_top___024root*>(voidSelf);
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040237_rv_single_cyc_cpu_top___024root__traceFullSub0(Vysyx_22040237_rv_single_cyc_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040237_rv_single_cyc_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[31]),64);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode),8);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2),64);
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en));
        tracep->fullCData(oldp+71,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr),5);
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en));
        tracep->fullCData(oldp+73,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr),5);
        tracep->fullBit(oldp+74,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc));
        tracep->fullCData(oldp+75,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type),6);
        tracep->fullBit(oldp+76,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi));
        tracep->fullBit(oldp+77,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en) 
                                  & (0U != (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr)))));
        tracep->fullBit(oldp+78,(vlSelf->clk));
        tracep->fullBit(oldp+79,(vlSelf->rst));
        tracep->fullIData(oldp+80,(vlSelf->inst_in),32);
        tracep->fullIData(oldp+81,(vlSelf->pc),32);
        tracep->fullQData(oldp+82,(vlSelf->rs2_data),64);
        tracep->fullQData(oldp+84,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en)
                                     ? vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs
                                    [vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr]
                                     : 0ULL)),64);
        tracep->fullBit(oldp+86,((IData)((0x73U == 
                                          (0x707fU 
                                           & vlSelf->inst_in)))));
        tracep->fullQData(oldp+87,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0x11U 
                                                == (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode))
                                                ? (vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1 
                                                   + vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2)
                                                : 0ULL))),64);
        tracep->fullCData(oldp+89,((0x7fU & vlSelf->inst_in)),7);
        tracep->fullCData(oldp+90,((0x1fU & (vlSelf->inst_in 
                                             >> 7U))),5);
        tracep->fullCData(oldp+91,((7U & (vlSelf->inst_in 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+92,((0x1fU & (vlSelf->inst_in 
                                             >> 0xfU))),5);
        tracep->fullSData(oldp+93,((vlSelf->inst_in 
                                    >> 0x14U)),12);
        tracep->fullIData(oldp+94,((vlSelf->inst_in 
                                    >> 0xcU)),20);
        tracep->fullQData(oldp+95,((((- (QData)((IData)(
                                                        (vlSelf->inst_in 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->inst_in 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->inst_in 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->inst_in))))),64);
        tracep->fullBit(oldp+99,((1U & ((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi) 
                                        | (IData)((0x73U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst_in)))))));
        tracep->fullBit(oldp+100,(0U));
        tracep->fullCData(oldp+101,(0U),5);
    }
}
