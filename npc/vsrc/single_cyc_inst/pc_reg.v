module pc_reg(
  input clk,
  input rstn,
  output reg [31:0] pc
);

always@(posedge clk or negedge rstn)begin
  if(!rstn)begin
    pc <= 32'h8000_0000;
  end
  else begin
    pc <= pc + 4;
  end
end

endmodule

