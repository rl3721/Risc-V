#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcache_top.h"
//#include "vbuddy.cpp"


#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int clk;
  int hit;

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vcache_top* top = new Vcache_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("top.vcd");


  // initialize simulation input 
  top->clk = 1;
  top->WE = 0;
  top->Data_WD = 0;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (clk=0; clk<2; clk++) {
      tfp->dump (2*simcyc+clk);
      top->clk = !top->clk;
      top->eval ();
    }
    top->address = 4*simcyc;
    hit = top->hit;
    
    
    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish())) 
      exit(0);
  }




  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}
