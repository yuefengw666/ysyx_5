module top(
  input clk,
  input rstn,
  input inst,
  output wire [63:0] result
);

wire [31:0] pc;

//idu
wire [4:0] rs1;
wire [4:0] rd;
wire [63:0] imm_I;
wire reg_wr;
wire addi;

//reg_file
wire [63:0] src1;

//alu
//wire [63:0] result;

//pc_reg
pc_reg u_pc_reg(
  .clk (clk),
  .rstn (rstn),
  .pc (pc)
);

//idu
idu u_idu(
  .inst (inst),
  .rs1 (rs1),
  .rd (rd),
  .imm_I (imm_I),
  .reg_wr (reg_wr),
  .addi (addi)
);

//reg_file
reg_file u_reg_file(
  .clk (clk),
  .rstn (rstn),
  .r1_rd_addr (rs1),
  .reg_wr (reg_wr),
  .wr_addr (rd),
  .wr_data (result),
  .r1_rd_data (src1)
);

//alu
alu u_alu(
  .clk (clk),
  .rstn (rstn),
  .src1 (src1),
  .imm_I (imm_I),
  .addi (addi),
  .result (result)
);

endmodule
