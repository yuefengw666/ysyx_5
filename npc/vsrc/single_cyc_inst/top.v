module top(
  input clk,
  input rstn,
  input [31:0] inst,
  output wire [31:0] pc,
  output wire [63:0] result
);

//wire [31:0] pc;
//wire [31:0] pc;

//idu
wire [4:0] rs1;
wire [4:0] rd;
wire [63:0] imm_I;
wire reg_wr;
wire add;
wire ebreak;
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
  .clk  (clk),
  .rstn (rstn),
  .inst (inst),
  .rs1 (rs1),
  .rd (rd),
  .imm_I (imm_I),
  .reg_wr (reg_wr),
  .add (add)
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
  //.clk (clk),
  //.rstn (rstn),
  .src1 (src1),
  .imm_I (imm_I),
  .add (add),
  .result (result),
  .ebreak (ebreak)
);

endmodule
