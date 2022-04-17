module alu(
  input clk,
  input rstn,
  input [63:0] src1,
  input [63:0] imm_I,
  input addi,
  //output reg_wr,
  output reg [63:0] result
);

//assign result = addi ? (src1 + imm_I) : 0;

always@(posedge clk)begin
  if(!rstn)begin
    result <= 'b0;
  end
  else if(addi)begin
    result <= src1 + imm_I;
  end
end

endmodule
