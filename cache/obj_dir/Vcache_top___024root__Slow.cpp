// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_top.h for the primary calling header

#include "verilated.h"

#include "Vcache_top__Syms.h"
#include "Vcache_top___024root.h"

void Vcache_top___024root___ctor_var_reset(Vcache_top___024root* vlSelf);

Vcache_top___024root::Vcache_top___024root(Vcache_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_top___024root___ctor_var_reset(this);
}

void Vcache_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcache_top___024root::~Vcache_top___024root() {
}
