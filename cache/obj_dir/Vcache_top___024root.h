// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache_top.h for the primary calling header

#ifndef VERILATED_VCACHE_TOP___024ROOT_H_
#define VERILATED_VCACHE_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vcache_top__Syms;

class Vcache_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(WE,0,0);
    VL_OUT8(hit,1,0);
    CData/*0:0*/ Top__DOT__Memory_WE;
    CData/*0:0*/ Top__DOT__Cache__DOT__replace;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(address,31,0);
    VL_IN(Data_WD,31,0);
    VL_OUT(Data_RD,31,0);
    VlWide<4>/*127:0*/ Top__DOT__data_bus_read;
    VlWide<4>/*127:0*/ Top__DOT__data_bus_write;
    IData/*31:0*/ Top__DOT__read_address_bus;
    IData/*31:0*/ Top__DOT__write_address_bus;
    VlWide<4>/*127:0*/ Top__DOT__Cache__DOT__block_out;
    VlUnpacked<VlUnpacked<VlWide<5>/*155:0*/, 8>, 2> Top__DOT__Cache__DOT__data_cache;
    VlUnpacked<CData/*7:0*/, 1048576> Top__DOT__ram__DOT__data_mem;
    VlUnpacked<VlUnpacked<VlWide<5>/*155:0*/, 8>, 2> __Vchglast__TOP__Top__DOT__Cache__DOT__data_cache;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcache_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache_top___024root(Vcache_top__Syms* symsp, const char* name);
    ~Vcache_top___024root();
    VL_UNCOPYABLE(Vcache_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
