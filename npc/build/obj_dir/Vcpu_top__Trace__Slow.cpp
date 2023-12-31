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
        tracep->declBit(c+288,"clk", false,-1);
        tracep->declBit(c+289,"rst", false,-1);
        tracep->declBus(c+290,"inst_val", false,-1, 31,0);
        tracep->declBit(c+288,"cpu_top clk", false,-1);
        tracep->declBit(c+289,"cpu_top rst", false,-1);
        tracep->declBus(c+290,"cpu_top inst_val", false,-1, 31,0);
        tracep->declQuad(c+1,"cpu_top pc_to_ifu", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top pc_to_idu", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top rd_wr_en_to_exu", false,-1);
        tracep->declBit(c+3,"cpu_top rs1_read_en_to_regs", false,-1);
        tracep->declBit(c+4,"cpu_top rs2_read_en_to_regs", false,-1);
        tracep->declBus(c+292,"cpu_top rd_idx_to_exu", false,-1, 4,0);
        tracep->declBus(c+293,"cpu_top rs1_idx_to_regs", false,-1, 4,0);
        tracep->declBus(c+294,"cpu_top rs2_idx_to_regs", false,-1, 4,0);
        tracep->declQuad(c+5,"cpu_top op1_to_exu", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top op2_to_exu", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top op1_jp_to_exu", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top op2_jp_s_to_exu", false,-1, 63,0);
        tracep->declBus(c+13,"cpu_top exu_info_bus_to_exu", false,-1, 15,0);
        tracep->declBit(c+295,"cpu_top invalid_inst_to_exu", false,-1);
        tracep->declBit(c+291,"cpu_top rd_wr_en_to_lsu", false,-1);
        tracep->declBus(c+292,"cpu_top rd_idx_to_lsu", false,-1, 4,0);
        tracep->declQuad(c+14,"cpu_top alu_res_to_lsu", false,-1, 63,0);
        tracep->declBit(c+16,"cpu_top pc_jump_flag_to_pc_reg", false,-1);
        tracep->declQuad(c+17,"cpu_top pc_jump_addr_to_pc_reg", false,-1, 63,0);
        tracep->declBus(c+19,"cpu_top ls_info_bus_to_isu", false,-1, 6,0);
        tracep->declQuad(c+20,"cpu_top rs2_store_to_isu", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top rd_wr_en_to_wbu", false,-1);
        tracep->declBus(c+292,"cpu_top rd_idx_to_wbu", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top rd_data_to_wbu", false,-1, 63,0);
        tracep->declBit(c+24,"cpu_top mem_wen_to_wbu", false,-1);
        tracep->declBus(c+25,"cpu_top mem_wmask_to_wbu", false,-1, 7,0);
        tracep->declQuad(c+26,"cpu_top mem_waddr_to_wbu", false,-1, 63,0);
        tracep->declQuad(c+20,"cpu_top mem_wdata_to_wbu", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top rd_wr_en_to_regs", false,-1);
        tracep->declBus(c+292,"cpu_top rd_idx_to_regs", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top rd_data_to_regs", false,-1, 63,0);
        tracep->declQuad(c+28,"cpu_top rs1_data_to_idu", false,-1, 63,0);
        tracep->declQuad(c+30,"cpu_top rs2_data_to_idu", false,-1, 63,0);
        tracep->declBit(c+288,"cpu_top pc_reg_u0 clk", false,-1);
        tracep->declBit(c+289,"cpu_top pc_reg_u0 rst", false,-1);
        tracep->declBit(c+16,"cpu_top pc_reg_u0 pc_jump_flag_i", false,-1);
        tracep->declQuad(c+17,"cpu_top pc_reg_u0 pc_jump_addr_i", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top pc_reg_u0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top ifu_u0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top ifu_u0 pc_o", false,-1, 63,0);
        tracep->declBus(c+290,"cpu_top ifu_u0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+32,"cpu_top ifu_u0 rdata", false,-1, 63,0);
        tracep->declBus(c+290,"cpu_top idu_u0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+1,"cpu_top idu_u0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+28,"cpu_top idu_u0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+30,"cpu_top idu_u0 rs2_data_i", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top idu_u0 rd_wr_en_o", false,-1);
        tracep->declBit(c+3,"cpu_top idu_u0 rs1_read_en_o", false,-1);
        tracep->declBit(c+4,"cpu_top idu_u0 rs2_read_en_o", false,-1);
        tracep->declBus(c+292,"cpu_top idu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+293,"cpu_top idu_u0 rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+294,"cpu_top idu_u0 rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+5,"cpu_top idu_u0 op1_o", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top idu_u0 op2_o", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top idu_u0 op1_jp_o", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top idu_u0 op2_jp_s_o", false,-1, 63,0);
        tracep->declBus(c+13,"cpu_top idu_u0 exu_info_bus_o", false,-1, 15,0);
        tracep->declBit(c+295,"cpu_top idu_u0 invalid_inst", false,-1);
        tracep->declBus(c+296,"cpu_top idu_u0 opcode", false,-1, 6,0);
        tracep->declBus(c+292,"cpu_top idu_u0 rd", false,-1, 4,0);
        tracep->declBus(c+297,"cpu_top idu_u0 funct3", false,-1, 2,0);
        tracep->declBus(c+298,"cpu_top idu_u0 funct7", false,-1, 6,0);
        tracep->declBus(c+293,"cpu_top idu_u0 rs1", false,-1, 4,0);
        tracep->declBus(c+294,"cpu_top idu_u0 rs2", false,-1, 4,0);
        tracep->declBit(c+34,"cpu_top idu_u0 opcode_1_0_11", false,-1);
        tracep->declBit(c+35,"cpu_top idu_u0 opcode_4_2_000", false,-1);
        tracep->declBit(c+299,"cpu_top idu_u0 opcode_4_2_001", false,-1);
        tracep->declBit(c+300,"cpu_top idu_u0 opcode_4_2_011", false,-1);
        tracep->declBit(c+36,"cpu_top idu_u0 opcode_4_2_100", false,-1);
        tracep->declBit(c+37,"cpu_top idu_u0 opcode_4_2_101", false,-1);
        tracep->declBit(c+38,"cpu_top idu_u0 opcode_4_2_110", false,-1);
        tracep->declBit(c+39,"cpu_top idu_u0 opcode_6_5_00", false,-1);
        tracep->declBit(c+40,"cpu_top idu_u0 opcode_6_5_01", false,-1);
        tracep->declBit(c+41,"cpu_top idu_u0 opcode_6_5_11", false,-1);
        tracep->declBit(c+42,"cpu_top idu_u0 rv64I_RM", false,-1);
        tracep->declBit(c+43,"cpu_top idu_u0 rv64I_I", false,-1);
        tracep->declBit(c+44,"cpu_top idu_u0 rv64I_L", false,-1);
        tracep->declBit(c+45,"cpu_top idu_u0 rv64I_S", false,-1);
        tracep->declBit(c+46,"cpu_top idu_u0 rv64I_B", false,-1);
        tracep->declBit(c+47,"cpu_top idu_u0 rv64I_LUI", false,-1);
        tracep->declBit(c+48,"cpu_top idu_u0 rv64I_AUIPC", false,-1);
        tracep->declBit(c+49,"cpu_top idu_u0 rv64I_JAL", false,-1);
        tracep->declBit(c+301,"cpu_top idu_u0 rv64I_JALR", false,-1);
        tracep->declBit(c+50,"cpu_top idu_u0 rv64I_EBREAK", false,-1);
        tracep->declBit(c+51,"cpu_top idu_u0 rv64IW_RM", false,-1);
        tracep->declBit(c+52,"cpu_top idu_u0 rv64IW_I", false,-1);
        tracep->declQuad(c+53,"cpu_top idu_u0 imm_i", false,-1, 63,0);
        tracep->declQuad(c+302,"cpu_top idu_u0 imm_s", false,-1, 63,0);
        tracep->declQuad(c+304,"cpu_top idu_u0 imm_b", false,-1, 63,0);
        tracep->declQuad(c+306,"cpu_top idu_u0 imm_u", false,-1, 63,0);
        tracep->declQuad(c+308,"cpu_top idu_u0 imm_j", false,-1, 63,0);
        tracep->declBit(c+310,"cpu_top idu_u0 funct3_0x0", false,-1);
        tracep->declBit(c+311,"cpu_top idu_u0 funct3_0x1", false,-1);
        tracep->declBit(c+312,"cpu_top idu_u0 funct3_0x2", false,-1);
        tracep->declBit(c+313,"cpu_top idu_u0 funct3_0x3", false,-1);
        tracep->declBit(c+314,"cpu_top idu_u0 funct3_0x4", false,-1);
        tracep->declBit(c+315,"cpu_top idu_u0 funct3_0x5", false,-1);
        tracep->declBit(c+316,"cpu_top idu_u0 funct3_0x6", false,-1);
        tracep->declBit(c+317,"cpu_top idu_u0 funct3_0x7", false,-1);
        tracep->declBit(c+318,"cpu_top idu_u0 funct7_0x00", false,-1);
        tracep->declBit(c+319,"cpu_top idu_u0 funct7_0x01", false,-1);
        tracep->declBit(c+320,"cpu_top idu_u0 funct7_0x20", false,-1);
        tracep->declBit(c+321,"cpu_top idu_u0 add", false,-1);
        tracep->declBit(c+322,"cpu_top idu_u0 sub", false,-1);
        tracep->declBit(c+323,"cpu_top idu_u0 sll", false,-1);
        tracep->declBit(c+324,"cpu_top idu_u0 slt", false,-1);
        tracep->declBit(c+325,"cpu_top idu_u0 sltu", false,-1);
        tracep->declBit(c+326,"cpu_top idu_u0 xor_", false,-1);
        tracep->declBit(c+327,"cpu_top idu_u0 srl", false,-1);
        tracep->declBit(c+328,"cpu_top idu_u0 sra", false,-1);
        tracep->declBit(c+329,"cpu_top idu_u0 or_", false,-1);
        tracep->declBit(c+330,"cpu_top idu_u0 and_", false,-1);
        tracep->declBit(c+331,"cpu_top idu_u0 mul", false,-1);
        tracep->declBit(c+332,"cpu_top idu_u0 mulh", false,-1);
        tracep->declBit(c+333,"cpu_top idu_u0 mulhsu", false,-1);
        tracep->declBit(c+334,"cpu_top idu_u0 mulhu", false,-1);
        tracep->declBit(c+335,"cpu_top idu_u0 div", false,-1);
        tracep->declBit(c+336,"cpu_top idu_u0 divu", false,-1);
        tracep->declBit(c+337,"cpu_top idu_u0 rem", false,-1);
        tracep->declBit(c+338,"cpu_top idu_u0 remu", false,-1);
        tracep->declBit(c+339,"cpu_top idu_u0 addw", false,-1);
        tracep->declBit(c+340,"cpu_top idu_u0 subw", false,-1);
        tracep->declBit(c+341,"cpu_top idu_u0 sllw", false,-1);
        tracep->declBit(c+342,"cpu_top idu_u0 srlw", false,-1);
        tracep->declBit(c+343,"cpu_top idu_u0 sraw", false,-1);
        tracep->declBit(c+344,"cpu_top idu_u0 mulw", false,-1);
        tracep->declBit(c+345,"cpu_top idu_u0 divw", false,-1);
        tracep->declBit(c+346,"cpu_top idu_u0 divuw", false,-1);
        tracep->declBit(c+347,"cpu_top idu_u0 remw", false,-1);
        tracep->declBit(c+348,"cpu_top idu_u0 remuw", false,-1);
        tracep->declBit(c+349,"cpu_top idu_u0 addi", false,-1);
        tracep->declBit(c+350,"cpu_top idu_u0 slli", false,-1);
        tracep->declBit(c+351,"cpu_top idu_u0 slti", false,-1);
        tracep->declBit(c+352,"cpu_top idu_u0 sltiu", false,-1);
        tracep->declBit(c+353,"cpu_top idu_u0 xori", false,-1);
        tracep->declBit(c+354,"cpu_top idu_u0 srli", false,-1);
        tracep->declBit(c+355,"cpu_top idu_u0 srai", false,-1);
        tracep->declBit(c+356,"cpu_top idu_u0 ori", false,-1);
        tracep->declBit(c+357,"cpu_top idu_u0 andi", false,-1);
        tracep->declBit(c+358,"cpu_top idu_u0 addiw", false,-1);
        tracep->declBit(c+359,"cpu_top idu_u0 slliw", false,-1);
        tracep->declBit(c+360,"cpu_top idu_u0 srliw", false,-1);
        tracep->declBit(c+361,"cpu_top idu_u0 sraiw", false,-1);
        tracep->declBit(c+362,"cpu_top idu_u0 lb", false,-1);
        tracep->declBit(c+363,"cpu_top idu_u0 lh", false,-1);
        tracep->declBit(c+364,"cpu_top idu_u0 lw", false,-1);
        tracep->declBit(c+365,"cpu_top idu_u0 ld", false,-1);
        tracep->declBit(c+55,"cpu_top idu_u0 lbu", false,-1);
        tracep->declBit(c+56,"cpu_top idu_u0 lhu", false,-1);
        tracep->declBit(c+57,"cpu_top idu_u0 lwu", false,-1);
        tracep->declBit(c+366,"cpu_top idu_u0 beq", false,-1);
        tracep->declBit(c+367,"cpu_top idu_u0 bne", false,-1);
        tracep->declBit(c+368,"cpu_top idu_u0 blt", false,-1);
        tracep->declBit(c+369,"cpu_top idu_u0 bge", false,-1);
        tracep->declBit(c+370,"cpu_top idu_u0 bltu", false,-1);
        tracep->declBit(c+371,"cpu_top idu_u0 bgeu", false,-1);
        tracep->declBit(c+372,"cpu_top idu_u0 sb", false,-1);
        tracep->declBit(c+373,"cpu_top idu_u0 sh", false,-1);
        tracep->declBit(c+374,"cpu_top idu_u0 sw", false,-1);
        tracep->declBit(c+375,"cpu_top idu_u0 sd", false,-1);
        tracep->declBit(c+47,"cpu_top idu_u0 lui", false,-1);
        tracep->declBit(c+48,"cpu_top idu_u0 auipc", false,-1);
        tracep->declBit(c+49,"cpu_top idu_u0 jal", false,-1);
        tracep->declBit(c+58,"cpu_top idu_u0 jalr", false,-1);
        tracep->declBit(c+59,"cpu_top idu_u0 ebreak", false,-1);
        tracep->declQuad(c+60,"cpu_top idu_u0 imm", false,-1, 63,0);
        tracep->declBit(c+376,"cpu_top idu_u0 rd_idx_0x", false,-1);
        tracep->declBit(c+291,"cpu_top idu_u0 rd_need", false,-1);
        tracep->declBit(c+3,"cpu_top idu_u0 rs1_need", false,-1);
        tracep->declBit(c+4,"cpu_top idu_u0 rs2_need", false,-1);
        tracep->declBit(c+62,"cpu_top idu_u0 op1_rs1_need", false,-1);
        tracep->declBit(c+63,"cpu_top idu_u0 op1_pc_need", false,-1);
        tracep->declBit(c+64,"cpu_top idu_u0 op2_rs2_need", false,-1);
        tracep->declBit(c+65,"cpu_top idu_u0 op2_imm_need", false,-1);
        tracep->declBit(c+66,"cpu_top idu_u0 op2_0x4_need", false,-1);
        tracep->declBit(c+58,"cpu_top idu_u0 op1_jp_rs1_need", false,-1);
        tracep->declBit(c+67,"cpu_top idu_u0 op1_jp_pc_need", false,-1);
        tracep->declBit(c+68,"cpu_top idu_u0 op2_jp_imm_need", false,-1);
        tracep->declBit(c+45,"cpu_top idu_u0 op2_jp_rs2_need", false,-1);
        tracep->declBit(c+377,"cpu_top idu_u0 alu_op", false,-1);
        tracep->declBit(c+69,"cpu_top idu_u0 alu_wop", false,-1);
        tracep->declBus(c+70,"cpu_top idu_u0 alu_info_bus", false,-1, 15,0);
        tracep->declBit(c+71,"cpu_top idu_u0 bjp_op", false,-1);
        tracep->declBus(c+72,"cpu_top idu_u0 bjp_info_bus", false,-1, 15,0);
        tracep->declBit(c+73,"cpu_top idu_u0 ls_op", false,-1);
        tracep->declBit(c+74,"cpu_top idu_u0 ls_usign", false,-1);
        tracep->declBus(c+75,"cpu_top idu_u0 ls_info_bus", false,-1, 15,0);
        tracep->declBit(c+378,"cpu_top idu_u0 mdu_op", false,-1);
        tracep->declBit(c+51,"cpu_top idu_u0 mdu_wop", false,-1);
        tracep->declBus(c+76,"cpu_top idu_u0 mdu_info_bus", false,-1, 15,0);
        tracep->declBit(c+288,"cpu_top exu_u0 clk", false,-1);
        tracep->declBit(c+289,"cpu_top exu_u0 rst", false,-1);
        tracep->declBit(c+291,"cpu_top exu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+292,"cpu_top exu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+5,"cpu_top exu_u0 op1_i", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top exu_u0 op2_i", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top exu_u0 op1_jp_i", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top exu_u0 op2_jp_s_i", false,-1, 63,0);
        tracep->declBus(c+13,"cpu_top exu_u0 exu_info_bus_i", false,-1, 15,0);
        tracep->declBit(c+291,"cpu_top exu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+292,"cpu_top exu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+14,"cpu_top exu_u0 alu_res_o", false,-1, 63,0);
        tracep->declBus(c+19,"cpu_top exu_u0 ls_info_bus_o", false,-1, 6,0);
        tracep->declQuad(c+20,"cpu_top exu_u0 rs2_store_o", false,-1, 63,0);
        tracep->declBit(c+16,"cpu_top exu_u0 pc_jump_flag_o", false,-1);
        tracep->declQuad(c+17,"cpu_top exu_u0 pc_jump_addr_o", false,-1, 63,0);
        tracep->declBit(c+295,"cpu_top exu_u0 invalid_inst", false,-1);
        tracep->declBit(c+77,"cpu_top exu_u0 ebreak", false,-1);
        tracep->declBit(c+78,"cpu_top exu_u0 alu_req", false,-1);
        tracep->declBit(c+79,"cpu_top exu_u0 bjp_req", false,-1);
        tracep->declBit(c+80,"cpu_top exu_u0 ls_req", false,-1);
        tracep->declBit(c+81,"cpu_top exu_u0 mdu_req", false,-1);
        tracep->declBit(c+82,"cpu_top exu_u0 alu_wop", false,-1);
        tracep->declBit(c+83,"cpu_top exu_u0 op_add", false,-1);
        tracep->declBit(c+84,"cpu_top exu_u0 op_add_need", false,-1);
        tracep->declBit(c+85,"cpu_top exu_u0 op_sub", false,-1);
        tracep->declBit(c+86,"cpu_top exu_u0 op_sub_need", false,-1);
        tracep->declBit(c+87,"cpu_top exu_u0 op_add_sub", false,-1);
        tracep->declQuad(c+5,"cpu_top exu_u0 adder_in1", false,-1, 63,0);
        tracep->declQuad(c+88,"cpu_top exu_u0 adder_in2", false,-1, 63,0);
        tracep->declQuad(c+90,"cpu_top exu_u0 adder_cin", false,-1, 63,0);
        tracep->declBit(c+92,"cpu_top exu_u0 adder_cout", false,-1);
        tracep->declQuad(c+93,"cpu_top exu_u0 adder_res", false,-1, 63,0);
        tracep->declQuad(c+93,"cpu_top exu_u0 add_sub_res", false,-1, 63,0);
        tracep->declQuad(c+95,"cpu_top exu_u0 wop_add_sub_res", false,-1, 63,0);
        tracep->declQuad(c+97,"cpu_top exu_u0 sll_res", false,-1, 63,0);
        tracep->declBit(c+99,"cpu_top exu_u0 op_sll", false,-1);
        tracep->declQuad(c+100,"cpu_top exu_u0 wop_sll_res", false,-1, 63,0);
        tracep->declQuad(c+102,"cpu_top exu_u0 srl_res", false,-1, 63,0);
        tracep->declBit(c+104,"cpu_top exu_u0 op_srl", false,-1);
        tracep->declBus(c+105,"cpu_top exu_u0 srlw_res", false,-1, 31,0);
        tracep->declQuad(c+106,"cpu_top exu_u0 wop_srl_res", false,-1, 63,0);
        tracep->declQuad(c+108,"cpu_top exu_u0 sra_res", false,-1, 63,0);
        tracep->declBit(c+110,"cpu_top exu_u0 op_sra", false,-1);
        tracep->declQuad(c+111,"cpu_top exu_u0 wop_sra_res", false,-1, 63,0);
        tracep->declBus(c+113,"cpu_top exu_u0 sraw_res", false,-1, 31,0);
        tracep->declQuad(c+114,"cpu_top exu_u0 slt_res", false,-1, 63,0);
        tracep->declBit(c+116,"cpu_top exu_u0 op_slt", false,-1);
        tracep->declBit(c+117,"cpu_top exu_u0 slt_cmp_res", false,-1);
        tracep->declQuad(c+118,"cpu_top exu_u0 sltu_res", false,-1, 63,0);
        tracep->declBit(c+120,"cpu_top exu_u0 op_sltu", false,-1);
        tracep->declBit(c+121,"cpu_top exu_u0 sltu_cmp_res", false,-1);
        tracep->declQuad(c+122,"cpu_top exu_u0 xor_res", false,-1, 63,0);
        tracep->declBit(c+124,"cpu_top exu_u0 op_xor", false,-1);
        tracep->declQuad(c+5,"cpu_top exu_u0 xor_in1", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top exu_u0 xor_in2", false,-1, 63,0);
        tracep->declQuad(c+125,"cpu_top exu_u0 or_res", false,-1, 63,0);
        tracep->declBit(c+127,"cpu_top exu_u0 op_or", false,-1);
        tracep->declQuad(c+128,"cpu_top exu_u0 and_res", false,-1, 63,0);
        tracep->declBit(c+130,"cpu_top exu_u0 op_and", false,-1);
        tracep->declQuad(c+7,"cpu_top exu_u0 lui_res", false,-1, 63,0);
        tracep->declBit(c+131,"cpu_top exu_u0 op_lui", false,-1);
        tracep->declBit(c+132,"cpu_top exu_u0 op_jal", false,-1);
        tracep->declBit(c+133,"cpu_top exu_u0 op_jalr", false,-1);
        tracep->declBit(c+134,"cpu_top exu_u0 beq_cmp", false,-1);
        tracep->declBit(c+135,"cpu_top exu_u0 bne_cmp", false,-1);
        tracep->declBit(c+117,"cpu_top exu_u0 blt_cmp", false,-1);
        tracep->declBit(c+136,"cpu_top exu_u0 bge_cmp", false,-1);
        tracep->declBit(c+121,"cpu_top exu_u0 bltu_cmp", false,-1);
        tracep->declBit(c+92,"cpu_top exu_u0 bgeu_cmp", false,-1);
        tracep->declBit(c+137,"cpu_top exu_u0 op_beq", false,-1);
        tracep->declBit(c+138,"cpu_top exu_u0 beq_res", false,-1);
        tracep->declBit(c+139,"cpu_top exu_u0 op_bne", false,-1);
        tracep->declBit(c+140,"cpu_top exu_u0 bne_res", false,-1);
        tracep->declBit(c+141,"cpu_top exu_u0 op_blt", false,-1);
        tracep->declBit(c+142,"cpu_top exu_u0 blt_res", false,-1);
        tracep->declBit(c+143,"cpu_top exu_u0 op_bge", false,-1);
        tracep->declBit(c+144,"cpu_top exu_u0 bge_res", false,-1);
        tracep->declBit(c+145,"cpu_top exu_u0 op_bltu", false,-1);
        tracep->declBit(c+146,"cpu_top exu_u0 bltu_res", false,-1);
        tracep->declBit(c+147,"cpu_top exu_u0 op_bgeu", false,-1);
        tracep->declBit(c+148,"cpu_top exu_u0 bgeu_res", false,-1);
        tracep->declBit(c+149,"cpu_top exu_u0 op_load", false,-1);
        tracep->declBit(c+150,"cpu_top exu_u0 op_store", false,-1);
        tracep->declBit(c+151,"cpu_top exu_u0 ls_usign", false,-1);
        tracep->declBit(c+152,"cpu_top exu_u0 ls_byte", false,-1);
        tracep->declBit(c+153,"cpu_top exu_u0 ls_db", false,-1);
        tracep->declBit(c+154,"cpu_top exu_u0 ls_word", false,-1);
        tracep->declBit(c+155,"cpu_top exu_u0 ls_dw", false,-1);
        tracep->declBit(c+156,"cpu_top exu_u0 mdu_wop", false,-1);
        tracep->declArray(c+157,"cpu_top exu_u0 mul_res_t", false,-1, 127,0);
        tracep->declBit(c+161,"cpu_top exu_u0 op_mul", false,-1);
        tracep->declQuad(c+162,"cpu_top exu_u0 mul_res", false,-1, 63,0);
        tracep->declBit(c+164,"cpu_top exu_u0 op_mulh", false,-1);
        tracep->declQuad(c+165,"cpu_top exu_u0 mulh_res", false,-1, 63,0);
        tracep->declBit(c+167,"cpu_top exu_u0 op_mulhsu", false,-1);
        tracep->declQuad(c+168,"cpu_top exu_u0 mulhsu_res", false,-1, 63,0);
        tracep->declArray(c+170,"cpu_top exu_u0 mulsu_res_t", false,-1, 127,0);
        tracep->declBit(c+174,"cpu_top exu_u0 op_mulhu", false,-1);
        tracep->declQuad(c+168,"cpu_top exu_u0 mulhu_res", false,-1, 63,0);
        tracep->declArray(c+170,"cpu_top exu_u0 muluu_res_t", false,-1, 127,0);
        tracep->declBit(c+175,"cpu_top exu_u0 op_div", false,-1);
        tracep->declQuad(c+176,"cpu_top exu_u0 div_res", false,-1, 63,0);
        tracep->declBit(c+178,"cpu_top exu_u0 op_divu", false,-1);
        tracep->declQuad(c+176,"cpu_top exu_u0 divu_res", false,-1, 63,0);
        tracep->declBit(c+179,"cpu_top exu_u0 op_rem", false,-1);
        tracep->declQuad(c+180,"cpu_top exu_u0 rem_res", false,-1, 63,0);
        tracep->declBit(c+182,"cpu_top exu_u0 op_remu", false,-1);
        tracep->declQuad(c+180,"cpu_top exu_u0 remu_res", false,-1, 63,0);
        tracep->declBit(c+183,"cpu_top exu_u0 wop_mulw", false,-1);
        tracep->declQuad(c+184,"cpu_top exu_u0 mulw_res", false,-1, 63,0);
        tracep->declBus(c+186,"cpu_top exu_u0 mulw_res_t", false,-1, 31,0);
        tracep->declBit(c+187,"cpu_top exu_u0 wop_divw", false,-1);
        tracep->declQuad(c+188,"cpu_top exu_u0 divw_res", false,-1, 63,0);
        tracep->declBus(c+190,"cpu_top exu_u0 divw_res_t", false,-1, 31,0);
        tracep->declBit(c+191,"cpu_top exu_u0 wop_divuw", false,-1);
        tracep->declQuad(c+192,"cpu_top exu_u0 divuw_res", false,-1, 63,0);
        tracep->declQuad(c+194,"cpu_top exu_u0 divuw_res_t", false,-1, 63,0);
        tracep->declBit(c+196,"cpu_top exu_u0 wop_remw", false,-1);
        tracep->declQuad(c+197,"cpu_top exu_u0 remw_res", false,-1, 63,0);
        tracep->declBus(c+199,"cpu_top exu_u0 remw_res_t", false,-1, 31,0);
        tracep->declBit(c+200,"cpu_top exu_u0 wop_remuw", false,-1);
        tracep->declQuad(c+201,"cpu_top exu_u0 remuw_res", false,-1, 63,0);
        tracep->declQuad(c+203,"cpu_top exu_u0 remuw_res_t", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top lsu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+292,"cpu_top lsu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+14,"cpu_top lsu_u0 alu_res_i", false,-1, 63,0);
        tracep->declBus(c+19,"cpu_top lsu_u0 ls_info_bus_i", false,-1, 6,0);
        tracep->declQuad(c+20,"cpu_top lsu_u0 rs2_store_i", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top lsu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+292,"cpu_top lsu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top lsu_u0 rd_data_o", false,-1, 63,0);
        tracep->declBit(c+24,"cpu_top lsu_u0 mem_wen_o", false,-1);
        tracep->declBus(c+25,"cpu_top lsu_u0 mem_wmask_o", false,-1, 7,0);
        tracep->declQuad(c+26,"cpu_top lsu_u0 mem_waddr_o", false,-1, 63,0);
        tracep->declQuad(c+20,"cpu_top lsu_u0 mem_wdata_o", false,-1, 63,0);
        tracep->declBit(c+205,"cpu_top lsu_u0 ls_load", false,-1);
        tracep->declBit(c+24,"cpu_top lsu_u0 ls_store", false,-1);
        tracep->declBit(c+206,"cpu_top lsu_u0 ls_usign", false,-1);
        tracep->declBit(c+207,"cpu_top lsu_u0 ls_byte", false,-1);
        tracep->declBit(c+208,"cpu_top lsu_u0 ls_db", false,-1);
        tracep->declBit(c+209,"cpu_top lsu_u0 ls_word", false,-1);
        tracep->declBit(c+210,"cpu_top lsu_u0 ls_dw", false,-1);
        tracep->declBit(c+205,"cpu_top lsu_u0 mem_ren", false,-1);
        tracep->declQuad(c+211,"cpu_top lsu_u0 mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+213,"cpu_top lsu_u0 mem_rdata", false,-1, 63,0);
        tracep->declBit(c+215,"cpu_top lsu_u0 lb", false,-1);
        tracep->declBit(c+216,"cpu_top lsu_u0 lh", false,-1);
        tracep->declBit(c+217,"cpu_top lsu_u0 lw", false,-1);
        tracep->declBit(c+218,"cpu_top lsu_u0 ld", false,-1);
        tracep->declBit(c+219,"cpu_top lsu_u0 lbu", false,-1);
        tracep->declBit(c+220,"cpu_top lsu_u0 lhu", false,-1);
        tracep->declBit(c+221,"cpu_top lsu_u0 lwu", false,-1);
        tracep->declQuad(c+222,"cpu_top lsu_u0 load_data", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top wbu_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+292,"cpu_top wbu_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top wbu_u0 rd_data_i", false,-1, 63,0);
        tracep->declBit(c+24,"cpu_top wbu_u0 mem_wen_i", false,-1);
        tracep->declBus(c+25,"cpu_top wbu_u0 mem_wmask_i", false,-1, 7,0);
        tracep->declQuad(c+26,"cpu_top wbu_u0 mem_waddr_i", false,-1, 63,0);
        tracep->declQuad(c+20,"cpu_top wbu_u0 mem_wdata_i", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top wbu_u0 rd_wr_en_o", false,-1);
        tracep->declBus(c+292,"cpu_top wbu_u0 rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top wbu_u0 rd_data_o", false,-1, 63,0);
        tracep->declBit(c+288,"cpu_top regs_u0 clk", false,-1);
        tracep->declBit(c+289,"cpu_top regs_u0 rst", false,-1);
        tracep->declQuad(c+1,"cpu_top regs_u0 pc_i", false,-1, 63,0);
        tracep->declBit(c+291,"cpu_top regs_u0 rd_wr_en_i", false,-1);
        tracep->declBus(c+292,"cpu_top regs_u0 rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+22,"cpu_top regs_u0 rd_wr_data_i", false,-1, 63,0);
        tracep->declBit(c+3,"cpu_top regs_u0 rs1_read_en_i", false,-1);
        tracep->declBit(c+4,"cpu_top regs_u0 rs2_read_en_i", false,-1);
        tracep->declBus(c+293,"cpu_top regs_u0 rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+294,"cpu_top regs_u0 rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+28,"cpu_top regs_u0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+30,"cpu_top regs_u0 rs2_data_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+224+i*2,"cpu_top regs_u0 regs", true,(i+0), 63,0);}}
        tracep->declBit(c+379,"cpu_top regs_u0 regs_wr_en", false,-1);
        tracep->declBus(c+380,"cpu_top regs_u0 i", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<4>/*127:0*/ __Vtemp37;
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp39;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu_top__DOT__pc_to_ifu),64);
        tracep->fullBit(oldp+3,((1U & (~ ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+4,(((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM))));
        tracep->fullQData(oldp+5,(vlSelf->cpu_top__DOT__op1_to_exu),64);
        tracep->fullQData(oldp+7,(vlSelf->cpu_top__DOT__op2_to_exu),64);
        tracep->fullQData(oldp+9,((((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                    & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                   | ((- (QData)((IData)(
                                                         ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))))) 
                                      & vlSelf->cpu_top__DOT__pc_to_ifu))),64);
        tracep->fullQData(oldp+11,(vlSelf->cpu_top__DOT__op2_jp_s_to_exu),64);
        tracep->fullSData(oldp+13,(vlSelf->cpu_top__DOT__exu_info_bus_to_exu),16);
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
                                                           ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))))) 
                                        & vlSelf->cpu_top__DOT__pc_to_ifu)) 
                                    + vlSelf->cpu_top__DOT__op2_jp_s_to_exu)),64);
        tracep->fullCData(oldp+19,(vlSelf->cpu_top__DOT__ls_info_bus_to_isu),7);
        tracep->fullQData(oldp+20,(((IData)((0x12U 
                                             == (0x17U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))
                                     ? vlSelf->cpu_top__DOT__op2_jp_s_to_exu
                                     : 0ULL)),64);
        tracep->fullQData(oldp+22,(((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                     ? ((((((((- (QData)((IData)(
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
                                                               (0x15U 
                                                                == 
                                                                (0x15U 
                                                                 & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                            & (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                        | ((- (QData)((IData)(
                                                              (0x25U 
                                                               == 
                                                               (0x25U 
                                                                & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                           & (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))
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
        tracep->fullBit(oldp+34,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
        tracep->fullBit(oldp+35,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_000));
        tracep->fullBit(oldp+36,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100));
        tracep->fullBit(oldp+37,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_101));
        tracep->fullBit(oldp+38,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_110));
        tracep->fullBit(oldp+39,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00));
        tracep->fullBit(oldp+40,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01));
        tracep->fullBit(oldp+41,(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11));
        tracep->fullBit(oldp+42,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM));
        tracep->fullBit(oldp+43,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I));
        tracep->fullBit(oldp+44,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L));
        tracep->fullBit(oldp+45,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S));
        tracep->fullBit(oldp+46,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B));
        tracep->fullBit(oldp+47,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI));
        tracep->fullBit(oldp+48,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC));
        tracep->fullBit(oldp+49,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL));
        tracep->fullBit(oldp+50,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100)) 
                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))));
        tracep->fullBit(oldp+51,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM));
        tracep->fullBit(oldp+52,(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I));
        tracep->fullQData(oldp+53,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i),64);
        tracep->fullBit(oldp+55,(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu));
        tracep->fullBit(oldp+56,(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu));
        tracep->fullBit(oldp+57,(vlSelf->cpu_top__DOT__idu_u0__DOT__lwu));
        tracep->fullBit(oldp+58,(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr));
        tracep->fullBit(oldp+59,(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak));
        tracep->fullQData(oldp+60,(vlSelf->cpu_top__DOT__idu_u0__DOT__imm),64);
        tracep->fullBit(oldp+62,((1U & (~ (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullBit(oldp+63,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullBit(oldp+64,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM))));
        tracep->fullBit(oldp+65,(((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
        tracep->fullBit(oldp+66,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullBit(oldp+67,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))));
        tracep->fullBit(oldp+68,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B))));
        tracep->fullBit(oldp+69,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
        tracep->fullSData(oldp+70,(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus),16);
        tracep->fullBit(oldp+71,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))));
        tracep->fullSData(oldp+72,(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus),16);
        tracep->fullBit(oldp+73,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S))));
        tracep->fullBit(oldp+74,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu)) 
                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lwu))));
        tracep->fullSData(oldp+75,(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus),16);
        tracep->fullSData(oldp+76,(vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus),16);
        tracep->fullBit(oldp+77,((IData)((0x4000U == 
                                          (0x4007U 
                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+78,((0U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+79,((1U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+80,((2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+81,((3U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))));
        tracep->fullBit(oldp+82,(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop));
        tracep->fullBit(oldp+83,((IData)((8U == (0xfU 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+84,(((((IData)((8U == 
                                             (0xfU 
                                              & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                    | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                   | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                  | (2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+85,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
        tracep->fullBit(oldp+86,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need));
        tracep->fullBit(oldp+87,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_add_sub));
        tracep->fullQData(oldp+88,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_in2),64);
        tracep->fullQData(oldp+90,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need)
                                     ? 1ULL : 0ULL)),64);
        tracep->fullBit(oldp+92,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout));
        tracep->fullQData(oldp+93,(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res),64);
        tracep->fullQData(oldp+95,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res)))),64);
        tracep->fullQData(oldp+97,(vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res),64);
        tracep->fullBit(oldp+99,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sll));
        tracep->fullQData(oldp+100,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res)))),64);
        tracep->fullQData(oldp+102,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     >> (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
        tracep->fullBit(oldp+104,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_srl));
        tracep->fullIData(oldp+105,(vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res),32);
        tracep->fullQData(oldp+106,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res)))),64);
        tracep->fullQData(oldp+108,(VL_SHIFTRS_QQI(64,64,6, vlSelf->cpu_top__DOT__op1_to_exu, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))),64);
        tracep->fullBit(oldp+110,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sra));
        tracep->fullQData(oldp+111,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res)))),64);
        tracep->fullIData(oldp+113,(vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res),32);
        tracep->fullQData(oldp+114,((QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))),64);
        tracep->fullBit(oldp+116,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt));
        tracep->fullBit(oldp+117,(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res));
        tracep->fullQData(oldp+118,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))))),64);
        tracep->fullBit(oldp+120,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sltu));
        tracep->fullBit(oldp+121,((1U & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
        tracep->fullQData(oldp+122,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     ^ vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+124,((IData)((0x100U == 
                                           (0x107U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+125,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     | vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+127,((IData)((0x800U == 
                                           (0x807U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+128,((vlSelf->cpu_top__DOT__op1_to_exu 
                                     & vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+130,((IData)((0x1000U 
                                           == (0x1007U 
                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+131,((IData)((0x2000U 
                                           == (0x2007U 
                                               & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+132,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal));
        tracep->fullBit(oldp+133,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr));
        tracep->fullBit(oldp+134,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))));
        tracep->fullBit(oldp+135,((0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res)));
        tracep->fullBit(oldp+136,((1U & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))));
        tracep->fullBit(oldp+137,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq));
        tracep->fullBit(oldp+138,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq) 
                                   & (~ (IData)((0U 
                                                 != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))));
        tracep->fullBit(oldp+139,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne));
        tracep->fullBit(oldp+140,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                   & (0U != vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))));
        tracep->fullBit(oldp+141,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt));
        tracep->fullBit(oldp+142,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt) 
                                   & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res))));
        tracep->fullBit(oldp+143,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge));
        tracep->fullBit(oldp+144,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                   & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))));
        tracep->fullBit(oldp+145,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu));
        tracep->fullBit(oldp+146,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu) 
                                   & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout)))));
        tracep->fullBit(oldp+147,(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
        tracep->fullBit(oldp+148,(((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                   & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout))));
        tracep->fullBit(oldp+149,((IData)((0xaU == 
                                           (0xfU & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+150,((IData)((0x12U == 
                                           (0x17U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+151,((IData)((0x22U == 
                                           (0x27U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+152,((IData)((0x42U == 
                                           (0x47U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+153,((IData)((0x82U == 
                                           (0x87U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+154,((IData)((0x102U == 
                                           (0x107U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+155,((IData)((0x202U == 
                                           (0x207U 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+156,((1U & ((IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu) 
                                         >> 3U))));
        tracep->fullWData(oldp+157,(vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t),128);
        tracep->fullBit(oldp+161,((IData)((0x13U == 
                                           (0x1fU & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+162,((((QData)((IData)(
                                                      vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[0U])))),64);
        tracep->fullBit(oldp+164,((IData)((0x23U == 
                                           (0x2fU & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+165,((((QData)((IData)(
                                                      vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[2U])))),64);
        tracep->fullBit(oldp+167,((IData)((0x43U == 
                                           (0x4fU & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        VL_EXTEND_WQ(128,64, __Vtemp34, vlSelf->cpu_top__DOT__op1_to_exu);
        VL_EXTEND_WQ(128,64, __Vtemp35, vlSelf->cpu_top__DOT__op2_to_exu);
        VL_MUL_W(4, __Vtemp36, __Vtemp34, __Vtemp35);
        tracep->fullQData(oldp+168,((((QData)((IData)(
                                                      __Vtemp36[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp36[2U])))),64);
        VL_EXTEND_WQ(128,64, __Vtemp37, vlSelf->cpu_top__DOT__op1_to_exu);
        VL_EXTEND_WQ(128,64, __Vtemp38, vlSelf->cpu_top__DOT__op2_to_exu);
        VL_MUL_W(4, __Vtemp39, __Vtemp37, __Vtemp38);
        tracep->fullWData(oldp+170,(__Vtemp39),128);
        tracep->fullBit(oldp+174,((IData)((0x83U == 
                                           (0x8fU & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+175,((IData)((0x103U == 
                                           (0x10fU 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+176,(VL_DIV_QQQ(64, vlSelf->cpu_top__DOT__op1_to_exu, vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+178,((IData)((0x203U == 
                                           (0x20fU 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+179,((IData)((0x403U == 
                                           (0x40fU 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+180,(VL_MODDIV_QQQ(64, vlSelf->cpu_top__DOT__op1_to_exu, vlSelf->cpu_top__DOT__op2_to_exu)),64);
        tracep->fullBit(oldp+182,((IData)((0x803U == 
                                           (0x80fU 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullBit(oldp+183,((IData)((0x1bU == 
                                           (0x1fU & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+184,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->cpu_top__DOT__exu_u0__DOT__mulw_res_t 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__mulw_res_t)))),64);
        tracep->fullIData(oldp+186,(vlSelf->cpu_top__DOT__exu_u0__DOT__mulw_res_t),32);
        tracep->fullBit(oldp+187,((IData)((0x10bU == 
                                           (0x10fU 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+188,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->cpu_top__DOT__exu_u0__DOT__divw_res_t 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__divw_res_t)))),64);
        tracep->fullIData(oldp+190,(vlSelf->cpu_top__DOT__exu_u0__DOT__divw_res_t),32);
        tracep->fullBit(oldp+191,((IData)((0x20bU == 
                                           (0x20fU 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+192,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->cpu_top__DOT__exu_u0__DOT__divuw_res_t 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__divuw_res_t)))),64);
        tracep->fullQData(oldp+194,(vlSelf->cpu_top__DOT__exu_u0__DOT__divuw_res_t),64);
        tracep->fullBit(oldp+196,((IData)((0x40bU == 
                                           (0x40fU 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+197,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->cpu_top__DOT__exu_u0__DOT__remw_res_t 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__remw_res_t)))),64);
        tracep->fullIData(oldp+199,(vlSelf->cpu_top__DOT__exu_u0__DOT__remw_res_t),32);
        tracep->fullBit(oldp+200,((IData)((0x80bU == 
                                           (0x80fU 
                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))));
        tracep->fullQData(oldp+201,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->cpu_top__DOT__exu_u0__DOT__remuw_res_t 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__remuw_res_t)))),64);
        tracep->fullQData(oldp+203,(vlSelf->cpu_top__DOT__exu_u0__DOT__remuw_res_t),64);
        tracep->fullBit(oldp+205,((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))));
        tracep->fullBit(oldp+206,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 2U))));
        tracep->fullBit(oldp+207,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 3U))));
        tracep->fullBit(oldp+208,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 4U))));
        tracep->fullBit(oldp+209,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 5U))));
        tracep->fullBit(oldp+210,((1U & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                         >> 6U))));
        tracep->fullQData(oldp+211,(((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                      ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                      : 0ULL)),64);
        tracep->fullQData(oldp+213,(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata),64);
        tracep->fullBit(oldp+215,((IData)((9U == (0xdU 
                                                  & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+216,((IData)((0x11U == 
                                           (0x15U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+217,((IData)((0x21U == 
                                           (0x25U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+218,((IData)((0x41U == 
                                           (0x45U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+219,((IData)((0xdU == 
                                           (0xdU & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+220,((IData)((0x15U == 
                                           (0x15U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullBit(oldp+221,((IData)((0x25U == 
                                           (0x25U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))))));
        tracep->fullQData(oldp+222,(((((((((- (QData)((IData)(
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
                                                            (0x15U 
                                                             == 
                                                             (0x15U 
                                                              & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                         & (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata)))))) 
                                     | ((- (QData)((IData)(
                                                           (0x25U 
                                                            == 
                                                            (0x25U 
                                                             & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu)))))) 
                                        & (QData)((IData)(vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata))))),64);
        tracep->fullQData(oldp+224,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0]),64);
        tracep->fullQData(oldp+226,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[1]),64);
        tracep->fullQData(oldp+228,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[2]),64);
        tracep->fullQData(oldp+230,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[3]),64);
        tracep->fullQData(oldp+232,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[4]),64);
        tracep->fullQData(oldp+234,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[5]),64);
        tracep->fullQData(oldp+236,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[6]),64);
        tracep->fullQData(oldp+238,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[7]),64);
        tracep->fullQData(oldp+240,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[8]),64);
        tracep->fullQData(oldp+242,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[9]),64);
        tracep->fullQData(oldp+244,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[10]),64);
        tracep->fullQData(oldp+246,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[11]),64);
        tracep->fullQData(oldp+248,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[12]),64);
        tracep->fullQData(oldp+250,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[13]),64);
        tracep->fullQData(oldp+252,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[14]),64);
        tracep->fullQData(oldp+254,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[15]),64);
        tracep->fullQData(oldp+256,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[16]),64);
        tracep->fullQData(oldp+258,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[17]),64);
        tracep->fullQData(oldp+260,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[18]),64);
        tracep->fullQData(oldp+262,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[19]),64);
        tracep->fullQData(oldp+264,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[20]),64);
        tracep->fullQData(oldp+266,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[21]),64);
        tracep->fullQData(oldp+268,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[22]),64);
        tracep->fullQData(oldp+270,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[23]),64);
        tracep->fullQData(oldp+272,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[24]),64);
        tracep->fullQData(oldp+274,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[25]),64);
        tracep->fullQData(oldp+276,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[26]),64);
        tracep->fullQData(oldp+278,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[27]),64);
        tracep->fullQData(oldp+280,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[28]),64);
        tracep->fullQData(oldp+282,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[29]),64);
        tracep->fullQData(oldp+284,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[30]),64);
        tracep->fullQData(oldp+286,(vlSelf->cpu_top__DOT__regs_u0__DOT__regs[31]),64);
        tracep->fullBit(oldp+288,(vlSelf->clk));
        tracep->fullBit(oldp+289,(vlSelf->rst));
        tracep->fullIData(oldp+290,(vlSelf->inst_val),32);
        tracep->fullBit(oldp+291,(((0U != (0x1fU & 
                                           (vlSelf->inst_val 
                                            >> 7U))) 
                                   & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                         | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))));
        tracep->fullCData(oldp+292,((0x1fU & (vlSelf->inst_val 
                                              >> 7U))),5);
        tracep->fullCData(oldp+293,((0x1fU & (vlSelf->inst_val 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+294,((0x1fU & (vlSelf->inst_val 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+295,((1U & (~ ((((((((
                                                   ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I)) 
                                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L)) 
                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                                 | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                                     & (IData)(
                                                               (4U 
                                                                == 
                                                                (0x1cU 
                                                                 & vlSelf->inst_val)))) 
                                                    & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                              | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100)) 
                                                 & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))) 
                                             | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                            | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))))));
        tracep->fullCData(oldp+296,((0x7fU & vlSelf->inst_val)),7);
        tracep->fullCData(oldp+297,((7U & (vlSelf->inst_val 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+298,((vlSelf->inst_val 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+299,((IData)((4U == (0x1cU 
                                                  & vlSelf->inst_val)))));
        tracep->fullBit(oldp+300,((IData)((0xcU == 
                                           (0x1cU & vlSelf->inst_val)))));
        tracep->fullBit(oldp+301,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                    & (IData)((4U == 
                                               (0x1cU 
                                                & vlSelf->inst_val)))) 
                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11))));
        tracep->fullQData(oldp+302,((((- (QData)((IData)(
                                                         (vlSelf->inst_val 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->inst_val 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst_val 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+304,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+306,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->inst_val 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->inst_val))))),64);
        tracep->fullQData(oldp+308,((((- (QData)((IData)(
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
        tracep->fullBit(oldp+310,((0U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+311,((1U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+312,((2U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+313,((3U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+314,((4U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+315,((5U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+316,((6U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+317,((7U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+318,((0U == (vlSelf->inst_val 
                                          >> 0x19U))));
        tracep->fullBit(oldp+319,((1U == (vlSelf->inst_val 
                                          >> 0x19U))));
        tracep->fullBit(oldp+320,((0x20U == (vlSelf->inst_val 
                                             >> 0x19U))));
        tracep->fullBit(oldp+321,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (0U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+322,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (0U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0x20U == (vlSelf->inst_val 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+323,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (1U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+324,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (2U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+325,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (3U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+326,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (4U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+327,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+328,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0x20U == (vlSelf->inst_val 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+329,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (6U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+330,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (7U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+331,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (0U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+332,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (1U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+333,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (2U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+334,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (3U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+335,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (4U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+336,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+337,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (6U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+338,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    & (7U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+339,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (0U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+340,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (0U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0x20U == (vlSelf->inst_val 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+341,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (1U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+342,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+343,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (0x20U == (vlSelf->inst_val 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+344,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (0U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+345,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (4U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+346,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (5U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+347,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (6U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+348,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                    & (7U == (7U & 
                                              (vlSelf->inst_val 
                                               >> 0xcU)))) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+349,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+350,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+351,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+352,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+353,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+354,((IData)(((1U == (1U 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I))) 
                                           & (0x5000U 
                                              == (0x40007000U 
                                                  & vlSelf->inst_val))))));
        tracep->fullBit(oldp+355,((IData)(((1U == (1U 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I))) 
                                           & (0x40005000U 
                                              == (0x40007000U 
                                                  & vlSelf->inst_val))))));
        tracep->fullBit(oldp+356,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+357,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+358,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+359,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+360,((IData)(((1U == (1U 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))) 
                                           & (0x5000U 
                                              == (0x40007000U 
                                                  & vlSelf->inst_val))))));
        tracep->fullBit(oldp+361,((IData)(((1U == (1U 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))) 
                                           & (0x40005000U 
                                              == (0x40007000U 
                                                  & vlSelf->inst_val))))));
        tracep->fullBit(oldp+362,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+363,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+364,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+365,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+366,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+367,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+368,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                   & (4U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+369,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                   & (5U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+370,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                   & (6U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+371,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                   & (7U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+372,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+373,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                   & (1U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+374,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                   & (2U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+375,(((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                   & (3U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+376,((0U == (0x1fU & (vlSelf->inst_val 
                                                   >> 7U)))));
        tracep->fullBit(oldp+377,((((((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                         & (1U != (vlSelf->inst_val 
                                                   >> 0x19U))) 
                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I)) 
                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))));
        tracep->fullBit(oldp+378,((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                   & (1U == (vlSelf->inst_val 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+379,((((0U != (0x1fU & 
                                            (vlSelf->inst_val 
                                             >> 7U))) 
                                    & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                           | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                          | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->inst_val 
                                                >> 7U))))));
        tracep->fullIData(oldp+380,(0x20U),32);
    }
}
