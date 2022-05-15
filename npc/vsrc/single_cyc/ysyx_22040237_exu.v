import "DPI-C" function void ebreak();

module ysyx_22040237_exu(
  input rst,

  input [7:0] inst_opcode,
  input [63:0] op1,
  input [63:0] op2,

  input inst_ebreak,

  output reg [63:0] rd_data
);

always@(*)begin
  if(rst) begin
    rd_data = 64'h0;
  end
  else begin
    case(inst_opcode)
      `ysyx_22040237_INST_ADD: rd_data = op1 + op2;
      default: rd_data = 64'h0;
    endcase
  end
end

always@(posedge clk)begin
  if(inst_ebreak) ebreak();
end

endmodule
