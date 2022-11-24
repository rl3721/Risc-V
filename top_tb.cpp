#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 9
#define RAM_SZ pow(2,ADDRESS_WIDTH) // ** needs to change to match the RAM size

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int clk;

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop* top = new Vtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("top.vcd");


  // initialize simulation input 
  top->clk = 1;
  top->rst = 0;
 

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (clk=0; clk<2; clk++) {
      tfp->dump (2*simcyc+clk);
      top->clk = !top->clk;
      top->eval ();
    }

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish())) 
      exit(0);
  }

//The testbench should terminate when the program counter address reaches 0.
//include an if statement that drives reset?
//We can read the output of program counter: if(top->pc == 0){top->rst = 1};
//Hopefully no instructions at address 0 and so the CPU will terminate.
//We can display the output of the ALU on vbuddy using the HEX output (?) vbdhex
//We could also display the program counter instead using vbuddy.



  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}
