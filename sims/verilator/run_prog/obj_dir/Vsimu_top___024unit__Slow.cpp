// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top___024unit.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vsimu_top___024unit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vsimu_top___024unit::__Vconfigure(Vsimu_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vsimu_top___024unit::~Vsimu_top___024unit() {
}

// Savable
void Vsimu_top___024unit::__Vserialize(VerilatedSerialize& os) {
    vluint64_t __Vcheckval = 0xe3b0c44298fc1c14ULL;
    os<<__Vcheckval;
}
void Vsimu_top___024unit::__Vdeserialize(VerilatedDeserialize& os) {
    vluint64_t __Vcheckval = 0xe3b0c44298fc1c14ULL;
    os.readAssert(__Vcheckval);
}

void Vsimu_top___024unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::_ctor_var_reset\n"); );
}
