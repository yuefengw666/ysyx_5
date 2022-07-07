import "DPI-C" function void sim_ebreak();
import "DPI-C" function void invalid_inst_o();

module ysyx_22040237_exu(
  input clk,
  input rst,

  input rd_wr_en_i,
  input [4:0] rd_idx_i,

  input [63:0] op1_i,  
  input [63:0] op2_i,
  input [63:0] op1_jp_i,
  input [63:0] op2_jp_s_i,
  input [15:0] exu_info_bus_i,

  output rd_wr_en_o,
  output [4:0] rd_idx_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] alu_res_o,
  output [6:0] ls_info_bus_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] rs2_store_o,

  output pc_jump_flag_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] pc_jump_addr_o,




/*************************DPI_C sim end***************************************/
  input invalid_inst
/*****************************************************************************/

);

/*************************DPI_C sim end***************************************/
wire ebreak = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_EBREAK];

always@(posedge clk)begin
  if(ebreak) sim_ebreak();
end
/*****************************************************************************/

/*************************DPI_C identify invalid inst, sim stop***************/
always@(posedge clk)begin
  if((!rst) && invalid_inst)begin
    invalid_inst_o(); 
  end
end
/******************************************************************************/

//---------identify alu bjp ls----------//
wire alu_req = exu_info_bus_i[2:0] == `ysyx_22040237_EXU_INFO_ALU;
wire bjp_req = exu_info_bus_i[2:0] == `ysyx_22040237_EXU_INFO_BJP;
wire ls_req = exu_info_bus_i[2:0] == `ysyx_22040237_EXU_INFO_LS;
wire mdu_req = exu_info_bus_i[2:0] == `ysyx_22040237_EXU_INFO_MDU;

//----------alu req----------//
wire alu_wop = alu_req & exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_WOP];

//---add sub op---//
wire op_add = alu_req & exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_ADD];
wire op_add_need = op_add | op_jal  |  op_jalr |  ls_req;

wire op_sub = alu_req & exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SUB];
wire op_sub_need = op_sub  |
                   op_slt  | 
                   op_sltu |
                   op_beq  |
                   op_bne  |
                   op_blt  |
                   op_bge  |
                   op_bltu |
                   op_bgeu;
wire op_add_sub = op_add_need | op_sub ;
             
wire [63 : 0] adder_in1;
wire [63 : 0] adder_in2;
wire [63 : 0] adder_cin;
wire          adder_cout;
wire [63 : 0] adder_res;
wire [63 : 0] add_sub_res;

assign adder_in1 = op1_i;
assign adder_in2 = op_sub_need ? ~op2_i : op2_i;
assign adder_cin = op_sub_need ? 64'b1 : 64'b0;

assign {adder_cout, adder_res} = adder_in1 + adder_in2 + adder_cin;

assign add_sub_res = adder_res;

//---add word op---//
wire [`ysyx_22040237_REG_WIDTH-1:0] wop_add_sub_res;
assign wop_add_sub_res = { {32{add_sub_res[31]}}, add_sub_res[31:0]};

//sll op
wire [`ysyx_22040237_REG_WIDTH-1:0] sll_res;
wire op_sll = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SLL];

assign sll_res = op1_i << op2_i[5:0];

//sll word op
wire [`ysyx_22040237_REG_WIDTH-1:0] wop_sll_res;
assign wop_sll_res = { {32{sll_res[31]}}, sll_res[31:0] };

//srl 
wire [`ysyx_22040237_REG_WIDTH-1:0] srl_res;
wire op_srl = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SRL];

assign srl_res = op1_i >> op2_i[5:0];

//srl word op ???????????????????????????????????????????
wire [31:0] srlw_res = op1_i[31:0] >> op2_i[5:0];
wire [`ysyx_22040237_REG_WIDTH-1:0] wop_srl_res;
assign wop_srl_res = { {32{srlw_res[31]}}, srlw_res };

//sra
wire [`ysyx_22040237_REG_WIDTH-1:0] sra_res;
wire op_sra = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SRA];
assign sra_res = ($signed(op1_i)) >>> op2_i[5:0];

