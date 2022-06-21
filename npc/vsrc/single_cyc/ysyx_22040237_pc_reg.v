module ysyx_22040237_pc_reg(
  input clk,
  input rst,
  input jump_flag,
  input [63:0] pc_jump_addr,
  output reg [63:0] pc_reg 
);

always@(posedge clk)begin
  if(rst)begin
    pc_reg <= `ysyx_22040237_PC_RESET_ADDR;
  end
  else if (jump_flag)begin
    pc_reg <= pc_jump_addr;
  end
  else begin
    pc_reg <= pc_reg + 64'h4;
  end
end

endmodule
