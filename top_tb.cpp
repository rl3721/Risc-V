#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 9
#define RAM_SZ pow(2,ADDRESS_WIDTH) // ** needs to change to match the RAM size

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop* top = new Vtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("top.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L4:Microarchitecture");
  //vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation input 
  top->clk = 1;
  top->rst = 0;
  top->en = 1;
  top->wr = 1;
  top->rd = 1;

  
  vbdInitMicIn(RAM_SZ); //Need to initialise the 

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }
    top->mic_signal = vbdMicValue();    //
    top->offset = abs(vbdValue());     // adjust delay by changing incr

    // plot RAM input/output, send sample to DAC buffer, and print cycle count
    vbdPlot(int (top->mic_signal), 0, 255);
    vbdPlot(int (top->delayed_signal), 0, 255);
    vbdCycle(simcyc);

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);
  }

//The testbench should terminate when the program counter address reaches 0.
//include an if statement that drives reset?
//We can read the output of program counter: if(top->pc == 0){top->rst = 1};
//Hopefully no instructions at address 0 and so the CPU will terminate.
//We can display the output of the ALU on vbuddy using the HEX output (?) vbdhex
//We could also display the program counter instead using vbuddy.


  vbdClose();     // ++++
  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}
