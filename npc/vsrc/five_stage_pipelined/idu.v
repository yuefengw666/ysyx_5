module idu(
  //if to id
  input [63:0] if_id_pc_i,
  input [31:0] if_id_inst_i,
  
  /*
  //forwarding 
  input [6:0]  ex_fwd_rd_idx_i,//[5]:indicate alu confilct, [6]indicate mem_load conflict
  input [63:0] ex_fwd_res_i,

  input [5:0]  mem_fwd_rd_idx_i,
  input [63:0] mem_fwd_res_i,

  input [5:0]  wb_fwd_rd_idx_i,
  input [63:0] wb_fwd_res_i,
  */

  //regs
  //output regs_rs1_read_en_o,
  //output regs_rs2_read_en_o,
  //output [4:0] regs_rs1_idx_o,
  //output [4:0] regs_rs2_idx_o,
  //input [63:0] regs_rs1_data_i,
  //input [63:0] regs_rs2_data_i,

  //forwarding unit
  output [4:0] rs1_idx_o,
  output [4:0] rs2_idx_o,
  output       bj_inst_valid_o,
  output rs1_need_o,
  output rs2_need_o,
  input  [63:0] rs1_data_i,
  input  [63:0] rs2_data_i,

  //bju
  output [7:0]  bju_info_bus_o,
  output [63:0] bju_pc_o,
  output [63:0] bju_rs1_o,
  output [63:0] bju_rs2_o,
  output [63:0] bju_imm_o,

  //id_exu
  output        id_rd_wr_en_o,
  output [4:0]  id_rd_idx_o,

  output [13:0] id_alu_info_bus_o,
  output [9:0]  id_mdu_info_bus_o,
  output [63:0] id_alu_op1_o,
  output [63:0] id_alu_op2_o,
  
  output [6:0]  id_lsu_info_bus_o,
  output [63:0] id_store_rs2_o,

  output [9:0]  id_mdu_info_bus_o,

  //**************DPI_C identify invalid inst for sim*****************/
  output invalid_inst
  /*******************************************************************/
);

  //**************DPI_C identify invalid inst for sim*****************/
assign invalid_inst = ~( rv64I_RM | rv64I_I | rv64I_L | rv64I_S | rv64I_B | 
                         rv64I_JAL | rv64I_JALR | rv64I_AUIPC | rv64I_LUI | rv64I_EBREAK |
                         rv64IW_RM | rv64IW_I
                       );
  /*******************************************************************/


wire [6:0] opcode = if_id_inst_i[6:0];
wire [4:0] rd     = if_id_inst_i[11:7];
wire [2:0] funct3 = if_id_inst_i[14:12];
wire [6:0] funct7 = if_id_inst_i[31:25];
wire [4:0] rs1    = if_id_inst_i[19:15];
wire [4:0] rs2    = if_id_inst_i[24:20];

//--------------------decode inst opcode--------------------//
//wire opcode_1_0_00 = !opcode[1] & !opcode[0];
//wire opcode_1_0_01 = !opcode[1] &  opcode[0];
//wire opcode_1_0_10 =  opcode[1] & !opcode[0];
wire opcode_1_0_11 =  opcode[1] &  opcode[0];

wire opcode_4_2_000 = !opcode[4] & !opcode[3] & !opcode[2];
wire opcode_4_2_001 = !opcode[4] & !opcode[3] &  opcode[2];
//wire opcode_4_2_010 = !opcode[4] &  opcode[3] & !opcode[2];
wire opcode_4_2_011 = !opcode[4] &  opcode[3] &  opcode[2];
wire opcode_4_2_100 =  opcode[4] & !opcode[3] & !opcode[2];
wire opcode_4_2_101 =  opcode[4] & !opcode[3] &  opcode[2];
wire opcode_4_2_110 =  opcode[4] &  opcode[3] & !opcode[2];
//wire opcode_4_2_111 =  opcode[4] &  opcode[3] &  opcode[2];

