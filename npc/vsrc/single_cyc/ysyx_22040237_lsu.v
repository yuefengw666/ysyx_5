//import "DPI-C" function void mem_read(
  //input longint raddr, output longint rdata);

module ysyx_22040237_lsu(
  //input clk,
  //input rst,
  input rd_wr_en_i,
  input [4:0] rd_idx_i,
  input [`ysyx_22040237_REG_WIDTH-1:0] alu_res_i,
  input [6:0] ls_info_bus_i,
  input [`ysyx_22040237_REG_WIDTH-1:0] rs2_store_i,

  output rd_wr_en_o,
  output [4:0] rd_idx_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] rd_data_o,

  output mem_wen_o,
  output [7:0] mem_wmask_o,
  output [63:0] mem_waddr_o, 
  output [63:0] mem_wdata_o 
);

assign rd_wr_en_o = rd_wr_en_i;
assign rd_idx_o = rd_idx_i;
assign rd_data_o = ls_load ? load_data : alu_res_i;

//store decode
assign mem_wen_o = ls_store;
assign mem_waddr_o = ls_store ? alu_res_i : 'b0;
assign mem_wmask_o = ( {8{ls_byte}} & 8'b0000_0001) | 
                   ( {8{ls_db}}   & 8'b0000_0011) | 
                   ( {8{ls_word}} & 8'b0000_1111) |
                   ( {8{ls_dw}}   & 8'b1111_1111) ;
assign mem_wdata_o = rs2_store_i;

//load
wire ls_load  = ls_info_bus_i[0];
wire ls_store = ls_info_bus_i[1];
wire ls_usign = ls_info_bus_i[2];
wire ls_byte  = ls_info_bus_i[3];
wire ls_db    = ls_info_bus_i[4];
wire ls_word  = ls_info_bus_i[5];
wire ls_dw    = ls_info_bus_i[6];


wire mem_ren = ls_load;
wire [63:0] mem_raddr = ls_load ? alu_res_i : 'b0;
wire [63:0] mem_rdata;

//memory read
/* verilator lint_off LATCH */
always@(*)begin
  if(mem_ren)
    mem_read(mem_raddr,mem_rdata);
end
/* verilator lint_on LATCH */

// identify load type
wire lb = ls_load && !ls_usign && ls_byte;
wire lh = ls_load && !ls_usign && ls_db;
wire lw = ls_load && !ls_usign && ls_word;
wire ld = ls_load && !ls_usign && ls_dw;
wire lbu = ls_load && ls_usign && ls_byte;
wire lhu = ls_load && ls_usign && ls_db;
wire lwu = ls_load && ls_usign && ls_word;


wire [63:0] load_data;
assign load_data = ( {64{lb}} & { {56{mem_rdata[7]}}, mem_rdata[7:0] } )   |
                   ( {64{lh}} & { {48{mem_rdata[15]}}, mem_rdata[15:0] } ) |
                   ( {64{lw}} & { {32{mem_rdata[31]}}, mem_rdata[31:0] } ) | 
                   ( {64{ld}} & {32'b0, mem_rdata[31:0] )                          | 
                   ( {64{lbu}} & { 56'b0, mem_rdata[7:0]})                 | 
                   ( {64{lhu}} & { 48'b0, mem_rdata[15:0]})                |
                   ( {64{lwu}} & { 32'b0, mem_rdata[31:0]}) ;


endmodule
