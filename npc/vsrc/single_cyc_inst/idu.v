module idu(
  input clk,
  input rstn,
  input [31:0] inst,
  
  output reg[4:0] rs1,
  output reg [4:0] rd,
  output reg [63:0] imm_I,
  output reg reg_wr,
  output reg add,
  output wire ebreak
);

wire [6:0] opcode;//6:0
//wire [4:0] rd;//11:7
wire [2:0] funct3;//14:12
//wire [4:0] rs1;//19:15
wire [11:0] imm;//31:20
wire [4:0] rs1_t;
wire [4:0] rd_t;
wire addi;

assign opcode = inst[6:0];
assign {imm,rs1_t,funct3,rd_t,opcode} = inst;
//addi
assign addi = ({funct3,opcode}==10'b000_0010011)? 1'b1 : 1'b0;
assign ebreak = ({imm,funct3,opcode} == 22'b1000_1110011) ? 1'b1 : 1'b0;

always@(posedge clk)begin
  if(!rstn)begin
    reg_wr <= 1'b0;
    rs1 <= 'b0;
    rd <= 'b0;
    imm_I <= 'b0;
  end
  else if(addi)begin
    reg_wr <= 1'b1;
    rs1 <= rs1_t;
    rd <= rd_t;
    imm_I <= {{52{imm[11]}},imm};
    add <= 1'b1;
  end
  else begin
    reg_wr <= 1'b0;
    rs1 <= 'b0;
    rd <= 'b0;
    imm_I <= 'b0;
    add <= 1'b0;
  end
end
//assign reg_wr = addi;

//assign imm_I_t = {{52{imm[11]}},imm};
//assign inst_type

endmodule
