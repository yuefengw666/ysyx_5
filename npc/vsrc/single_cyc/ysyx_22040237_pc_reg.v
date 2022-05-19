module ysyx_22040237_pc_reg(
  input clk,
  input rst,
  input jump_flag,
  input [63:0] jump_offset,
  output reg [31:0] pc_reg 
);

always@(posedge clk)begin
  if(rst)begin
    pc_reg <= `ysyx_22040237_PC_RESET_ADDR;
  end
  else if (jump_flag)begin
    pc_reg <= pc_reg + jump_offset;
  end
  else begin
    pc_reg <= pc_reg + 32'h4;
  end
end

endmodule
