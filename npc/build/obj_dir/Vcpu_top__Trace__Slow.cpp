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
        tracep->declBit(c+217,"clk", false,-1);
        tracep->declBit(c+218,"rst", false,-1);
        tracep->declBus(c+219,"inst_val", false,-1, 31,0);
        tracep->declBit(c+220,"rdata_63_32", false,-1);
        tracep->declBit(c+217,"cpu_top clk", false,-1);
        tracep->declBit(c+218,"cpu_top rst", false,-1);
        tracep->declBus(c+219,"cpu_top inst_val", false,-1, 31,0);
        tracep->declBit(c+220,"cpu_top rdata_63_32", false,-1);
        tracep->declQuad(c+1,"cpu_top pc_to_ifu", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top pc_to_idu", false,-1, 63,0);
        tracep->declBit(c+221,"cpu_top rd_wr_en_to_exu", false,-1);
        tracep->declBit(c+3,"cpu_top rs1_read_en_to_regs", false,-1);
        tracep->declBit(c+4,"cpu_top rs2_read_en_to_regs", false,-1);
        tracep->declBus(c+222,"cpu_top rd_idx_to_exu", false,-1, 4,0);
        tracep->declBus(c+223,"cpu_top rs1_idx_to_regs", false,-1, 4,0);
        tracep->declBus(c+224,"cpu_top rs2_idx_to_regs", false,-1, 4,0);
        tracep->declQuad(c+5,"cpu_top op1_to_exu", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top op2_to_exu", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top op1_jp_to_exu", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top op2_jp_to_exu", false,-1, 63,0);
        tracep->declBus(c+13,"cpu_top exu_info_bus_to_exu", false,-1, 14,0);
        tracep->declBit(c+225,"cpu_top invalid_inst_to_exu", false,-1);
        tracep->declBit(c+221,"cpu_top rd_wr_en_to_lsu", false,-1);
        tracep->declBus(c+222,"cpu_top rd_idx_to_lsu", false,-1, 4,0);
        tracep->declQuad(c+14,"cpu_top alu_res_to_lsu", false,-1, 63,0);
        tracep->declBit(c+16,"cpu_top pc_jump_flag_to_pc_reg", false,-1);
        tracep->declQuad(c+17,"cpu_top pc_jump_addr_to_pc_reg", false,-1, 63,0);
        tracep->declBus(c+19,"cpu_top ls_info_bus_to_isu", false,-1, 6,0);
        tracep->declQuad(c+20,"cpu_top rs2_store_to_isu", false,-1, 63,0);
        tracep->declBit(c+221,"cpu_top rd_wr_en_to_wbu", false,-1);
        tracep->declBus(c+222,"cpu_top rd_idx_to_wbu", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top rd_data_to_wbu", false,-1, 63,0);
        tracep->declBit(c+24,"cpu_top mem_wen_to_wbu", false,-1);
        tracep->declBus(c+25,"cpu_top mem_wmask_to_wbu", false,-1, 7,0);
        tracep->declQuad(c+26,"cpu_top mem_waddr_to_wbu", false,-1, 63,0);
        tracep->declQuad(c+20,"cpu_top mem_wdata_to_wbu", false,-1, 63,0);
        tracep->declBit(c+221,"cpu_top rd_wr_en_to_regs", false,-1);
        tracep->declBus(c+222,"cpu_top rd_idx_to_regs", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top rd_data_to_regs", false,-1, 63,0);
        tracep->declQuad(c+28,"cpu_top rs1_data_to_idu", false,-1, 63,0);
        tracep->declQuad(c+30,"cpu_top rs2_data_to_idu", false,-1, 63,0);
        tracep->declBit(c+217,"cpu_top pc_reg_u0 clk", false,-1);
        tracep->declBit(c+218,"cpu_top pc_reg_u0 rst", false,-1);
        tracep->declBit(c+16,"cpu_top pc_reg_u0 pc_jump_flag_i", false,-1);
        tracep->declQuad(c+17,"cpu_top pc_reg_u0 pc_jump_addr_i", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top pc_reg_u0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top ifu_u0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top ifu_u0 pc_o", false,-1, 63,0);
        tracep->declBus(c+219,"cpu_top ifu_u0 inst_o", false,-1, 31,0);
        tracep->declBit(c+220,"cpu_top ifu_u0 rdata_63_32", false,-1);
        tracep->declQuad(c+32,"cpu_top ifu_u0 rdata", false,-1, 63,0);
        tracep->declBus(c+219,"cpu_top idu_u0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+1,"cpu_top idu_u0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+28,"cpu_top idu_u0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+30,"cpu_top idu_u0 rs2_data_i", false,-1, 63,0);
        tracep->declBit(c+221,"cpu_top idu_u0 rd_wr_en_o", false,-1);
        tracep->declBit(c+3,"cpu_top idu_u0 rs1_read_en_o", false,-1);
        tracep->declBit(c+4,"cpu_top idu_u0 rs2_read_en_o", false,-1);
        tracep->declBus(c+222,"cpu_top idu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+223,"cpu_top idu_u0 rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+224,"cpu_top idu_u0 rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+5,"cpu_top idu_u0 op1_o", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top idu_u0 op2_o", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top idu_u0 op1_jp_o", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top idu_u0 op2_jp_o", false,-1, 63,0);
        tracep->declBus(c+13,"cpu_top idu_u0 exu_info_bus_o", false,-1, 14,0);
        tracep->declBit(c+225,"cpu_top idu_u0 invalid_inst", false,-1);
        tracep->declBus(c+226,"cpu_top idu_u0 opcode", false,-1, 6,0);
        tracep->declBus(c+222,"cpu_top idu_u0 rd", false,-1, 4,0);
        tracep->declBus(c+227,"cpu_top idu_u0 funct3", false,-1, 2,0);
        tracep->declBus(c+228,"cpu_top idu_u0 funct7", false,-1, 6,0);
        tracep->declBus(c+223,"cpu_top idu_u0 rs1", false,-1, 4,0);
        tracep->declBus(c+224,"cpu_top idu_u0 rs2", false,-1, 4,0);
        tracep->declBit(c+34,"cpu_top idu_u0 rv64_R", false,-1);
        tracep->declBit(c+35,"cpu_top idu_u0 rv64_I", false,-1);
        tracep->declBit(c+36,"cpu_top idu_u0 rv64_L", false,-1);
        tracep->declBit(c+37,"cpu_top idu_u0 rv64_S", false,-1);
        tracep->declBit(c+38,"cpu_top idu_u0 rv64_B", false,-1);
        tracep->declBit(c+39,"cpu_top idu_u0 rv64_JAL", false,-1);
        tracep->declBit(c+229,"cpu_top idu_u0 rv64_JALR", false,-1);
        tracep->declBit(c+40,"cpu_top idu_u0 rv64_LUI", false,-1);
        tracep->declBit(c+41,"cpu_top idu_u0 rv64_AUIPC", false,-1);
        tracep->declBit(c+230,"cpu_top idu_u0 rv64_EBREAK", false,-1);
        tracep->declQuad(c+42,"cpu_top idu_u0 imm_i", false,-1, 63,0);
        tracep->declQuad(c+231,"cpu_top idu_u0 imm_s", false,-1, 63,0);
        tracep->declQuad(c+233,"cpu_top idu_u0 imm_b", false,-1, 63,0);
        tracep->declQuad(c+235,"cpu_top idu_u0 imm_u", false,-1, 63,0);
        tracep->declQuad(c+237,"cpu_top idu_u0 imm_j", false,-1, 63,0);
        tracep->declBit(c+44,"cpu_top idu_u0 imm_11_5_0x00", false,-1);
        tracep->declBit(c+45,"cpu_top idu_u0 imm_11_5_0x20", false,-1);
        tracep->declBit(c+239,"cpu_top idu_u0 funct3_0x0", false,-1);
        tracep->declBit(c+240,"cpu_top idu_u0 funct3_0x1", false,-1);
        tracep->declBit(c+241,"cpu_top idu_u0 funct3_0x2", false,-1);
        tracep->declBit(c+242,"cpu_top idu_u0 funct3_0x3", false,-1);
        tracep->declBit(c+243,"cpu_top idu_u0 funct3_0x4", false,-1);
        tracep->declBit(c+244,"cpu_top idu_u0 funct3_0x5", false,-1);
        tracep->declBit(c+245,"cpu_top idu_u0 funct3_0x6", false,-1);
        tracep->declBit(c+246,"cpu_top idu_u0 funct3_0x7", false,-1);
        tracep->declBit(c+247,"cpu_top idu_u0 funct7_0x00", false,-1);
        tracep->declBit(c+248,"cpu_top idu_u0 funct7_0x20", false,-1);
        tracep->declBit(c+249,"cpu_top idu_u0 add", false,-1);
        tracep->declBit(c+250,"cpu_top idu_u0 sub", false,-1);
        tracep->declBit(c+251,"cpu_top idu_u0 sll", false,-1);
        tracep->declBit(c+252,"cpu_top idu_u0 slt", false,-1);
        tracep->declBit(c+253,"cpu_top idu_u0 sltu", false,-1);
        tracep->declBit(c+254,"cpu_top idu_u0 xor_", false,-1);
        tracep->declBit(c+255,"cpu_top idu_u0 srl", false,-1);
        tracep->declBit(c+256,"cpu_top idu_u0 sra", false,-1);
        tracep->declBit(c+257,"cpu_top idu_u0 or_", false,-1);
        tracep->declBit(c+258,"cpu_top idu_u0 and_", false,-1);
        tracep->declBit(c+259,"cpu_top idu_u0 addi", false,-1);
        tracep->declBit(c+260,"cpu_top idu_u0 slli", false,-1);
        tracep->declBit(c+261,"cpu_top idu_u0 slti", false,-1);
        tracep->declBit(c+262,"cpu_top idu_u0 sltiu", false,-1);
        tracep->declBit(c+263,"cpu_top idu_u0 xori", false,-1);
        tracep->declBit(c+264,"cpu_top idu_u0 srli", false,-1);
        tracep->declBit(c+265,"cpu_top idu_u0 srai", false,-1);
        tracep->declBit(c+266,"cpu_top idu_u0 ori", false,-1);
        tracep->declBit(c+267,"cpu_top idu_u0 andi", false,-1);
        tracep->declBit(c+268,"cpu_top idu_u0 lb", false,-1);
        tracep->declBit(c+269,"cpu_top idu_u0 lh", false,-1);
        tracep->declBit(c+270,"cpu_top idu_u0 lw", false,-1);
        tracep->declBit(c+271,"cpu_top idu_u0 ld", false,-1);
        tracep->declBit(c+46,"cpu_top idu_u0 lbu", false,-1);
        tracep->declBit(c+47,"cpu_top idu_u0 lhu", false,-1);
        tracep->declBit(c+272,"cpu_top idu_u0 beq", false,-1);
        tracep->declBit(c+273,"cpu_top idu_u0 bne", false,-1);
        tracep->declBit(c+274,"cpu_top idu_u0 blt", false,-1);
        tracep->declBit(c+275,"cpu_top idu_u0 bge", false,-1);
        tracep->declBit(c+276,"cpu_top idu_u0 bltu", false,-1);
        tracep->declBit(c+277,"cpu_top idu_u0 bgeu", false,-1);
        tracep->declBit(c+278,"cpu_top idu_u0 sb", false,-1);
        tracep->declBit(c+279,"cpu_top idu_u0 sh", false,-1);
        tracep->declBit(c+280,"cpu_top idu_u0 sw", false,-1);
        tracep->declBit(c+281,"cpu_top idu_u0 sd", false,-1);
        tracep->declBit(c+39,"cpu_top idu_u0 jal", false,-1);
        tracep->declBit(c+48,"cpu_top idu_u0 jalr", false,-1);
        tracep->declBit(c+40,"cpu_top idu_u0 lui", false,-1);
        tracep->declBit(c+41,"cpu_top idu_u0 auipc", false,-1);
        tracep->declBit(c+49,"cpu_top idu_u0 ebreak", false,-1);
        tracep->declQuad(c+50,"cpu_top idu_u0 imm", false,-1, 63,0);
        tracep->declBit(c+282,"cpu_top idu_u0 rd_idx_0x", false,-1);
        tracep->declBit(c+3,"cpu_top idu_u0 rs1_need", false,-1);
        tracep->declBit(c+4,"cpu_top idu_u0 rs2_need", false,-1);
        tracep->declBit(c+221,"cpu_top idu_u0 rd_need", false,-1);
        tracep->declBit(c+52,"cpu_top idu_u0 op1_rs1_need", false,-1);
        tracep->declBit(c+53,"cpu_top idu_u0 op1_pc_need", false,-1);
        tracep->declBit(c+54,"cpu_top idu_u0 op2_rs2_need", false,-1);
        tracep->declBit(c+55,"cpu_top idu_u0 op2_imm_need", false,-1);
        tracep->declBit(c+56,"cpu_top idu_u0 op2_0x4_need", false,-1);
        tracep->declBit(c+48,"cpu_top idu_u0 op1_jp_rs1_need", false,-1);
        tracep->declBit(c+57,"cpu_top idu_u0 op1_jp_pc_need", false,-1);
        tracep->declBit(c+58,"cpu_top idu_u0 op2_jp_imm_need", false,-1);
        tracep->declBit(c+37,"cpu_top idu_u0 op2_jp_rs2_need", false,-1);
        tracep->declBit(c+59,"cpu_top idu_u0 alu_op", false,-1);
        tracep->declBus(c+60,"cpu_top idu_u0 alu_info_bus", false,-1, 14,0);
        tracep->declBit(c+61,"cpu_top idu_u0 bjp_op", false,-1);
        tracep->declBus(c+62,"cpu_top idu_u0 bjp_info_bus", false,-1, 14,0);
        tracep->declBit(c+63,"cpu_top idu_u0 ls_op", false,-1);
        tracep->declBit(c+64,"cpu_top idu_u0 ls_usign", false,-1);
        tracep->declBus(c+65,"cpu_top idu_u0 ls_info_bus", false,-1, 14,0);
        tracep->declBit(c+217,"cpu_top exu_u0 clk", false,-1);
        tracep->declBit(c+218,"cpu_top exu_u0 rst", false,-1);
        tracep->declBit(c+221,"cpu_top exu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+222,"cpu_top exu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+5,"cpu_top exu_u0 op1_i", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top exu_u0 op2_i", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top exu_u0 op1_jp_i", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top exu_u0 op2_jp_i", false,-1, 63,0);
        tracep->declBus(c+13,"cpu_top exu_u0 exu_info_bus_i", false,-1, 14,0);
        tracep->declBit(c+221,"cpu_top exu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+222,"cpu_top exu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+14,"cpu_top exu_u0 alu_res_o", false,-1, 63,0);
        tracep->declBus(c+19,"cpu_top exu_u0 ls_info_bus_o", false,-1, 6,0);
        tracep->declQuad(c+20,"cpu_top exu_u0 rs2_store_o", false,-1, 63,0);
        tracep->declBit(c+16,"cpu_top exu_u0 pc_jump_flag_o", false,-1);
        tracep->declQuad(c+17,"cpu_top exu_u0 pc_jump_addr_o", false,-1, 63,0);
        tracep->declBit(c+225,"cpu_top exu_u0 invalid_inst", false,-1);
        tracep->declBit(c+66,"cpu_top exu_u0 ebreak", false,-1);
        tracep->declBit(c+67,"cpu_top exu_u0 alu_req", false,-1);
        tracep->declBit(c+68,"cpu_top exu_u0 bjp_req", false,-1);
        tracep->declBit(c+69,"cpu_top exu_u0 ls_req", false,-1);
        tracep->declBit(c+70,"cpu_top exu_u0 op_add", false,-1);
        tracep->declBit(c+71,"cpu_top exu_u0 op_add_need", false,-1);
        tracep->declBit(c+72,"cpu_top exu_u0 op_sub", false,-1);
        tracep->declBit(c+73,"cpu_top exu_u0 op_sub_need", false,-1);
        tracep->declBit(c+74,"cpu_top exu_u0 op_add_sub", false,-1);
        tracep->declQuad(c+5,"cpu_top exu_u0 adder_in1", false,-1, 63,0);
        tracep->declQuad(c+75,"cpu_top exu_u0 adder_in2", false,-1, 63,0);
        tracep->declQuad(c+77,"cpu_top exu_u0 adder_cin", false,-1, 63,0);
        tracep->declBit(c+79,"cpu_top exu_u0 adder_cout", false,-1);
        tracep->declQuad(c+80,"cpu_top exu_u0 adder_res", false,-1, 63,0);
        tracep->declQuad(c+80,"cpu_top exu_u0 add_sub_res", false,-1, 63,0);
        tracep->declQuad(c+82,"cpu_top exu_u0 sll_res", false,-1, 63,0);
        tracep->declBit(c+84,"cpu_top exu_u0 op_sll", false,-1);
        tracep->declQuad(c+85,"cpu_top exu_u0 slt_res", false,-1, 63,0);
        tracep->declBit(c+87,"cpu_top exu_u0 op_slt", false,-1);
        tracep->declBit(c+88,"cpu_top exu_u0 slt_cmp_res", false,-1);
        tracep->declQuad(c+89,"cpu_top exu_u0 sltu_res", false,-1, 63,0);
        tracep->declBit(c+91,"cpu_top exu_u0 op_sltu", false,-1);
        tracep->declBit(c+92,"cpu_top exu_u0 sltu_cmp_res", false,-1);
        tracep->declQuad(c+93,"cpu_top exu_u0 xor_res", false,-1, 63,0);
        tracep->declBit(c+95,"cpu_top exu_u0 op_xor", false,-1);
        tracep->declQuad(c+5,"cpu_top exu_u0 xor_in1", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top exu_u0 xor_in2", false,-1, 63,0);
        tracep->declQuad(c+96,"cpu_top exu_u0 srl_res", false,-1, 63,0);
        tracep->declBit(c+98,"cpu_top exu_u0 op_srl", false,-1);
        tracep->declQuad(c+99,"cpu_top exu_u0 sra_res", false,-1, 63,0);
        tracep->declBit(c+101,"cpu_top exu_u0 op_sra", false,-1);
        tracep->declQuad(c+102,"cpu_top exu_u0 sra_shift_mask", false,-1, 63,0);
        tracep->declQuad(c+104,"cpu_top exu_u0 or_res", false,-1, 63,0);
        tracep->declBit(c+106,"cpu_top exu_u0 op_or", false,-1);
        tracep->declQuad(c+107,"cpu_top exu_u0 and_res", false,-1, 63,0);
        tracep->declBit(c+109,"cpu_top exu_u0 op_and", false,-1);
        tracep->declQuad(c+7,"cpu_top exu_u0 lui_res", false,-1, 63,0);
        tracep->declBit(c+110,"cpu_top exu_u0 op_lui", false,-1);
        tracep->declBit(c+111,"cpu_top exu_u0 op_jal", false,-1);
        tracep->declBit(c+112,"cpu_top exu_u0 op_jalr", false,-1);
        tracep->declBit(c+113,"cpu_top exu_u0 beq_cmp", false,-1);
        tracep->declBit(c+114,"cpu_top exu_u0 bne_cmp", false,-1);
        tracep->declBit(c+88,"cpu_top exu_u0 blt_cmp", false,-1);
        tracep->declBit(c+115,"cpu_top exu_u0 bge_cmp", false,-1);
        tracep->declBit(c+92,"cpu_top exu_u0 bltu_cmp", false,-1);
        tracep->declBit(c+79,"cpu_top exu_u0 bgeu_cmp", false,-1);
        tracep->declBit(c+116,"cpu_top exu_u0 op_beq", false,-1);
        tracep->declBit(c+117,"cpu_top exu_u0 beq_res", false,-1);
        tracep->declBit(c+118,"cpu_top exu_u0 op_bne", false,-1);
        tracep->declBit(c+119,"cpu_top exu_u0 bne_res", false,-1);
        tracep->declBit(c+120,"cpu_top exu_u0 op_blt", false,-1);
        tracep->declBit(c+121,"cpu_top exu_u0 blt_res", false,-1);
        tracep->declBit(c+122,"cpu_top exu_u0 op_bge", false,-1);
        tracep->declBit(c+123,"cpu_top exu_u0 bge_res", false,-1);
        tracep->declBit(c+124,"cpu_top exu_u0 op_bltu", false,-1);
        tracep->declBit(c+125,"cpu_top exu_u0 bltu_res", false,-1);
        tracep->declBit(c+126,"cpu_top exu_u0 op_bgeu", false,-1);
        tracep->declBit(c+127,"cpu_top exu_u0 bgeu_res", false,-1);
        tracep->declBit(c+128,"cpu_top exu_u0 op_load", false,-1);
        tracep->declBit(c+129,"cpu_top exu_u0 op_store", false,-1);
        tracep->declBit(c+130,"cpu_top exu_u0 ls_usign", false,-1);
        tracep->declBit(c+131,"cpu_top exu_u0 ls_byte", false,-1);
        tracep->declBit(c+132,"cpu_top exu_u0 ls_db", false,-1);
        tracep->declBit(c+133,"cpu_top exu_u0 ls_word", false,-1);
        tracep->declBit(c+134,"cpu_top exu_u0 ls_dw", false,-1);
        tracep->declBit(c+221,"cpu_top lsu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+222,"cpu_top lsu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+14,"cpu_top lsu_u0 alu_res_i", false,-1, 63,0);
        tracep->declBus(c+19,"cpu_top lsu_u0 ls_info_bus_i", false,-1, 6,0);
        tracep->declQuad(c+20,"cpu_top lsu_u0 rs2_store_i", false,-1, 63,0);
        tracep->declBit(c+221,"cpu_top lsu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+222,"cpu_top lsu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top lsu_u0 rd_data_o", false,-1, 63,0);
        tracep->declBit(c+24,"cpu_top lsu_u0 mem_wen_o", false,-1);
        tracep->declBus(c+25,"cpu_top lsu_u0 mem_wmask_o", false,-1, 7,0);
        tracep->declQuad(c+26,"cpu_top lsu_u0 mem_waddr_o", false,-1, 63,0);
        tracep->declQuad(c+20,"cpu_top lsu_u0 mem_wdata_o", false,-1, 63,0);
        tracep->declBit(c+135,"cpu_top lsu_u0 ls_load", false,-1);
        tracep->declBit(c+24,"cpu_top lsu_u0 ls_store", false,-1);
        tracep->declBit(c+136,"cpu_top lsu_u0 ls_usign", false,-1);
        tracep->declBit(c+137,"cpu_top lsu_u0 ls_byte", false,-1);
        tracep->declBit(c+138,"cpu_top lsu_u0 ls_db", false,-1);
        tracep->declBit(c+139,"cpu_top lsu_u0 ls_word", false,-1);
        tracep->declBit(c+140,"cpu_top lsu_u0 ls_dw", false,-1);
        tracep->declBit(c+135,"cpu_top lsu_u0 mem_ren", false,-1);
        tracep->declQuad(c+141,"cpu_top lsu_u0 mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+143,"cpu_top lsu_u0 mem_rdata", false,-1, 63,0);
        tracep->declBit(c+145,"cpu_top lsu_u0 lb", false,-1);
        tracep->declBit(c+146,"cpu_top lsu_u0 lh", false,-1);
        tracep->declBit(c+147,"cpu_top lsu_u0 lw", false,-1);
        tracep->declBit(c+148,"cpu_top lsu_u0 ld", false,-1);
        tracep->declBit(c+149,"cpu_top lsu_u0 lbu", false,-1);
        tracep->declBit(c+150,"cpu_top lsu_u0 lhu", false,-1);
        tracep->declQuad(c+151,"cpu_top lsu_u0 load_data", false,-1, 63,0);
        tracep->declBit(c+221,"cpu_top wbu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+222,"cpu_top wbu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top wbu_u0 rd_data_i", false,-1, 63,0);
        tracep->declBit(c+24,"cpu_top wbu_u0 mem_wen_i", false,-1);
        tracep->declBus(c+25,"cpu_top wbu_u0 mem_wmask_i", false,-1, 7,0);
        tracep->declQuad(c+26,"cpu_top wbu_u0 mem_waddr_i", false,-1, 63,0);
        tracep->declQuad(c+20,"cpu_top wbu_u0 mem_wdata_i", false,-1, 63,0);
        tracep->declBit(c+221,"cpu_top wbu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+222,"cpu_top wbu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top wbu_u0 rd_data_o", false,-1, 63,0);
        tracep->declBit(c+217,"cpu_top regs_u0 clk", false,-1);
        tracep->declBit(c+218,"cpu_top regs_u0 rst", false,-1);
        tracep->declQuad(c+1,"cpu_top regs_u0 pc_i", false,-1, 63,0);
        tracep->declBit(c+221,"cpu_top regs_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+222,"cpu_top regs_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top regs_u0 rd_wr_data_i", false,-1, 63,0);
        tracep->declBit(c+3,"cpu_top regs_u0 rs1_read_en_i", false,-1);
        tracep->declBit(c+4,"cpu_top regs_u0 rs2_read_en_i", false,-1);
        tracep->declBus(c+223,"cpu_top regs_u0 rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+224,"cpu_top regs_u0 rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+28,"cpu_top regs_u0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+30,"cpu_top regs_u0 rs2_data_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+153+i*2,"cpu_top regs_u0 regs", true,(i+0), 63,0);}}
        tracep->declBit(c+283,"cpu_top regs_u0 regs_wr_en", false,-1);
        tracep->declBus(c+284,"cpu_top regs_u0 i", false,-1, 31,0);
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu_top__DOT__pc_to_ifu),64);
        tracep->fullBit(oldp+3,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+4,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullQData(oldp+5,(vlSelf->cpu_top__DOT__op1_to_exu),64);
        tracep->fullQData(oldp+7,(vlSelf->cpu_top__DOT__op2_to_exu),64);
        tracep->fullQData(oldp+9,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                    & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                   | ((- (QData)((IData)(
                                                         ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                      & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
        tracep->fullQData(oldp+11,(vlSelf->cpu_top__DOT__op2_jp_to_exu),64);
        tracep->fullSData(oldp+13,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),15);
        tracep->fullQData(oldp+14,(vlSelf->cpu_top__DOT__alu_res_to_lsu),64);
        tracep->fullBit(oldp+16,(((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
                                        | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                       | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))) 
                                      | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                         & (0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))) 
                                     | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt) 
                                        & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))) 
                                    | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                       & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))) 
                                   | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu) 
                                      & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))) 
                                  | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                     & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
        tracep->fullQData(oldp+17,(((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                      & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                     | ((- (QData)((IData)(
                                                           ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                        & vlSelf->cpu_top__DOT__pc_to_ifu)) 
                                    + vlSelf->cpu_top__DOT__op2_jp_to_exu)),64);
        tracep->fullCData(oldp+19,(vlSelf->cpu_top__DOT__ls_info_bus_to_isu),7);
        tracep->fullQData(oldp+20,(((IData)((0x12U 
                                             == (0x17U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))
                                     ? vlSelf->cpu_top__DOT__op2_jp_to_exu
                                     : 0ULL)),64);
        tracep->fullQData(oldp+22,(((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                     ? (((((((- (QData)((IData)(
                                                                (9U 
                                                                 == 
                                                                 (0xdU 
                                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                             & (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                                >> 7U)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                            | ((- (QData)((IData)(
                                                                  (0x11U 
                                                                   == 
                                                                   (0x15U 
                                                                    & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                               & (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))))) 
                                           | ((- (QData)((IData)(
                                                                 (0x21U 
                                                                  == 
                                                                  (0x25U 
                                                                   & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                              & (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))) 
                                          | ((- (QData)((IData)(
                                                                (0x41U 
                                                                 == 
                                                                 (0x45U 
                                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                             & vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)) 
                                         | ((- (QData)((IData)(
                                                               (0xdU 
                                                                == 
                                                                (0xdU 
                                                                 & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                            & (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                        | ((- (QData)((IData)(
                                                              (0x25U 
                                                               == 
                                                               (0x25U 
                                                                & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                           & (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))))
                                     : vlSelf->cpu_top__DOT__alu_res_to_lsu)),64);
        tracep->fullBit(oldp+24,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                        >> 1U))));
        tracep->fullCData(oldp+25,((0xffU & ((((1U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                 >> 3U))))) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                   >> 4U)))))) 
                                              | (0xfU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                  >> 5U)))))) 
                                             | (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                              >> 6U))))))),8);
        tracep->fullQData(oldp+26,(((2U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                     ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                     : 0ULL)),64);
        tracep->fullQData(oldp+28,(vlSelf->cpu_top__DOT__rs1_data_to_idu),64);
        tracep->fullQData(oldp+30,(vlSelf->cpu_top__DOT__rs2_data_to_idu),64);
        tracep->fullQData(oldp+32,(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata),64);
        tracep->fullBit(oldp+34,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R));
        tracep->fullBit(oldp+35,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I));
        tracep->fullBit(oldp+36,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L));
        tracep->fullBit(oldp+37,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S));
        tracep->fullBit(oldp+38,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B));
        tracep->fullBit(oldp+39,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL));
        tracep->fullBit(oldp+40,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI));
        tracep->fullBit(oldp+41,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC));
        tracep->fullQData(oldp+42,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
        tracep->fullBit(oldp+44,((0U == (0x7fU & (IData)(
                                                         (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                          >> 5U))))));
        tracep->fullBit(oldp+45,((0x20U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                             >> 5U))))));
        tracep->fullBit(oldp+46,(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu));
        tracep->fullBit(oldp+47,(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu));
        tracep->fullBit(oldp+48,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
        tracep->fullBit(oldp+49,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
        tracep->fullQData(oldp+50,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
        tracep->fullBit(oldp+52,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+53,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullBit(oldp+54,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullBit(oldp+55,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))));
        tracep->fullBit(oldp+56,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullBit(oldp+57,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))));
        tracep->fullBit(oldp+58,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))));
        tracep->fullBit(oldp+59,((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))));
        tracep->fullSData(oldp+60,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),15);
        tracep->fullBit(oldp+61,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullSData(oldp+62,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),15);
        tracep->fullBit(oldp+63,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S))));
        tracep->fullBit(oldp+64,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu))));
        tracep->fullSData(oldp+65,(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus),15);
        tracep->fullBit(oldp+66,((IData)((0x4000U == 
                                          (0x4007U 
                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+67,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+68,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+69,((2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+70,((IData)((8U == (0xfU 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+71,(((((IData)((8U == 
                                             (0xfU 
                                              & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                    | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                   | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                  | (2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+72,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
        tracep->fullBit(oldp+73,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need));
        tracep->fullBit(oldp+74,((((((IData)((8U == 
                                              (0xfU 
                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                     | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                    | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                   | (2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                  | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub))));
        tracep->fullQData(oldp+75,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_in2),64);
        tracep->fullQData(oldp+77,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need)
                                     ? 1ULL : 0ULL)),64);
        tracep->fullBit(oldp+79,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout));
        tracep->fullQData(oldp+80,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),64);
        tracep->fullQData(oldp+82,((vlSelf->cpu_top__DOT__op1_to_exu 
                                    << (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
        tracep->fullBit(oldp+84,((IData)((0x20U == 
                                          (0x27U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+85,((QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))),64);
        tracep->fullBit(oldp+87,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt));
        tracep->fullBit(oldp+88,(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res));
        tracep->fullQData(oldp+89,((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))))),64);
        tracep->fullBit(oldp+91,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sltu));
        tracep->fullBit(oldp+92,((1U & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
        tracep->fullQData(oldp+93,((vlSelf->cpu_top__DOT__op1_to_exu 
                                    ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+95,((IData)((0x100U == 
                                          (0x107U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+96,(vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res),64);
        tracep->fullBit(oldp+98,((IData)((0x200U == 
                                          (0x207U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+99,((vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                                    | (~ (1ULL >> (0x3fU 
                                                   & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))))),64);
        tracep->fullBit(oldp+101,((IData)((0x400U == 
                                           (0x407U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+102,((1ULL >> (0x3fU 
                                              & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
        tracep->fullQData(oldp+104,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     | vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+106,((IData)((0x800U == 
                                           (0x807U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+107,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     & vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+109,((IData)((0x1000U 
                                           == (0x1007U 
                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+110,((IData)((0x2000U 
                                           == (0x2007U 
                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+111,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
        tracep->fullBit(oldp+112,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
        tracep->fullBit(oldp+113,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))));
        tracep->fullBit(oldp+114,((0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res)));
        tracep->fullBit(oldp+115,((1U & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))));
        tracep->fullBit(oldp+116,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq));
        tracep->fullBit(oldp+117,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq) 
                                   & (~ (IData)((0U 
                                                 != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))));
        tracep->fullBit(oldp+118,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne));
        tracep->fullBit(oldp+119,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                   & (0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))));
        tracep->fullBit(oldp+120,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt));
        tracep->fullBit(oldp+121,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt) 
                                   & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))));
        tracep->fullBit(oldp+122,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge));
        tracep->fullBit(oldp+123,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                   & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))));
        tracep->fullBit(oldp+124,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu));
        tracep->fullBit(oldp+125,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu) 
                                   & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
        tracep->fullBit(oldp+126,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
        tracep->fullBit(oldp+127,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                   & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout))));
        tracep->fullBit(oldp+128,((IData)((0xaU == 
                                           (0xfU & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+129,((IData)((0x12U == 
                                           (0x17U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+130,((IData)((0x22U == 
                                           (0x27U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+131,((IData)((0x42U == 
                                           (0x47U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+132,((IData)((0x82U == 
                                           (0x87U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+133,((IData)((0x102U == 
                                           (0x107U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+134,((IData)((0x202U == 
                                           (0x207U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+135,((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))));
        tracep->fullBit(oldp+136,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 2U))));
        tracep->fullBit(oldp+137,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 3U))));
        tracep->fullBit(oldp+138,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 4U))));
        tracep->fullBit(oldp+139,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 5U))));
        tracep->fullBit(oldp+140,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 6U))));
        tracep->fullQData(oldp+141,(((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                      ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                      : 0ULL)),64);
        tracep->fullQData(oldp+143,(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata),64);
        tracep->fullBit(oldp+145,((IData)((9U == (0xdU 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+146,((IData)((0x11U == 
                                           (0x15U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+147,((IData)((0x21U == 
                                           (0x25U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+148,((IData)((0x41U == 
                                           (0x45U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+149,((IData)((0xdU == 
                                           (0xdU & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+150,((IData)((0x25U == 
                                           (0x25U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullQData(oldp+151,((((((((- (QData)((IData)(
                                                             (9U 
                                                              == 
                                                              (0xdU 
                                                               & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                         | ((- (QData)((IData)(
                                                               (0x11U 
                                                                == 
                                                                (0x15U 
                                                                 & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                               >> 0xfU)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))))) 
                                        | ((- (QData)((IData)(
                                                              (0x21U 
                                                               == 
                                                               (0x25U 
                                                                & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                           & (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))) 
                                       | ((- (QData)((IData)(
                                                             (0x41U 
                                                              == 
                                                              (0x45U 
                                                               & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                          & vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)) 
                                      | ((- (QData)((IData)(
                                                            (0xdU 
                                                             == 
                                                             (0xdU 
                                                              & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                         & (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                     | ((- (QData)((IData)(
                                                           (0x25U 
                                                            == 
                                                            (0x25U 
                                                             & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                        & (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))))),64);
        tracep->fullQData(oldp+153,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0]),64);
        tracep->fullQData(oldp+155,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[1]),64);
        tracep->fullQData(oldp+157,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[2]),64);
        tracep->fullQData(oldp+159,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[3]),64);
        tracep->fullQData(oldp+161,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[4]),64);
        tracep->fullQData(oldp+163,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[5]),64);
        tracep->fullQData(oldp+165,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[6]),64);
        tracep->fullQData(oldp+167,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[7]),64);
        tracep->fullQData(oldp+169,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[8]),64);
        tracep->fullQData(oldp+171,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[9]),64);
        tracep->fullQData(oldp+173,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[10]),64);
        tracep->fullQData(oldp+175,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[11]),64);
        tracep->fullQData(oldp+177,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[12]),64);
        tracep->fullQData(oldp+179,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[13]),64);
        tracep->fullQData(oldp+181,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[14]),64);
        tracep->fullQData(oldp+183,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[15]),64);
        tracep->fullQData(oldp+185,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[16]),64);
        tracep->fullQData(oldp+187,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[17]),64);
        tracep->fullQData(oldp+189,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[18]),64);
        tracep->fullQData(oldp+191,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[19]),64);
        tracep->fullQData(oldp+193,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[20]),64);
        tracep->fullQData(oldp+195,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[21]),64);
        tracep->fullQData(oldp+197,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[22]),64);
        tracep->fullQData(oldp+199,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[23]),64);
        tracep->fullQData(oldp+201,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[24]),64);
        tracep->fullQData(oldp+203,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[25]),64);
        tracep->fullQData(oldp+205,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[26]),64);
        tracep->fullQData(oldp+207,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[27]),64);
        tracep->fullQData(oldp+209,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[28]),64);
        tracep->fullQData(oldp+211,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[29]),64);
        tracep->fullQData(oldp+213,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[30]),64);
        tracep->fullQData(oldp+215,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[31]),64);
        tracep->fullBit(oldp+217,(vlSelf->clk));
        tracep->fullBit(oldp+218,(vlSelf->rst));
        tracep->fullIData(oldp+219,(vlSelf->inst_val),32);
        tracep->fullBit(oldp+220,(vlSelf->rdata_63_32));
        tracep->fullBit(oldp+221,(((0U != (0x1fU & 
                                           (vlSelf->inst_val 
                                            >> 7U))) 
                                   & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullCData(oldp+222,((0x1fU & (vlSelf->inst_val 
                                              >> 7U))),5);
        tracep->fullCData(oldp+223,((0x1fU & (vlSelf->inst_val 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+224,((0x1fU & (vlSelf->inst_val 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+225,((1U & (~ ((((((((
                                                   ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                               | (IData)(
                                                         (0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst_val)))) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                            | (IData)(
                                                      (0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst_val))))))));
        tracep->fullCData(oldp+226,((0x7fU & vlSelf->inst_val)),7);
        tracep->fullCData(oldp+227,((7U & (vlSelf->inst_val 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+228,((vlSelf->inst_val 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+229,((IData)((0x67U == 
                                           (0x7fU & vlSelf->inst_val)))));
        tracep->fullBit(oldp+230,((IData)((0x73U == 
                                           (0x7fU & vlSelf->inst_val)))));
        tracep->fullQData(oldp+231,((((- (QData)((IData)(
                                                         (vlSelf->inst_val 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->inst_val 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst_val 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+233,((((- (QData)((IData)(
                                                         (vlSelf->inst_val 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->inst_val 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->inst_val 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->inst_val 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->inst_val 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+235,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->inst_val 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->inst_val))))),64);
        tracep->fullQData(oldp+237,((((- (QData)((IData)(
                                                         (vlSelf->inst_val 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->inst_val 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->inst_val) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->inst_val 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->inst_val 
                                                                               >> 0x14U))))))))),64);
        tracep->fullBit(oldp+239,((0U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+240,((1U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+241,((2U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+242,((3U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+243,((4U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+244,((5U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+245,((6U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+246,((7U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+247,((0U == (vlSelf->inst_val 
                                          >> 0x19U))));
        tracep->fullBit(oldp+248,((0x20U == (vlSelf->inst_val 
                                             >> 0x19U))));
        tracep->fullBit(oldp+249,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (0U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+250,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (0U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0x20U == (vlSelf->inst_val 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+251,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (1U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+252,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (2U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+253,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (3U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+254,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (4U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+255,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+256,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0x20U == (vlSelf->inst_val 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+257,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (6U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+258,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                    & (7U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+259,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+260,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                    & (1U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (0x7fU 
                                             & (IData)(
                                                       (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+261,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+262,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+263,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+264,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (0x7fU 
                                             & (IData)(
                                                       (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+265,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0x20U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i 
                                                           >> 5U)))))));
        tracep->fullBit(oldp+266,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+267,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+268,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+269,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+270,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+271,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+272,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+273,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+274,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+275,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+276,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+277,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+278,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+279,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+280,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+281,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+282,((0U == (0x1fU & (vlSelf->inst_val 
                                                   >> 7U)))));
        tracep->fullBit(oldp+283,((((0U != (0x1fU & 
                                            (vlSelf->inst_val 
                                             >> 7U))) 
                                    & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->inst_val 
                                                >> 7U))))));
        tracep->fullIData(oldp+284,(0x20U),32);
    }
}
