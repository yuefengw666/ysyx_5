module ysyx_22040237_rv_single_cyc_cpu_top(
  input clk,
  input rst,
  input [31:0] inst_in,

  output [31:0] pc_o
);

wire inst;

//regs  output 
wire [63:0] rs1_data;
wire [63:0] rs2_data;

//idu output 
wire [7:0] inst_opcode;
wire [63:0] op1;
wire [63:0] op2;

wire rs1_r_en;
wire [4:0] rs1_r_addr;
wire rs2_r_en;
wire [4:0] rs2_r_addr;
wire rd_w_en;
wire [4:0] rd_w_addr;

//exu output 
wire [63:0] rd_data;

ysyx_22040237_pc_reg ysyx_22040237_pc_reg_u0(
  .clk (clk),
  .rst (rst),
  .pc_reg (pc_o)
);

ysyx_22040237_ifu ysyx_22040237_ifu_u0(
  .inst_i (inst_in),
  .inst_o (inst)
);

ysyx_22040237_idu ysyx_22040237_idu_u0(
  .rst (rst),
  .inst (inst),

  .rs1_data (rs1_data),
  .inst_opcode (inst_opcode),
  .op1 (op1),
  .op2 (op2),
  .rs1_r_en (rs1_r_en),
  .rs1_r_addr (rs1_r_addr),
  .rs2_r_en (rs2_r_en),
  .rs2_r_addr (rs2_r_addr),
  .rd_w_en (rd_w_en),
  .rd_w_addr (rd_w_addr)
);

ysyx_22040237_exu ysyx_22040237_exu_u0(
  .rst (rst),
  .inst_opcode (inst_opcode),
  .op1 (op1),
  .op2 (op2),
  .rd_data (rd_data)
);

ysyx_22040237_reg_file ysyx_22040237_reg_file_u0(
  .clk (clk),
  .rst (rst),
  .reg_wr_en (rd_w_en),
  .wr_addr (rd_w_addr),
  .wr_data (rd_data),
  .reg1_rd_en (rs1_r_en),
  .reg2_rd_en (rs2_r_en),
  .reg1_rd_addr (rs1_r_addr),
  .reg2_rd_addr (rs2_r_addr),
  .reg1_rd_data (rs1_data),
  .reg2_rd_data (rs2_data)
);

endmodule
