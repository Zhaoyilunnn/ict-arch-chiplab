// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsimu_top::_sequent__TOP__21(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_sequent__TOP__21\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp506[3];
    WData/*95:0*/ __Vtemp510[3];
    WData/*95:0*/ __Vtemp514[3];
    WData/*95:0*/ __Vtemp524[3];
    WData/*95:0*/ __Vtemp526[3];
    WData/*95:0*/ __Vtemp530[3];
    WData/*95:0*/ __Vtemp555[3];
    WData/*95:0*/ __Vtemp559[3];
    WData/*95:0*/ __Vtemp563[3];
    WData/*95:0*/ __Vtemp573[3];
    WData/*95:0*/ __Vtemp575[3];
    WData/*95:0*/ __Vtemp579[3];
    WData/*95:0*/ __Vtemp604[3];
    WData/*95:0*/ __Vtemp608[3];
    WData/*95:0*/ __Vtemp612[3];
    WData/*95:0*/ __Vtemp622[3];
    WData/*95:0*/ __Vtemp624[3];
    WData/*95:0*/ __Vtemp628[3];
    WData/*95:0*/ __Vtemp653[3];
    WData/*95:0*/ __Vtemp657[3];
    WData/*95:0*/ __Vtemp661[3];
    WData/*95:0*/ __Vtemp671[3];
    WData/*95:0*/ __Vtemp673[3];
    WData/*95:0*/ __Vtemp677[3];
    WData/*95:0*/ __Vtemp702[3];
    WData/*95:0*/ __Vtemp706[3];
    WData/*95:0*/ __Vtemp710[3];
    WData/*95:0*/ __Vtemp720[3];
    WData/*95:0*/ __Vtemp722[3];
    WData/*95:0*/ __Vtemp726[3];
    WData/*95:0*/ __Vtemp751[3];
    WData/*95:0*/ __Vtemp755[3];
    WData/*95:0*/ __Vtemp759[3];
    WData/*95:0*/ __Vtemp769[3];
    WData/*95:0*/ __Vtemp771[3];
    WData/*95:0*/ __Vtemp775[3];
    WData/*95:0*/ __Vtemp800[3];
    WData/*95:0*/ __Vtemp804[3];
    WData/*95:0*/ __Vtemp808[3];
    WData/*95:0*/ __Vtemp818[3];
    WData/*95:0*/ __Vtemp820[3];
    WData/*95:0*/ __Vtemp824[3];
    WData/*95:0*/ __Vtemp829[3];
    WData/*127:0*/ __Vtemp830[4];
    WData/*95:0*/ __Vtemp831[3];
    WData/*127:0*/ __Vtemp832[4];
    WData/*95:0*/ __Vtemp833[3];
    WData/*127:0*/ __Vtemp834[4];
    WData/*95:0*/ __Vtemp835[3];
    WData/*127:0*/ __Vtemp836[4];
    WData/*127:0*/ __Vtemp838[4];
    WData/*127:0*/ __Vtemp839[4];
    WData/*127:0*/ __Vtemp840[4];
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffffeU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (0U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffffdU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((1U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffffbU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((2U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffff7U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((3U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffffffefU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((4U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffffffdfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((5U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 5U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffffffbfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((6U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 6U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffffff7fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((7U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 7U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffeffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((8U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 8U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffdffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((9U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xfU)))) 
              << 9U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffbffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0xaU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                  << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xfU)))) 
              << 0xaU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffff7ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0xbU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                  << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xfU)))) 
              << 0xbU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffffefffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0xcU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                  << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xfU)))) 
              << 0xcU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffffdfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0xdU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                  << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xfU)))) 
              << 0xdU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffffbfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0xeU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                  << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xfU)))) 
              << 0xeU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffff7fffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0xfU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                  << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xfU)))) 
              << 0xfU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffeffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x10U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x10U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffdffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x11U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x11U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffbffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x12U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x12U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfff7ffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x13U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x13U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffefffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x14U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x14U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffdfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x15U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x15U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffbfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x16U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x16U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xff7fffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x17U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x17U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfeffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x18U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x18U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfdffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x19U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x19U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfbffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x1aU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x1aU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xf7ffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x1bU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x1bU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xefffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x1cU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x1cU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xdfffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x1dU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x1dU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xbfffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x1eU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x1eU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0x7fffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | ((0x1fU == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xfU)))) 
              << 0x1fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | (0U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                              << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x16U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((1U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((2U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((3U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xffefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((4U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xffdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((5U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 5U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xffbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((6U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 6U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xff7fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((7U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 7U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfeffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((8U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 8U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfdffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((9U == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U)))) 
              << 9U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfbffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((0xaU == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                 << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x16U)))) 
              << 0xaU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xf7ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((0xbU == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                 << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x16U)))) 
              << 0xbU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xefffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((0xcU == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                 << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x16U)))) 
              << 0xcU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xdfffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((0xdU == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                 << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x16U)))) 
              << 0xdU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xbfffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((0xeU == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                 << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x16U)))) 
              << 0xeU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0x7fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((0xfU == (0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                 << 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x16U)))) 
              << 0xfU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffffeULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | (IData)((IData)((0U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                               << 6U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0x1aU)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffffdULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((1U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffffbULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((2U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffff7ULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((3U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffffefULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((4U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffffdfULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((5U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 5U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffffbfULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((6U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 6U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffff7fULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((7U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 7U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffeffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((8U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 8U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffdffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((9U == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 9U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffbffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0xaU == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU)))))) 
              << 0xaU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffff7ffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0xbU == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU)))))) 
              << 0xbU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffefffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0xcU == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU)))))) 
              << 0xcU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffdfffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0xdU == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU)))))) 
              << 0xdU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffbfffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0xeU == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU)))))) 
              << 0xeU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffff7fffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0xfU == (0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU)))))) 
              << 0xfU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffeffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x10U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x10U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffdffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x11U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x11U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffbffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x12U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x12U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffff7ffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x13U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x13U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffefffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x14U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x14U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffdfffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x15U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x15U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffbfffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x16U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x16U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffff7fffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x17U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x17U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffeffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x18U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x18U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffdffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x19U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x19U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffbffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x1aU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x1aU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffff7ffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x1bU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x1bU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffefffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x1cU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x1cU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffdfffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x1dU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x1dU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffbfffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x1eU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x1eU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffff7fffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x1fU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x1fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffeffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x20U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x20U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffdffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x21U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x21U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffbffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x22U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x22U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffff7ffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x23U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x23U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffefffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x24U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x24U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffdfffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x25U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x25U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffbfffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x26U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x26U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffff7fffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x27U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x27U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffeffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x28U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x28U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffdffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x29U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x29U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffbffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x2aU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x2aU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffff7ffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x2bU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x2bU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffefffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x2cU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x2cU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffdfffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x2dU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x2dU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffbfffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x2eU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x2eU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffff7fffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x2fU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x2fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffeffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x30U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x30U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffdffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x31U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x31U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffbffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x32U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x32U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfff7ffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x33U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x33U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffefffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x34U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x34U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffdfffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x35U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x35U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffbfffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x36U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x36U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xff7fffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x37U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x37U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfeffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x38U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x38U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfdffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x39U == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x39U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfbffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x3aU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x3aU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xf7ffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x3bU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x3bU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xefffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x3cU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x3cU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xdfffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x3dU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x3dU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xbfffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x3eU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x3eU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0x7fffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x3fU == (0x3fU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)))))) 
              << 0x3fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e 
        = (1U & ((0x3fU == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                     >> 0x10U))) | 
                 (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                     >> 0x1fU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx 
        = ((0x80000000U & ((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                            [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]) 
                           << 0x1fU)) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                         [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                         << 0x18U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
        [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data 
        = ((((((((((((((((((((((((((((((- (IData)((0U 
                                                   == 
                                                   (0x3fffU 
                                                    & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 0xaU)))))) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                                      | ((- (IData)(
                                                    (1U 
                                                     == 
                                                     (0x3fffU 
                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                          << 0x16U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                            >> 0xaU)))))) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd)) 
                                     | ((- (IData)(
                                                   (4U 
                                                    == 
                                                    (0x3fffU 
                                                     & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                           >> 0xaU)))))) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl)) 
                                    | ((- (IData)((5U 
                                                   == 
                                                   (0x3fffU 
                                                    & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 0xaU)))))) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat)) 
                                   | ((- (IData)((6U 
                                                  == 
                                                  (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 0xaU)))))) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era)) 
                                  | ((- (IData)((7U 
                                                 == 
                                                 (0x3fffU 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        >> 0xaU)))))) 
                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv)) 
                                 | ((- (IData)((0xcU 
                                                == 
                                                (0x3fffU 
                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                       >> 0xaU)))))) 
                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)) 
                                | ((- (IData)((0x10U 
                                               == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 0xaU)))))) 
                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)) 
                               | ((- (IData)((0x11U 
                                              == (0x3fffU 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        >> 0xaU)))))) 
                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi)) 
                              | ((- (IData)((0x12U 
                                             == (0x3fffU 
                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                       >> 0xaU)))))) 
                                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0)) 
                             | ((- (IData)((0x13U == 
                                            (0x3fffU 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x16U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0xaU)))))) 
                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1)) 
                            | ((- (IData)((0x18U == 
                                           (0x3fffU 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0xaU)))))) 
                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)) 
                           | ((- (IData)((0x19U == 
                                          (0x3fffU 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                               << 0x16U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0xaU)))))) 
                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)) 
                          | ((- (IData)((0x1aU == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 0xaU)))))) 
                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh)) 
                         | ((- (IData)((0x1bU == (0x3fffU 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        >> 0xaU)))))) 
                            & ((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv)
                                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh
                                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl))) 
                        | ((- (IData)((0x20U == (0x3fffU 
                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                       >> 0xaU)))))) 
                           & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid)) 
                       | ((- (IData)((0x30U == (0x3fffU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0xaU)))))) 
                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0)) 
                      | ((- (IData)((0x31U == (0x3fffU 
                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU)))))) 
                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1)) 
                     | ((- (IData)((0x32U == (0x3fffU 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0xaU)))))) 
                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2)) 
                    | ((- (IData)((0x33U == (0x3fffU 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x16U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0xaU)))))) 
                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3)) 
                   | ((- (IData)((0x40U == (0x3fffU 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0xaU)))))) 
                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                  | ((- (IData)((0x41U == (0x3fffU 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                               << 0x16U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0xaU)))))) 
                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)) 
                 | ((- (IData)((0x43U == (0x3fffU & 
                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            << 0x16U) 
                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 0xaU)))))) 
                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc)) 
                | ((- (IData)((0x44U == (0x3fffU & 
                                         ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                           << 0x16U) 
                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xaU)))))) 
                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr)) 
               | ((- (IData)((0x60U == (0x3fffU & (
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0xaU)))))) 
                  & ((0xfffffffeU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)))) 
              | ((- (IData)((0x42U == (0x3fffU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU)))))) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)) 
             | ((- (IData)((0x88U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0xaU)))))) 
                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry)) 
            | ((- (IData)((0x180U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0xaU)))))) 
               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0)) 
           | ((- (IData)((0x181U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x16U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0xaU)))))) 
              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[1U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[2U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[3U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[4U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[5U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[6U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[7U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[8U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[8U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[9U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xaU];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xbU];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xcU];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xdU];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xeU];
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                             << 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                     << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig)) 
                          & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                        << 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY 
        = (1U & ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                  ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i)
                  : ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                      ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                         >> 1U) : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                                    ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                                       >> 2U) : ((3U 
                                                  != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
                                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                                                    >> 3U))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    if (vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    vlTOPp->simu_top__DOT__soc__DOT__s0_wready = (1U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
                                                     | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
                 | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_jirl_flag)
            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer 
               << 2U) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_target 
                         << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (0x1000U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                           << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                       << 0xbU)) & 
                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                          >> 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (0x2000U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                           << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                       << 0xcU)) & 
                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                          << 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb 
        = (1U & (((((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                 >> 0x16U)) | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x17U))) 
                       | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                  >> 0x18U))) | (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                         >> 0x19U))) 
                     | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                >> 0x1aU))) | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x1bU))) 
                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                              >> 0x15U))) | (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x14U))) 
                 | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0x13U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w 
        = (1U & ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                     >> 0x18U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w 
        = (1U & ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                     >> 0x19U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w 
        = (1U & (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                      >> 0x18U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 6U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0xeU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                         >> 1U)) & 
                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                              >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0xeU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                         >> 1U)) & 
                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                              >> 5U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x14U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x16U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x19U))) 
                  & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                        >> 0x18U))) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x11U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xeU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xaU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xbU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xcU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xdU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 5U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 7U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 0x16U)) | (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x17U))) 
                     | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                >> 0x18U))) | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x19U))) 
                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                              >> 0x1aU))) | (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x1bU))) 
                 | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0x13U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xdU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xeU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xfU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x11U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xaU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 0xbU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                           >> 8U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x19U))) 
                 & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                       >> 0x18U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                     >> 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x1aU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 5U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xaU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xbU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xeU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xfU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x10U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x18U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x19U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x13U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x19U))) 
                  & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                        >> 0x18U))) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
                                       >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x19U))) 
                  & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                        >> 0x18U))) & ((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
                                             >> 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 5U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 6U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                           >> 8U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x19U))) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                    >> 0x18U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0
            [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
            << 8U) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g) 
                       << 6U) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
                                  [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                  << 4U) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                             [(0x1fU 
                                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                             << 2U) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0
                                                [(0x1fU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                                << 1U) 
                                               | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0
                                               [(0x1fU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)])))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1
            [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
            << 8U) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g) 
                       << 6U) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
                                  [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                  << 4U) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                             [(0x1fU 
                                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                             << 2U) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1
                                                [(0x1fU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                                << 1U) 
                                               | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1
                                               [(0x1fU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)])))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig))) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig)) 
                                    & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig))) 
                     & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig)) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                             << 0xdU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                         << 2U)))));
    if ((1U & (~ (IData)(vlTOPp->aresetn)))) {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1 = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (7U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg 
                    = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = 0U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable 
        = ((IData)(vlTOPp->aresetn) & ((0U != vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc))))));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata;
    }
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr) 
           | (0xfffffffcU & (((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                             >> 2U)) 
                             << 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | ((0xffffffc0U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
              | (0x3cU & ((0xfffffffcU & (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                          & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen)) 
                                             << 2U))) 
                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                              & ((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                >> 2U))) 
                             << 2U)))));
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
            = (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awaddr)) 
                << 0xdU) | (QData)((IData)((0x801U 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                << 8U) 
                                               | (0xf0U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                     << 4U)))))));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__m0_bid = 0U;
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [0U];
    }
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [1U];
    }
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [2U];
    }
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [3U];
    }
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 0U;
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [0U];
    }
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [1U];
    }
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [2U];
    }
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [3U];
    }
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid = 0U;
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    }
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 1U));
    }
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 2U));
    }
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | ((0x1fe0U == (0xffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu_araddr 
                                      >> 0x10U))) << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | ((0x1fafU == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu_araddr 
                                      >> 0x10U))) << 3U));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable = 0U;
    } else {
        if (((((((5U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state)) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awready)) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wready)) 
               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast))) 
              | ((5U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state)) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wready))) 
             | (((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state)) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wready)) 
                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable = 1U;
        } else {
            if ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state)) 
                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bvalid)) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bready))) {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable = 0U;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way = 0U;
    } else {
        if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                        } else {
                            if ((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)) 
                                       | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer))))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                            } else {
                                if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) {
                                    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num 
                                        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                        } else {
                            if (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req)) 
                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 0x10U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 8U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way 
                                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__replace_way;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                        } else {
                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid) 
                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 2U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op = 0U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb = 0U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata = 0U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode 
                                    = (3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                              << 0x1dU) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 3U)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en;
                            } else {
                                if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                                } else {
                                    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                                    } else {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 4U;
                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                                            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_tag;
                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en 
                                            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_uncache_en) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 2U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op = 0U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb = 0U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata = 0U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode 
                                    = (3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                              << 0x1dU) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 3U)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en;
                            }
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                    >> 6U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w) 
              << 0xbU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor) 
              << 5U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
              << 6U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3f7fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
              << 7U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3effU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w)) 
              << 8U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
              << 9U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
              << 0xaU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op 
        = ((0xbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op 
        = ((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op)) 
           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (1U & ((((((((((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w)) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                         | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                    >> 0x13U))) | (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                           >> 0x15U))) 
                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi)) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid 
        = (1U & (((((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu)) 
                                                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor)) 
                                                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and)) 
                                                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or)) 
                                                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor)) 
                                                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w)) 
                                                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w)) 
                                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w)) 
                                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w)) 
                                                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
                                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)) 
                                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
                                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
                                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break)) 
                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall)) 
                                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w)) 
                                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
                                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle)) 
                                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w)) 
                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
                                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                           | (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                      >> 0x13U))) 
                                          | (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x14U))) 
                                         | (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x15U))) 
                                        | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                   >> 0x16U))) 
                                       | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                  >> 0x17U))) 
                                      | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                 >> 0x18U))) 
                                     | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                >> 0x19U))) 
                                    | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x1aU))) 
                                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x1bU))) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w)) 
                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)) 
                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd)) 
                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w)) 
                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)) 
                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar)) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar)) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch)) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb) 
                    & (((((((0U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                            | (1U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                           | (2U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                          | (3U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                         | (4U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                        | (5U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                       | (6U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm 
        = ((((((((0x1fU & ((- (IData)((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)))) 
                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                               << 0x16U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0xaU)))) 
                 | ((- (IData)((((((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)))) 
                    & ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0x15U)))) 
                                       << 0xcU)) | 
                       (0xfffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   << 0x16U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xaU)))))) 
                | (0xfffU & ((- (IData)((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)))) 
                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                 << 0x16U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 0xaU))))) 
               | ((- (IData)(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)))) 
                  & ((0xffff0000U & ((- (IData)((1U 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x17U)))) 
                                     << 0x10U)) | (0xfffcU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                       << 0x18U) 
                                                      | (0xfffffcU 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                            >> 8U))))))) 
              | ((- (IData)((1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                 >> 0x13U)) 
                                        | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                   >> 0x16U))) 
                                       | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                  >> 0x17U))) 
                                      | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                 >> 0x18U))) 
                                     | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                >> 0x19U))) 
                                    | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x1aU))) 
                                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x1bU)))))) 
                 & ((0xfffc0000U & ((- (IData)((1U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0x19U)))) 
                                    << 0x12U)) | (0x3fffcU 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                      << 0x18U) 
                                                     | (0xfffffcU 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                           >> 8U))))))) 
             | (0xfffff000U & ((- (IData)(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)))) 
                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  << 7U)))) | ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi))) 
                                               & ((0xffc00000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                     >> 0x18U)))) 
                                                      << 0x16U)) 
                                                  | (0x3ffffcU 
                                                     & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                         << 0x1dU) 
                                                        | (0x1ffffffcU 
                                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                              >> 3U))))))) 
           | ((- (IData)((1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                         >> 0x14U)) 
                                | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                           >> 0x15U)))))) 
              & ((0xf0000000U & ((- (IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26 
                                                   >> 0x19U)))) 
                                 << 0x1cU)) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26 
                                               << 2U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd 
        = (1U & (((((((((((((((((((((((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu)) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)) 
                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w)) 
                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w)) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w)) 
                             | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                        >> 0x16U))) 
                            | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                       >> 0x17U))) 
                           | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                      >> 0x18U))) | (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                             >> 0x1aU))) 
                         | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                    >> 0x19U))) | (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                           >> 0x1bU))) 
                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj 
        = (1U & (((((((((((((((((((((((((((((((((((
                                                   (((((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w)) 
                                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w)) 
                                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt)) 
                                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu)) 
                                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and)) 
                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or)) 
                                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor)) 
                                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor)) 
                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w)) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
                                     | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                >> 0x16U))) 
                                    | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x17U))) 
                                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x18U))) 
                                  | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                             >> 0x1aU))) 
                                 | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                            >> 0x19U))) 
                                | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                           >> 0x1bU))) 
                               | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                          >> 0x13U))) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2 
        = (0x1fU & ((1U & ((((((((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x16U)) 
                                     | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                >> 0x17U))) 
                                    | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x18U))) 
                                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x1aU))) 
                                  | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                             >> 0x19U))) 
                                 | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                            >> 0x1bU))) 
                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))
                     ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]
                     : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                         << 0x16U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xaU))));
    vlTOPp->debug0_wb_pc = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U];
    vlTOPp->debug0_wb_rf_wnum = (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U]);
    vlTOPp->debug0_wb_rf_wdata = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U];
    if ((0x20U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp506[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp506[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp506[0U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : 0U);
        __Vtemp506[1U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : 0U);
    }
    if ((8U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp510[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp510[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp510[0U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : __Vtemp506[0U]);
        __Vtemp510[1U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp506[1U]);
    }
    if ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp514[0U] = (IData)((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                  << 0x3eU) 
                                                 | ((QData)((IData)(
                                                                    ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                        >> 9U)))) 
                                                    << 0x1eU))));
        __Vtemp514[1U] = (IData)(((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | ((QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                       << 0x17U) 
                                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                         >> 9U)))) 
                                                     << 0x1eU))) 
                                  >> 0x20U));
    } else {
        __Vtemp514[0U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0xaU) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))))
                           : __Vtemp510[0U]);
        __Vtemp514[1U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                               | (0x7ffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                     >> 0x20U)))
                           : __Vtemp510[1U]);
    }
    __Vtemp524[2U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 5U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 6U : ((0x40000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 6U : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                     ? 0x1fU
                                                     : 
                                                    ((8U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x20U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                        ? 1U
                                                        : 0U))))))))));
    if ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp526[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                          << 0x13U) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                            >> 0xdU)))))))));
        __Vtemp526[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                               << 0x13U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp526[0U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                    ? 0U : ((0x40000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x80000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0U : 
                                             ((1U & 
                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                               ? (IData)(
                                                         (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                           << 0x3eU) 
                                                          | ((QData)((IData)(
                                                                             ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0x17U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                             << 0x1eU)))
                                               : __Vtemp514[0U])))));
        __Vtemp526[1U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0x80000000U : ((0x20000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x40000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0x80000000U
                                              : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 
                                                  (0x80000000U 
                                                   | (IData)(
                                                             ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                                << 0x3eU) 
                                                               | ((QData)((IData)(
                                                                                ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                  << 0x1eU)) 
                                                              >> 0x20U)))
                                                   : 
                                                  __Vtemp514[1U])))));
    }
    if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp530[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                       << 0x13U) 
                                                                      | (0x7ffffU 
                                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                             << 0x13U) 
                                                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                               >> 0xdU))))))))));
        __Vtemp530[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                            << 0x13U) 
                                                                           | (0x7ffffU 
                                                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp530[0U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                            << 0x13U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                              >> 0xdU)))))))))
                           : __Vtemp526[0U]);
        __Vtemp530[1U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp526[1U]);
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_ecode 
        = (0x3fU & ((((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 4U : ((0x2000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 0x1fU : 
                                        ((0x4000000U 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                          ? 1U : ((0x8000000U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                   ? 3U
                                                   : 
                                                  __Vtemp524[2U]))))) 
                     << 1U) | (((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                 ? 0U : ((0x1000000U 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                          ? (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                         << 0x1eU)) 
                                                     >> 0x20U))
                                          : __Vtemp530[1U])) 
                               >> 0x1fU)));
    if ((0x20U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp555[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp555[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp555[0U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : 0U);
        __Vtemp555[1U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : 0U);
    }
    if ((8U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp559[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp559[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp559[0U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : __Vtemp555[0U]);
        __Vtemp559[1U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp555[1U]);
    }
    if ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp563[0U] = (IData)((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                  << 0x3eU) 
                                                 | ((QData)((IData)(
                                                                    ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                        >> 9U)))) 
                                                    << 0x1eU))));
        __Vtemp563[1U] = (IData)(((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | ((QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                       << 0x17U) 
                                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                         >> 9U)))) 
                                                     << 0x1eU))) 
                                  >> 0x20U));
    } else {
        __Vtemp563[0U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0xaU) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))))
                           : __Vtemp559[0U]);
        __Vtemp563[1U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                               | (0x7ffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                     >> 0x20U)))
                           : __Vtemp559[1U]);
    }
    __Vtemp573[2U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 5U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 6U : ((0x40000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 6U : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                     ? 0x1fU
                                                     : 
                                                    ((8U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x20U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                        ? 1U
                                                        : 0U))))))))));
    if ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp575[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                          << 0x13U) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                            >> 0xdU)))))))));
        __Vtemp575[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                               << 0x13U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp575[0U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                    ? 0U : ((0x40000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x80000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0U : 
                                             ((1U & 
                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                               ? (IData)(
                                                         (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                           << 0x3eU) 
                                                          | ((QData)((IData)(
                                                                             ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0x17U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                             << 0x1eU)))
                                               : __Vtemp563[0U])))));
        __Vtemp575[1U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0x80000000U : ((0x20000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x40000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0x80000000U
                                              : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 
                                                  (0x80000000U 
                                                   | (IData)(
                                                             ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                                << 0x3eU) 
                                                               | ((QData)((IData)(
                                                                                ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                  << 0x1eU)) 
                                                              >> 0x20U)))
                                                   : 
                                                  __Vtemp563[1U])))));
    }
    if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp579[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                       << 0x13U) 
                                                                      | (0x7ffffU 
                                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                             << 0x13U) 
                                                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                               >> 0xdU))))))))));
        __Vtemp579[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                            << 0x13U) 
                                                                           | (0x7ffffU 
                                                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp579[0U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                            << 0x13U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                              >> 0xdU)))))))))
                           : __Vtemp575[0U]);
        __Vtemp579[1U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp575[1U]);
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_va_error 
        = (1U & (((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                   ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                            ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                         << 0x3eU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                           << 0x1eU)) 
                                       >> 0x20U)) : 
                           __Vtemp579[1U])) >> 0x1eU));
    if ((0x20U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp604[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp604[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp604[0U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : 0U);
        __Vtemp604[1U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : 0U);
    }
    if ((8U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp608[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp608[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp608[0U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : __Vtemp604[0U]);
        __Vtemp608[1U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp604[1U]);
    }
    if ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp612[0U] = (IData)((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                  << 0x3eU) 
                                                 | ((QData)((IData)(
                                                                    ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                        >> 9U)))) 
                                                    << 0x1eU))));
        __Vtemp612[1U] = (IData)(((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | ((QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                       << 0x17U) 
                                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                         >> 9U)))) 
                                                     << 0x1eU))) 
                                  >> 0x20U));
    } else {
        __Vtemp612[0U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0xaU) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))))
                           : __Vtemp608[0U]);
        __Vtemp612[1U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                               | (0x7ffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                     >> 0x20U)))
                           : __Vtemp608[1U]);
    }
    __Vtemp622[2U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 5U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 6U : ((0x40000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 6U : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                     ? 0x1fU
                                                     : 
                                                    ((8U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x20U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                        ? 1U
                                                        : 0U))))))))));
    if ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp624[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                          << 0x13U) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                            >> 0xdU)))))))));
        __Vtemp624[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                               << 0x13U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp624[0U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                    ? 0U : ((0x40000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x80000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0U : 
                                             ((1U & 
                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                               ? (IData)(
                                                         (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                           << 0x3eU) 
                                                          | ((QData)((IData)(
                                                                             ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0x17U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                             << 0x1eU)))
                                               : __Vtemp612[0U])))));
        __Vtemp624[1U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0x80000000U : ((0x20000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x40000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0x80000000U
                                              : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 
                                                  (0x80000000U 
                                                   | (IData)(
                                                             ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                                << 0x3eU) 
                                                               | ((QData)((IData)(
                                                                                ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                  << 0x1eU)) 
                                                              >> 0x20U)))
                                                   : 
                                                  __Vtemp612[1U])))));
    }
    if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp628[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                       << 0x13U) 
                                                                      | (0x7ffffU 
                                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                             << 0x13U) 
                                                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                               >> 0xdU))))))))));
        __Vtemp628[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                            << 0x13U) 
                                                                           | (0x7ffffU 
                                                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp628[0U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                            << 0x13U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                              >> 0xdU)))))))))
                           : __Vtemp624[0U]);
        __Vtemp628[1U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp624[1U]);
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_bad_va 
        = ((((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
              ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | ((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU)) 
                                  >> 0x20U)) : __Vtemp628[1U])) 
            << 2U) | (((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                        ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                 ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)))
                                 : __Vtemp628[0U])) 
                      >> 0x1eU));
    if ((0x20U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp653[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp653[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp653[0U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : 0U);
        __Vtemp653[1U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : 0U);
    }
    if ((8U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp657[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp657[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp657[0U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : __Vtemp653[0U]);
        __Vtemp657[1U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp653[1U]);
    }
    if ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp661[0U] = (IData)((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                  << 0x3eU) 
                                                 | ((QData)((IData)(
                                                                    ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                        >> 9U)))) 
                                                    << 0x1eU))));
        __Vtemp661[1U] = (IData)(((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | ((QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                       << 0x17U) 
                                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                         >> 9U)))) 
                                                     << 0x1eU))) 
                                  >> 0x20U));
    } else {
        __Vtemp661[0U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0xaU) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))))
                           : __Vtemp657[0U]);
        __Vtemp661[1U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                               | (0x7ffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                     >> 0x20U)))
                           : __Vtemp657[1U]);
    }
    __Vtemp671[2U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 5U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 6U : ((0x40000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 6U : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                     ? 0x1fU
                                                     : 
                                                    ((8U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x20U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                        ? 1U
                                                        : 0U))))))))));
    if ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp673[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                          << 0x13U) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                            >> 0xdU)))))))));
        __Vtemp673[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                               << 0x13U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp673[0U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                    ? 0U : ((0x40000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x80000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0U : 
                                             ((1U & 
                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                               ? (IData)(
                                                         (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                           << 0x3eU) 
                                                          | ((QData)((IData)(
                                                                             ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0x17U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                             << 0x1eU)))
                                               : __Vtemp661[0U])))));
        __Vtemp673[1U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0x80000000U : ((0x20000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x40000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0x80000000U
                                              : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 
                                                  (0x80000000U 
                                                   | (IData)(
                                                             ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                                << 0x3eU) 
                                                               | ((QData)((IData)(
                                                                                ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                  << 0x1eU)) 
                                                              >> 0x20U)))
                                                   : 
                                                  __Vtemp661[1U])))));
    }
    if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp677[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                       << 0x13U) 
                                                                      | (0x7ffffU 
                                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                             << 0x13U) 
                                                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                               >> 0xdU))))))))));
        __Vtemp677[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                            << 0x13U) 
                                                                           | (0x7ffffU 
                                                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp677[0U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                            << 0x13U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                              >> 0xdU)))))))))
                           : __Vtemp673[0U]);
        __Vtemp677[1U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp673[1U]);
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_esubcode 
        = (0x1ffU & ((((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                        ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                 ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU)) 
                                            >> 0x20U))
                                 : __Vtemp677[1U])) 
                      << 0xbU) | (((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                    ? 0U : ((0x1000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? (IData)(
                                                       (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                         << 0x3eU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                           << 0x1eU)))
                                             : __Vtemp677[0U])) 
                                  >> 0x15U)));
    if ((0x20U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp702[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp702[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp702[0U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : 0U);
        __Vtemp702[1U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : 0U);
    }
    if ((8U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp706[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp706[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp706[0U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : __Vtemp702[0U]);
        __Vtemp706[1U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp702[1U]);
    }
    if ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp710[0U] = (IData)((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                  << 0x3eU) 
                                                 | ((QData)((IData)(
                                                                    ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                        >> 9U)))) 
                                                    << 0x1eU))));
        __Vtemp710[1U] = (IData)(((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | ((QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                       << 0x17U) 
                                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                         >> 9U)))) 
                                                     << 0x1eU))) 
                                  >> 0x20U));
    } else {
        __Vtemp710[0U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0xaU) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))))
                           : __Vtemp706[0U]);
        __Vtemp710[1U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                               | (0x7ffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                     >> 0x20U)))
                           : __Vtemp706[1U]);
    }
    __Vtemp720[2U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 5U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 6U : ((0x40000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 6U : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                     ? 0x1fU
                                                     : 
                                                    ((8U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x20U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                        ? 1U
                                                        : 0U))))))))));
    if ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp722[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                          << 0x13U) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                            >> 0xdU)))))))));
        __Vtemp722[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                               << 0x13U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp722[0U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                    ? 0U : ((0x40000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x80000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0U : 
                                             ((1U & 
                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                               ? (IData)(
                                                         (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                           << 0x3eU) 
                                                          | ((QData)((IData)(
                                                                             ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0x17U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                             << 0x1eU)))
                                               : __Vtemp710[0U])))));
        __Vtemp722[1U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0x80000000U : ((0x20000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x40000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0x80000000U
                                              : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 
                                                  (0x80000000U 
                                                   | (IData)(
                                                             ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                                << 0x3eU) 
                                                               | ((QData)((IData)(
                                                                                ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                  << 0x1eU)) 
                                                              >> 0x20U)))
                                                   : 
                                                  __Vtemp710[1U])))));
    }
    if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp726[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                       << 0x13U) 
                                                                      | (0x7ffffU 
                                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                             << 0x13U) 
                                                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                               >> 0xdU))))))))));
        __Vtemp726[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                            << 0x13U) 
                                                                           | (0x7ffffU 
                                                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp726[0U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                            << 0x13U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                              >> 0xdU)))))))))
                           : __Vtemp722[0U]);
        __Vtemp726[1U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp722[1U]);
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb 
        = (1U & (((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                   ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                            ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                        << 0x3eU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU)))
                            : __Vtemp726[0U])) >> 0x13U));
    if ((0x20U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp751[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp751[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp751[0U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : 0U);
        __Vtemp751[1U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : 0U);
    }
    if ((8U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp755[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp755[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp755[0U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : __Vtemp751[0U]);
        __Vtemp755[1U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp751[1U]);
    }
    if ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp759[0U] = (IData)((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                  << 0x3eU) 
                                                 | ((QData)((IData)(
                                                                    ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                        >> 9U)))) 
                                                    << 0x1eU))));
        __Vtemp759[1U] = (IData)(((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | ((QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                       << 0x17U) 
                                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                         >> 9U)))) 
                                                     << 0x1eU))) 
                                  >> 0x20U));
    } else {
        __Vtemp759[0U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0xaU) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))))
                           : __Vtemp755[0U]);
        __Vtemp759[1U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                               | (0x7ffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                     >> 0x20U)))
                           : __Vtemp755[1U]);
    }
    __Vtemp769[2U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 5U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 6U : ((0x40000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 6U : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                     ? 0x1fU
                                                     : 
                                                    ((8U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x20U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                        ? 1U
                                                        : 0U))))))))));
    if ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp771[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                          << 0x13U) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                            >> 0xdU)))))))));
        __Vtemp771[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                               << 0x13U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp771[0U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                    ? 0U : ((0x40000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x80000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0U : 
                                             ((1U & 
                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                               ? (IData)(
                                                         (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                           << 0x3eU) 
                                                          | ((QData)((IData)(
                                                                             ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0x17U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                             << 0x1eU)))
                                               : __Vtemp759[0U])))));
        __Vtemp771[1U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0x80000000U : ((0x20000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x40000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0x80000000U
                                              : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 
                                                  (0x80000000U 
                                                   | (IData)(
                                                             ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                                << 0x3eU) 
                                                               | ((QData)((IData)(
                                                                                ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                  << 0x1eU)) 
                                                              >> 0x20U)))
                                                   : 
                                                  __Vtemp759[1U])))));
    }
    if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp775[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                       << 0x13U) 
                                                                      | (0x7ffffU 
                                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                             << 0x13U) 
                                                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                               >> 0xdU))))))))));
        __Vtemp775[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                            << 0x13U) 
                                                                           | (0x7ffffU 
                                                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp775[0U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                            << 0x13U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                              >> 0xdU)))))))))
                           : __Vtemp771[0U]);
        __Vtemp775[1U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp771[1U]);
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb_vppn 
        = ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
            ? 0U : (0x7ffffU & ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                 ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)))
                                 : __Vtemp775[0U])));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush 
        = ((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
              >> 0x16U) | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                             >> 7U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                       >> 8U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                   >> 6U)))) 
            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
               >> 0x12U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
            >> 0x12U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
            >> 0x19U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 6U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    if ((0x20U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp800[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp800[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp800[0U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : 0U);
        __Vtemp800[1U] = ((0x40U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : 0U);
    }
    if ((8U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp804[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))));
        __Vtemp804[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                     << 0x13U) 
                                                                    | (0x7ffffU 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                             >> 0x16U)))))))) 
                                  >> 0x20U));
    } else {
        __Vtemp804[0U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U)))))))))
                           : __Vtemp800[0U]);
        __Vtemp804[1U] = ((0x10U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp800[1U]);
    }
    if ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp808[0U] = (IData)((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                  << 0x3eU) 
                                                 | ((QData)((IData)(
                                                                    ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                        >> 9U)))) 
                                                    << 0x1eU))));
        __Vtemp808[1U] = (IData)(((0x200000ULL | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | ((QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                       << 0x17U) 
                                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                         >> 9U)))) 
                                                     << 0x1eU))) 
                                  >> 0x20U));
    } else {
        __Vtemp808[0U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                          << 0x17U) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                            >> 9U)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0xaU) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))))
                           : __Vtemp804[0U]);
        __Vtemp808[1U] = ((4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0x17U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 9U)))) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                               | (0x7ffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                     >> 0x20U)))
                           : __Vtemp804[1U]);
    }
    __Vtemp818[2U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 5U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 6U : ((0x40000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 6U : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                     ? 0x1fU
                                                     : 
                                                    ((8U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x20U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                        ? 1U
                                                        : 0U))))))))));
    if ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp820[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                          << 0x13U) 
                                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                            >> 0xdU)))))))));
        __Vtemp820[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x13U) 
                                                                        | (0x7ffffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                               << 0x13U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp820[0U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0U : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                    ? 0U : ((0x40000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x80000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0U : 
                                             ((1U & 
                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                               ? (IData)(
                                                         (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                           << 0x3eU) 
                                                          | ((QData)((IData)(
                                                                             ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                               << 0x17U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                             << 0x1eU)))
                                               : __Vtemp808[0U])))));
        __Vtemp820[1U] = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? 0x80000000U : ((0x20000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                             ? 0U : 
                                            ((0x40000000U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                              ? 0x80000000U
                                              : ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])
                                                   ? 
                                                  (0x80000000U 
                                                   | (IData)(
                                                             ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                                << 0x3eU) 
                                                               | ((QData)((IData)(
                                                                                ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                  << 0x1eU)) 
                                                              >> 0x20U)))
                                                   : 
                                                  __Vtemp808[1U])))));
    }
    if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp824[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                       << 0x13U) 
                                                                      | (0x7ffffU 
                                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                             << 0x13U) 
                                                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                               >> 0xdU))))))))));
        __Vtemp824[1U] = (0x80000000U | (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                            << 0x13U) 
                                                                           | (0x7ffffU 
                                                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))))) 
                                                 >> 0x20U)));
    } else {
        __Vtemp824[0U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                            << 0x13U) 
                                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                              >> 0xdU)))))))))
                           : __Vtemp820[0U]);
        __Vtemp824[1U] = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                           ? (0x80000000U | (IData)(
                                                    ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                             << 0x13U) 
                                                                            | (0x7ffffU 
                                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))))) 
                                                     >> 0x20U)))
                           : __Vtemp820[1U]);
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill 
        = (1U & (((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                   ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                            ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                        << 0x3eU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                        << 0x1eU)))
                            : __Vtemp824[0U])) >> 0x14U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 7U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
           & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                 >> 6U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffffffffffffffeULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | (IData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                        & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                              >> 0xdU))) 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                          >> 0xcU)) 
                                      | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xdU)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                              >> 0xcU)))) 
                                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                           >> 0xdU)) 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                          >> 0xcU)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffffffffffffffeULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | (IData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                     & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                         >> 0xdU) | 
                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                         >> 0xcU))) 
                                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                        >> 0xdU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                        >> 0xcU)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
           | ((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    vlTOPp->simu_top__DOT__soc__DOT__m0_wready = 0U;
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready));
    }
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 1U));
    }
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 2U));
    }
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign 
        = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush)) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign 
        = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
            >> 0x14U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x13U) & ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x10U) & ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x11U) & ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 5U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
            >> 0x16U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode 
        = ((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
           | (3U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xff00ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                          << 8U));
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xff00ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xffffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                          << 0x10U));
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (0U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xffff00U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xffff00U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awready) 
                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wready))) {
                        if (vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 0U;
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num 
                                = (7U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num) 
                                         - (IData)(1U)));
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 4U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata 
                                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U];
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = 1U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
                            __Vtemp829[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U];
                            __Vtemp829[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U];
                            __Vtemp829[2U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U];
                            VL_EXTEND_WW(128,96, __Vtemp830, __Vtemp829);
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
                                = __Vtemp830[0U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
                                = __Vtemp830[1U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
                                = __Vtemp830[2U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
                                = __Vtemp830[3U];
                        }
                    } else {
                        if (vlTOPp->simu_top__DOT__soc__DOT__cpu_awready) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 4U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
                        } else {
                            if (vlTOPp->simu_top__DOT__soc__DOT__cpu_wready) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 2U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = 0U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->simu_top__DOT__soc__DOT__cpu_wready) {
                        if (vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 0U;
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num 
                                = (7U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num) 
                                         - (IData)(1U)));
                            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_last) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 1U;
                            }
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 4U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata 
                                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U];
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = 1U;
                            __Vtemp831[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U];
                            __Vtemp831[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U];
                            __Vtemp831[2U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U];
                            VL_EXTEND_WW(128,96, __Vtemp832, __Vtemp831);
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
                                = __Vtemp832[0U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
                                = __Vtemp832[1U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
                                = __Vtemp832[2U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
                                = __Vtemp832[3U];
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
                } else {
                    if (vlTOPp->simu_top__DOT__soc__DOT__cpu_awready) {
                        if (vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 0U;
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num 
                                = (7U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num) 
                                         - (IData)(1U)));
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 4U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata 
                                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U];
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = 1U;
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
                            __Vtemp833[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U];
                            __Vtemp833[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U];
                            __Vtemp833[2U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U];
                            VL_EXTEND_WW(128,96, __Vtemp834, __Vtemp833);
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
                                = __Vtemp834[0U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
                                = __Vtemp834[1U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
                                = __Vtemp834[2U];
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
                                = __Vtemp834[3U];
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
                } else {
                    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 5U;
                        vlTOPp->simu_top__DOT__soc__DOT__cpu_awaddr 
                            = (IData)(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
                                        ? (QData)((IData)(
                                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                                                            << 0xcU) 
                                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                               << 4U) 
                                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)))))
                                        : (((QData)((IData)(
                                                            ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                                                              ? 
                                                             (0xfffffU 
                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                                                                 >> 1U))
                                                              : 
                                                             (0xfffffU 
                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                                                                 >> 1U))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                              << 4U))))));
                        if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))) {
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_awsize = 2U;
                            vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = 3U;
                        } else {
                            vlTOPp->simu_top__DOT__soc__DOT__cpu_awsize 
                                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type;
                            vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = 0U;
                        }
                        vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid = 1U;
                        vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata 
                            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U];
                        vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb 
                            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
                                ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb)
                                : 0xfU);
                        vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = 1U;
                        __Vtemp835[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U];
                        __Vtemp835[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U];
                        __Vtemp835[2U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U];
                        VL_EXTEND_WW(128,96, __Vtemp836, __Vtemp835);
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
                            = __Vtemp836[0U];
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
                            = __Vtemp836[1U];
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
                            = __Vtemp836[2U];
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
                            = __Vtemp836[3U];
                        if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = 3U;
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu_bready = 1U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__inst_real_rd_size 
        = ((4U == ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                    ? 2U : 4U)) ? 2U : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                         ? 2U : 4U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
            ? ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                << 0xcU) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index) 
                             << 4U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset)))
            : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index) 
                            << 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one)) 
           | (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)) 
                    ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num) 
                       << 1U))));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer = 1U;
        } else {
            if (((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)))) {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer = 0U;
            }
        }
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
           & ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode)) 
              | (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
           & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
           & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en) 
           & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx 
                 >> 0x1fU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_invalid_wr_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en) 
           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx 
              >> 0x1fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index 
        = (0x1fU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en))) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64)) 
                    | ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en))) 
                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)));
    vlTOPp->debug0_wb_rf_wen = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
        = (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we)) 
            << 0x25U) | (0x1fffffffffULL & (((QData)((IData)(
                                                             vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U])))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
           & (0x41U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                    << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                 >> 8U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
           & (0x180U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                     << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                  >> 8U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
           & (0x181U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                     << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                  >> 8U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
           & (0U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                 << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                              >> 8U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 9U))))));
    vlTOPp->uart_rx = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                             ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                >> 3U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 3U) & ((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                       ? ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                            == (7U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                          & (2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))
                       : (0U != (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
            | ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
               & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                      == (7U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                  | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))) 
           & ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)) 
              & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en 
        = (((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
            | (1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                 >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rid)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__replace_way 
        = (1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset)) 
                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer))) 
                 | ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)) 
                    & (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer) 
                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                           >> 7U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2 
        = ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2))
            ? 0U : ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                      == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                           >> 0x20U)))) 
                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                >> 0x25U))) ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus)
                     : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                    [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2]));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1 
        = ((0U == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                             << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 5U))))
            ? 0U : ((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                 << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 5U))) 
                      == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                           >> 0x20U)))) 
                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                >> 0x25U))) ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus)
                     : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                    [(0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 5U)))]));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen)
            ? ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U)) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen)
            ? ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U)) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv 
        = (3U & ((((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush))) 
                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd) 
                  | ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen))) 
                     & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                         << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 8U)))) | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush)) 
                                                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush))) 
                                                                  & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen)))))) 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward 
        = (1U & (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill)) 
                  & (~ ((0x3fU == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                            >> 0x10U))) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)))) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
    vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe = 
        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (3U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr 
                = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = 3U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | ((0x1fe0U == (0xffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu_awaddr 
                                      >> 0x10U))) << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | ((0x1fafU == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu_awaddr 
                                      >> 0x10U))) << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_last 
        = (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                 | (~ ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num)) 
                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable))))));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = 0U;
    } else {
        if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                        } else {
                            if ((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                                       | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer))))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                            } else {
                                if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) {
                                    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num 
                                        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                        } else {
                            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = 0U;
                            }
                            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 0x10U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                        } else {
                            if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 8U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
                                    = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr) 
                                       | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_d) 
                                            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                                                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer
                                                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer)) 
                                           & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en)) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr))) 
                                          & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))));
                            }
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                        } else {
                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid) 
                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_lookup2lookup))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 2U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_op;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__preld_en;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_size;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index 
                                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 4U));
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset 
                                    = (0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb 
                                    = (0xfU & ((0x1fffffffU 
                                                & ((((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                    >> 0x1eU)))) 
                                                     >> 3U) 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen)) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                      >> 0x1fU)))) 
                                                       >> 3U) 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen)))) 
                                               | (0xfU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (3U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x1eU))))))))) 
                                                     >> 3U))));
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode 
                                    = (3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                              << 0x1dU) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 3U)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en;
                            } else {
                                if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                                } else {
                                    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                                    } else {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 4U;
                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                                            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en 
                                            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid) 
                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_idle2lookup))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 2U;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_op;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__preld_en;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_size;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index 
                                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 4U));
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset 
                                    = (0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb 
                                    = (0xfU & ((0x1fffffffU 
                                                & ((((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                    >> 0x1eU)))) 
                                                     >> 3U) 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen)) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                      >> 0x1fU)))) 
                                                       >> 3U) 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen)))) 
                                               | (0xfU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (3U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x1eU))))))))) 
                                                     >> 3U))));
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata;
                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode 
                                    = (3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                              << 0x1dU) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 3U)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
                                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en;
                            }
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena 
        = (1U & (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)) 
                  | (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena 
        = (1U & (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req 
        = ((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
           & (~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_dina 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr))
            ? 0U : (1U | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                          << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe 
        = ((((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch)) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle)) 
           & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en 
        = (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
             & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                >> 3U) & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)))) 
           & ((7U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
                     >> 0x1dU)) == (7U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                                          >> 0x1dU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en 
        = (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
             & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                >> 3U) & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)))) 
           & ((7U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
                     >> 0x1dU)) == (7U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                          >> 0x1dU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en 
        = (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
             & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                >> 3U) & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)))) 
           & ((7U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                      << 0xcU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                  >> 0x14U))) == (7U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                                                     >> 0x1dU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en 
        = (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
             & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                >> 3U) & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)))) 
           & ((7U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                      << 0xcU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                  >> 0x14U))) == (7U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                                     >> 0x1dU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill) 
            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) 
               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                  >> 0xbU))) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward) 
                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                   >> 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg 
        = ((((0x3fU == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                 >> 0x10U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)) 
            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) 
               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                  >> 0xcU))) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward) 
                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                   >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffffffffffffffdULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                           >> 0xcU)))))) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffffffffffffffdULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         >> 0xcU)))))) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
    if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai 
            = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma);
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai 
            = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu));
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp 
        = (1U & ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall)) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break)) 
                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                      >> 4U)) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid))) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__has_int)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da))) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en 
        = (((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da)) 
              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg)) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en))) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
        = ((0xffffff00U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                             ? (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                >> 8U) : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr) 
                           << 8U)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
    vlTOPp->__Vtableidx3 = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value 
        = vlTOPp->__Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value 
        = vlTOPp->__Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value
        [vlTOPp->__Vtableidx4];
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one)) 
           | (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num)) 
                    ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num) 
                       << 1U))));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                << 0xcU) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                             << 4U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)));
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type = 4U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                            << 4U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 1U;
        } else {
            if (((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)))) {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 0U;
            }
        }
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)) 
              | (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena) {
        if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena) {
        if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra];
        }
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid) 
         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[1U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[2U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[3U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[4U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[5U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[6U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[7U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[8U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[9U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0xaU];
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef 
        = (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
             >> 0x1fU) & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_uncache_en 
        = (1U & (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da) 
                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg))) 
                     & (0U == (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                     >> 5U)))) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en) 
                                                  & (0U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                                                         >> 4U))))) 
                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en) 
                      & (0U == (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                      >> 4U))))) | 
                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en) 
                   & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_mat)))) 
                 | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr 
        = ((~ (IData)((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_v)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv) 
            > (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_plv)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en 
        = (1U & (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da) 
                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg))) 
                     & (0U == (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                     >> 7U)))) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en) 
                                                  & (0U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                                                         >> 4U))))) 
                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en) 
                      & (0U == (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                      >> 4U))))) | 
                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en) 
                   & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_mat)))) 
                 | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil 
        = ((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
              >> 6U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                        >> 0x15U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis 
        = (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
             >> 0xaU) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem) 
             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                >> 0x15U)) & (~ (IData)((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1)))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem) 
             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                >> 0x16U)) & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv) 
               > (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_plv))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme 
        = (((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
               >> 0xaU) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v)) 
             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv) 
                <= (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_plv))) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_d))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en))
            ? ((0xe0000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                               << 4U)) | (0x1fffffffU 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer))
            : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en))
                ? ((0xe0000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                   << 4U)) | (0x1fffffffU 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer))
                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di)))
            ? ((0xe0000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                               << 4U)) | (0x1fffffffU 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer))
            : ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en)) 
                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di)))
                ? ((0xe0000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                   << 4U)) | (0x1fffffffU 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer))
                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
        = (1U & ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                  ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)
                  : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))));
    vlTOPp->uart_tx = (1U & (((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe)) 
                                & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                    >> 4U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))) 
                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe))) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe))) 
                             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe))));
    __Vtemp838[0U] = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab;
    __Vtemp838[1U] = (IData)((((QData)((IData)((0xfU 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                               << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw))));
    __Vtemp838[2U] = (IData)(((((QData)((IData)((0xfU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                                << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw))) 
                              >> 0x20U));
    __Vtemp838[3U] = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
    VL_EXTEND_WW(128,104, __Vtemp839, __Vtemp838);
    vlTOPp->uart_ctr_bus[0U] = __Vtemp839[0U];
    vlTOPp->uart_ctr_bus[1U] = __Vtemp839[1U];
    vlTOPp->uart_ctr_bus[2U] = __Vtemp839[2U];
    vlTOPp->uart_ctr_bus[3U] = __Vtemp839[3U];
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu) 
           & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
              & ((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                  >> 0xeU))) ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                  : ((0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                      >> 0xeU))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab) 
           & (0x40U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (4U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (8U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0xcU == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x18U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x1cU == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x20U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x24U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x28U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x2cU == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__data_real_rd_size 
        = ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type))
            ? 2U : (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state 
        = vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer)));
    if (vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg[vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0] 
            = vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0;
    }
    if (vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg[vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0] 
            = vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0;
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp 
        = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr)) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp 
        = (1U & (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil)) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis)) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi)) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem)) 
                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                    >> 0xdU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req 
        = ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil)) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis)) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
        = (0xfffffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en)
                        ? ((0xcU == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ps))
                            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ppn
                            : ((0xffc00U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ppn) 
                               | (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr 
                                            >> 0xcU))))
                        : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr 
                           >> 0xcU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
            & (0U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (2U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (6U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (0U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (5U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
        = ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
            ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command
            : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1)) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                ? (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))
                : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2)) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                    ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r
                    : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3)) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                        ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)
                        : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x10U == (0x7ffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) 
                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                            ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM)
                            : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                    & (0x14U == (0x7ffU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) 
                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                ? (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status) 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                            >> 0x20U))))
                                : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6)) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                    ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter
                                    : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7)) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                        ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num
                                        : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8)) 
                                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                            ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0
                                            : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1
                                                : (
                                                   (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10)) 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                    ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0
                                                    : 
                                                   ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11)) 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                     ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1
                                                     : 
                                                    ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)) 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                      ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD
                                                      : 0U)))))))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset 
        = (1U & (~ (IData)(vlTOPp->aresetn)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena 
        = (1U & (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en)) 
                  | (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena 
        = (1U & (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_dina 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr))
            ? 0U : (1U | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                          << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way 
        = (1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1)) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)) 
                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer))) 
                 | ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                    & (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer) 
                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                           >> 7U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_size 
        = ((1U & (- (IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x1fU))))) | 
           (2U & (- (IData)((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                 << 2U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x1eU)))))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 5U) & (1U == (7U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 6U) & ((0U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                      | (8U == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_op 
        = (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                   >> 5U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                >> 5U))) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                               >> 6U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                  >> 0xaU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                              >> 5U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
        = ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? (((QData)((IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                       >> 0x1fU)))) 
                << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))
            : (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable 
        = (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
             >> 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                          >> 0x1dU)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer));
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer));
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31 
            = (1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                     >> 0x1fU));
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed 
            = (1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                     >> 0x19U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
        = ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? (((QData)((IData)((- (IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                  >> 0x1fU)))))) 
                << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])))
            : (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin 
        = (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                   >> 0xcU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                               >> 0xdU)) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xeU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
        = ((0x200U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]
            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 
        = ((0x100U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]
            : ((0x80U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
                ? 4U : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_tag 
        = (0xfffffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)
                        ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag
                        : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en)
                            ? ((0xcU == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ps))
                                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn
                                : ((0xffc00U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn) 
                                   | (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
                                                >> 0xcU))))
                            : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
                               >> 0xcU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit 
        = (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
              == (0xfffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                              >> 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit 
        = (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
              == (0xfffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                              >> 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffffffffffffffbULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                           >> 0xcU)))))) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffffffffffffffbULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         >> 0xcU)))))) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao 
        = (0xffU & ((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                     >> 0xeU))) ? (
                                                   (4U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? 
                                                    ((1U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                       ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                                       : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                                                      : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                                                     : 
                                                    ((1U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? 
                                                    ((1U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                       ? 
                                                      (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                       >> 0x10U)
                                                       : 
                                                      (0xc0U 
                                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                                     : 
                                                    ((1U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                       ? 
                                                      (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                       >> 8U)
                                                       : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                       ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl
                                                       : 
                                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                       >> 3U)))))
                     : ((0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                         >> 0xeU)))
                         ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T
                         : 0U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
            ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size)
            : 4U);
    VL_EXTEND_WI(128,32, __Vtemp840, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata);
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
            = __Vtemp840[0U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
            = __Vtemp840[1U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
            = __Vtemp840[2U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
            = __Vtemp840[3U];
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[0U]
                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[0U]);
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[1U]
                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[1U]);
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[2U]
                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[2U]);
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[3U]
                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[3U]);
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req 
        = ((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
           & (~ ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1)) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_d 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                  ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                     ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))
                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                     ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 3U))) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 2U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 5U))) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 4U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 3U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 7U))) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 6U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 5U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 9U))) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 8U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 7U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0xbU))) & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xaU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 9U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0xdU))) & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xcU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0xfU))) & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xeU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xdU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x11U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x10U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xfU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x13U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x12U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x11U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x15U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x14U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x13U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x17U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x16U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x15U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x19U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x18U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x17U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x1bU))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x1aU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x1dU))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x1cU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x1bU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x1fU))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x1eU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x1dU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x 
        = (1U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 1U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                          >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                          >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 3U))) & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 2U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 1U))) | (((~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 2U))) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 1U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 5U))) & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 4U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 3U))) | (((~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 4U))) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 3U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 7U))) & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 6U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 5U))) | (((~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 6U))) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 5U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 9U))) & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 8U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 7U))) | (((~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 8U))) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 7U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0xbU))) & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0xaU)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 9U))) | (((~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0xaU))) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0xdU))) & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0xcU)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0xbU))) | (((~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0xdU))) 
                                            & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 0xcU))) 
                                           & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0xbU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0xfU))) & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0xeU)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0xdU))) | (((~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0xfU))) 
                                            & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 0xeU))) 
                                           & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0xdU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x11U))) & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x10U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0xfU))) | (((~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0x11U))) 
                                            & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 0x10U))) 
                                           & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0xfU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x13U))) & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x12U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0x11U))) | (((~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x13U))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0x12U))) 
                                            & (~ (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x11U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x15U))) & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x14U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0x13U))) | (((~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x15U))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0x14U))) 
                                            & (~ (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x13U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x17U))) & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x16U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0x15U))) | (((~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x17U))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0x16U))) 
                                            & (~ (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x15U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x19U))) & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x18U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0x17U))) | (((~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x19U))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0x18U))) 
                                            & (~ (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x17U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x1bU))) & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x1aU)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0x19U))) | (((~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x1bU))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0x1aU))) 
                                            & (~ (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x19U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x1dU))) & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x1cU)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0x1bU))) | (((~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x1dU))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0x1cU))) 
                                            & (~ (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x1bU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x 
        = (1U & ((((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x1fU))) & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x1eU)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                             >> 0x1dU))) | (((~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x1fU))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 0x1eU))) 
                                            & (~ (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x1dU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 3U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 2U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 1U)))) | (((IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 3U)) 
                                              & (~ (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                            >> 2U)))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 3U)) & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 2U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 5U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 4U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 3U)))) | (((IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 5U)) 
                                              & (~ (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                            >> 4U)))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 5U)) & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 4U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 7U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 6U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 5U)))) | (((IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 7U)) 
                                              & (~ (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                            >> 6U)))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 7U)) & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 6U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 9U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 8U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 7U)))) | (((IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 9U)) 
                                              & (~ (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                            >> 8U)))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 9U)) & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 8U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xbU)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0xaU))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 9U)))) | (((IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 0xbU)) 
                                              & (~ (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                            >> 0xaU)))) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                        >> 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0xbU)) & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                   >> 0xaU)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xdU)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0xcU))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0xbU)))) | (((IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0xdU)) 
                                                & (~ (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                              >> 0xcU)))) 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0xdU)) & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                   >> 0xcU)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xfU)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0xeU))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0xdU)))) | (((IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0xfU)) 
                                                & (~ (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                              >> 0xeU)))) 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0xdU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0xfU)) & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                   >> 0xeU)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0xdU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x11U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x10U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0xfU)))) | (((IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                         >> 0x11U)) 
                                                & (~ (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                              >> 0x10U)))) 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x11U)) & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x10U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x13U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x12U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0x11U)))) | (((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x13U)) 
                                                 & (~ (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                               >> 0x12U)))) 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                           >> 0x11U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x13U)) & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x12U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x11U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x15U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x14U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0x13U)))) | (((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x15U)) 
                                                 & (~ (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                               >> 0x14U)))) 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                           >> 0x13U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x15U)) & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x14U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x13U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x17U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x16U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0x15U)))) | (((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x17U)) 
                                                 & (~ (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                               >> 0x16U)))) 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                           >> 0x15U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x17U)) & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x16U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x15U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x19U)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x18U))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0x17U)))) | (((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x19U)) 
                                                 & (~ (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                               >> 0x18U)))) 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                           >> 0x17U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x19U)) & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x18U)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x17U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x1bU)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1aU))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0x19U)))) | (((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x1bU)) 
                                                 & (~ (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                               >> 0x1aU)))) 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                           >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x1bU)) & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x1aU)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x1dU)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1cU))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0x1bU)))) | (((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x1dU)) 
                                                 & (~ (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                               >> 0x1cU)))) 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                           >> 0x1bU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x1dU)) & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x1cU)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x1bU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x1fU)) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1eU))) 
                  & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                >> 0x1dU)))) | (((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                          >> 0x1fU)) 
                                                 & (~ (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                               >> 0x1eU)))) 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                           >> 0x1dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x1fU)) & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x1eU)))) 
                 & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                               >> 0x1dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y 
        = ((4U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x20U)) << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                            >> 0x1fU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r 
        = (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r)) 
            << 1U) | (QData)((IData)(((0x20U >= (0x3fU 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))) 
                                      & (IData)(((QData)((IData)(
                                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                                   ? 
                                                                  ((0x80000000U 
                                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                                    ? 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (~ 
                                                                     vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))
                                                                    : 
                                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                                   : 
                                                                  vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[1U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[1U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [1U]) | (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[2U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 1U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[2U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [2U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[3U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 2U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[3U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [3U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 2U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[4U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 3U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[4U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [4U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 3U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[5U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 4U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[5U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [5U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 4U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[6U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 5U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[6U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [6U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 5U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[7U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 6U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[7U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [7U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 6U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[8U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 7U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[8U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [8U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 7U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[9U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 8U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[9U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [9U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 8U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xaU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 9U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xaU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xaU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 9U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xbU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xaU))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xbU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xbU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xaU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xcU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xcU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xcU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xdU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xdU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xdU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xcU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xeU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xeU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xeU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xdU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xfU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xfU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xfU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x10U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0xfU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x10U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x10U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0xfU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x11U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x10U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x11U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x11U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x10U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x12U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x11U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x12U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x12U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x11U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x13U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x12U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x13U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x13U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x12U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x14U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x13U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x14U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x14U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x13U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x15U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x14U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x15U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x15U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x14U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x16U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x15U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x16U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x16U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x15U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x17U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x16U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x17U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x17U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x16U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x18U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x17U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x18U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x18U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x17U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x19U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x18U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x19U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x19U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x18U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x19U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1aU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1aU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1bU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1bU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1cU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1cU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1dU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1dU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1eU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1eU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x20U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1fU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x20U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x20U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1fU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x21U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x20U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x21U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x21U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x20U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x22U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x21U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x22U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x22U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x21U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x23U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x22U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x23U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x23U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x22U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x24U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x23U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x24U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x24U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x23U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x25U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x24U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x25U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x25U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x24U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x26U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x25U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x26U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x26U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x25U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x27U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x26U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x27U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x27U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x26U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x28U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x27U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x28U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x28U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x27U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x29U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x28U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x29U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x29U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x28U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x29U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x29U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2aU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2aU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2bU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2bU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2cU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2cU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2dU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2dU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2eU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2eU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x30U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2fU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x30U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x30U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2fU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x31U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x30U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x31U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x31U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x30U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x32U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x31U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x32U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x32U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x31U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x33U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x32U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x33U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x33U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x32U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x34U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x33U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x34U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x34U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x33U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x35U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x34U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x35U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x35U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x34U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x36U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x35U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x36U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x36U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x35U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x37U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x36U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x37U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x37U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x36U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x38U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x37U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x38U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x38U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x37U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x39U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x38U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x39U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x39U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x38U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x39U))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x39U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3aU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3aU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3bU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3bU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3cU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3cU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3dU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3dU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3eU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3eU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x40U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3fU))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x40U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x40U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3fU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[1U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       << 0x20U))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[1U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [1U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0x20U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[2U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffff80000000ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1fU)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[2U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffff80000000ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1fU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[3U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffc0000000ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1eU)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[3U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffc0000000ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1eU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[4U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffe0000000ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1dU)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[4U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffe0000000ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[5U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffff0000000ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1cU)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[5U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffff0000000ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1cU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[6U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffff8000000ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1bU)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[6U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffff8000000ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1bU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[7U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffc000000ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1aU)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[7U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffc000000ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1aU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[8U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffe000000ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x19U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[8U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffe000000ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[9U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffff000000ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x18U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[9U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffff000000ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x18U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xaU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffff800000ULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x17U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xaU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffff800000ULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x17U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xbU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffc00000ULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x16U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xbU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffc00000ULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x16U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xcU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffe00000ULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x15U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xcU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffe00000ULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x15U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xdU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffff00000ULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x14U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xdU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffff00000ULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x14U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xeU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffff80000ULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x13U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xeU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffff80000ULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x13U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xfU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffc0000ULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x12U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xfU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffc0000ULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x12U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x10U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1fffffffe0000ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0x11U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x10U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1fffffffe0000ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0x11U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x11U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffff0000ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0x10U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x11U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffff0000ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0x10U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x12U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffff8000ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xfU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x12U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffff8000ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x13U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffc000ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xeU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x13U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffc000ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xeU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x14U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffe000ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xdU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x14U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffe000ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xdU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x15U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xffffffff000ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xcU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x15U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xffffffff000ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xcU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x16U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7fffffff800ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xbU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x16U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7fffffff800ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x17U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3fffffffc00ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xaU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x17U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3fffffffc00ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xaU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x18U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1fffffffe00ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 9U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x18U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1fffffffe00ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x19U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffff00ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 8U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x19U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffff00ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 8U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffff80ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffff80ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffc0ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffc0ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffe0ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffe0ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xffffffff0ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xffffffff0ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7fffffff8ULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7fffffff8ULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3fffffffcULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3fffffffcULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x20U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1fffffffeULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x20U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1fffffffeULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x21U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x21U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x22U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x22U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x23U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x23U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x24U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x24U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x25U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x25U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x26U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x26U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x27U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x27U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x28U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x28U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x29U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x29U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 8U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xaU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xcU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xdU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xeU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x30U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x30U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x31U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x31U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x32U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x32U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x33U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x33U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x34U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x34U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x35U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x35U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x36U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x36U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x37U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x37U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x38U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x38U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x39U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x18U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x39U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x19U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1aU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1bU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1cU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x40U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x40U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       << 2U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 2U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffffeULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffffeULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffffffULL 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffffffULL 
                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 3U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 4U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 5U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 6U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 6U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 9U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xaU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xbU)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xcU)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xcU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x22U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x23U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x24U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x25U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2aU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2bU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2cU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x34U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x35U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x37U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x38U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x39U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x3aU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3aU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3cU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       << 4U))) << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 4U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffff8ULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffff8ULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffffffcULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffffffcULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffffffeULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffffffeULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffffULL 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffffULL 
                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 3U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 4U)))) 
                           << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 5U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 6U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 6U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 9U)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))) 
                             << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xaU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x22U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x23U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
}
