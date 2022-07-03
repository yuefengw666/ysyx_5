// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top__Syms.h"


void Vcpu_top___024root__traceInitSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu_top___024root__traceInitTop(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcpu_top___024root__traceInitSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+204,"clk", false,-1);
        tracep->declBit(c+205,"rst", false,-1);
        tracep->declBus(c+206,"inst_val", false,-1, 31,0);
        tracep->declBit(c+207,"rdata_63_32", false,-1);
        tracep->declBit(c+204,"cpu_top clk", false,-1);
        tracep->declBit(c+205,"cpu_top rst", false,-1);
        tracep->declBus(c+206,"cpu_top inst_val", false,-1, 31,0);
        tracep->declBit(c+207,"cpu_top rdata_63_32", false,-1);
        tracep->declQuad(c+86,"cpu_top pc_to_ifu", false,-1, 63,0);
        tracep->declQuad(c+86,"cpu_top pc_to_idu", false,-1, 63,0);
        tracep->declBit(c+1,"cpu_top rd_wr_en_to_exu", false,-1);
        tracep->declBit(c+2,"cpu_top rs1_read_en_to_regs", false,-1);
        tracep->declBit(c+3,"cpu_top rs2_read_en_to_regs", false,-1);
        tracep->declBus(c+208,"cpu_top rd_idx_to_exu", false,-1, 4,0);
        tracep->declBus(c+209,"cpu_top rs1_idx_to_regs", false,-1, 4,0);
        tracep->declBus(c+210,"cpu_top rs2_idx_to_regs", false,-1, 4,0);
        tracep->declQuad(c+88,"cpu_top op1_to_exu", false,-1, 63,0);
        tracep->declQuad(c+90,"cpu_top op2_to_exu", false,-1, 63,0);
        tracep->declQuad(c+92,"cpu_top op1_jp_to_exu", false,-1, 63,0);
        tracep->declQuad(c+4,"cpu_top op2_jp_to_exu", false,-1, 63,0);
        tracep->declBus(c+6,"cpu_top exu_info_bus_to_exu", false,-1, 14,0);
        tracep->declBit(c+7,"cpu_top invalid_inst_to_exu", false,-1);
        tracep->declBit(c+1,"cpu_top rd_wr_en_to_lsu", false,-1);
        tracep->declBus(c+208,"cpu_top rd_idx_to_lsu", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top alu_res_to_lsu", false,-1, 63,0);
        tracep->declBit(c+96,"cpu_top pc_jump_flag_to_pc_reg", false,-1);
        tracep->declQuad(c+97,"cpu_top pc_jump_addr_to_pc_reg", false,-1, 63,0);
        tracep->declBit(c+1,"cpu_top rd_wr_en_to_wbu", false,-1);
        tracep->declBus(c+208,"cpu_top rd_idx_to_wbu", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top rd_data_to_wbu", false,-1, 63,0);
        tracep->declBit(c+1,"cpu_top rd_wr_en_to_regs", false,-1);
        tracep->declBus(c+208,"cpu_top rd_idx_to_regs", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top rd_data_to_regs", false,-1, 63,0);
        tracep->declQuad(c+99,"cpu_top rs1_data_to_idu", false,-1, 63,0);
        tracep->declQuad(c+101,"cpu_top rs2_data_to_idu", false,-1, 63,0);
        tracep->declBit(c+211,"cpu_top inst_to_idu", false,-1);
        tracep->declBit(c+204,"cpu_top pc_reg_u0 clk", false,-1);
        tracep->declBit(c+205,"cpu_top pc_reg_u0 rst", false,-1);
        tracep->declBit(c+96,"cpu_top pc_reg_u0 pc_jump_flag_i", false,-1);
        tracep->declQuad(c+97,"cpu_top pc_reg_u0 pc_jump_addr_i", false,-1, 63,0);
        tracep->declQuad(c+86,"cpu_top pc_reg_u0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+86,"cpu_top ifu_u0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+86,"cpu_top ifu_u0 pc_o", false,-1, 63,0);
        tracep->declBus(c+206,"cpu_top ifu_u0 inst_o", false,-1, 31,0);
        tracep->declBit(c+207,"cpu_top ifu_u0 rdata_63_32", false,-1);
        tracep->declQuad(c+103,"cpu_top ifu_u0 rdata", false,-1, 63,0);
        tracep->declBus(c+212,"cpu_top idu_u0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+86,"cpu_top idu_u0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+99,"cpu_top idu_u0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+101,"cpu_top idu_u0 rs2_data_i", false,-1, 63,0);
        tracep->declBit(c+1,"cpu_top idu_u0 rd_wr_en_o", false,-1);
        tracep->declBit(c+2,"cpu_top idu_u0 rs1_read_en_o", false,-1);
        tracep->declBit(c+3,"cpu_top idu_u0 rs2_read_en_o", false,-1);
        tracep->declBus(c+208,"cpu_top idu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+209,"cpu_top idu_u0 rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+210,"cpu_top idu_u0 rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+88,"cpu_top idu_u0 op1_o", false,-1, 63,0);
        tracep->declQuad(c+90,"cpu_top idu_u0 op2_o", false,-1, 63,0);
        tracep->declQuad(c+92,"cpu_top idu_u0 op1_jp_o", false,-1, 63,0);
        tracep->declQuad(c+4,"cpu_top idu_u0 op2_jp_o", false,-1, 63,0);
        tracep->declBus(c+6,"cpu_top idu_u0 exu_info_bus_o", false,-1, 14,0);
        tracep->declBit(c+7,"cpu_top idu_u0 invalid_inst", false,-1);
        tracep->declBus(c+213,"cpu_top idu_u0 opcode", false,-1, 6,0);
        tracep->declBus(c+208,"cpu_top idu_u0 rd", false,-1, 4,0);
        tracep->declBus(c+214,"cpu_top idu_u0 funct3", false,-1, 2,0);
        tracep->declBus(c+215,"cpu_top idu_u0 funct7", false,-1, 6,0);
        tracep->declBus(c+209,"cpu_top idu_u0 rs1", false,-1, 4,0);
        tracep->declBus(c+210,"cpu_top idu_u0 rs2", false,-1, 4,0);
        tracep->declBit(c+8,"cpu_top idu_u0 rv64_R", false,-1);
        tracep->declBit(c+9,"cpu_top idu_u0 rv64_I", false,-1);
        tracep->declBit(c+10,"cpu_top idu_u0 rv64_L", false,-1);
        tracep->declBit(c+11,"cpu_top idu_u0 rv64_S", false,-1);
        tracep->declBit(c+12,"cpu_top idu_u0 rv64_B", false,-1);
        tracep->declBit(c+13,"cpu_top idu_u0 rv64_JAL", false,-1);
        tracep->declBit(c+216,"cpu_top idu_u0 rv64_JALR", false,-1);
        tracep->declBit(c+14,"cpu_top idu_u0 rv64_LUI", false,-1);
        tracep->declBit(c+15,"cpu_top idu_u0 rv64_AUIPC", false,-1);
        tracep->declBit(c+217,"cpu_top idu_u0 rv64_EBREAK", false,-1);
        tracep->declQuad(c+16,"cpu_top idu_u0 imm_i", false,-1, 63,0);
        tracep->declQuad(c+218,"cpu_top idu_u0 imm_s", false,-1, 63,0);
        tracep->declQuad(c+220,"cpu_top idu_u0 imm_b", false,-1, 63,0);
        tracep->declQuad(c+222,"cpu_top idu_u0 imm_u", false,-1, 63,0);
        tracep->declQuad(c+224,"cpu_top idu_u0 imm_j", false,-1, 63,0);
        tracep->declQuad(c+226,"cpu_top idu_u0 imm_u_sl", false,-1, 63,0);
        tracep->declBit(c+18,"cpu_top idu_u0 imm_11_5_0x00", false,-1);
        tracep->declBit(c+19,"cpu_top idu_u0 imm_11_5_0x20", false,-1);
        tracep->declBit(c+228,"cpu_top idu_u0 funct3_0x0", false,-1);
        tracep->declBit(c+229,"cpu_top idu_u0 funct3_0x1", false,-1);
        tracep->declBit(c+230,"cpu_top idu_u0 funct3_0x2", false,-1);
        tracep->declBit(c+231,"cpu_top idu_u0 funct3_0x3", false,-1);
        tracep->declBit(c+232,"cpu_top idu_u0 funct3_0x4", false,-1);
        tracep->declBit(c+233,"cpu_top idu_u0 funct3_0x5", false,-1);
        tracep->declBit(c+234,"cpu_top idu_u0 funct3_0x6", false,-1);
        tracep->declBit(c+235,"cpu_top idu_u0 funct3_0x7", false,-1);
        tracep->declBit(c+236,"cpu_top idu_u0 funct7_0x00", false,-1);
        tracep->declBit(c+237,"cpu_top idu_u0 funct7_0x20", false,-1);
        tracep->declBit(c+20,"cpu_top idu_u0 add", false,-1);
        tracep->declBit(c+21,"cpu_top idu_u0 sub", false,-1);
        tracep->declBit(c+22,"cpu_top idu_u0 sll", false,-1);
        tracep->declBit(c+23,"cpu_top idu_u0 slt", false,-1);
        tracep->declBit(c+24,"cpu_top idu_u0 sltu", false,-1);
        tracep->declBit(c+25,"cpu_top idu_u0 xor_", false,-1);
        tracep->declBit(c+26,"cpu_top idu_u0 srl", false,-1);
        tracep->declBit(c+27,"cpu_top idu_u0 sra", false,-1);
        tracep->declBit(c+28,"cpu_top idu_u0 or_", false,-1);
        tracep->declBit(c+29,"cpu_top idu_u0 and_", false,-1);
        tracep->declBit(c+30,"cpu_top idu_u0 addi", false,-1);
        tracep->declBit(c+31,"cpu_top idu_u0 slli", false,-1);
        tracep->declBit(c+32,"cpu_top idu_u0 slti", false,-1);
        tracep->declBit(c+33,"cpu_top idu_u0 sltiu", false,-1);
        tracep->declBit(c+34,"cpu_top idu_u0 xori", false,-1);
        tracep->declBit(c+35,"cpu_top idu_u0 srli", false,-1);
        tracep->declBit(c+36,"cpu_top idu_u0 srai", false,-1);
        tracep->declBit(c+37,"cpu_top idu_u0 ori", false,-1);
        tracep->declBit(c+38,"cpu_top idu_u0 andi", false,-1);
        tracep->declBit(c+39,"cpu_top idu_u0 beq", false,-1);
        tracep->declBit(c+40,"cpu_top idu_u0 bne", false,-1);
        tracep->declBit(c+41,"cpu_top idu_u0 blt", false,-1);
        tracep->declBit(c+42,"cpu_top idu_u0 bge", false,-1);
        tracep->declBit(c+43,"cpu_top idu_u0 bltu", false,-1);
        tracep->declBit(c+44,"cpu_top idu_u0 bgeu", false,-1);
        tracep->declBit(c+13,"cpu_top idu_u0 jal", false,-1);
        tracep->declBit(c+45,"cpu_top idu_u0 jalr", false,-1);
        tracep->declBit(c+14,"cpu_top idu_u0 lui", false,-1);
        tracep->declBit(c+15,"cpu_top idu_u0 auipc", false,-1);
        tracep->declBit(c+46,"cpu_top idu_u0 ebreak", false,-1);
        tracep->declQuad(c+47,"cpu_top idu_u0 imm", false,-1, 63,0);
        tracep->declBit(c+238,"cpu_top idu_u0 rd_idx_0x", false,-1);
        tracep->declBit(c+2,"cpu_top idu_u0 rs1_need", false,-1);
        tracep->declBit(c+3,"cpu_top idu_u0 rs2_need", false,-1);
        tracep->declBit(c+1,"cpu_top idu_u0 rd_need", false,-1);
        tracep->declBit(c+49,"cpu_top idu_u0 op1_rs1_need", false,-1);
        tracep->declBit(c+50,"cpu_top idu_u0 op1_pc_need", false,-1);
        tracep->declBit(c+51,"cpu_top idu_u0 op2_rs2_need", false,-1);
        tracep->declBit(c+52,"cpu_top idu_u0 op2_imm_need", false,-1);
        tracep->declBit(c+53,"cpu_top idu_u0 op2_0x4_need", false,-1);
        tracep->declBit(c+45,"cpu_top idu_u0 op1_jp_rs1_need", false,-1);
        tracep->declBit(c+54,"cpu_top idu_u0 op1_jp_pc_need", false,-1);
        tracep->declBit(c+55,"cpu_top idu_u0 op2_jp_imm_need", false,-1);
        tracep->declBit(c+56,"cpu_top idu_u0 alu_op", false,-1);
        tracep->declBus(c+57,"cpu_top idu_u0 alu_info_bus", false,-1, 14,0);
        tracep->declBit(c+58,"cpu_top idu_u0 bjp_op", false,-1);
        tracep->declBus(c+59,"cpu_top idu_u0 bjp_info_bus", false,-1, 14,0);
        tracep->declBit(c+204,"cpu_top exu_u0 clk", false,-1);
        tracep->declBit(c+205,"cpu_top exu_u0 rst", false,-1);
        tracep->declBit(c+1,"cpu_top exu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+208,"cpu_top exu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+88,"cpu_top exu_u0 op1_i", false,-1, 63,0);
        tracep->declQuad(c+90,"cpu_top exu_u0 op2_i", false,-1, 63,0);
        tracep->declQuad(c+92,"cpu_top exu_u0 op1_jp_i", false,-1, 63,0);
        tracep->declQuad(c+4,"cpu_top exu_u0 op2_jp_i", false,-1, 63,0);
        tracep->declBus(c+6,"cpu_top exu_u0 exu_info_bus_i", false,-1, 14,0);
        tracep->declBit(c+1,"cpu_top exu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+208,"cpu_top exu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top exu_u0 alu_res_o", false,-1, 63,0);
        tracep->declBit(c+96,"cpu_top exu_u0 pc_jump_flag_o", false,-1);
        tracep->declQuad(c+97,"cpu_top exu_u0 pc_jump_addr_o", false,-1, 63,0);
        tracep->declBit(c+7,"cpu_top exu_u0 invalid_inst", false,-1);
        tracep->declBit(c+60,"cpu_top exu_u0 ebreak", false,-1);
        tracep->declBit(c+61,"cpu_top exu_u0 alu_req", false,-1);
        tracep->declBit(c+62,"cpu_top exu_u0 bjp_req", false,-1);
        tracep->declBit(c+63,"cpu_top exu_u0 op_add", false,-1);
        tracep->declBit(c+64,"cpu_top exu_u0 op_sub", false,-1);
        tracep->declBit(c+65,"cpu_top exu_u0 op_add_sub", false,-1);
        tracep->declArray(c+105,"cpu_top exu_u0 adder_in1", false,-1, 64,0);
        tracep->declArray(c+108,"cpu_top exu_u0 adder_in2", false,-1, 64,0);
        tracep->declArray(c+66,"cpu_top exu_u0 adder_cin", false,-1, 64,0);
        tracep->declArray(c+111,"cpu_top exu_u0 adder_res", false,-1, 64,0);
        tracep->declArray(c+105,"cpu_top exu_u0 adder_op1", false,-1, 64,0);
        tracep->declArray(c+114,"cpu_top exu_u0 adder_op2", false,-1, 64,0);
        tracep->declBit(c+69,"cpu_top exu_u0 op_sll", false,-1);
        tracep->declQuad(c+117,"cpu_top exu_u0 sll_res", false,-1, 63,0);
        tracep->declQuad(c+119,"cpu_top exu_u0 slt_sltu_res", false,-1, 63,0);
        tracep->declBit(c+70,"cpu_top exu_u0 op_slt_sltu", false,-1);
        tracep->declBit(c+121,"cpu_top exu_u0 slt_sltu_cmp_res", false,-1);
        tracep->declQuad(c+122,"cpu_top exu_u0 xor_res", false,-1, 63,0);
        tracep->declBit(c+71,"cpu_top exu_u0 op_xor", false,-1);
        tracep->declQuad(c+88,"cpu_top exu_u0 xor_in1", false,-1, 63,0);
        tracep->declQuad(c+90,"cpu_top exu_u0 xor_in2", false,-1, 63,0);
        tracep->declQuad(c+124,"cpu_top exu_u0 srl_res", false,-1, 63,0);
        tracep->declBit(c+72,"cpu_top exu_u0 op_srl", false,-1);
        tracep->declQuad(c+126,"cpu_top exu_u0 sra_res", false,-1, 63,0);
        tracep->declBit(c+73,"cpu_top exu_u0 op_sra", false,-1);
        tracep->declQuad(c+128,"cpu_top exu_u0 sra_shift_mask", false,-1, 63,0);
        tracep->declQuad(c+130,"cpu_top exu_u0 or_res", false,-1, 63,0);
        tracep->declBit(c+74,"cpu_top exu_u0 op_or", false,-1);
        tracep->declQuad(c+132,"cpu_top exu_u0 and_res", false,-1, 63,0);
        tracep->declBit(c+75,"cpu_top exu_u0 op_and", false,-1);
        tracep->declQuad(c+90,"cpu_top exu_u0 lui_res", false,-1, 63,0);
        tracep->declBit(c+76,"cpu_top exu_u0 op_lui", false,-1);
        tracep->declBit(c+77,"cpu_top exu_u0 op_jal", false,-1);
        tracep->declBit(c+78,"cpu_top exu_u0 op_jalr", false,-1);
        tracep->declBit(c+79,"cpu_top exu_u0 op_beq", false,-1);
        tracep->declBit(c+134,"cpu_top exu_u0 beq_res", false,-1);
        tracep->declBit(c+80,"cpu_top exu_u0 op_bne", false,-1);
        tracep->declBit(c+135,"cpu_top exu_u0 bne_res", false,-1);
        tracep->declBit(c+81,"cpu_top exu_u0 op_blt", false,-1);
        tracep->declBit(c+136,"cpu_top exu_u0 blt_res", false,-1);
        tracep->declBit(c+82,"cpu_top exu_u0 op_bge", false,-1);
        tracep->declBit(c+137,"cpu_top exu_u0 bge_res", false,-1);
        tracep->declBit(c+83,"cpu_top exu_u0 op_bltu", false,-1);
        tracep->declBit(c+138,"cpu_top exu_u0 bltu_res", false,-1);
        tracep->declBit(c+84,"cpu_top exu_u0 op_bgeu", false,-1);
        tracep->declBit(c+139,"cpu_top exu_u0 bgeu_res", false,-1);
        tracep->declBit(c+1,"cpu_top lsu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+208,"cpu_top lsu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top lsu_u0 alu_res_i", false,-1, 63,0);
        tracep->declBit(c+1,"cpu_top lsu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+208,"cpu_top lsu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top lsu_u0 rd_data_o", false,-1, 63,0);
        tracep->declBit(c+1,"cpu_top wbu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+208,"cpu_top wbu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top wbu_u0 rd_data_i", false,-1, 63,0);
        tracep->declBit(c+1,"cpu_top wbu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+208,"cpu_top wbu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top wbu_u0 rd_data_o", false,-1, 63,0);
        tracep->declBit(c+204,"cpu_top regs_u0 clk", false,-1);
        tracep->declBit(c+205,"cpu_top regs_u0 rst", false,-1);
        tracep->declQuad(c+86,"cpu_top regs_u0 pc_i", false,-1, 63,0);
        tracep->declBit(c+1,"cpu_top regs_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+208,"cpu_top regs_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+94,"cpu_top regs_u0 rd_wr_data_i", false,-1, 63,0);
        tracep->declBit(c+2,"cpu_top regs_u0 rs1_read_en_i", false,-1);
        tracep->declBit(c+3,"cpu_top regs_u0 rs2_read_en_i", false,-1);
        tracep->declBus(c+209,"cpu_top regs_u0 rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+210,"cpu_top regs_u0 rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+99,"cpu_top regs_u0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+101,"cpu_top regs_u0 rs2_data_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+140+i*2,"cpu_top regs_u0 regs", true,(i+0), 63,0);}}
        tracep->declBit(c+85,"cpu_top regs_u0 regs_wr_en", false,-1);
        tracep->declBus(c+239,"cpu_top regs_u0 i", false,-1, 31,0);
    }
}

void Vcpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcpu_top___024root__traceRegister(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcpu_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcpu_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcpu_top___024root__traceCleanup, vlSelf);
    }
}

void Vcpu_top___024root__traceFullSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu_top___024root* const __restrict vlSelf = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu_top___024root__traceFullSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp33;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((0U != (0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 7U))) 
                                 & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+2,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+3,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullQData(oldp+4,(((- (QData)((IData)(
                                                      (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                   & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)),64);
        tracep->fullSData(oldp+6,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),15);
        tracep->fullBit(oldp+7,((1U & (~ ((((((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
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
        tracep->fullBit(oldp+8,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R));
        tracep->fullBit(oldp+9,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I));
        tracep->fullBit(oldp+10,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L));
        tracep->fullBit(oldp+11,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S));
        tracep->fullBit(oldp+12,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B));
        tracep->fullBit(oldp+13,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL));
        tracep->fullBit(oldp+14,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI));
        tracep->fullBit(oldp+15,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC));
        tracep->fullQData(oldp+16,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
        tracep->fullBit(oldp+18,((0U == (0x7fU & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U))))));
        tracep->fullBit(oldp+19,((0x20U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U))))));
        tracep->fullBit(oldp+20,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+21,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+22,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (1U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+23,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (2U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+24,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (3U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+25,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+26,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+27,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+28,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (6U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+29,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   & (7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+30,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+31,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (1U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
        tracep->fullBit(oldp+32,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (2U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+33,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (3U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+34,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+35,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
        tracep->fullBit(oldp+36,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 0xcU)))) 
                                  & (0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
        tracep->fullBit(oldp+37,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (6U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+38,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+39,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+40,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (1U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+41,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+42,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+43,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (6U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+44,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xcU))))));
        tracep->fullBit(oldp+45,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
        tracep->fullBit(oldp+46,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
        tracep->fullQData(oldp+47,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
        tracep->fullBit(oldp+49,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+50,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullBit(oldp+51,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullBit(oldp+52,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
        tracep->fullBit(oldp+53,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullBit(oldp+54,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))));
        tracep->fullBit(oldp+55,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullBit(oldp+56,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))));
        tracep->fullSData(oldp+57,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),15);
        tracep->fullBit(oldp+58,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullSData(oldp+59,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),15);
        tracep->fullBit(oldp+60,((IData)((0x4000U == 
                                          (0x4007U 
                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+61,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+62,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+63,((((IData)((8U == (0xfU 
                                                   & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                   | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                  | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr))));
        tracep->fullBit(oldp+64,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
        tracep->fullBit(oldp+65,(((((IData)((8U == 
                                             (0xfU 
                                              & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                    | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                   | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                  | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub))));
        __Vtemp28[0U] = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)
                          ? 1U : 0U);
        __Vtemp28[1U] = 0U;
        __Vtemp28[2U] = 0U;
        tracep->fullWData(oldp+66,(__Vtemp28),65);
        tracep->fullBit(oldp+69,((IData)((0x20U == 
                                          (0x27U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+70,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu));
        tracep->fullBit(oldp+71,((IData)((0x100U == 
                                          (0x107U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+72,((IData)((0x200U == 
                                          (0x207U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+73,((IData)((0x400U == 
                                          (0x407U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+74,((IData)((0x800U == 
                                          (0x807U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+75,((IData)((0x1000U == 
                                          (0x1007U 
                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+76,((IData)((0x2000U == 
                                          (0x2007U 
                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+77,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
        tracep->fullBit(oldp+78,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
        tracep->fullBit(oldp+79,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq));
        tracep->fullBit(oldp+80,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne));
        tracep->fullBit(oldp+81,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt));
        tracep->fullBit(oldp+82,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge));
        tracep->fullBit(oldp+83,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu));
        tracep->fullBit(oldp+84,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
        tracep->fullBit(oldp+85,((((0U != (0x1fU & 
                                           ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                            >> 7U))) 
                                   & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                                  & (0U != (0x1fU & 
                                            ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                             >> 7U))))));
        tracep->fullQData(oldp+86,(vlSelf->cpu_top__DOT__pc_to_ifu),64);
        tracep->fullQData(oldp+88,(vlSelf->cpu_top__DOT__op1_to_exu),64);
        tracep->fullQData(oldp+90,(vlSelf->cpu_top__DOT__op2_to_exu),64);
        tracep->fullQData(oldp+92,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                     & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                    | ((- (QData)((IData)(
                                                          ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                       & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
        tracep->fullQData(oldp+94,(((((((((((- (QData)((IData)(
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
                                             | (~ (1ULL 
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
        tracep->fullBit(oldp+96,(((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
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
        tracep->fullQData(oldp+97,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
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
        tracep->fullQData(oldp+99,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
        tracep->fullQData(oldp+101,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))
                                      ? vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                     [(0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0x14U))]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+103,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
        __Vtemp29[0U] = (IData)(vlSelf->cpu_top__DOT__op1_to_exu);
        __Vtemp29[1U] = (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                 >> 0x20U));
        __Vtemp29[2U] = (1U & (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                       >> 0x3fU)));
        tracep->fullWData(oldp+105,(__Vtemp29),65);
        if (vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) {
            __Vtemp33[0U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U]);
            __Vtemp33[1U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U]);
            __Vtemp33[2U] = (1U & (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]));
        } else {
            __Vtemp33[0U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U];
            __Vtemp33[1U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U];
            __Vtemp33[2U] = (1U & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]);
        }
        tracep->fullWData(oldp+108,(__Vtemp33),65);
        tracep->fullWData(oldp+111,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),65);
        tracep->fullWData(oldp+114,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2),65);
        tracep->fullQData(oldp+117,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     << (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
        tracep->fullQData(oldp+119,((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                      & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])
                                      ? 1ULL : 0ULL)),64);
        tracep->fullBit(oldp+121,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                   & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
        tracep->fullQData(oldp+122,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullQData(oldp+124,(vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res),64);
        tracep->fullQData(oldp+126,((vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                                     | (~ (1ULL >> 
                                           (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))))),64);
        tracep->fullQData(oldp+128,((1ULL >> (0x3fU 
                                              & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
        tracep->fullQData(oldp+130,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     | vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullQData(oldp+132,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     & vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+134,(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res));
        tracep->fullBit(oldp+135,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                   & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res)))));
        tracep->fullBit(oldp+136,(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res));
        tracep->fullBit(oldp+137,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                   & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res)))));
        tracep->fullBit(oldp+138,(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res));
        tracep->fullBit(oldp+139,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                   & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res)))));
        tracep->fullQData(oldp+140,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0]),64);
        tracep->fullQData(oldp+142,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[1]),64);
        tracep->fullQData(oldp+144,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[2]),64);
        tracep->fullQData(oldp+146,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[3]),64);
        tracep->fullQData(oldp+148,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[4]),64);
        tracep->fullQData(oldp+150,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[5]),64);
        tracep->fullQData(oldp+152,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[6]),64);
        tracep->fullQData(oldp+154,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[7]),64);
        tracep->fullQData(oldp+156,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[8]),64);
        tracep->fullQData(oldp+158,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[9]),64);
        tracep->fullQData(oldp+160,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[10]),64);
        tracep->fullQData(oldp+162,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[11]),64);
        tracep->fullQData(oldp+164,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[12]),64);
        tracep->fullQData(oldp+166,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[13]),64);
        tracep->fullQData(oldp+168,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[14]),64);
        tracep->fullQData(oldp+170,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[15]),64);
        tracep->fullQData(oldp+172,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[16]),64);
        tracep->fullQData(oldp+174,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[17]),64);
        tracep->fullQData(oldp+176,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[18]),64);
        tracep->fullQData(oldp+178,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[19]),64);
        tracep->fullQData(oldp+180,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[20]),64);
        tracep->fullQData(oldp+182,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[21]),64);
        tracep->fullQData(oldp+184,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[22]),64);
        tracep->fullQData(oldp+186,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[23]),64);
        tracep->fullQData(oldp+188,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[24]),64);
        tracep->fullQData(oldp+190,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[25]),64);
        tracep->fullQData(oldp+192,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[26]),64);
        tracep->fullQData(oldp+194,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[27]),64);
        tracep->fullQData(oldp+196,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[28]),64);
        tracep->fullQData(oldp+198,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[29]),64);
        tracep->fullQData(oldp+200,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[30]),64);
        tracep->fullQData(oldp+202,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[31]),64);
        tracep->fullBit(oldp+204,(vlSelf->clk));
        tracep->fullBit(oldp+205,(vlSelf->rst));
        tracep->fullIData(oldp+206,(vlSelf->inst_val),32);
        tracep->fullBit(oldp+207,(vlSelf->rdata_63_32));
        tracep->fullCData(oldp+208,((0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                              >> 7U))),5);
        tracep->fullCData(oldp+209,((0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+210,((0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+211,(vlSelf->cpu_top__DOT__inst_to_idu));
        tracep->fullIData(oldp+212,(vlSelf->cpu_top__DOT__inst_to_idu),32);
        tracep->fullCData(oldp+213,((0x7fU & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))),7);
        tracep->fullCData(oldp+214,((7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+215,(((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+216,((IData)((0x67U == 
                                           (0x7fU & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))))));
        tracep->fullBit(oldp+217,((IData)((0x73U == 
                                           (0x7fU & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))))));
        tracep->fullQData(oldp+218,((((- (QData)((IData)(
                                                         ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+220,((((- (QData)((IData)(
                                                         ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+222,((((QData)((IData)(
                                                      (- (IData)(
                                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & (IData)(vlSelf->cpu_top__DOT__inst_to_idu)))))),64);
        tracep->fullQData(oldp+224,((((- (QData)((IData)(
                                                         ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & (IData)(vlSelf->cpu_top__DOT__inst_to_idu)) 
                                                                      | ((0x800U 
                                                                          & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+226,((((QData)((IData)(
                                                      (- (IData)(
                                                                 ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                                  >> 0x1fU))))) 
                                      << 0x2cU) | ((QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & (IData)(vlSelf->cpu_top__DOT__inst_to_idu)))) 
                                                   << 0xcU))),64);
        tracep->fullBit(oldp+228,((0U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+229,((1U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+230,((2U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+231,((3U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+232,((4U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+233,((5U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+234,((6U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+235,((7U == (7U & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+236,((0U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                          >> 0x19U))));
        tracep->fullBit(oldp+237,((0x20U == ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                             >> 0x19U))));
        tracep->fullBit(oldp+238,((0U == (0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                   >> 7U)))));
        tracep->fullIData(oldp+239,(0x20U),32);
    }
}
