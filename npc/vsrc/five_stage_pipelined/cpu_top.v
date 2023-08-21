module cpu_top(
    input clk,
    input rst,

    //****************for sim*****************//
    output [31:0] inst_val
);

assign inst_val = inst;

/****if stage****/
//ifu 
wire [63:0] if_pc;
wire [31:0]	if_inst;
ifu u_ifu(
  	.clk					(clk),
	.rst					(rst),
	.npc_jump_en_i			(npc_jump_en),
	.npc_jump_addr_i		(npc_jump_addr),
	
	.if_pc_o					(if_pc),
	.if_inst_o					(if_inst)
);

//if_id
wire	[63:0]	if_id_pc;
wire	[31:0]	if_id_inst;
if_id u_if_id(
	.clk						(clk),
	.rst 						(rst),
	.id_ready_i					(),
	.if_id_pc_i					(if_pc),
	.if_id_inst_i				(if_inst),

	.if_id_pc_o					(if_id_pc),
	.if_id_inst_o				(if_id_inst)
);

/******id stage********/
/**idu**/
//idu to regs
wire 		regs_rs1_read_en;
wire 		regs_rs2_read_en;
wire [4:0] 	regs_rs1_idx;
wire [4:0] 	regs_rs2_idx;
//idu to bju
wire [7:0]  bju_info_bus;
wire [63:0] bju_pc;
wire [63:0] bju_rs1;
wire [63:0] bju_rs2;
wire [63:0] bju_imm;
//idu to exu
wire        id_rd_wr_en;
wire [4:0]  id_rd_idx;
wire [13:0] id_alu_info_bus;
wire [63:0] id_alu_op1;
wire [63:0] id_alu_op2;
wire [6:0]  id_lsu_info_bus;
wire [63:0] id_store_rs2;
wire [9:0]  id_mdu_info_bus;
idu u_idu(
	.if_id_pc_i					(if_id_pc),
	.if_id_inst_i				(if_id_inst),
	
	.ex_fwd_rd_idx_i			(ex_fwd_rd_idx),
	.ex_fwd_res_i				(ex_fwd_res),
	.mem_fwd_rd_idx_i			(mem_fwd_rd_idx),
	.mem_fwd_res_fwd_i			(mem_fwd_res_fwd),
	.wb_fwd_rd_idx_i			(wb_fwd_rd_idx),
	.wb_fwd_res_i				(wb_fwd_res),

	.regs_rs1_read_en_o			(regs_rs1_read_en),
	.regs_rs2_read_en_o			(regs_rs2_read_en),
	.regs_rs1_idx_o				(regs_rs1_idx),
	.regs_rs2_idx_o				(regs_rs2_idx),
	.regs_rs1_data_i			(regs_rs1_data),
	.regs_rs2_data_i			(regs_rs2_data),

	.bju_info_bus_o				(bju_info_bus),
	.bju_pc_o					(bju_pc),
	.bju_rs1_o					(bju_rs1),
	.bju_rs2_o					(bju_rs2),
	.bju_imm_o					(bju_imm),

	.id_rd_wr_en_o				(id_rd_wr_en),
	.id_rd_idx_o				(id_rd_idx),
	.id_alu_info_bus_o			(id_alu_info_bus),
	.id_alu_op1_o				(id_alu_op1),
	.id_alu_op2_o				(id_alu_op2),
	.id_lsu_info_bus_o			(id_lsu_info_bus_o),
	.id_store_rs2_o				(id_store_rs2),
	.id_mdu_info_bus_o			(id_mdu_info_bus)
);

/**bju**/
wire npc_jump_en;
wire [63:0] npc_jump_addr;
bju u_bju(
	.bju_info_bus_i				(bju_info_bus),
	.bju_pc_i					(bju_pc),
	.bju_rs1_i					(bju_rs1),
	.bju_rs2_i					(bju_rs2),
	.bju_imm_i					(bju_imm),

	.npc_jump_en_o				(npc_jump_en),
	.npc_jump_addr_o			(npc_jump_addr)
);

/**id_ex**/


/********exe stage*********/




endmodule