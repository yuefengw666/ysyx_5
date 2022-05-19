import "DPI-C" function void ebreak();

module ysyx_22040237_exu(
  input clk,
  input rst,

  input [7:0] inst_opcode,
  input [63:0] op1,
  input [63:0] op2,
  input [31:0] op1_jump,
  input [31:0] op2_jump,

  input inst_ebreak,

  output reg [63:0] rd_data,
  output reg [31:0] pc_jump_addr
);

always@(*)begin
  rd_data = 'b0;
  pc_jump_addr = 'b0;
  case(inst_opcode)
    `ysyx_22040237_INST_ADD: begin
      rd_data = op1 + op2;
      pc_jump_addr = op1_jump + op2_jump;
    end
    default: begin
      rd_data = 64'h0;
      pc_jump_addr = 'b0;
    end
  endcase
end

always@(posedge clk)begin
  if(inst_ebreak) ebreak();
end

endmodule
