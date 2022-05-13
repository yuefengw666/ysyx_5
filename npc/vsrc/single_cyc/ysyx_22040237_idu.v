module ysyx_22040237_idu(
  input rst,
  input [31:0] inst,
  
  input [63:0] rs1_data,
  
  output [7:0] inst_opcode,
  output [63:0] op1,
  output [63:0] op2,

  output rs1_r_en,
  output [4:0] rs1_r_addr,
  output rs2_r_en,
  output [4:0] rs2_r_addr,
  output rd_w_en,
  output [4:0] rd_w_addr
);

wire [6:0] opcode;
wire [4:0] rd;
wire [2:0] func3;
wire [4:0] rs1;
wire [11:0] imm;

wire [5:0] inst_type;

wire inst_addi;

assign opcode = inst[6:0];
assign rd = inst[11:7];
assign func3 = inst[14:12];
assign rs1 = inst[19:15];
assign imm = inst[31:20];

// addi: func3:000, opcode:00100(11)
assign inst_addi = ~opcode[2] & ~opcode[3] & opcode[4] & ~opcode[5] & ~opcode[6] & ~func3[0] & ~func3[1] & ~func3[2];

// R [0], I [1], S [2], B [3], U [4], J [5]
assign inst_type[1] = rst ? 1'b0 : inst_addi;

//get inst opcode
//INST_ADD->8'h11
assign inst_opcode[0] = rst ? 1'b0 : inst_addi;
assign inst_opcode[1] = rst ? 1'b0 : 0;
assign inst_opcode[2] = rst ? 1'b0 : 0;
assign inst_opcode[3] = rst ? 1'b0 : 0;
assign inst_opcode[4] = rst ? 1'b0 : inst_addi;
assign inst_opcode[5] = rst ? 1'b0 : 0;
assign inst_opcode[6] = rst ? 1'b0 : 0;
assign inst_opcode[7] = rst ? 1'b0 : 0;

//get operands
assign op1 = rst ? 64'h0 : (inst_type[1] ? rs1_data : 64'h0);
assign op2 = rst ? 64'h0 : (inst_type[1] ? { {52{imm[11]}}, imm } : 64'h0);

//generate reg write and read enable
assign rs1_r_en = rst ? 1'b0 : inst_type[1];
assign rs1_r_addr = rst ? 5'b0 : (inst_type[1] ? rs1 : 5'b0);
assign rs2_r_en = 5'b0;
assign rs2_r_addr = 5'b0;

assign rd_w_en = rst ? 1'b0 : inst_type[1];
assign rd_w_addr = rst ? 5'b0 : (inst_type[1] ? rd : 5'b0);

endmodule
