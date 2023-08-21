module bju(
  input [7:0]  bju_info_bus_i,
	input [63:0] bju_pc_i,
  input [63:0] bju_rs1_i,
  input [63:0] bju_rs2_i,
  input [63:0] bju_imm_i,

	output npc_jump_en_o,
	output npc_jump_addr_o
);

wire jal 	= bju_info_bus[`BJU_JAL];
wire jalr = bju_info_bus[`BJU_JALR];
wire beq  = bju_info_bus[`BJU_BEQ];
wire bne  = bju_info_bus[`BJU_BNE];
wire blt  = bju_info_bus[`BJU_BLT];
wire bge  = bju_info_bus[`BJU_BGE];
wire bltu  = bju_info_bus[`BJU_BLTU];
wire bgeu  = bju_info_bus[`BJU_BGEU];

//bj adder
wire [63:0] bj_adder_in1 =  bju_rs1_i;
wire [63:0] bj_adder_in2 = ~bju_rs2_i;
wire 				bj_adder_cin =  64'b1;
wire [63:0] bj_adder_res;
wire  			bj_adder_cout;

assign {bj_adder_cout, bj_adder_res} = bj_adder_in1 + bj_adder_in2 + bj_adder_cin;
wire [63:0] bj_sub_res = bj_adder_res;
wire 				bj_sub_count = bj_sub_count;

//branch jump judge by sub
wire beq_cmp  = !bne_cmp;
wire bne_cmp  = |bj_sub_res;
wire blt_cmp  =  bj_sub_res[63];
wire bge_cmp  = !blt_cmp;
wire bltu_cmp = !bj_sub_count;
wire bgeu_cmp = !bltu_cmp;

wire beq_res = beq && beq_cmp;
wire bne_res = bne && bne_cmp;
wire blt_res = blt && blt_cmp;
wire bge_res = bge && bge_cmp;
wire bltu_res = bltu && bltu_cmp;
wire bgeu_res = bgeu && bgeu_cmp;
/*
wire beq_op = beq && (bju_rs1_i == bju_rs2_i);
wire bnq_op = bne && (bju_rs1_i != bju_rs2_i);
wire blt_op = blt && (bju_rs1_i < bju_rs2_i);
wire bge_op = bge && (bju_rs1_i >= bju_rs2_i);
wire bltu_op = bltu && (bju_rs1_i < bju_rs2_i);
wire bgeu_op = bgeu && (bju_rs1_i >= bju_rs2_i);
*/

//pc adder
wire [63:0] pc_adder_in1 = jalr ? bju_rs1_i : bju_pc_i;
wire [63:0] pc_adder_in2 = bju_imm_i;
wire [63:0] pc_adder_res = pc_adder_in1 + pc_adder_in2;

assign npc_jump_en_o = jal | jalr | beq_res | bne_res | blt_res | bge_res | bltu_res | bgeu_res;
assign npc_jump_addr_o = {64{npc_jump_en_o}} & pc_addr_res;

endmodule