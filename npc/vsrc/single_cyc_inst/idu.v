module idu(
  input [31:0] inst,
  
  output [4:0] rs1,
  output [4:0] rd,
  output [63:0] imm_I,
  output reg_wr,
  output addi
);

wire [6:0] opcode;//6:0
//wire [4:0] rd;//11:7
wire [2:0] funct3;//14:12
//wire [4:0] rs1;//19:15
wire [11:0] imm;//31:20

assign opcode = inst[6:0];
assign {imm,rs1,funct3,rd,opcode} = inst;

assign addi = ({funct3,opcode}==000_0010011)? 1'b1 : 1'b0;
assign reg_wr = addi;

assign imm_I = {{52{imm[11]}},imm};
//assign inst_type

endmodule
