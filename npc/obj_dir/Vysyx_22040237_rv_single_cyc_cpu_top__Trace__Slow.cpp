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
        tracep->declBit(c+94,"clk", false,-1);
        tracep->declBit(c+95,"rst", false,-1);
        tracep->declBus(c+96,"inst_in", false,-1, 31,0);
        tracep->declBus(c+97,"pc", false,-1, 31,0);
        tracep->declBit(c+94,"ysyx_22040237_rv_single_cyc_cpu_top clk", false,-1);
        tracep->declBit(c+95,"ysyx_22040237_rv_single_cyc_cpu_top rst", false,-1);
        tracep->declBus(c+96,"ysyx_22040237_rv_single_cyc_cpu_top inst_in", false,-1, 31,0);
        tracep->declBus(c+97,"ysyx_22040237_rv_single_cyc_cpu_top pc", false,-1, 31,0);
        tracep->declBus(c+96,"ysyx_22040237_rv_single_cyc_cpu_top inst", false,-1, 31,0);
        tracep->declQuad(c+1,"ysyx_22040237_rv_single_cyc_cpu_top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22040237_rv_single_cyc_cpu_top rs2_data", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22040237_rv_single_cyc_cpu_top inst_ebreak", false,-1);
        tracep->declBit(c+98,"ysyx_22040237_rv_single_cyc_cpu_top invalid_inst", false,-1);
        tracep->declBus(c+4,"ysyx_22040237_rv_single_cyc_cpu_top inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+5,"ysyx_22040237_rv_single_cyc_cpu_top op1", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040237_rv_single_cyc_cpu_top op2", false,-1, 63,0);
        tracep->declBus(c+9,"ysyx_22040237_rv_single_cyc_cpu_top op1_jump", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22040237_rv_single_cyc_cpu_top op2_jump", false,-1, 31,0);
        tracep->declBit(c+11,"ysyx_22040237_rv_single_cyc_cpu_top jump_flag", false,-1);
        tracep->declBit(c+12,"ysyx_22040237_rv_single_cyc_cpu_top rs1_r_en", false,-1);
        tracep->declBus(c+13,"ysyx_22040237_rv_single_cyc_cpu_top rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+111,"ysyx_22040237_rv_single_cyc_cpu_top rs2_r_en", false,-1);
        tracep->declBus(c+112,"ysyx_22040237_rv_single_cyc_cpu_top rs2_r_addr", false,-1, 4,0);
        tracep->declBit(c+14,"ysyx_22040237_rv_single_cyc_cpu_top rd_w_en", false,-1);
        tracep->declBus(c+15,"ysyx_22040237_rv_single_cyc_cpu_top rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"ysyx_22040237_rv_single_cyc_cpu_top rd_data", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22040237_rv_single_cyc_cpu_top pc_jump_addr", false,-1, 31,0);
        tracep->declBit(c+94,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_pc_reg_u0 clk", false,-1);
        tracep->declBit(c+95,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_pc_reg_u0 rst", false,-1);
        tracep->declBit(c+11,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_pc_reg_u0 jump_flag", false,-1);
        tracep->declBus(c+18,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_pc_reg_u0 pc_jump_addr", false,-1, 31,0);
        tracep->declBus(c+97,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_pc_reg_u0 pc_reg", false,-1, 31,0);
        tracep->declBus(c+96,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_ifu_u0 inst_i", false,-1, 31,0);
        tracep->declBus(c+96,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_ifu_u0 inst_o", false,-1, 31,0);
        tracep->declBit(c+95,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rst", false,-1);
        tracep->declBus(c+97,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 pc", false,-1, 31,0);
        tracep->declBus(c+96,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst", false,-1, 31,0);
        tracep->declQuad(c+1,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs1_data", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+5,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 op1", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 op2", false,-1, 63,0);
        tracep->declBus(c+9,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 op1_jump", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 op2_jump", false,-1, 31,0);
        tracep->declBit(c+11,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 jump_flag", false,-1);
        tracep->declBit(c+3,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_ebreak", false,-1);
        tracep->declBit(c+98,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 invalid_inst", false,-1);
        tracep->declBit(c+12,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs1_r_en", false,-1);
        tracep->declBus(c+13,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+111,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs2_r_en", false,-1);
        tracep->declBus(c+112,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs2_r_addr", false,-1, 4,0);
        tracep->declBit(c+14,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rd_w_en", false,-1);
        tracep->declBus(c+15,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rd_w_addr", false,-1, 4,0);
        tracep->declBus(c+99,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 opcode", false,-1, 6,0);
        tracep->declBus(c+100,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rd", false,-1, 4,0);
        tracep->declBus(c+101,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 func3", false,-1, 2,0);
        tracep->declBus(c+102,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 rs1", false,-1, 4,0);
        tracep->declBus(c+103,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 imm_i", false,-1, 11,0);
        tracep->declBus(c+104,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 imm_u_j", false,-1, 19,0);
        tracep->declQuad(c+19,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 src_i", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 src_u", false,-1, 63,0);
        tracep->declBus(c+107,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 src_j", false,-1, 31,0);
        tracep->declBit(c+111,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_R", false,-1);
        tracep->declBit(c+21,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_I", false,-1);
        tracep->declBit(c+111,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_S", false,-1);
        tracep->declBit(c+111,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_B", false,-1);
        tracep->declBit(c+22,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_U", false,-1);
        tracep->declBit(c+23,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 type_J", false,-1);
        tracep->declBus(c+24,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_type", false,-1, 5,0);
        tracep->declBit(c+25,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_addi", false,-1);
        tracep->declBit(c+26,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_auipc", false,-1);
        tracep->declBit(c+27,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_lui", false,-1);
        tracep->declBit(c+23,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_jal", false,-1);
        tracep->declBit(c+28,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_jalr", false,-1);
        tracep->declBit(c+108,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_idu_u0 inst_dummy", false,-1);
        tracep->declBit(c+94,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 clk", false,-1);
        tracep->declBit(c+95,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 rst", false,-1);
        tracep->declBus(c+4,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+5,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 op1", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 op2", false,-1, 63,0);
        tracep->declBus(c+9,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 op1_jump", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 op2_jump", false,-1, 31,0);
        tracep->declBit(c+3,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 inst_ebreak", false,-1);
        tracep->declBit(c+98,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 invalid_inst", false,-1);
        tracep->declQuad(c+16,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 rd_data", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_exu_u0 pc_jump_addr", false,-1, 31,0);
        tracep->declBit(c+94,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 clk", false,-1);
        tracep->declBit(c+95,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 rst", false,-1);
        tracep->declBit(c+14,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg_wr_en", false,-1);
        tracep->declBus(c+15,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 wr_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 wr_data", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg1_rd_en", false,-1);
        tracep->declBit(c+111,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg2_rd_en", false,-1);
        tracep->declBus(c+13,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg1_rd_addr", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg2_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg1_rd_data", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 reg2_rd_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+30+i*2,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 regs", true,(i+0), 63,0);}}
        tracep->declBit(c+29,"ysyx_22040237_rv_single_cyc_cpu_top ysyx_22040237_reg_file_u0 r_wr_en", false,-1);
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
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_data),64);
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_ebreak));
        tracep->fullCData(oldp+4,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_opcode),8);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2),64);
        tracep->fullIData(oldp+9,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op1_jump),32);
        tracep->fullIData(oldp+10,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__op2_jump),32);
        tracep->fullBit(oldp+11,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jal) 
                                  | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr))));
        tracep->fullBit(oldp+12,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_en));
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rs1_r_addr),5);
        tracep->fullBit(oldp+14,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en));
        tracep->fullCData(oldp+15,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr),5);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_data),64);
        tracep->fullIData(oldp+18,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__pc_jump_addr),32);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__src_i),64);
        tracep->fullBit(oldp+21,((((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi) 
                                   | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_ebreak)) 
                                  | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr))));
        tracep->fullBit(oldp+22,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc) 
                                  | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui))));
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jal));
        tracep->fullCData(oldp+24,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_type),6);
        tracep->fullBit(oldp+25,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi));
        tracep->fullBit(oldp+26,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc));
        tracep->fullBit(oldp+27,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui));
        tracep->fullBit(oldp+28,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr));
        tracep->fullBit(oldp+29,(((IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_en) 
                                  & (0U != (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__rd_w_addr)))));
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[0]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[1]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[2]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[3]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[4]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[5]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[6]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[7]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[8]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[9]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[10]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[11]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[12]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[13]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[14]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[15]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[16]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[17]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[18]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[19]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[20]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[21]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[22]),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[23]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[24]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[25]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[26]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[27]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[28]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[29]),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[30]),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_reg_file_u0__DOT__regs[31]),64);
        tracep->fullBit(oldp+94,(vlSelf->clk));
        tracep->fullBit(oldp+95,(vlSelf->rst));
        tracep->fullIData(oldp+96,(vlSelf->inst_in),32);
        tracep->fullIData(oldp+97,(vlSelf->pc),32);
        tracep->fullBit(oldp+98,((1U & (~ (((((((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelf->inst_in)))) 
                                                | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_addi)) 
                                               | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__inst_ebreak)) 
                                              | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_auipc)) 
                                             | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jal)) 
                                           | (IData)(vlSelf->ysyx_22040237_rv_single_cyc_cpu_top__DOT__ysyx_22040237_idu_u0__DOT__inst_jalr))))));
        tracep->fullCData(oldp+99,((0x7fU & vlSelf->inst_in)),7);
        tracep->fullCData(oldp+100,((0x1fU & (vlSelf->inst_in 
                                              >> 7U))),5);
        tracep->fullCData(oldp+101,((7U & (vlSelf->inst_in 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+102,((0x1fU & (vlSelf->inst_in 
                                              >> 0xfU))),5);
        tracep->fullSData(oldp+103,((vlSelf->inst_in 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+104,((vlSelf->inst_in 
                                     >> 0xcU)),20);
        tracep->fullQData(oldp+105,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->inst_in 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->inst_in))))),64);
        tracep->fullIData(oldp+107,((((- (IData)((vlSelf->inst_in 
                                                  >> 0x1fU))) 
                                      << 0x15U) | (
                                                   (0x100000U 
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
        tracep->fullBit(oldp+108,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->inst_in)))))));
        tracep->fullQData(oldp+109,(0ULL),64);
        tracep->fullBit(oldp+111,(0U));
        tracep->fullCData(oldp+112,(0U),5);
    }
}
