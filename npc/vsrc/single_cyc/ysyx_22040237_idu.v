module ysyx_22040237_idu(
  input rst,
  input [31:0] pc,
  input [31:0] inst,
  
  input [63:0] rs1_data,
  
  output [7:0] inst_opcode,
  output reg [63:0] op1,
  output reg [63:0] op2,

  //no encode for ebreak for now
  output inst_ebreak,

  output reg rs1_r_en,
  output reg [4:0] rs1_r_addr,
  output reg rs2_r_en,
  output reg [4:0] rs2_r_addr,
  output reg rd_w_en,
  output reg [4:0] rd_w_addr
);

wire [6:0] opcode;
wire [4:0] rd;
wire [2:0] func3;
wire [4:0] rs1;
wire [11:0] imm_i;

wire [19:0] imm_u;

wire [63:0] src_i;
wire [63:0] src_u;

wire type_R;
wire type_I;
wire type_S;
wire type_B;
wire type_U;
wire type_J;
wire [5:0] inst_type;

wire inst_addi;
wire inst_auipc;
wire inst_lui;

//parse inst
assign opcode = inst[6:0];
assign rd = inst[11:7];

//I type
assign func3 = inst[14:12];
assign rs1 = inst[19:15];
assign imm_i = inst[31:20];

//U type
assign imm_u = inst[31:12];

//imm extension
//I
assign src_i = { {52{imm_i[11]}},imm_i};
//U
assign src_u = { {32{imm_u[19]}}, imm_u, 12'b0};

// addi: func3:000, opcode:00100(11)
assign inst_addi = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & opcode[4] & ~opcode[5] & ~opcode[6] & ~func3[0] & ~func3[1] & ~func3[2];
//ebreak: 
assign inst_ebreak = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & opcode[4] & opcode[5] & opcode[6] & ~func3[0] & ~func3[1] & ~func3[2];

//dummy
//auipc: opcode:0010111
assign inst_auipc = opcode[0] & opcode[1] & opcode[2] & ~opcode[3] & opcode[4] & ~opcode[5] & ~opcode[6];
//lui: opcode: 0110111
assign inst_lui = opcode[0] & opcode[1] & opcode[2] & ~opcode[3] & opcode[4] & opcode[5] & ~opcode[6];

//judge type
assign type_R = 1'b0;
assign type_I = inst_addi | inst_ebreak;
assign type_S = 1'b0;
assign type_B = 1'b0;
assign type_U = inst_auipc | inst_lui;
assign type_J = 1'b0;

// R [0], I [1], S [2], B [3], U [4], J [5]
assign inst_type = { type_J, type_U, type_B, type_S, type_I, type_R};

//get inst opcode
//INST_ADD->8'h11
assign inst_opcode[0] = rst ? 1'b0 : ( inst_addi | inst_auipc | inst_lui);
assign inst_opcode[1] = rst ? 1'b0 : 0;
assign inst_opcode[2] = rst ? 1'b0 : 0;
assign inst_opcode[3] = rst ? 1'b0 : 0;
assign inst_opcode[4] = rst ? 1'b0 : ( inst_addi | inst_auipc | inst_lui);
assign inst_opcode[5] = rst ? 1'b0 : 0;
assign inst_opcode[6] = rst ? 1'b0 : 0;
assign inst_opcode[7] = rst ? 1'b0 : 0;

//get operands
//assign op1 = rst ? 64'h0 : ((|inst_type) ? rs1_data : 64'h0); //|inst_type exclude warning for now
//assign op2 = rst ? 64'h0 : ((|inst_type) ? { {52{imm[11]}}, imm } : 64'h0);
always@(*)begin
  op1 = 'b0;
  op2 = 'b0;
  rs1_r_en = 1'b0;
  rs1_r_addr = 'b0;
  rs2_r_en = 1'b0;
  rs2_r_addr = 'b0;
  rd_w_en = 1'b0;
  rd_w_addr = 'b0;

  case(inst_type)
    6'b000010:begin
      op1 = rs1_data;
      op2 = src_i;
      rs1_r_en = 1'b1;
      rs1_r_addr = rs1;
      rd_w_en = 1'b1;
      rd_w_addr = rd;
    end
    6'b010000:begin
      if(inst_auipc)begin
        op1 = {32'b0,pc}; 
      end
      else begin
        op1 = 'b0;
      end
      op2 = src_u;
      rd_w_en = 1'b1;
      rd_w_addr = rd;
    end
    default:begin
      op1 = 'b0;
      op2 = 'b0;
    end
  endcase
end

/*
//generate reg write and read enable
assign rs1_r_en = rst ? 1'b0 : inst_type[1];
assign rs1_r_addr = rst ? 5'b0 : (inst_type[1] ? rs1 : 5'b0);
assign rs2_r_en = 1'b0;
assign rs2_r_addr = 5'b0;

assign rd_w_en = rst ? 1'b0 : inst_type[1];
assign rd_w_addr = rst ? 5'b0 : (inst_type[1] ? rd : 5'b0);
*/
endmodule
