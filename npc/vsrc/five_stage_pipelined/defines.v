
//alu_info_bus
`define ALU_VALID   0
`define ALU_WOP     1
`define ALU_ADD     2 
`define ALU_SUB     3
`define ALU_SLL     4
`define ALU_SLT     5
`define ALU_SLTU    6
`define ALU_XOR     7
`define ALU_SRL     8
`define ALU_SRA     9
`define ALU_OR      10
`define ALU_AND     11
`define ALU_LUI     12
`define ALU_EBREAK  13

`define BJU_JAL     0
`define BJU_JALR    1
`define BJU_BEQ     2
`define BJU_BNE     3
`define BJU_BLT     4
`define BJU_BGE     5
`define BJU_BLTU    6
`define BJU_BGEU    7

`define LSU_LOAD    0
`define LSU_STORE   1
`define LSU_USIGN   2
`define LSU_BYTE    3
`define LSU_DB      4
`define LSU_WORD    5
`define LSU_DW      6

`define MDU_VALID   0
`define MDU_WOP     1
`define MDU_MUL     2
`define MDU_MULH    3
`define MDU_MULHSU  4
`define MDU_MULHU   5
`define MDU_DIV     6
`define MDU_DIVU    7
`define MDU_REM     8
`define MDU_REMU    9