#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

#define CONFIG_MSIZE  256
#define CONFIG_MBASE  0x80000000

#define imm  0
#define rs1  0
#define funt3  0 //addi 0
#define rd  1
#define opcode  19//addi 0010011

char mem[CONFIG_MSIZE];

uint32_t mread(uint32_t raddr){
  return *((uint32_t *)&mem[raddr-CONFIG_MBASE]);
}

void mwrite(uint32_t waddr,uint32_t wdata){
  *((uint32_t *)&mem[waddr]) = wdata;
}

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 99);
  tfp->open("./logs/wave.vcd");
}

void step_and_dump_wave(){
  top->eval();
  tfp->dump(contextp->time());
}

void sim_exit(){
  contextp->timeInc(1);
  top->eval();
  tfp->dump(contextp->time());
  delete top;
  delete contextp;
  tfp->close();
}

int main() {
  sim_init();
  top->clk = 0;
  top->rstn=0;
  //top->inst = 0;
  mwrite(0,(imm<<20) | (rs1<<15) | (funt3<<12) | (rd<<7) | opcode);//imm = 0 , rs1 =0 ,  rd = 1 //inst0:0+ reg0 = reg1  reg1:0
  mwrite(4,((imm+1)<<20) | ((rs1+1)<<15) | (funt3<<12) | (rd<<7) | opcode); //inst1:1+reg1=reg1   reg1:1
  mwrite(8,((imm+1)<<20) | ((rs1+1)<<15) | (funt3<<12) | (rd<<7) | opcode); //inst1:1+reg1=reg1   reg1:2

  //if(false && argc && argv && env){}
  //contextp->commandArgs(argc, argv);
  while (contextp->time() < 10  && !contextp->gotFinish()){
  top->inst = mread(top->pc);
	step_and_dump_wave();
  contextp->timeInc(1);
	top->clk = !top->clk;
	//rst
	if(!top->clk){
		if(contextp->time() > 1 && contextp->time() < 20 ){
			top->rstn = 0;
	  }
	    else if(contextp->time() > 450){
			top->rstn = 0;
		}	
	    else {
			top->rstn = 1;
		}
	}
  
	/*//en
	if(!top->clk){
		if(contextp->time() < 10 || contextp->time()>480){
			top->inst = ;
		}
		else top->en = 1;
	}
	
	//pause
	if(!top->clk){
		if(contextp->time() > 150 && contextp->time() < 160){
			top->pause = 1;
		}
		else top->pause = 0;
	}
*/
  }

  sim_exit();
  return 0;
}

