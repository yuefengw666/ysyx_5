module cpu_top(
  input clk,
  input rst,
  //for sim
  output [`ysyx_22040237_INST_WIDTH -1:0] inst_val,
);

//pc_reg
wire [`ysyx_22040237_REG_WIDTH-1 : 0] pc_to_ifu;

ysyx_22040237_pc_reg pc_reg_u0(
  .clk (clk),
  .rst (rst),
  .pc_jump_flag_i (pc_jump_flag_to_pc_reg),
  .pc_jump_addr_i (pc_jump_addr_to_pc_reg),
  .pc_o (pc_to_ifu)
);

//ifu
wire [`ysyx_22040237_REG_WIDTH-1:0] pc_to_idu;
//wire [`ysyx_22040237_INST_WIDTH -1:0] inst_val;

ysyx_22040237_ifu ifu_u0(
  //.rst (rst),
  //.rdata_63_32 (rdata_63_32),
  .pc_i (pc_to_ifu),
  .pc_o (pc_to_idu),
  .inst_o (inst_val)
);

//idu
wire rd_wr_en_to_exu;
wire rs1_read_en_to_regs;
wire rs2_read_en_to_regs;
wire [4:0] rd_idx_to_exu;
wire [4:0] rs1_idx_to_regs;
wire [4:0] rs2_idx_to_regs;
wire [63:0] op1_to_exu;
wire [63:0] op2_to_exu;
wire [63:0] op1_jp_to_exu;
wire [63:0] op2_jp_s_to_exu;
wire [15:0] exu_info_bus_to_exu;
wire invalid_inst_to_exu;

ysyx_22040237_idu idu_u0(
  .pc_i (pc_to_idu),
  .inst_i (inst_val),

  .rs1_data_i (rs1_data_to_idu),
  .rs2_data_i (rs2_data_to_idu),
  
  .rd_wr_en_o (rd_wr_en_to_exu),
  .rs1_read_en_o (rs1_read_en_to_regs),
  .rs2_read_en_o  (rs2_read_en_to_regs),
  .rd_idx_o (rd_idx_to_exu),
  .rs1_idx_o (rs1_idx_to_regs),
  .rs2_idx_o (rs2_idx_to_regs),

  .op1_o (op1_to_exu),
  .op2_o (op2_to_exu),
  .op1_jp_o (op1_jp_to_exu),
  .op2_jp_s_o (op2_jp_s_to_exu),
  .exu_info_bus_o (exu_info_bus_to_exu),

  .invalid_inst (invalid_inst_to_exu)
);

//exu

wire rd_wr_en_to_lsu;
wire [4:0] rd_idx_to_lsu;
wire [63:0] alu_res_to_lsu;
wire pc_jump_flag_to_pc_reg;
wire [63:0] pc_jump_addr_to_pc_reg;
wire [6:0] ls_info_bus_to_isu;
wire [63:0] rs2_store_to_isu;
ysyx_22040237_exu exu_u0(
  .clk (clk),
  .rst (rst),

  .rd_wr_en_i (rd_wr_en_to_exu),
  .rd_idx_i  (rd_idx_to_exu),

  .op1_i (op1_to_exu),
  .op2_i (op2_to_exu),
  .op1_jp_i (op1_jp_to_exu),
  .op2_jp_s_i (op2_jp_s_to_exu),
  .exu_info_bus_i (exu_info_bus_to_exu),

  .rd_wr_en_o (rd_wr_en_to_lsu),
  .rd_idx_o (rd_idx_to_lsu),
  .alu_res_o (alu_res_to_lsu),
  .ls_info_bus_o (ls_info_bus_to_isu),
  .rs2_store_o (rs2_store_to_isu),

  .pc_jump_flag_o (pc_jump_flag_to_pc_reg),
  .pc_jump_addr_o (pc_jump_addr_to_pc_reg),


/*************************DPI_C sim end***************************************/
  .invalid_inst (invalid_inst_to_exu)
/*****************************************************************************/
);

//lsu
wire rd_wr_en_to_wbu;
wire [4:0] rd_idx_to_wbu;
wire [63:0] rd_data_to_wbu;
wire mem_wen_to_wbu;
wire [7:0] mem_wmask_to_wbu;
wire [63:0] mem_waddr_to_wbu;
wire [63:0] mem_wdata_to_wbu;
ysyx_22040237_lsu lsu_u0(
  .rd_wr_en_i (rd_wr_en_to_lsu),
  .rd_idx_i (rd_idx_to_lsu),
  .alu_res_i (alu_res_to_lsu),
  .ls_info_bus_i (ls_info_bus_to_isu),
  .rs2_store_i (rs2_store_to_isu),

  .rd_wr_en_o (rd_wr_en_to_wbu),
  .rd_idx_o (rd_idx_to_wbu),
  .rd_data_o (rd_data_to_wbu),

  .mem_wen_o (mem_wen_to_wbu),
  .mem_wmask_o (mem_wmask_to_wbu),
  .mem_waddr_o (mem_waddr_to_wbu),
  .mem_wdata_o (mem_wdata_to_wbu)  
);

//wbu
wire rd_wr_en_to_regs;
wire [4:0] rd_idx_to_regs;
wire [63:0] rd_data_to_regs;
ysyx_22040237_wbu wbu_u0(
  .rd_wr_en_i (rd_wr_en_to_wbu),
  .rd_idx_i (rd_idx_to_wbu),
  .rd_data_i (rd_data_to_wbu),

  .mem_wen_i (mem_wen_to_wbu),
  .mem_wmask_i (mem_wmask_to_wbu),
  .mem_waddr_i (mem_waddr_to_wbu),
  .mem_wdata_i (mem_wdata_to_wbu),

  .rd_wr_en_o (rd_wr_en_to_regs),
  .rd_idx_o (rd_idx_to_regs),
  .rd_data_o (rd_data_to_regs)
);

//regs
wire [`ysyx_22040237_REG_WIDTH-1:0] rs1_data_to_idu;
wire [`ysyx_22040237_REG_WIDTH-1:0] rs2_data_to_idu;
ysyx_22040237_regs regs_u0(
  .clk (clk),
  .rst (rst),

  .pc_i (pc_to_idu),
  
  .rd_wr_en_i (rd_wr_en_to_regs),
  .rd_idx_i (rd_idx_to_regs),
  .rd_wr_data_i (rd_data_to_regs),
  .rs1_read_en_i (rs1_read_en_to_regs),
  .rs2_read_en_i (rs2_read_en_to_regs),
  .rs1_idx_i (rs1_idx_to_regs),
  .rs2_idx_i (rs2_idx_to_regs),
  .rs1_data_o (rs1_data_to_idu),
  .rs2_data_o (rs2_data_to_idu)
);

endmodule