wire opcode_6_5_00 = !opcode[6] & !opcode[5];
wire opcode_6_5_01 = !opcode[6] &  opcode[5];
//wire opcode_6_5_10 =  opcode[6] & !opcode[5];
wire opcode_6_5_11 =  opcode[6] &  opcode[5];

//--------------------base type--------------------//

wire rv64I_RM = opcode_6_5_01 && opcode_4_2_100 && opcode_1_0_11;
wire rv64I_I  = opcode_6_5_00 && opcode_4_2_100 && opcode_1_0_11;
wire rv64I_L  = opcode_6_5_00 && opcode_4_2_000 && opcode_1_0_11;
wire rv64I_S  = opcode_6_5_01 && opcode_4_2_000 && opcode_1_0_11;
wire rv64I_B  = opcode_6_5_11 && opcode_4_2_000 && opcode_1_0_11;

wire rv64I_LUI    = opcode_6_5_01 && opcode_4_2_101 && opcode_1_0_11;
wire rv64I_AUIPC  = opcode_6_5_00 && opcode_4_2_101 && opcode_1_0_11;
wire rv64I_JAL    = opcode_6_5_11 && opcode_4_2_011 && opcode_1_0_11;
wire rv64I_JALR   = opcode_6_5_11 && opcode_4_2_001 && opcode_1_0_11;
wire rv64I_EBREAK = opcode_6_5_11 && opcode_4_2_100 && opcode_1_0_11;

wire rv64IW_RM = opcode_6_5_01 && opcode_4_2_110 && opcode_1_0_11;
wire rv64IW_I  = opcode_6_5_00 && opcode_4_2_110 && opcode_1_0_11;

