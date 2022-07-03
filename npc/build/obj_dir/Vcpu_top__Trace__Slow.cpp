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
        tracep->declBit(c+246,"clk", false,-1);
        tracep->declBit(c+247,"rst", false,-1);
        tracep->declBit(c+248,"rdata_63_32", false,-1);
        tracep->declBit(c+246,"cpu_top clk", false,-1);
        tracep->declBit(c+247,"cpu_top rst", false,-1);
        tracep->declBit(c+248,"cpu_top rdata_63_32", false,-1);
        tracep->declQuad(c+1,"cpu_top pc_to_ifu", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top pc_to_idu", false,-1, 63,0);
        tracep->declBus(c+3,"cpu_top inst_to_idu", false,-1, 31,0);
        tracep->declBit(c+4,"cpu_top rd_wr_en_to_exu", false,-1);
        tracep->declBit(c+5,"cpu_top rs1_read_en_to_regs", false,-1);
        tracep->declBit(c+6,"cpu_top rs2_read_en_to_regs", false,-1);
        tracep->declBus(c+7,"cpu_top rd_idx_to_exu", false,-1, 4,0);
        tracep->declBus(c+8,"cpu_top rs1_idx_to_regs", false,-1, 4,0);
        tracep->declBus(c+9,"cpu_top rs2_idx_to_regs", false,-1, 4,0);
        tracep->declQuad(c+10,"cpu_top op1_to_exu", false,-1, 63,0);
        tracep->declQuad(c+12,"cpu_top op2_to_exu", false,-1, 63,0);
        tracep->declQuad(c+14,"cpu_top op1_jp_to_exu", false,-1, 63,0);
        tracep->declQuad(c+16,"cpu_top op2_jp_to_exu", false,-1, 63,0);
        tracep->declBus(c+18,"cpu_top exu_info_bus_to_exu", false,-1, 14,0);
        tracep->declBit(c+19,"cpu_top invalid_inst_to_exu", false,-1);
        tracep->declBit(c+4,"cpu_top rd_wr_en_to_lsu", false,-1);
        tracep->declBus(c+7,"cpu_top rd_idx_to_lsu", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top alu_res_to_lsu", false,-1, 63,0);
        tracep->declBit(c+22,"cpu_top pc_jump_flag_to_pc_reg", false,-1);
        tracep->declQuad(c+23,"cpu_top pc_jump_addr_to_pc_reg", false,-1, 63,0);
        tracep->declBit(c+4,"cpu_top rd_wr_en_to_wbu", false,-1);
        tracep->declBus(c+7,"cpu_top rd_idx_to_wbu", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top rd_data_to_wbu", false,-1, 63,0);
        tracep->declBit(c+4,"cpu_top rd_wr_en_to_regs", false,-1);
        tracep->declBus(c+7,"cpu_top rd_idx_to_regs", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top rd_data_to_regs", false,-1, 63,0);
        tracep->declQuad(c+25,"cpu_top rs1_data_to_idu", false,-1, 63,0);
        tracep->declQuad(c+27,"cpu_top rs2_data_to_idu", false,-1, 63,0);
        tracep->declBit(c+246,"cpu_top pc_reg_u0 clk", false,-1);
        tracep->declBit(c+247,"cpu_top pc_reg_u0 rst", false,-1);
        tracep->declBit(c+22,"cpu_top pc_reg_u0 pc_jump_flag_i", false,-1);
        tracep->declQuad(c+23,"cpu_top pc_reg_u0 pc_jump_addr_i", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top pc_reg_u0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top ifu_u0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top ifu_u0 pc_o", false,-1, 63,0);
        tracep->declBus(c+3,"cpu_top ifu_u0 inst_o", false,-1, 31,0);
        tracep->declBit(c+248,"cpu_top ifu_u0 rdata_63_32", false,-1);
        tracep->declQuad(c+29,"cpu_top ifu_u0 rdata", false,-1, 63,0);
        tracep->declBus(c+3,"cpu_top idu_u0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+1,"cpu_top idu_u0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+25,"cpu_top idu_u0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+27,"cpu_top idu_u0 rs2_data_i", false,-1, 63,0);
        tracep->declBit(c+4,"cpu_top idu_u0 rd_wr_en_o", false,-1);
        tracep->declBit(c+5,"cpu_top idu_u0 rs1_read_en_o", false,-1);
        tracep->declBit(c+6,"cpu_top idu_u0 rs2_read_en_o", false,-1);
        tracep->declBus(c+7,"cpu_top idu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+8,"cpu_top idu_u0 rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+9,"cpu_top idu_u0 rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+10,"cpu_top idu_u0 op1_o", false,-1, 63,0);
        tracep->declQuad(c+12,"cpu_top idu_u0 op2_o", false,-1, 63,0);
        tracep->declQuad(c+14,"cpu_top idu_u0 op1_jp_o", false,-1, 63,0);
        tracep->declQuad(c+16,"cpu_top idu_u0 op2_jp_o", false,-1, 63,0);
        tracep->declBus(c+18,"cpu_top idu_u0 exu_info_bus_o", false,-1, 14,0);
        tracep->declBit(c+19,"cpu_top idu_u0 invalid_inst", false,-1);
        tracep->declBus(c+31,"cpu_top idu_u0 opcode", false,-1, 6,0);
        tracep->declBus(c+7,"cpu_top idu_u0 rd", false,-1, 4,0);
        tracep->declBus(c+32,"cpu_top idu_u0 funct3", false,-1, 2,0);
        tracep->declBus(c+33,"cpu_top idu_u0 funct7", false,-1, 6,0);
        tracep->declBus(c+8,"cpu_top idu_u0 rs1", false,-1, 4,0);
        tracep->declBus(c+9,"cpu_top idu_u0 rs2", false,-1, 4,0);
        tracep->declBit(c+34,"cpu_top idu_u0 rv64_R", false,-1);
        tracep->declBit(c+35,"cpu_top idu_u0 rv64_I", false,-1);
        tracep->declBit(c+36,"cpu_top idu_u0 rv64_L", false,-1);
        tracep->declBit(c+37,"cpu_top idu_u0 rv64_S", false,-1);
        tracep->declBit(c+38,"cpu_top idu_u0 rv64_B", false,-1);
        tracep->declBit(c+39,"cpu_top idu_u0 rv64_JAL", false,-1);
        tracep->declBit(c+40,"cpu_top idu_u0 rv64_JALR", false,-1);
        tracep->declBit(c+41,"cpu_top idu_u0 rv64_LUI", false,-1);
        tracep->declBit(c+42,"cpu_top idu_u0 rv64_AUIPC", false,-1);
        tracep->declBit(c+43,"cpu_top idu_u0 rv64_EBREAK", false,-1);
        tracep->declQuad(c+44,"cpu_top idu_u0 imm_i", false,-1, 63,0);
        tracep->declQuad(c+46,"cpu_top idu_u0 imm_s", false,-1, 63,0);
        tracep->declQuad(c+48,"cpu_top idu_u0 imm_b", false,-1, 63,0);
        tracep->declQuad(c+50,"cpu_top idu_u0 imm_u", false,-1, 63,0);
        tracep->declQuad(c+52,"cpu_top idu_u0 imm_j", false,-1, 63,0);
        tracep->declQuad(c+54,"cpu_top idu_u0 imm_u_sl", false,-1, 63,0);
        tracep->declBit(c+56,"cpu_top idu_u0 imm_11_5_0x00", false,-1);
        tracep->declBit(c+57,"cpu_top idu_u0 imm_11_5_0x20", false,-1);
        tracep->declBit(c+58,"cpu_top idu_u0 funct3_0x0", false,-1);
        tracep->declBit(c+59,"cpu_top idu_u0 funct3_0x1", false,-1);
        tracep->declBit(c+60,"cpu_top idu_u0 funct3_0x2", false,-1);
        tracep->declBit(c+61,"cpu_top idu_u0 funct3_0x3", false,-1);
        tracep->declBit(c+62,"cpu_top idu_u0 funct3_0x4", false,-1);
        tracep->declBit(c+63,"cpu_top idu_u0 funct3_0x5", false,-1);
        tracep->declBit(c+64,"cpu_top idu_u0 funct3_0x6", false,-1);
        tracep->declBit(c+65,"cpu_top idu_u0 funct3_0x7", false,-1);
        tracep->declBit(c+66,"cpu_top idu_u0 funct7_0x00", false,-1);
        tracep->declBit(c+67,"cpu_top idu_u0 funct7_0x20", false,-1);
        tracep->declBit(c+68,"cpu_top idu_u0 add", false,-1);
        tracep->declBit(c+69,"cpu_top idu_u0 sub", false,-1);
        tracep->declBit(c+70,"cpu_top idu_u0 sll", false,-1);
        tracep->declBit(c+71,"cpu_top idu_u0 slt", false,-1);
        tracep->declBit(c+72,"cpu_top idu_u0 sltu", false,-1);
        tracep->declBit(c+73,"cpu_top idu_u0 xor_", false,-1);
        tracep->declBit(c+74,"cpu_top idu_u0 srl", false,-1);
        tracep->declBit(c+75,"cpu_top idu_u0 sra", false,-1);
        tracep->declBit(c+76,"cpu_top idu_u0 or_", false,-1);
        tracep->declBit(c+77,"cpu_top idu_u0 and_", false,-1);
        tracep->declBit(c+78,"cpu_top idu_u0 addi", false,-1);
        tracep->declBit(c+79,"cpu_top idu_u0 slli", false,-1);
        tracep->declBit(c+80,"cpu_top idu_u0 slti", false,-1);
        tracep->declBit(c+81,"cpu_top idu_u0 sltiu", false,-1);
        tracep->declBit(c+82,"cpu_top idu_u0 xori", false,-1);
        tracep->declBit(c+83,"cpu_top idu_u0 srli", false,-1);
        tracep->declBit(c+84,"cpu_top idu_u0 srai", false,-1);
        tracep->declBit(c+85,"cpu_top idu_u0 ori", false,-1);
        tracep->declBit(c+86,"cpu_top idu_u0 andi", false,-1);
        tracep->declBit(c+87,"cpu_top idu_u0 beq", false,-1);
        tracep->declBit(c+88,"cpu_top idu_u0 bne", false,-1);
        tracep->declBit(c+89,"cpu_top idu_u0 blt", false,-1);
        tracep->declBit(c+90,"cpu_top idu_u0 bge", false,-1);
        tracep->declBit(c+91,"cpu_top idu_u0 bltu", false,-1);
        tracep->declBit(c+92,"cpu_top idu_u0 bgeu", false,-1);
        tracep->declBit(c+39,"cpu_top idu_u0 jal", false,-1);
        tracep->declBit(c+93,"cpu_top idu_u0 jalr", false,-1);
        tracep->declBit(c+41,"cpu_top idu_u0 lui", false,-1);
        tracep->declBit(c+42,"cpu_top idu_u0 auipc", false,-1);
        tracep->declBit(c+94,"cpu_top idu_u0 ebreak", false,-1);
        tracep->declQuad(c+95,"cpu_top idu_u0 imm", false,-1, 63,0);
        tracep->declBit(c+97,"cpu_top idu_u0 rd_idx_0x", false,-1);
        tracep->declBit(c+5,"cpu_top idu_u0 rs1_need", false,-1);
        tracep->declBit(c+6,"cpu_top idu_u0 rs2_need", false,-1);
        tracep->declBit(c+4,"cpu_top idu_u0 rd_need", false,-1);
        tracep->declBit(c+98,"cpu_top idu_u0 op1_rs1_need", false,-1);
        tracep->declBit(c+99,"cpu_top idu_u0 op1_pc_need", false,-1);
        tracep->declBit(c+100,"cpu_top idu_u0 op2_rs2_need", false,-1);
        tracep->declBit(c+101,"cpu_top idu_u0 op2_imm_need", false,-1);
        tracep->declBit(c+102,"cpu_top idu_u0 op2_0x4_need", false,-1);
        tracep->declBit(c+93,"cpu_top idu_u0 op1_jp_rs1_need", false,-1);
        tracep->declBit(c+103,"cpu_top idu_u0 op1_jp_pc_need", false,-1);
        tracep->declBit(c+104,"cpu_top idu_u0 op2_jp_imm_need", false,-1);
        tracep->declBit(c+105,"cpu_top idu_u0 alu_op", false,-1);
        tracep->declBus(c+106,"cpu_top idu_u0 alu_info_bus", false,-1, 14,0);
        tracep->declBit(c+107,"cpu_top idu_u0 bjp_op", false,-1);
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+108+i*1,"cpu_top idu_u0 bjp_info_bus", true,(i+0), 14,0);}}
        tracep->declBit(c+246,"cpu_top exu_u0 clk", false,-1);
        tracep->declBit(c+247,"cpu_top exu_u0 rst", false,-1);
        tracep->declBit(c+4,"cpu_top exu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+7,"cpu_top exu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+10,"cpu_top exu_u0 op1_i", false,-1, 63,0);
        tracep->declQuad(c+12,"cpu_top exu_u0 op2_i", false,-1, 63,0);
        tracep->declQuad(c+14,"cpu_top exu_u0 op1_jp_i", false,-1, 63,0);
        tracep->declQuad(c+16,"cpu_top exu_u0 op2_jp_i", false,-1, 63,0);
        tracep->declBus(c+18,"cpu_top exu_u0 exu_info_bus_i", false,-1, 14,0);
        tracep->declBit(c+4,"cpu_top exu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+7,"cpu_top exu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top exu_u0 alu_res_o", false,-1, 63,0);
        tracep->declBit(c+22,"cpu_top exu_u0 pc_jump_flag_o", false,-1);
        tracep->declQuad(c+23,"cpu_top exu_u0 pc_jump_addr_o", false,-1, 63,0);
        tracep->declBit(c+19,"cpu_top exu_u0 invalid_inst", false,-1);
        tracep->declBit(c+123,"cpu_top exu_u0 ebreak", false,-1);
        tracep->declBit(c+124,"cpu_top exu_u0 alu_req", false,-1);
        tracep->declBit(c+125,"cpu_top exu_u0 bjp_req", false,-1);
        tracep->declBit(c+126,"cpu_top exu_u0 op_add", false,-1);
        tracep->declBit(c+127,"cpu_top exu_u0 op_sub", false,-1);
        tracep->declBit(c+128,"cpu_top exu_u0 op_add_sub", false,-1);
        tracep->declArray(c+129,"cpu_top exu_u0 adder_in1", false,-1, 64,0);
        tracep->declArray(c+132,"cpu_top exu_u0 adder_in2", false,-1, 64,0);
        tracep->declArray(c+135,"cpu_top exu_u0 adder_cin", false,-1, 64,0);
        tracep->declArray(c+138,"cpu_top exu_u0 adder_res", false,-1, 64,0);
        tracep->declArray(c+129,"cpu_top exu_u0 adder_op1", false,-1, 64,0);
        tracep->declArray(c+141,"cpu_top exu_u0 adder_op2", false,-1, 64,0);
        tracep->declBit(c+144,"cpu_top exu_u0 op_sll", false,-1);
        tracep->declQuad(c+145,"cpu_top exu_u0 sll_res", false,-1, 63,0);
        tracep->declQuad(c+147,"cpu_top exu_u0 slt_sltu_res", false,-1, 63,0);
        tracep->declBit(c+149,"cpu_top exu_u0 op_slt_sltu", false,-1);
        tracep->declBit(c+150,"cpu_top exu_u0 slt_sltu_cmp_res", false,-1);
        tracep->declQuad(c+151,"cpu_top exu_u0 xor_res", false,-1, 63,0);
        tracep->declBit(c+153,"cpu_top exu_u0 op_xor", false,-1);
        tracep->declQuad(c+10,"cpu_top exu_u0 xor_in1", false,-1, 63,0);
        tracep->declQuad(c+12,"cpu_top exu_u0 xor_in2", false,-1, 63,0);
        tracep->declQuad(c+154,"cpu_top exu_u0 srl_res", false,-1, 63,0);
        tracep->declBit(c+156,"cpu_top exu_u0 op_srl", false,-1);
        tracep->declQuad(c+157,"cpu_top exu_u0 sra_res", false,-1, 63,0);
        tracep->declBit(c+159,"cpu_top exu_u0 op_sra", false,-1);
        tracep->declQuad(c+160,"cpu_top exu_u0 sra_shift_mask", false,-1, 63,0);
        tracep->declQuad(c+162,"cpu_top exu_u0 or_res", false,-1, 63,0);
        tracep->declBit(c+164,"cpu_top exu_u0 op_or", false,-1);
        tracep->declQuad(c+165,"cpu_top exu_u0 and_res", false,-1, 63,0);
        tracep->declBit(c+167,"cpu_top exu_u0 op_and", false,-1);
        tracep->declQuad(c+12,"cpu_top exu_u0 lui_res", false,-1, 63,0);
        tracep->declBit(c+168,"cpu_top exu_u0 op_lui", false,-1);
        tracep->declBit(c+169,"cpu_top exu_u0 op_jal", false,-1);
        tracep->declBit(c+170,"cpu_top exu_u0 op_jalr", false,-1);
        tracep->declBit(c+171,"cpu_top exu_u0 op_beq", false,-1);
        tracep->declBit(c+172,"cpu_top exu_u0 beq_res", false,-1);
        tracep->declBit(c+173,"cpu_top exu_u0 op_bne", false,-1);
        tracep->declBit(c+174,"cpu_top exu_u0 bne_res", false,-1);
        tracep->declBit(c+175,"cpu_top exu_u0 op_blt", false,-1);
        tracep->declBit(c+176,"cpu_top exu_u0 blt_res", false,-1);
        tracep->declBit(c+177,"cpu_top exu_u0 op_bge", false,-1);
        tracep->declBit(c+178,"cpu_top exu_u0 bge_res", false,-1);
        tracep->declBit(c+179,"cpu_top exu_u0 op_bltu", false,-1);
        tracep->declBit(c+176,"cpu_top exu_u0 bltu_res", false,-1);
        tracep->declBit(c+180,"cpu_top exu_u0 op_bgeu", false,-1);
        tracep->declBit(c+178,"cpu_top exu_u0 bgeu_res", false,-1);
        tracep->declBit(c+4,"cpu_top lsu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+7,"cpu_top lsu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top lsu_u0 alu_res_i", false,-1, 63,0);
        tracep->declBit(c+4,"cpu_top lsu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+7,"cpu_top lsu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top lsu_u0 rd_data_o", false,-1, 63,0);
        tracep->declBit(c+4,"cpu_top wbu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+7,"cpu_top wbu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top wbu_u0 rd_data_i", false,-1, 63,0);
        tracep->declBit(c+4,"cpu_top wbu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+7,"cpu_top wbu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top wbu_u0 rd_data_o", false,-1, 63,0);
        tracep->declBit(c+246,"cpu_top ysyx_22040237_regs_u0 clk", false,-1);
        tracep->declBit(c+247,"cpu_top ysyx_22040237_regs_u0 rst", false,-1);
        tracep->declQuad(c+1,"cpu_top ysyx_22040237_regs_u0 pc_i", false,-1, 63,0);
        tracep->declBit(c+4,"cpu_top ysyx_22040237_regs_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+7,"cpu_top ysyx_22040237_regs_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+20,"cpu_top ysyx_22040237_regs_u0 rd_wr_data_i", false,-1, 63,0);
        tracep->declBit(c+5,"cpu_top ysyx_22040237_regs_u0 rs1_read_en_i", false,-1);
        tracep->declBit(c+6,"cpu_top ysyx_22040237_regs_u0 rs2_read_en_i", false,-1);
        tracep->declBus(c+8,"cpu_top ysyx_22040237_regs_u0 rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+9,"cpu_top ysyx_22040237_regs_u0 rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+25,"cpu_top ysyx_22040237_regs_u0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+27,"cpu_top ysyx_22040237_regs_u0 rs2_data_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+181+i*2,"cpu_top ysyx_22040237_regs_u0 regs", true,(i+0), 63,0);}}
        tracep->declBit(c+245,"cpu_top ysyx_22040237_regs_u0 regs_wr_en", false,-1);
        tracep->declBus(c+249,"cpu_top ysyx_22040237_regs_u0 i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp35;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu_top__DOT__pc_to_ifu),64);
        tracep->fullIData(oldp+3,((IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)),32);
        tracep->fullBit(oldp+4,(((0U != (0x1fU & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 7U)))) 
                                 & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+5,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+6,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullCData(oldp+7,((0x1fU & (IData)(
                                                   (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                    >> 7U)))),5);
        tracep->fullCData(oldp+8,((0x1fU & (IData)(
                                                   (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                    >> 0xfU)))),5);
        tracep->fullCData(oldp+9,((0x1fU & (IData)(
                                                   (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                    >> 0x14U)))),5);
        tracep->fullQData(oldp+10,(vlSelf->cpu_top__DOT__op1_to_exu),64);
        tracep->fullQData(oldp+12,(vlSelf->cpu_top__DOT__op2_to_exu),64);
        tracep->fullQData(oldp+14,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                     & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                    | ((- (QData)((IData)(
                                                          ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                       & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
        tracep->fullQData(oldp+16,(((- (QData)((IData)(
                                                       (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                    & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)),64);
        tracep->fullSData(oldp+18,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),15);
        tracep->fullBit(oldp+19,((1U & (~ ((((((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                              | (IData)(
                                                        (0x67ULL 
                                                         == 
                                                         (0x7fULL 
                                                          & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)))) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                           | (IData)(
                                                     (0x73ULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))))));
        tracep->fullQData(oldp+20,(((((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+22,((1U & ((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
                                              | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                             | (0U 
                                                == 
                                                ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                                  | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                                 | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))) 
                                            | (0U != 
                                               ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                                 | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                                | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))) 
                                           | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]) 
                                          | (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])) 
                                         | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]) 
                                        | (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])))));
        tracep->fullQData(oldp+23,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
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
        tracep->fullQData(oldp+25,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
        tracep->fullQData(oldp+27,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))
                                     ? vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs
                                    [(0x1fU & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0x14U)))]
                                     : 0ULL)),64);
        tracep->fullQData(oldp+29,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
        tracep->fullCData(oldp+31,((0x7fU & (IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))),7);
        tracep->fullCData(oldp+32,((7U & (IData)((vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                  >> 0xcU)))),3);
        tracep->fullCData(oldp+33,((0x7fU & (IData)(
                                                    (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                     >> 0x19U)))),7);
        tracep->fullBit(oldp+34,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R));
        tracep->fullBit(oldp+35,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I));
        tracep->fullBit(oldp+36,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L));
        tracep->fullBit(oldp+37,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S));
        tracep->fullBit(oldp+38,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B));
        tracep->fullBit(oldp+39,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL));
        tracep->fullBit(oldp+40,((IData)((0x67ULL == 
                                          (0x7fULL 
                                           & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)))));
        tracep->fullBit(oldp+41,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI));
        tracep->fullBit(oldp+42,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC));
        tracep->fullBit(oldp+43,((IData)((0x73ULL == 
                                          (0x7fULL 
                                           & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata)))));
        tracep->fullQData(oldp+44,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
        tracep->fullQData(oldp+46,((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                    >> 0x1fU)))))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & ((IData)(
                                                                             (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                              >> 0x19U)) 
                                                                     << 5U)) 
                                                                 | (0x1fU 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                               >> 7U)))))))),64);
        tracep->fullQData(oldp+48,((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                    >> 0x1fU)))))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & ((IData)(
                                                                             (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                              >> 0x1fU)) 
                                                                     << 0xcU)) 
                                                                 | ((0x800U 
                                                                     & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 7U)) 
                                                                        << 0xbU)) 
                                                                    | ((0x7e0U 
                                                                        & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x19U)) 
                                                                           << 5U)) 
                                                                       | (0x1eU 
                                                                          & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 8U)) 
                                                                             << 1U))))))))),64);
        tracep->fullQData(oldp+50,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(
                                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                           >> 0xcU)) 
                                                                  << 0xcU))))),64);
        tracep->fullQData(oldp+52,((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                    >> 0x1fU)))))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & ((IData)(
                                                                              (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                               >> 0x1fU)) 
                                                                      << 0x14U)) 
                                                                  | ((0xff000U 
                                                                      & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0xcU)) 
                                                                         << 0xcU)) 
                                                                     | ((0x800U 
                                                                         & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x14U)) 
                                                                            << 0xbU)) 
                                                                        | (0x7feU 
                                                                           & ((IData)(
                                                                                (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                                >> 0x15U)) 
                                                                              << 1U))))))))),64);
        tracep->fullQData(oldp+54,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                            >> 0x1fU))))))) 
                                     << 0x2cU) | ((QData)((IData)(
                                                                  ((IData)(
                                                                           (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                                            >> 0xcU)) 
                                                                   << 0xcU))) 
                                                  << 0xcU))),64);
        tracep->fullBit(oldp+56,((0U == (0x7fU & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U))))));
        tracep->fullBit(oldp+57,((0x20U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U))))));
        tracep->fullBit(oldp+58,((0U == (7U & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+59,((1U == (7U & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+60,((2U == (7U & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+61,((3U == (7U & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+62,((4U == (7U & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+63,((5U == (7U & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+64,((6U == (7U & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+65,((7U == (7U & (IData)(
                                                      (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+66,((0U == (0x7fU & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0x19U))))));
        tracep->fullBit(oldp+67,((0x20U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 0x19U))))));
        tracep->fullBit(oldp+68,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0ULL == 
                                             (0xfe007000ULL 
                                              & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+69,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x40000000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+70,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x1000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+71,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x2000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+72,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x3000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+73,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x4000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+74,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x5000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+75,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x40005000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+76,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x6000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+77,((IData)(((1U == (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R))) 
                                          & (0x7000ULL 
                                             == (0xfe007000ULL 
                                                 & vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata))))));
        tracep->fullBit(oldp+78,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (0U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+79,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (1U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))) 
                                  & (0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
        tracep->fullBit(oldp+80,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (2U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+81,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (3U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+82,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (4U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+83,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (5U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))) 
                                  & (0U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U)))))));
        tracep->fullBit(oldp+84,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (5U == (7U & (IData)(
                                                          (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                           >> 0xcU))))) 
                                  & (0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U)))))));
        tracep->fullBit(oldp+85,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (6U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+86,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                  & (7U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+87,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (0U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+88,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (1U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+89,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (4U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+90,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (5U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+91,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (6U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+92,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  & (7U == (7U & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 0xcU)))))));
        tracep->fullBit(oldp+93,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
        tracep->fullBit(oldp+94,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
        tracep->fullQData(oldp+95,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
        tracep->fullBit(oldp+97,((0U == (0x1fU & (IData)(
                                                         (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                          >> 7U))))));
        tracep->fullBit(oldp+98,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+99,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullBit(oldp+100,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullBit(oldp+101,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
        tracep->fullBit(oldp+102,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullBit(oldp+103,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))));
        tracep->fullBit(oldp+104,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullBit(oldp+105,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
        tracep->fullSData(oldp+106,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),15);
        tracep->fullBit(oldp+107,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullSData(oldp+108,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[0]),15);
        tracep->fullSData(oldp+109,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[1]),15);
        tracep->fullSData(oldp+110,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[2]),15);
        tracep->fullSData(oldp+111,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[3]),15);
        tracep->fullSData(oldp+112,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[4]),15);
        tracep->fullSData(oldp+113,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[5]),15);
        tracep->fullSData(oldp+114,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[6]),15);
        tracep->fullSData(oldp+115,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[7]),15);
        tracep->fullSData(oldp+116,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[8]),15);
        tracep->fullSData(oldp+117,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[9]),15);
        tracep->fullSData(oldp+118,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[10]),15);
        tracep->fullSData(oldp+119,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[11]),15);
        tracep->fullSData(oldp+120,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[12]),15);
        tracep->fullSData(oldp+121,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[13]),15);
        tracep->fullSData(oldp+122,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus[14]),15);
        tracep->fullBit(oldp+123,((1U & ((IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+124,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+125,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+126,((((IData)((8U == 
                                             (0xfU 
                                              & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                    | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                   | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr))));
        tracep->fullBit(oldp+127,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
        tracep->fullBit(oldp+128,(((((IData)((8U == 
                                              (0xfU 
                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                     | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                    | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                   | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub))));
        __Vtemp28[0U] = (IData)(vlSelf->cpu_top__DOT__op1_to_exu);
        __Vtemp28[1U] = (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                 >> 0x20U));
        __Vtemp28[2U] = (1U & (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                       >> 0x3fU)));
        tracep->fullWData(oldp+129,(__Vtemp28),65);
        if (vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) {
            __Vtemp32[0U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U]);
            __Vtemp32[1U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U]);
            __Vtemp32[2U] = (1U & (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]));
        } else {
            __Vtemp32[0U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U];
            __Vtemp32[1U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U];
            __Vtemp32[2U] = (1U & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]);
        }
        tracep->fullWData(oldp+132,(__Vtemp32),65);
        __Vtemp35[0U] = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)
                          ? 1U : 0U);
        __Vtemp35[1U] = 0U;
        __Vtemp35[2U] = 0U;
        tracep->fullWData(oldp+135,(__Vtemp35),65);
        tracep->fullWData(oldp+138,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),65);
        tracep->fullWData(oldp+141,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2),65);
        tracep->fullBit(oldp+144,((IData)((0x20U == 
                                           (0x27U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+145,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     << (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
        tracep->fullQData(oldp+147,((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                      & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])
                                      ? 1ULL : 0ULL)),64);
        tracep->fullBit(oldp+149,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu));
        tracep->fullBit(oldp+150,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                                   & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
        tracep->fullQData(oldp+151,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+153,((IData)((0x100U == 
                                           (0x107U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+154,(vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res),64);
        tracep->fullBit(oldp+156,((IData)((0x200U == 
                                           (0x207U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+157,((vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                                     | (~ (1ULL >> 
                                           (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))))),64);
        tracep->fullBit(oldp+159,((IData)((0x400U == 
                                           (0x407U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+160,((1ULL >> (0x3fU 
                                              & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
        tracep->fullQData(oldp+162,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     | vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+164,((IData)((0x800U == 
                                           (0x807U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+165,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     & vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+167,((IData)((0x1000U 
                                           == (0x1007U 
                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+168,((IData)((0x2000U 
                                           == (0x2007U 
                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+169,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
        tracep->fullBit(oldp+170,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
        tracep->fullBit(oldp+171,((IData)((0x21U == 
                                           (0x27U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+172,((0U == ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                           | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                          | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))));
        tracep->fullBit(oldp+173,((IData)((0x41U == 
                                           (0x47U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+174,((0U != ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                           | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                          | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))));
        tracep->fullBit(oldp+175,((IData)((0x81U == 
                                           (0x87U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+176,((1U & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
        tracep->fullBit(oldp+177,((IData)((0x101U == 
                                           (0x107U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+178,((1U & (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]))));
        tracep->fullBit(oldp+179,((IData)((0x201U == 
                                           (0x207U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+180,((IData)((0x401U == 
                                           (0x407U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+181,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[0]),64);
        tracep->fullQData(oldp+183,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[1]),64);
        tracep->fullQData(oldp+185,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[2]),64);
        tracep->fullQData(oldp+187,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[3]),64);
        tracep->fullQData(oldp+189,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[4]),64);
        tracep->fullQData(oldp+191,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[5]),64);
        tracep->fullQData(oldp+193,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[6]),64);
        tracep->fullQData(oldp+195,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[7]),64);
        tracep->fullQData(oldp+197,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[8]),64);
        tracep->fullQData(oldp+199,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[9]),64);
        tracep->fullQData(oldp+201,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[10]),64);
        tracep->fullQData(oldp+203,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[11]),64);
        tracep->fullQData(oldp+205,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[12]),64);
        tracep->fullQData(oldp+207,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[13]),64);
        tracep->fullQData(oldp+209,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[14]),64);
        tracep->fullQData(oldp+211,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[15]),64);
        tracep->fullQData(oldp+213,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[16]),64);
        tracep->fullQData(oldp+215,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[17]),64);
        tracep->fullQData(oldp+217,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[18]),64);
        tracep->fullQData(oldp+219,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[19]),64);
        tracep->fullQData(oldp+221,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[20]),64);
        tracep->fullQData(oldp+223,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[21]),64);
        tracep->fullQData(oldp+225,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[22]),64);
        tracep->fullQData(oldp+227,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[23]),64);
        tracep->fullQData(oldp+229,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[24]),64);
        tracep->fullQData(oldp+231,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[25]),64);
        tracep->fullQData(oldp+233,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[26]),64);
        tracep->fullQData(oldp+235,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[27]),64);
        tracep->fullQData(oldp+237,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[28]),64);
        tracep->fullQData(oldp+239,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[29]),64);
        tracep->fullQData(oldp+241,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[30]),64);
        tracep->fullQData(oldp+243,(vlSelf->cpu_top__DOT__ysyx_22040237_regs_u0__DOT__regs[31]),64);
        tracep->fullBit(oldp+245,((((0U != (0x1fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                             >> 7U)))) 
                                    & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                                   & (0U != (0x1fU 
                                             & (IData)(
                                                       (vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+246,(vlSelf->clk));
        tracep->fullBit(oldp+247,(vlSelf->rst));
        tracep->fullBit(oldp+248,(vlSelf->rdata_63_32));
        tracep->fullIData(oldp+249,(0x20U),32);
    }
}
