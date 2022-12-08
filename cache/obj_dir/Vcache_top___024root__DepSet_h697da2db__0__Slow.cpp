// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_top.h for the primary calling header

#include "verilated.h"

#include "Vcache_top___024root.h"

VL_ATTR_COLD void Vcache_top___024root___initial__TOP__0(Vcache_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Loading Data_mem.\n");
    VL_READMEM_N(true, 8, 1048576, 0, std::string{"data.mem"}
                 ,  &(vlSelf->Top__DOT__ram__DOT__data_mem)
                 , 0, ~0ULL);
    vlSelf->Top__DOT__Cache__DOT__data_cache[0U][0U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [0U][0U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[0U][1U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [0U][1U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[0U][2U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [0U][2U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[0U][3U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [0U][3U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[0U][4U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [0U][4U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[0U][5U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [0U][5U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[0U][6U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [0U][6U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[0U][7U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [0U][7U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[1U][0U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [1U][0U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[1U][1U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [1U][1U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[1U][2U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [1U][2U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[1U][3U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [1U][3U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[1U][4U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [1U][4U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[1U][5U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [1U][5U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[1U][6U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [1U][6U][4U]);
    vlSelf->Top__DOT__Cache__DOT__data_cache[1U][7U][4U] 
        = (0x1ffffffU & vlSelf->Top__DOT__Cache__DOT__data_cache
           [1U][7U][4U]);
    vlSelf->hit = 0U;
    vlSelf->Top__DOT__Cache__DOT__replace = 0U;
}

VL_ATTR_COLD void Vcache_top___024root___eval_initial(Vcache_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root___eval_initial\n"); );
    // Body
    Vcache_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcache_top___024root___combo__TOP__0(Vcache_top___024root* vlSelf);

VL_ATTR_COLD void Vcache_top___024root___eval_settle(Vcache_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root___eval_settle\n"); );
    // Body
    Vcache_top___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcache_top___024root___final(Vcache_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root___final\n"); );
}

VL_ATTR_COLD void Vcache_top___024root___ctor_var_reset(Vcache_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(32);
    vlSelf->WE = VL_RAND_RESET_I(1);
    vlSelf->Data_WD = VL_RAND_RESET_I(32);
    vlSelf->Data_RD = VL_RAND_RESET_I(32);
    vlSelf->hit = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__data_bus_read);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__data_bus_write);
    vlSelf->Top__DOT__read_address_bus = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__write_address_bus = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__Memory_WE = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            VL_RAND_RESET_W(156, vlSelf->Top__DOT__Cache__DOT__data_cache[__Vi0][__Vi1]);
        }
    }
    vlSelf->Top__DOT__Cache__DOT__replace = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__Cache__DOT__block_out);
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->Top__DOT__ram__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            VL_RAND_RESET_W(156, vlSelf->__Vchglast__TOP__Top__DOT__Cache__DOT__data_cache[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