//decode imm
wire [63:0] imm_i = { { 52{if_id_inst_i[31]} }, if_id_inst_i[31:20] };
wire [63:0] imm_s = { { 52{if_id_inst_i[31]} }, if_id_inst_i[31:25], if_id_inst_i[11:7] };
wire [63:0] imm_b = { { 51{if_id_inst_i[31]} }, if_id_inst_i[31], if_id_inst_i[7], if_id_inst_i[30:25], if_id_inst_i[11:8], 1'b0 };
wire [63:0] imm_u = { { 32{if_id_inst_i[31]} }, if_id_inst_i[31:12], 12'b0 };
wire [63:0] imm_j = { { 43{if_id_inst_i[31]} }, if_id_inst_i[31], if_id_inst_i[19:12], if_id_inst_i[20], if_id_inst_i[30:21], 1'b0 };


//wire imm_11_5_0x00 = imm_i[11:5] == 7'b0;
//wire imm_11_5_0x20 = imm_i[11:5] == 7'b010_0000;

//decode funct
wire funct3_0x0 = funct3 == 3'b000;
wire funct3_0x1 = funct3 == 3'b001;
wire funct3_0x2 = funct3 == 3'b010;
wire funct3_0x3 = funct3 == 3'b011;
wire funct3_0x4 = funct3 == 3'b100;
wire funct3_0x5 = funct3 == 3'b101;
wire funct3_0x6 = funct3 == 3'b110;
wire funct3_0x7 = funct3 == 3'b111;

wire funct7_0x00 = funct7 == 7'b000_0000;
wire funct7_0x01 = funct7 == 7'b000_0001;
wire funct7_0x20 = funct7 == 7'b010_0000;

//sllw slliw srlw srliw sraw sraiw

//----------------------------identify inst--------------------------------------//
//RV64I R
wire add  = rv64I_RM & funct3_0x0 & funct7_0x00;
wire sub  = rv64I_RM & funct3_0x0 & funct7_0x20;
wire sll  = rv64I_RM & funct3_0x1 & funct7_0x00;
wire slt  = rv64I_RM & funct3_0x2 & funct7_0x00;
wire sltu = rv64I_RM & funct3_0x3 & funct7_0x00;
wire xor_ = rv64I_RM & funct3_0x4 & funct7_0x00;
wire srl  = rv64I_RM & funct3_0x5 & funct7_0x00;
wire sra  = rv64I_RM & funct3_0x5 & funct7_0x20;
wire or_  = rv64I_RM & funct3_0x6 & funct7_0x00;
wire and_ = rv64I_RM & funct3_0x7 & funct7_0x00;
//RV64 M
wire mul    = rv64I_RM & funct3_0x0 & funct7_0x01;
wire mulh   = rv64I_RM & funct3_0x1 & funct7_0x01;
wire mulhsu = rv64I_RM & funct3_0x2 & funct7_0x01;
wire mulhu  = rv64I_RM & funct3_0x3 & funct7_0x01;
wire div    = rv64I_RM & funct3_0x4 & funct7_0x01;
wire divu   = rv64I_RM & funct3_0x5 & funct7_0x01;
wire rem    = rv64I_RM & funct3_0x6 & funct7_0x01;
wire remu   = rv64I_RM & funct3_0x7 & funct7_0x01;

//RV64IW R
wire addw = rv64IW_RM & funct3_0x0 & funct7_0x00;
wire subw = rv64IW_RM & funct3_0x0 & funct7_0x20;
wire sllw = rv64IW_RM & funct3_0x1 & funct7_0x00;
wire srlw = rv64IW_RM & funct3_0x5 & funct7_0x00;
wire sraw = rv64IW_RM & funct3_0x5 & funct7_0x20;
//RV64W M
wire mulw  = rv64IW_RM & funct3_0x0 & funct7_0x01;
wire divw  = rv64IW_RM & funct3_0x4 & funct7_0x01;
wire divuw = rv64IW_RM & funct3_0x5 & funct7_0x01;
wire remw  = rv64IW_RM & funct3_0x6 & funct7_0x01;
wire remuw = rv64IW_RM & funct3_0x7 & funct7_0x01;

//RV64I I
wire addi  = rv64I_I & funct3_0x0;
wire slli  = rv64I_I & funct3_0x1;
wire slti  = rv64I_I & funct3_0x2;
wire sltiu = rv64I_I & funct3_0x3;
wire xori  = rv64I_I & funct3_0x4;
wire srli  = rv64I_I & funct3_0x5 & !if_id_inst_i[30];
wire srai  = rv64I_I & funct3_0x5 & if_id_inst_i[30];
wire ori   = rv64I_I & funct3_0x6;
wire andi  = rv64I_I & funct3_0x7;
//RV64IW I +++
wire addiw = rv64IW_I & funct3_0x0;
wire slliw = rv64IW_I & funct3_0x1;
wire srliw = rv64IW_I & funct3_0x5 & !if_id_inst_i[30];
wire sraiw = rv64IW_I & funct3_0x5 & if_id_inst_i[30];

//RV64I L
wire lb  = rv64I_L & funct3_0x0;
wire lh  = rv64I_L & funct3_0x1;
wire lw  = rv64I_L & funct3_0x2;
wire ld  = rv64I_L & funct3_0x3;
wire lbu = rv64I_L & funct3_0x4;
wire lhu = rv64I_L & funct3_0x5;
wire lwu = rv64I_L & funct3_0x6;

//RV64I B
wire beq  = rv64I_B & funct3_0x0;
wire bne  = rv64I_B & funct3_0x1;
wire blt  = rv64I_B & funct3_0x4;
wire bge  = rv64I_B & funct3_0x5;
wire bltu = rv64I_B & funct3_0x6;
wire bgeu = rv64I_B & funct3_0x7;

//RV64I S
wire sb = rv64I_S & funct3_0x0;
wire sh = rv64I_S & funct3_0x1;
wire sw = rv64I_S & funct3_0x2;
wire sd = rv64I_S & funct3_0x3;

//RV64I U
wire lui = rv64I_LUI;
wire auipc = rv64I_AUIPC;

//RV64I jump
wire jal  = rv64I_JAL;
wire jalr = rv64I_JALR & funct3_0x0;

//RV64I E 
wire ebreak = rv64I_EBREAK & funct3_0x0 & (imm_i == 'b1);


//-------------------------confirm imm-------------------------//
wire [63:0] imm = ( {64{rv64I_I | rv64I_L | jalr | rv64IW_I} } & imm_i ) | 
                  ( {64{rv64I_S}}                              & imm_s ) | 
                  ( {64{rv64I_B}}                              & imm_b ) |
                  ( {64{rv64I_JAL}}                            & imm_j ) | 
                  ( {64{auipc | lui}}                          & imm_u );



/**********RAW data dependency************/
/*
wire ex_rs1_cft = rs1 == ex_fwd_rd_idx_i[4:0] && ex_fwd_rd_idx_i[5];
wire ex_rs2_cft = rs2 == ex_fwd_rd_idx_i[4:0] && ex_fwd_rd_idx_i[5];
wire mem_rs1_cft = rs1 == mem_fwd_rd_idx_i[4:0] && mem_fwd_rd_idx_i[5];
wire mem_rs2_cft = rs2 == mem_fwd_rd_idx_i[4:0] && mem_fwd_rd_idx_i[5];
wire wb_rs1_cft = rs1 == wb_fwd_rd_idx_i[4:0] && wb_fwd_rd_idx_i[5];
wire wb_rs2_cft = rs2 == wb_fwd_rd_idx_i[4:0] && wb_fwd_rd_idx_i[5];

assign mem_load_alu_op1_cft_o = ex_fwd_rd_idx_i[6] && rs1 == ex_fwd_rd_idx_i[4:0];
assign mem_load_alu_op2_cft_o = ex_fwd_rd_idx_i[6] && rs2 == ex_fwd_rd_idx_i[4:0];
*/

/****************IDU to EXU***********************/
wire rd_idx_0x = rd == 5'b00000;
wire rd_need = (~rd_idx_0x) & ( ~( rv64I_S | rv64I_B | ebreak));

assign id_rd_idx_o = rd;
assign id_rd_wr_en_o = regs_rd_need && (!rd_idx_0x);

/*
assign regs_rs1_read_en_o = rs1_need;
assign regs_rs2_read_en_o = rs2_need && !(ex_rs2_cft | mem_rs2_cft | wb_rs2_cft);
assign regs_rs1_idx_o = rs1;
assign regs_rs2_idx_o = rs2;
*/

/************************Forwarding unit****************************************/
assign rs1_idx_o = rs1;
assign rs2_idx_o = rs2;
assign rs1_need_o = ~( jal | lui | auipc | ebreak ); 
assign rs2_need_o = ( rv64I_RM | rv64I_S | rv64I_B | rv64IW_RM);

/*
wire rs1_data = ex_rs1_cft ? ex_fwd_res_i : 
              (mem_rs1_cft ? mem_fwd_res_fwd_i  :
              (wb_rs1_cft  ? wb_fwd_res_i : regs_rs1_data_i));

wire rs2_data = ex_rs2_cft ? ex_fwd_res_i : 
              (mem_rs2_cft ? mem_fwd_res_i  :
              (wb_rs2_cft  ? wb_fwd_res_i : regs_rs2_data_i));
*/

/**********ALU info**************/
wire op1_need_rs1 = ~( jal | jalr | lui | auipc |  ebreak );
wire op1_need_pc  = auipc | jal | jalr;

wire op2_need_rs2 = rv64I_RM | rv64IW_RM;
wire op2_need_imm = rv64I_I | rv64I_L | rv64I_S | auipc | lui | rv64IW_I;
wire op2_0x4_need = jal | jalr;

assign alu_op1_o =  ( {64{op1_rs1_need}} & rs1_data_i ) |   
                ( {64{op1_pc_need}}  & if_id_pc_i );

assign alu_op2_o =  ( {64{op2_rs2_need}} & rs2_data_i ) |
                ( {64{op2_imm_need}} & imm        ) |
                ( {64{op2_0x4_need}} & 64'h4      ) ;


wire alu_op = ((rv64I_RM | rv64IW_RM) & !funct7_0x01) | 
              rv64I_I | auipc | lui | ebreak | rv64IW_RM | rv64IW_I;
wire alu_wop = rv64IW_RM | rv64IW_I;

assign id_alu_info_bus_o[`ALU_VALID] = alu_op;
assign id_alu_info_bus_o[`ALU_WOP] = alu_wop;
assign id_alu_info_bus_o[`ALU_ADD] = (add | addi | auipc | addw | addiw);
assign id_alu_info_bus_o[`ALU_SUB] = (sub | subw);                 
assign id_alu_info_bus_o[`ALU_SLL] = (sll | slli | sllw | slliw);                 
assign id_alu_info_bus_o[`ALU_SLT] = (slt | slti);                 
assign id_alu_info_bus_o[`ALU_SLTU] = (sltu | sltiu);                
assign id_alu_info_bus_o[`ALU_XOR] = (xor_ | xori);                
assign id_alu_info_bus_o[`ALU_SRL] = (srl | srli | srlw | srliw);
assign id_alu_info_bus_o[`ALU_SRA] = (sra | srai | sraw | sraiw);
assign id_alu_info_bus_o[`ALU_OR] = (or_ | ori);
assign id_alu_info_bus_o[`ALU_AND] = (and_ | andi);
assign id_alu_info_bus_o[`ALU_LUI] = lui;
assign id_alu_info_bus_o[`ALU_EBREAK] = ebreak;

/*****Branch jump instruction*****/
assign bju_info_bus_o[`BJU_JAL]  = jal;
assign bju_info_bus_o[`BJU_JALR] = jalr;
assign bju_info_bus_o[`BJU_BEQ]  = beq;
assign bju_info_bus_o[`BJU_BNE]  = bne;
assign bju_info_bus_o[`BJU_BLT]  = blt;
assign bju_info_bus_o[`BJU_BGE]  = bge;
assign bju_info_bus_o[`BJU_BLTU] = bltu;
assign bju_info_bus_o[`BJU_BGEU] = bgeu;

assign bju_pc_o = if_id_pc_i;
assign bju_rs1_o = rs1_data_i;
assign bju_rs2_o = rs2_data_i;
assign bju_imm_o = imm;

/*******Load Store instruction******/
assign id_lsu_info_bus[`LSU_LOAD]   = rv64I_L;
assign id_lsu_info_bus[`LSU_STORE]  = rv64I_S;
assign id_lsu_info_bus[`LSU_USIGN]  = lbu | lhu | lwu;
assign id_lsu_info_bus[`LSU_BYTE]   = lb | lbu | sb;
assign id_lsu_info_bus[`LSU_DB]     = lh | lhu | sh;
assign id_lsu_info_bus[`LSU_WORD]   = lw | sw | lwu;
assign id_lsu_info_bus[`LSU_DW]     = ld | sd;

assign id_store_rs2_o = rs2_data_i;

/*******MUL DIV REM instruction*******/
wire mdu_op = (rv64I_RM | rv64IW_RM) & funct7_0x01;
assign id_mdu_info_bus_o[`MDU_VALID]  = mdu_op;
assign id_mdu_info_bus_o[`MDU_WOP]    = rv64IW_RM;
assign id_mdu_info_bus_o[`MDU_MUL]    = mul | mulw;
assign id_mdu_info_bus_o[`MDU_MULH]   = mulh;
assign id_mdu_info_bus_o[`MDU_MULHSU] = mulhsu;
assign id_mdu_info_bus_o[`MDU_MULHU]  = mulhu;
assign id_mdu_info_bus_o[`MDU_DIV]    = div | divw;
assign id_mdu_info_bus_o[`MDU_DIVU]   = divu | divuw;
assign id_mdu_info_bus_o[`MDU_REM]    = rem | remw;
assign id_mdu_info_bus_o[`MDU_REMU]   = remu | remuw;

/*
assign exu_info_bus_o = ({16{alu_op}} & alu_info_bus) | 
                        ({16{bjp_op}} & bjp_info_bus) |
                        ({16{ls_op}}  & ls_info_bus)  |
                        ({16{mdu_op}} & mdu_info_bus) ;
*/

endmodule
