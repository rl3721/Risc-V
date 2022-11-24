// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(PCsrc,0,0);
    CData/*0:0*/ Top__DOT__RegWrite;
    CData/*0:0*/ Top__DOT__EQ;
    CData/*2:0*/ Top__DOT__ALUctrl;
    CData/*2:0*/ Top__DOT__ImmSrc;
    CData/*0:0*/ Top__DOT__ALUSrc;
    CData/*0:0*/ Top__DOT__ResultSrc;
    CData/*0:0*/ Top__DOT__MemWrite;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    VL_OUT(instr,31,0);
    VL_OUT(PC,31,0);
    VL_OUT(ImmOp,31,0);
    IData/*31:0*/ Top__DOT__RD1;
    IData/*31:0*/ Top__DOT__RD2;
    IData/*31:0*/ Top__DOT__ALUResult;
    IData/*31:0*/ Top__DOT__ALUop2;
    IData/*31:0*/ Top__DOT__ProgramCounter__DOT__next_PC;
    VlUnpacked<CData/*7:0*/, 256> Top__DOT__Instruction__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> Top__DOT__Register__DOT__mem;
    VlUnpacked<CData/*7:0*/, 256> Top__DOT__data_ram__DOT__data_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