//word sra op
wire [`ysyx_22040237_REG_WIDTH-1:0] wop_sra_res;
wire [31:0] sraw_res = ($signed(op1_i[31:0])) >>> op2_i[5:0];
assign wop_sra_res = { {32{sraw_res[31]}}, sraw_res[31:0] };

//slt
wire [`ysyx_22040237_REG_WIDTH-1:0] slt_res;
wire op_slt = alu_req & exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SLT];
wire slt_cmp_res = ( op1_i[63] & !op2_i[63]) | ( ~(op1_i[63] ^ op2_i[63]) & adder_res[63]);

assign slt_res = {63'b0, slt_cmp_res};

//sltu
wire [`ysyx_22040237_REG_WIDTH-1:0] sltu_res;
wire op_sltu = alu_req & exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SLTU];
wire sltu_cmp_res = !adder_cout;
assign sltu_res = {63'b0, sltu_cmp_res};

//xor
wire [`ysyx_22040237_REG_WIDTH-1:0] xor_res;
wire op_xor = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_XOR]; 
wire [`ysyx_22040237_REG_WIDTH-1:0] xor_in1 = op1_i;
wire [`ysyx_22040237_REG_WIDTH-1:0] xor_in2 = op2_i;

assign xor_res = xor_in1 ^ xor_in2;

//or
wire [`ysyx_22040237_REG_WIDTH-1:0] or_res;
wire op_or = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_OR];

assign or_res = op1_i | op2_i;

//and
wire [`ysyx_22040237_REG_WIDTH-1:0] and_res;
wire op_and = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_AND];

assign and_res = op1_i & op2_i;

//lui
wire [`ysyx_22040237_REG_WIDTH-1:0] lui_res;
wire op_lui = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_LUI];

assign lui_res = op2_i;

//-----------------------bjp req------------------------//
assign pc_jump_flag_o = op_jal | op_jalr | beq_res | bne_res | blt_res | bge_res | bltu_res | bgeu_res;
assign pc_jump_addr_o = op1_jp_i + op2_jp_s_i;

//jal
wire op_jal = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_JAL];

//jalr
wire op_jalr = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_JALR];

//beq judge sub result 
//wire [`ysyx_22040237_REG_WIDTH:0] bjp_sub_res = adder_res;

wire beq_cmp  = ! bne_cmp;
wire bne_cmp  = | adder_res;
wire blt_cmp  =   slt_cmp_res;
wire bge_cmp  = ! blt_cmp;
wire bltu_cmp =   sltu_cmp_res;
wire bgeu_cmp = ! bltu_cmp;
//beq
wire op_beq = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BEQ];
wire beq_res = op_beq && beq_cmp;

//bne
wire op_bne = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BNE];
wire bne_res = op_bne & bne_cmp;

//blt
wire op_blt = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BLT];
wire blt_res = op_blt & blt_cmp;

//bge
wire op_bge = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BGE];
wire bge_res = op_bge & bge_cmp;

//bltu
wire op_bltu = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BLTU];
wire bltu_res = op_bltu & bltu_cmp;

//bgeu
wire op_bgeu = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BGEU];
wire bgeu_res = op_bgeu & bgeu_cmp;


//--------------------ls req--------------------//

assign ls_info_bus_o = { ls_dw, ls_word, ls_db, ls_byte, ls_usign, op_store, op_load };
assign rs2_store_o = op_store ? op2_jp_s_i : 'b0;

wire op_load = ls_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_LS_LOAD];
wire op_store = ls_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_LS_STORE];
wire ls_usign = ls_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_LS_USIGN];
wire ls_byte = ls_req & exu_info_bus_i[`ysyx_22040237_EXU_INFO_LS_BYTE];
wire ls_db = ls_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_LS_DB];
wire ls_word = ls_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_LS_WORD];
wire ls_dw = ls_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_LS_DW];


//--------------------mdu req-------------------//
wire mdu_wop = exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_WOP];
wire [127:0] mul_res_t;
assign mul_res_t = op1_i * op2_i;

//mul
wire op_mul = mdu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_MUL] && !mdu_wop;
wire [`ysyx_22040237_REG_WIDTH-1:0]mul_res;
assign mul_res = mul_res_t[63:0];


