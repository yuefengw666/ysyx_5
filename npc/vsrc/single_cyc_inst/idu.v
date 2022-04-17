module idu(
  input clk,
  input rstn,
  input [31:0] inst,
  
  output [4:0] rs1,
  output [4:0] rd,
  output [63:0] imm_I,
  output reg reg_wr,
  output addi
);

wire [6:0] opcode;//6:0
//wire [4:0] rd;//11:7
wire [2:0] funct3;//14:12
//wire [4:0] rs1;//19:15
wire [11:0] imm;//31:20

assign opcode = inst[6:0];
assign {imm,rs1,funct3,rd,opcode} = inst;

assign addi = ({funct3,opcode}==10'b000_0010011)? 1'b1 : 1'b0;
always@(posedge clk)begin
  if(!rstn)begin
    reg_wr <= 1'b0;
  end
  else if(addi)begin
    reg_wr <= 1'b1;
  end
  else begin
    reg_wr <= 1'b0;
  end
end
//assign reg_wr = addi;

assign imm_I = {{52{imm[11]}},imm};
//assign inst_type

endmodule