//mulh
wire op_mulh = mdu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_MULH] && !mdu_wop;
wire [`ysyx_22040237_REG_WIDTH-1:0] mulh_res;
assign mulh_res = mul_res_t[127:64];

//mulhsu
wire op_mulhsu = mdu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_MULHSU] && !mdu_wop;
wire [`ysyx_22040237_REG_WIDTH-1:0] mulhsu_res;
/* verilator lint_off UNUSED */
wire [127:0] mulsu_res_t;
/* verilator lint_on UNUSED */
assign mulsu_res_t = ($signed(op1_i)) * ($unsigned(op2_i));
assign mulhsu_res = mulsu_res_t[127:64];

//mulhu
wire op_mulhu = mdu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_MULHU] && !mdu_wop;
wire [`ysyx_22040237_REG_WIDTH-1:0] mulhu_res;
/* verilator lint_off UNUSED */
wire [127:0] muluu_res_t;
/* verilator lint_on UNUSED */
wire muluu_res_t = ($unsigned(op1_i)) * ($unsigned(op2_i));
assign mulhu_res = muluu_res_t[127:64];

//div
wire op_div = mdu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_DIV] && !mdu_wop;
wire [`ysyx_22040237_REG_WIDTH-1:0] div_res;
assign div_res = op1_i / op2_i;

//divu
wire op_divu = mdu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_DIVU] && !mdu_wop;
wire [`ysyx_22040237_REG_WIDTH-1:0] divu_res;
assign divu_res = ($unsigned(op1_i)) / ($unsigned(op2_i));

//rem
wire op_rem = mdu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_REM] && !mdu_wop;
wire [`ysyx_22040237_REG_WIDTH-1:0] rem_res;
assign rem_res = op1_i % op2_i;

//remu
wire op_remu = mdu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_MDU_REMU] && !mdu_wop;
wire [`ysyx_22040237_REG_WIDTH-1:0] remu_res;
assign remu_res = ($unsigned(op1_i)) % ($unsigned(op2_i));

//--------------------alu result-------------------//

assign alu_res_o =( ( {64{op_add_sub & !alu_wop}}   & add_sub_res )    |
                    ( {64{op_add_sub &  alu_wop}}   & wop_add_sub_res) |
                    ( {64{op_sll     & !alu_wop}}   & sll_res     )    |
                    ( {64{op_sll     &  alu_wop}}   & wop_sll_res )    |
                    ( {64{op_slt}}              & slt_res     )    |
                    ( {64{op_sltu}}             & sltu_res    )    |
                    ( {64{op_xor}}              & xor_res     )    |
                    ( {64{op_srl     & !alu_wop}}   & srl_res     )    |
                    ( {64{op_srl     &  alu_wop}}   & wop_srl_res )    |
                    ( {64{op_sra     & !alu_wop}}   & sra_res     )    |
                    ( {64{op_sra     &  alu_wop}}   & wop_sra_res )    |
                    ( {64{op_or}}               & or_res      )    | 
                    ( {64{op_and}}              & and_res     )    |
                    ( {64{op_lui}}              & lui_res     )    |
                    ( {64{op_mul}}              & mul_res     )    |  
                    ( {64{op_mulh}}             & mulh_res    )    |
                    ( {64{op_mulhsu}}           & mulhsu_res  )    |
                    ( {64{op_mulhu}}            & mulhu_res)       |
                    ( {64{op_div}}              & div_res)         |
                    ( {64{op_divu}}             & divu_res)        |
                    ( {64{op_rem}}              & rem_res)         |
                    ( {64{op_remu}}             & remu_res)        
                  );

assign rd_wr_en_o = rd_wr_en_i;
assign rd_idx_o = rd_idx_i;

endmodule
