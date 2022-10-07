// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top::traceChgSub1(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 2237);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U))))));
            tracep->chgBit(oldp+1,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
            tracep->chgBit(oldp+2,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
            tracep->chgBit(oldp+3,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x36U)))))));
            tracep->chgBit(oldp+4,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x36U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x36U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
            tracep->chgBit(oldp+5,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U))))));
            tracep->chgBit(oldp+6,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
            tracep->chgBit(oldp+7,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
            tracep->chgBit(oldp+8,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x37U)))))));
            tracep->chgBit(oldp+9,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x37U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x37U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
            tracep->chgBit(oldp+10,((1U & (IData)((0xfULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x38U))))));
            tracep->chgBit(oldp+11,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3cU])));
            tracep->chgBit(oldp+12,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))));
            tracep->chgBit(oldp+13,((1U & (~ (IData)(
                                                     (0xfULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x38U)))))));
            tracep->chgBit(oldp+14,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0xfULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x38U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x38U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                            [0x3cU] 
                                            >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                        [0x3cU]))));
            tracep->chgBit(oldp+15,((1U & (IData)((7ULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x39U))))));
            tracep->chgBit(oldp+16,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3dU])));
            tracep->chgBit(oldp+17,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))));
            tracep->chgBit(oldp+18,((1U & (~ (IData)(
                                                     (7ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x39U)))))));
            tracep->chgBit(oldp+19,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (7ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x39U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x39U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                            [0x3dU] 
                                            >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                        [0x3dU]))));
            tracep->chgBit(oldp+20,((1U & (IData)((3ULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x3aU))))));
            tracep->chgBit(oldp+21,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3eU])));
            tracep->chgBit(oldp+22,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))));
            tracep->chgBit(oldp+23,((1U & (~ (IData)(
                                                     (3ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x3aU)))))));
            tracep->chgBit(oldp+24,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (3ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x3aU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                            [0x3eU] 
                                            >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                        [0x3eU]))));
            tracep->chgBit(oldp+25,((1U & (IData)((1ULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x3bU))))));
            tracep->chgBit(oldp+26,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3fU])));
            tracep->chgBit(oldp+27,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))));
            tracep->chgBit(oldp+28,((1U & (~ (IData)(
                                                     (1ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x3bU)))))));
            tracep->chgBit(oldp+29,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (1ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x3bU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                            [0x3fU] 
                                            >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                        [0x3fU]))));
            tracep->chgCData(oldp+30,((7U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 5U)))),3);
            tracep->chgQData(oldp+31,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       << 6U)),64);
            tracep->chgQData(oldp+33,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__6__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+35,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+36,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+37,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+38,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+39,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                   >> 7U)))));
            tracep->chgBit(oldp+40,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                   >> 6U)))));
            tracep->chgBit(oldp+41,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 6U)))));
            tracep->chgBit(oldp+42,((1U & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 6U))))));
            tracep->chgBit(oldp+43,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U)))) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+44,((1U & (IData)((0x7fffffffffffffe0ULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 5U))))));
            tracep->chgBit(oldp+45,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [1U])));
            tracep->chgBit(oldp+46,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))));
            tracep->chgBit(oldp+47,((1U & (~ (IData)(
                                                     (0x7fffffffffffffe0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 5U)))))));
            tracep->chgBit(oldp+48,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x7fffffffffffffe0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 5U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x7fffffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [1U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [1U]))));
            tracep->chgBit(oldp+49,((1U & (IData)((0x3ffffffffffffff0ULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 4U))))));
            tracep->chgBit(oldp+50,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [2U])));
            tracep->chgBit(oldp+51,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))));
            tracep->chgBit(oldp+52,((1U & (~ (IData)(
                                                     (0x3ffffffffffffff0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 4U)))))));
            tracep->chgBit(oldp+53,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x3ffffffffffffff0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 4U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x3ffffffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [2U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [2U]))));
            tracep->chgBit(oldp+54,((1U & (IData)((0x1ffffffffffffff8ULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 3U))))));
            tracep->chgBit(oldp+55,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [3U])));
            tracep->chgBit(oldp+56,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))));
            tracep->chgBit(oldp+57,((1U & (~ (IData)(
                                                     (0x1ffffffffffffff8ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 3U)))))));
            tracep->chgBit(oldp+58,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x1ffffffffffffff8ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 3U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x1ffffffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [3U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [3U]))));
            tracep->chgBit(oldp+59,((1U & (IData)((0xffffffffffffffcULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 2U))))));
            tracep->chgBit(oldp+60,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [4U])));
            tracep->chgBit(oldp+61,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))));
            tracep->chgBit(oldp+62,((1U & (~ (IData)(
                                                     (0xffffffffffffffcULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 2U)))))));
            tracep->chgBit(oldp+63,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0xffffffffffffffcULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 2U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0xffffffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [4U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [4U]))));
            tracep->chgBit(oldp+64,((1U & (IData)((0x7fffffffffffffeULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 1U))))));
            tracep->chgBit(oldp+65,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [5U])));
            tracep->chgBit(oldp+66,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))));
            tracep->chgBit(oldp+67,((1U & (~ (IData)(
                                                     (0x7fffffffffffffeULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 1U)))))));
            tracep->chgBit(oldp+68,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x7fffffffffffffeULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 1U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x7fffffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [5U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [5U]))));
            tracep->chgBit(oldp+69,((1U & (IData)((0x3ffffffffffffffULL 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+70,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [6U])));
            tracep->chgBit(oldp+71,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))));
            tracep->chgBit(oldp+72,((1U & (~ (IData)(
                                                     (0x3ffffffffffffffULL 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+73,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x3ffffffffffffffULL 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x3ffffffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [6U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [6U]))));
            tracep->chgBit(oldp+74,((1U & (IData)((0x1ffffffffffffffULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 1U))))));
            tracep->chgBit(oldp+75,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [7U])));
            tracep->chgBit(oldp+76,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))));
            tracep->chgBit(oldp+77,((1U & (~ (IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 1U)))))));
            tracep->chgBit(oldp+78,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 1U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x1ffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [7U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [7U]))));
            tracep->chgBit(oldp+79,((1U & (IData)((0xffffffffffffffULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 2U))))));
            tracep->chgBit(oldp+80,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [8U])));
            tracep->chgBit(oldp+81,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))));
            tracep->chgBit(oldp+82,((1U & (~ (IData)(
                                                     (0xffffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 2U)))))));
            tracep->chgBit(oldp+83,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0xffffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 2U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0xffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [8U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [8U]))));
            tracep->chgBit(oldp+84,((1U & (IData)((0x7fffffffffffffULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 3U))))));
            tracep->chgBit(oldp+85,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [9U])));
            tracep->chgBit(oldp+86,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))));
            tracep->chgBit(oldp+87,((1U & (~ (IData)(
                                                     (0x7fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 3U)))))));
            tracep->chgBit(oldp+88,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x7fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 3U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x7fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [9U] >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [9U]))));
            tracep->chgBit(oldp+89,((1U & (IData)((0x3fffffffffffffULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 4U))))));
            tracep->chgBit(oldp+90,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [0xaU])));
            tracep->chgBit(oldp+91,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))));
            tracep->chgBit(oldp+92,((1U & (~ (IData)(
                                                     (0x3fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 4U)))))));
            tracep->chgBit(oldp+93,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x3fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 4U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x3fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0xaU] 
                                            >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [0xaU]))));
            tracep->chgBit(oldp+94,((1U & (IData)((0x1fffffffffffffULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 5U))))));
            tracep->chgBit(oldp+95,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                     [0xbU])));
            tracep->chgBit(oldp+96,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))));
            tracep->chgBit(oldp+97,((1U & (~ (IData)(
                                                     (0x1fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 5U)))))));
            tracep->chgBit(oldp+98,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (0x1fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 5U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (0x1fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0xbU] 
                                            >> 1U))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                        [0xbU]))));
            tracep->chgBit(oldp+99,((1U & (IData)((0xfffffffffffffULL 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 6U))))));
            tracep->chgBit(oldp+100,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xcU])));
            tracep->chgBit(oldp+101,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0xcU] 
                                            >> 1U))));
            tracep->chgBit(oldp+102,((1U & (~ (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U)))))));
            tracep->chgBit(oldp+103,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 6U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0xcU]))));
            tracep->chgBit(oldp+104,((1U & (IData)(
                                                   (0x7ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))));
            tracep->chgBit(oldp+105,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xdU])));
            tracep->chgBit(oldp+106,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0xdU] 
                                            >> 1U))));
            tracep->chgBit(oldp+107,((1U & (~ (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U)))))));
            tracep->chgBit(oldp+108,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 7U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0xdU]))));
            tracep->chgBit(oldp+109,((1U & (IData)(
                                                   (0x3ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))));
            tracep->chgBit(oldp+110,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xeU])));
            tracep->chgBit(oldp+111,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0xeU] 
                                            >> 1U))));
            tracep->chgBit(oldp+112,((1U & (~ (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U)))))));
            tracep->chgBit(oldp+113,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 8U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0xeU]))));
            tracep->chgBit(oldp+114,((1U & (IData)(
                                                   (0x1ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))));
            tracep->chgBit(oldp+115,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xfU])));
            tracep->chgBit(oldp+116,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0xfU] 
                                            >> 1U))));
            tracep->chgBit(oldp+117,((1U & (~ (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U)))))));
            tracep->chgBit(oldp+118,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 9U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0xfU]))));
            tracep->chgBit(oldp+119,((1U & (IData)(
                                                   (0xffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))));
            tracep->chgBit(oldp+120,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x10U])));
            tracep->chgBit(oldp+121,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x10U] 
                                            >> 1U))));
            tracep->chgBit(oldp+122,((1U & (~ (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU)))))));
            tracep->chgBit(oldp+123,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xaU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x10U]))));
            tracep->chgBit(oldp+124,((1U & (IData)(
                                                   (0x7fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))));
            tracep->chgBit(oldp+125,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x11U])));
            tracep->chgBit(oldp+126,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x11U] 
                                            >> 1U))));
            tracep->chgBit(oldp+127,((1U & (~ (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU)))))));
            tracep->chgBit(oldp+128,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xbU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x11U]))));
            tracep->chgBit(oldp+129,((1U & (IData)(
                                                   (0x3fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))));
            tracep->chgBit(oldp+130,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x12U])));
            tracep->chgBit(oldp+131,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x12U] 
                                            >> 1U))));
            tracep->chgBit(oldp+132,((1U & (~ (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU)))))));
            tracep->chgBit(oldp+133,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xcU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x12U]))));
            tracep->chgBit(oldp+134,((1U & (IData)(
                                                   (0x1fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))));
            tracep->chgBit(oldp+135,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x13U])));
            tracep->chgBit(oldp+136,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x13U] 
                                            >> 1U))));
            tracep->chgBit(oldp+137,((1U & (~ (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU)))))));
            tracep->chgBit(oldp+138,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xdU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x13U]))));
            tracep->chgBit(oldp+139,((1U & (IData)(
                                                   (0xfffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))));
            tracep->chgBit(oldp+140,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x14U])));
            tracep->chgBit(oldp+141,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x14U] 
                                            >> 1U))));
            tracep->chgBit(oldp+142,((1U & (~ (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU)))))));
            tracep->chgBit(oldp+143,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xeU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x14U]))));
            tracep->chgBit(oldp+144,((1U & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))));
            tracep->chgBit(oldp+145,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x15U])));
            tracep->chgBit(oldp+146,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x15U] 
                                            >> 1U))));
            tracep->chgBit(oldp+147,((1U & (~ (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU)))))));
            tracep->chgBit(oldp+148,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xfU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x15U]))));
            tracep->chgBit(oldp+149,((1U & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))));
            tracep->chgBit(oldp+150,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x16U])));
            tracep->chgBit(oldp+151,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x16U] 
                                            >> 1U))));
            tracep->chgBit(oldp+152,((1U & (~ (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U)))))));
            tracep->chgBit(oldp+153,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x10U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x16U]))));
            tracep->chgBit(oldp+154,((1U & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))));
            tracep->chgBit(oldp+155,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x17U])));
            tracep->chgBit(oldp+156,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x17U] 
                                            >> 1U))));
            tracep->chgBit(oldp+157,((1U & (~ (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U)))))));
            tracep->chgBit(oldp+158,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x11U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x17U]))));
            tracep->chgBit(oldp+159,((1U & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))));
            tracep->chgBit(oldp+160,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x18U])));
            tracep->chgBit(oldp+161,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x18U] 
                                            >> 1U))));
            tracep->chgBit(oldp+162,((1U & (~ (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U)))))));
            tracep->chgBit(oldp+163,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x12U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x18U]))));
            tracep->chgBit(oldp+164,((1U & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))));
            tracep->chgBit(oldp+165,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x19U])));
            tracep->chgBit(oldp+166,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x19U] 
                                            >> 1U))));
            tracep->chgBit(oldp+167,((1U & (~ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U)))))));
            tracep->chgBit(oldp+168,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x13U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x19U]))));
            tracep->chgBit(oldp+169,((1U & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))));
            tracep->chgBit(oldp+170,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1aU])));
            tracep->chgBit(oldp+171,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x1aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+172,((1U & (~ (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U)))))));
            tracep->chgBit(oldp+173,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x14U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x1aU]))));
            tracep->chgBit(oldp+174,((1U & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))));
            tracep->chgBit(oldp+175,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1bU])));
            tracep->chgBit(oldp+176,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x1bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+177,((1U & (~ (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U)))))));
            tracep->chgBit(oldp+178,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x15U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x1bU]))));
            tracep->chgBit(oldp+179,((1U & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))));
            tracep->chgBit(oldp+180,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1cU])));
            tracep->chgBit(oldp+181,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x1cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+182,((1U & (~ (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U)))))));
            tracep->chgBit(oldp+183,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x16U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x1cU]))));
            tracep->chgBit(oldp+184,((1U & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))));
            tracep->chgBit(oldp+185,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1dU])));
            tracep->chgBit(oldp+186,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x1dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+187,((1U & (~ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U)))))));
            tracep->chgBit(oldp+188,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x17U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x1dU]))));
            tracep->chgBit(oldp+189,((1U & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))));
            tracep->chgBit(oldp+190,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1eU])));
            tracep->chgBit(oldp+191,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x1eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+192,((1U & (~ (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U)))))));
            tracep->chgBit(oldp+193,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x18U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x1eU]))));
            tracep->chgBit(oldp+194,((1U & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))));
            tracep->chgBit(oldp+195,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1fU])));
            tracep->chgBit(oldp+196,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x1fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+197,((1U & (~ (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U)))))));
            tracep->chgBit(oldp+198,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x19U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x1fU]))));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))));
            tracep->chgBit(oldp+200,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x20U])));
            tracep->chgBit(oldp+201,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x20U] 
                                            >> 1U))));
            tracep->chgBit(oldp+202,((1U & (~ (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU)))))));
            tracep->chgBit(oldp+203,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1aU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x20U]))));
            tracep->chgBit(oldp+204,((1U & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))));
            tracep->chgBit(oldp+205,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x21U])));
            tracep->chgBit(oldp+206,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x21U] 
                                            >> 1U))));
            tracep->chgBit(oldp+207,((1U & (~ (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU)))))));
            tracep->chgBit(oldp+208,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1bU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x21U]))));
            tracep->chgBit(oldp+209,((1U & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))));
            tracep->chgBit(oldp+210,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x22U])));
            tracep->chgBit(oldp+211,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x22U] 
                                            >> 1U))));
            tracep->chgBit(oldp+212,((1U & (~ (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU)))))));
            tracep->chgBit(oldp+213,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1cU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x22U]))));
            tracep->chgBit(oldp+214,((1U & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))));
            tracep->chgBit(oldp+215,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x23U])));
            tracep->chgBit(oldp+216,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x23U] 
                                            >> 1U))));
            tracep->chgBit(oldp+217,((1U & (~ (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU)))))));
            tracep->chgBit(oldp+218,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1dU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x23U]))));
            tracep->chgBit(oldp+219,((1U & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))));
            tracep->chgBit(oldp+220,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x24U])));
            tracep->chgBit(oldp+221,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x24U] 
                                            >> 1U))));
            tracep->chgBit(oldp+222,((1U & (~ (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU)))))));
            tracep->chgBit(oldp+223,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1eU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x24U]))));
            tracep->chgBit(oldp+224,((1U & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+225,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x25U])));
            tracep->chgBit(oldp+226,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x25U] 
                                            >> 1U))));
            tracep->chgBit(oldp+227,((1U & (~ (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU)))))));
            tracep->chgBit(oldp+228,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1fU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x25U]))));
            tracep->chgBit(oldp+229,((1U & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))));
            tracep->chgBit(oldp+230,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x26U])));
            tracep->chgBit(oldp+231,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x26U] 
                                            >> 1U))));
            tracep->chgBit(oldp+232,((1U & (~ (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U)))))));
            tracep->chgBit(oldp+233,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x20U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x26U]))));
            tracep->chgBit(oldp+234,((1U & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))));
            tracep->chgBit(oldp+235,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x27U])));
            tracep->chgBit(oldp+236,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x27U] 
                                            >> 1U))));
            tracep->chgBit(oldp+237,((1U & (~ (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U)))))));
            tracep->chgBit(oldp+238,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x21U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x27U]))));
            tracep->chgBit(oldp+239,((1U & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))));
            tracep->chgBit(oldp+240,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x28U])));
            tracep->chgBit(oldp+241,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x28U] 
                                            >> 1U))));
            tracep->chgBit(oldp+242,((1U & (~ (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U)))))));
            tracep->chgBit(oldp+243,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x22U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x28U]))));
            tracep->chgBit(oldp+244,((1U & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))));
            tracep->chgBit(oldp+245,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x29U])));
            tracep->chgBit(oldp+246,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x29U] 
                                            >> 1U))));
            tracep->chgBit(oldp+247,((1U & (~ (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U)))))));
            tracep->chgBit(oldp+248,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x23U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x29U]))));
            tracep->chgBit(oldp+249,((1U & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))));
            tracep->chgBit(oldp+250,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2aU])));
            tracep->chgBit(oldp+251,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x2aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+252,((1U & (~ (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U)))))));
            tracep->chgBit(oldp+253,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x24U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x2aU]))));
            tracep->chgBit(oldp+254,((1U & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))));
            tracep->chgBit(oldp+255,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2bU])));
            tracep->chgBit(oldp+256,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x2bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+257,((1U & (~ (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U)))))));
            tracep->chgBit(oldp+258,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x25U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x2bU]))));
            tracep->chgBit(oldp+259,((1U & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))));
            tracep->chgBit(oldp+260,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2cU])));
            tracep->chgBit(oldp+261,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x2cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+262,((1U & (~ (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U)))))));
            tracep->chgBit(oldp+263,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x26U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x2cU]))));
            tracep->chgBit(oldp+264,((1U & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))));
            tracep->chgBit(oldp+265,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2dU])));
            tracep->chgBit(oldp+266,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x2dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+267,((1U & (~ (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U)))))));
            tracep->chgBit(oldp+268,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x27U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x2dU]))));
            tracep->chgBit(oldp+269,((1U & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))));
            tracep->chgBit(oldp+270,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2eU])));
            tracep->chgBit(oldp+271,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x2eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+272,((1U & (~ (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U)))))));
            tracep->chgBit(oldp+273,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x28U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x2eU]))));
            tracep->chgBit(oldp+274,((1U & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))));
            tracep->chgBit(oldp+275,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2fU])));
            tracep->chgBit(oldp+276,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x2fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+277,((1U & (~ (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U)))))));
            tracep->chgBit(oldp+278,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x29U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x2fU]))));
            tracep->chgBit(oldp+279,((1U & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))));
            tracep->chgBit(oldp+280,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x30U])));
            tracep->chgBit(oldp+281,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x30U] 
                                            >> 1U))));
            tracep->chgBit(oldp+282,((1U & (~ (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU)))))));
            tracep->chgBit(oldp+283,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2aU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x30U]))));
            tracep->chgBit(oldp+284,((1U & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))));
            tracep->chgBit(oldp+285,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x31U])));
            tracep->chgBit(oldp+286,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x31U] 
                                            >> 1U))));
            tracep->chgBit(oldp+287,((1U & (~ (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU)))))));
            tracep->chgBit(oldp+288,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2bU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x31U]))));
            tracep->chgBit(oldp+289,((1U & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))));
            tracep->chgBit(oldp+290,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x32U])));
            tracep->chgBit(oldp+291,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x32U] 
                                            >> 1U))));
            tracep->chgBit(oldp+292,((1U & (~ (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU)))))));
            tracep->chgBit(oldp+293,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2cU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x32U]))));
            tracep->chgBit(oldp+294,((1U & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))));
            tracep->chgBit(oldp+295,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x33U])));
            tracep->chgBit(oldp+296,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x33U] 
                                            >> 1U))));
            tracep->chgBit(oldp+297,((1U & (~ (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU)))))));
            tracep->chgBit(oldp+298,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2dU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x33U]))));
            tracep->chgBit(oldp+299,((1U & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2eU))))));
            tracep->chgBit(oldp+300,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x34U])));
            tracep->chgBit(oldp+301,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x34U] 
                                            >> 1U))));
            tracep->chgBit(oldp+302,((1U & (~ (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU)))))));
            tracep->chgBit(oldp+303,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2eU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x34U]))));
            tracep->chgBit(oldp+304,((1U & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2fU))))));
            tracep->chgBit(oldp+305,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x35U])));
            tracep->chgBit(oldp+306,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x35U] 
                                            >> 1U))));
            tracep->chgBit(oldp+307,((1U & (~ (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU)))))));
            tracep->chgBit(oldp+308,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2fU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x35U]))));
            tracep->chgBit(oldp+309,((1U & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x30U))))));
            tracep->chgBit(oldp+310,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x36U])));
            tracep->chgBit(oldp+311,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x36U] 
                                            >> 1U))));
            tracep->chgBit(oldp+312,((1U & (~ (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U)))))));
            tracep->chgBit(oldp+313,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x30U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x36U]))));
            tracep->chgBit(oldp+314,((1U & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x31U))))));
            tracep->chgBit(oldp+315,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x37U])));
            tracep->chgBit(oldp+316,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x37U] 
                                            >> 1U))));
            tracep->chgBit(oldp+317,((1U & (~ (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U)))))));
            tracep->chgBit(oldp+318,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x31U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x37U]))));
            tracep->chgBit(oldp+319,((1U & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x32U))))));
            tracep->chgBit(oldp+320,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x38U])));
            tracep->chgBit(oldp+321,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x38U] 
                                            >> 1U))));
            tracep->chgBit(oldp+322,((1U & (~ (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U)))))));
            tracep->chgBit(oldp+323,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x32U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x38U]))));
            tracep->chgBit(oldp+324,((1U & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x33U))))));
            tracep->chgBit(oldp+325,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x39U])));
            tracep->chgBit(oldp+326,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x39U] 
                                            >> 1U))));
            tracep->chgBit(oldp+327,((1U & (~ (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U)))))));
            tracep->chgBit(oldp+328,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x33U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x39U]))));
            tracep->chgBit(oldp+329,((1U & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x34U))))));
            tracep->chgBit(oldp+330,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU])));
            tracep->chgBit(oldp+331,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x3aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+332,((1U & (~ (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U)))))));
            tracep->chgBit(oldp+333,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x34U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x3aU]))));
            tracep->chgBit(oldp+334,((1U & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x35U))))));
            tracep->chgBit(oldp+335,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU])));
            tracep->chgBit(oldp+336,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x3bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+337,((1U & (~ (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U)))))));
            tracep->chgBit(oldp+338,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x35U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x3bU]))));
            tracep->chgBit(oldp+339,((1U & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x36U))))));
            tracep->chgBit(oldp+340,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU])));
            tracep->chgBit(oldp+341,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x3cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+342,((1U & (~ (IData)(
                                                      (0xfULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x36U)))))));
            tracep->chgBit(oldp+343,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x36U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x36U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x3cU]))));
            tracep->chgBit(oldp+344,((1U & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x37U))))));
            tracep->chgBit(oldp+345,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3dU])));
            tracep->chgBit(oldp+346,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x3dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+347,((1U & (~ (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x37U)))))));
            tracep->chgBit(oldp+348,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x37U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (7ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x37U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x3dU]))));
            tracep->chgBit(oldp+349,((1U & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x38U))))));
            tracep->chgBit(oldp+350,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3eU])));
            tracep->chgBit(oldp+351,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x3eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+352,((1U & (~ (IData)(
                                                      (3ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x38U)))))));
            tracep->chgBit(oldp+353,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (3ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x38U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (3ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x38U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x3eU]))));
            tracep->chgBit(oldp+354,((1U & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x39U))))));
            tracep->chgBit(oldp+355,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3fU])));
            tracep->chgBit(oldp+356,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                            [0x3fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+357,((1U & (~ (IData)(
                                                      (1ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x39U)))))));
            tracep->chgBit(oldp+358,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (1ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x39U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (1ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x39U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                         [0x3fU]))));
            tracep->chgCData(oldp+359,((7U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 7U)))),3);
            tracep->chgQData(oldp+360,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 8U)),64);
            tracep->chgQData(oldp+362,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__8__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+364,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+365,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+366,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+367,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+368,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 9U)))));
            tracep->chgBit(oldp+369,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 8U)))));
            tracep->chgBit(oldp+370,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U)))));
            tracep->chgBit(oldp+371,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))));
            tracep->chgBit(oldp+372,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 8U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U)))) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+373,((1U & (IData)(
                                                   (0x7fffffffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))));
            tracep->chgBit(oldp+374,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [1U])));
            tracep->chgBit(oldp+375,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+376,((1U & (~ (IData)(
                                                      (0x7fffffffffffff80ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 7U)))))));
            tracep->chgBit(oldp+377,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffffff80ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffffff80ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 7U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [1U]))));
            tracep->chgBit(oldp+378,((1U & (IData)(
                                                   (0x3fffffffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))));
            tracep->chgBit(oldp+379,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [2U])));
            tracep->chgBit(oldp+380,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+381,((1U & (~ (IData)(
                                                      (0x3fffffffffffffc0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 6U)))))));
            tracep->chgBit(oldp+382,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffffc0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffffc0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 6U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [2U]))));
            tracep->chgBit(oldp+383,((1U & (IData)(
                                                   (0x1fffffffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))));
            tracep->chgBit(oldp+384,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [3U])));
            tracep->chgBit(oldp+385,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+386,((1U & (~ (IData)(
                                                      (0x1fffffffffffffe0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 5U)))))));
            tracep->chgBit(oldp+387,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffffe0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffffe0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 5U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [3U]))));
            tracep->chgBit(oldp+388,((1U & (IData)(
                                                   (0xffffffffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))));
            tracep->chgBit(oldp+389,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [4U])));
            tracep->chgBit(oldp+390,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [4U] >> 1U))));
            tracep->chgBit(oldp+391,((1U & (~ (IData)(
                                                      (0xffffffffffffff0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 4U)))))));
            tracep->chgBit(oldp+392,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffffffff0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffffffff0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 4U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [4U]))));
            tracep->chgBit(oldp+393,((1U & (IData)(
                                                   (0x7fffffffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))));
            tracep->chgBit(oldp+394,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [5U])));
            tracep->chgBit(oldp+395,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [5U] >> 1U))));
            tracep->chgBit(oldp+396,((1U & (~ (IData)(
                                                      (0x7fffffffffffff8ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 3U)))))));
            tracep->chgBit(oldp+397,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffffff8ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffffff8ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 3U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [5U]))));
            tracep->chgBit(oldp+398,((1U & (IData)(
                                                   (0x3fffffffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))));
            tracep->chgBit(oldp+399,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [6U])));
            tracep->chgBit(oldp+400,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [6U] >> 1U))));
            tracep->chgBit(oldp+401,((1U & (~ (IData)(
                                                      (0x3fffffffffffffcULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 2U)))))));
            tracep->chgBit(oldp+402,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffffcULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffffcULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 2U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [6U]))));
            tracep->chgBit(oldp+403,((1U & (IData)(
                                                   (0x1fffffffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))));
            tracep->chgBit(oldp+404,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [7U])));
            tracep->chgBit(oldp+405,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [7U] >> 1U))));
            tracep->chgBit(oldp+406,((1U & (~ (IData)(
                                                      (0x1fffffffffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U)))))));
            tracep->chgBit(oldp+407,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffffeULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 1U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [7U]))));
            tracep->chgBit(oldp+408,((1U & (IData)(
                                                   (0xffffffffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+409,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [8U])));
            tracep->chgBit(oldp+410,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [8U] >> 1U))));
            tracep->chgBit(oldp+411,((1U & (~ (IData)(
                                                      (0xffffffffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+412,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffffffffULL 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [8U]))));
            tracep->chgBit(oldp+413,((1U & (IData)(
                                                   (0x7fffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))));
            tracep->chgBit(oldp+414,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [9U])));
            tracep->chgBit(oldp+415,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [9U] >> 1U))));
            tracep->chgBit(oldp+416,((1U & (~ (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U)))))));
            tracep->chgBit(oldp+417,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 1U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [9U]))));
            tracep->chgBit(oldp+418,((1U & (IData)(
                                                   (0x3fffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))));
            tracep->chgBit(oldp+419,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xaU])));
            tracep->chgBit(oldp+420,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0xaU] 
                                            >> 1U))));
            tracep->chgBit(oldp+421,((1U & (~ (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U)))))));
            tracep->chgBit(oldp+422,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 2U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0xaU]))));
            tracep->chgBit(oldp+423,((1U & (IData)(
                                                   (0x1fffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))));
            tracep->chgBit(oldp+424,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xbU])));
            tracep->chgBit(oldp+425,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0xbU] 
                                            >> 1U))));
            tracep->chgBit(oldp+426,((1U & (~ (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U)))))));
            tracep->chgBit(oldp+427,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 3U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0xbU]))));
            tracep->chgBit(oldp+428,((1U & (IData)(
                                                   (0xfffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))));
            tracep->chgBit(oldp+429,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xcU])));
            tracep->chgBit(oldp+430,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0xcU] 
                                            >> 1U))));
            tracep->chgBit(oldp+431,((1U & (~ (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U)))))));
            tracep->chgBit(oldp+432,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 4U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0xcU]))));
            tracep->chgBit(oldp+433,((1U & (IData)(
                                                   (0x7ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))));
            tracep->chgBit(oldp+434,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xdU])));
            tracep->chgBit(oldp+435,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0xdU] 
                                            >> 1U))));
            tracep->chgBit(oldp+436,((1U & (~ (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U)))))));
            tracep->chgBit(oldp+437,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 5U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0xdU]))));
            tracep->chgBit(oldp+438,((1U & (IData)(
                                                   (0x3ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))));
            tracep->chgBit(oldp+439,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xeU])));
            tracep->chgBit(oldp+440,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0xeU] 
                                            >> 1U))));
            tracep->chgBit(oldp+441,((1U & (~ (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U)))))));
            tracep->chgBit(oldp+442,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 6U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0xeU]))));
            tracep->chgBit(oldp+443,((1U & (IData)(
                                                   (0x1ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))));
            tracep->chgBit(oldp+444,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xfU])));
            tracep->chgBit(oldp+445,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0xfU] 
                                            >> 1U))));
            tracep->chgBit(oldp+446,((1U & (~ (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U)))))));
            tracep->chgBit(oldp+447,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 7U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0xfU]))));
            tracep->chgBit(oldp+448,((1U & (IData)(
                                                   (0xffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))));
            tracep->chgBit(oldp+449,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x10U])));
            tracep->chgBit(oldp+450,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x10U] 
                                            >> 1U))));
            tracep->chgBit(oldp+451,((1U & (~ (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U)))))));
            tracep->chgBit(oldp+452,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 8U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x10U]))));
            tracep->chgBit(oldp+453,((1U & (IData)(
                                                   (0x7fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))));
            tracep->chgBit(oldp+454,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x11U])));
            tracep->chgBit(oldp+455,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x11U] 
                                            >> 1U))));
            tracep->chgBit(oldp+456,((1U & (~ (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U)))))));
            tracep->chgBit(oldp+457,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 9U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x11U]))));
            tracep->chgBit(oldp+458,((1U & (IData)(
                                                   (0x3fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))));
            tracep->chgBit(oldp+459,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x12U])));
            tracep->chgBit(oldp+460,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x12U] 
                                            >> 1U))));
            tracep->chgBit(oldp+461,((1U & (~ (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU)))))));
            tracep->chgBit(oldp+462,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xaU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x12U]))));
            tracep->chgBit(oldp+463,((1U & (IData)(
                                                   (0x1fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))));
            tracep->chgBit(oldp+464,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x13U])));
            tracep->chgBit(oldp+465,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x13U] 
                                            >> 1U))));
            tracep->chgBit(oldp+466,((1U & (~ (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU)))))));
            tracep->chgBit(oldp+467,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xbU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x13U]))));
            tracep->chgBit(oldp+468,((1U & (IData)(
                                                   (0xfffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))));
            tracep->chgBit(oldp+469,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x14U])));
            tracep->chgBit(oldp+470,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x14U] 
                                            >> 1U))));
            tracep->chgBit(oldp+471,((1U & (~ (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU)))))));
            tracep->chgBit(oldp+472,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xcU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x14U]))));
            tracep->chgBit(oldp+473,((1U & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))));
            tracep->chgBit(oldp+474,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x15U])));
            tracep->chgBit(oldp+475,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x15U] 
                                            >> 1U))));
            tracep->chgBit(oldp+476,((1U & (~ (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU)))))));
            tracep->chgBit(oldp+477,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xdU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x15U]))));
            tracep->chgBit(oldp+478,((1U & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))));
            tracep->chgBit(oldp+479,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x16U])));
            tracep->chgBit(oldp+480,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x16U] 
                                            >> 1U))));
            tracep->chgBit(oldp+481,((1U & (~ (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU)))))));
            tracep->chgBit(oldp+482,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xeU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x16U]))));
            tracep->chgBit(oldp+483,((1U & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))));
            tracep->chgBit(oldp+484,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x17U])));
            tracep->chgBit(oldp+485,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x17U] 
                                            >> 1U))));
            tracep->chgBit(oldp+486,((1U & (~ (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU)))))));
            tracep->chgBit(oldp+487,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xfU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x17U]))));
            tracep->chgBit(oldp+488,((1U & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))));
            tracep->chgBit(oldp+489,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x18U])));
            tracep->chgBit(oldp+490,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x18U] 
                                            >> 1U))));
            tracep->chgBit(oldp+491,((1U & (~ (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U)))))));
            tracep->chgBit(oldp+492,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x10U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x18U]))));
            tracep->chgBit(oldp+493,((1U & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))));
            tracep->chgBit(oldp+494,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x19U])));
            tracep->chgBit(oldp+495,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x19U] 
                                            >> 1U))));
            tracep->chgBit(oldp+496,((1U & (~ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U)))))));
            tracep->chgBit(oldp+497,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x11U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x19U]))));
            tracep->chgBit(oldp+498,((1U & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))));
            tracep->chgBit(oldp+499,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1aU])));
            tracep->chgBit(oldp+500,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x1aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+501,((1U & (~ (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U)))))));
            tracep->chgBit(oldp+502,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x12U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x1aU]))));
            tracep->chgBit(oldp+503,((1U & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))));
            tracep->chgBit(oldp+504,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1bU])));
            tracep->chgBit(oldp+505,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x1bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+506,((1U & (~ (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U)))))));
            tracep->chgBit(oldp+507,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x13U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x1bU]))));
            tracep->chgBit(oldp+508,((1U & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))));
            tracep->chgBit(oldp+509,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1cU])));
            tracep->chgBit(oldp+510,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x1cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+511,((1U & (~ (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U)))))));
            tracep->chgBit(oldp+512,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x14U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x1cU]))));
            tracep->chgBit(oldp+513,((1U & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))));
            tracep->chgBit(oldp+514,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1dU])));
            tracep->chgBit(oldp+515,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x1dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+516,((1U & (~ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U)))))));
            tracep->chgBit(oldp+517,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x15U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x1dU]))));
            tracep->chgBit(oldp+518,((1U & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))));
            tracep->chgBit(oldp+519,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1eU])));
            tracep->chgBit(oldp+520,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x1eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+521,((1U & (~ (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U)))))));
            tracep->chgBit(oldp+522,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x16U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x1eU]))));
            tracep->chgBit(oldp+523,((1U & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))));
            tracep->chgBit(oldp+524,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1fU])));
            tracep->chgBit(oldp+525,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x1fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+526,((1U & (~ (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U)))))));
            tracep->chgBit(oldp+527,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x17U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x1fU]))));
            tracep->chgBit(oldp+528,((1U & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))));
            tracep->chgBit(oldp+529,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x20U])));
            tracep->chgBit(oldp+530,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x20U] 
                                            >> 1U))));
            tracep->chgBit(oldp+531,((1U & (~ (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U)))))));
            tracep->chgBit(oldp+532,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x18U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x20U]))));
            tracep->chgBit(oldp+533,((1U & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))));
            tracep->chgBit(oldp+534,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x21U])));
            tracep->chgBit(oldp+535,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x21U] 
                                            >> 1U))));
            tracep->chgBit(oldp+536,((1U & (~ (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U)))))));
            tracep->chgBit(oldp+537,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x19U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x21U]))));
            tracep->chgBit(oldp+538,((1U & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))));
            tracep->chgBit(oldp+539,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x22U])));
            tracep->chgBit(oldp+540,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x22U] 
                                            >> 1U))));
            tracep->chgBit(oldp+541,((1U & (~ (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU)))))));
            tracep->chgBit(oldp+542,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1aU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x22U]))));
            tracep->chgBit(oldp+543,((1U & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))));
            tracep->chgBit(oldp+544,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x23U])));
            tracep->chgBit(oldp+545,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x23U] 
                                            >> 1U))));
            tracep->chgBit(oldp+546,((1U & (~ (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU)))))));
            tracep->chgBit(oldp+547,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1bU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x23U]))));
            tracep->chgBit(oldp+548,((1U & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))));
            tracep->chgBit(oldp+549,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x24U])));
            tracep->chgBit(oldp+550,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x24U] 
                                            >> 1U))));
            tracep->chgBit(oldp+551,((1U & (~ (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU)))))));
            tracep->chgBit(oldp+552,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1cU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x24U]))));
            tracep->chgBit(oldp+553,((1U & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))));
            tracep->chgBit(oldp+554,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x25U])));
            tracep->chgBit(oldp+555,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x25U] 
                                            >> 1U))));
            tracep->chgBit(oldp+556,((1U & (~ (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU)))))));
            tracep->chgBit(oldp+557,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1dU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x25U]))));
            tracep->chgBit(oldp+558,((1U & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))));
            tracep->chgBit(oldp+559,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x26U])));
            tracep->chgBit(oldp+560,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x26U] 
                                            >> 1U))));
            tracep->chgBit(oldp+561,((1U & (~ (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU)))))));
            tracep->chgBit(oldp+562,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1eU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x26U]))));
            tracep->chgBit(oldp+563,((1U & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+564,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x27U])));
            tracep->chgBit(oldp+565,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x27U] 
                                            >> 1U))));
            tracep->chgBit(oldp+566,((1U & (~ (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU)))))));
            tracep->chgBit(oldp+567,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1fU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x27U]))));
            tracep->chgBit(oldp+568,((1U & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))));
            tracep->chgBit(oldp+569,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x28U])));
            tracep->chgBit(oldp+570,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x28U] 
                                            >> 1U))));
            tracep->chgBit(oldp+571,((1U & (~ (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U)))))));
            tracep->chgBit(oldp+572,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x20U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x28U]))));
            tracep->chgBit(oldp+573,((1U & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))));
            tracep->chgBit(oldp+574,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x29U])));
            tracep->chgBit(oldp+575,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x29U] 
                                            >> 1U))));
            tracep->chgBit(oldp+576,((1U & (~ (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U)))))));
            tracep->chgBit(oldp+577,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x21U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x29U]))));
            tracep->chgBit(oldp+578,((1U & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))));
            tracep->chgBit(oldp+579,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2aU])));
            tracep->chgBit(oldp+580,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x2aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+581,((1U & (~ (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U)))))));
            tracep->chgBit(oldp+582,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x22U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x2aU]))));
            tracep->chgBit(oldp+583,((1U & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))));
            tracep->chgBit(oldp+584,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2bU])));
            tracep->chgBit(oldp+585,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x2bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+586,((1U & (~ (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U)))))));
            tracep->chgBit(oldp+587,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x23U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x2bU]))));
            tracep->chgBit(oldp+588,((1U & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))));
            tracep->chgBit(oldp+589,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2cU])));
            tracep->chgBit(oldp+590,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x2cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+591,((1U & (~ (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U)))))));
            tracep->chgBit(oldp+592,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x24U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x2cU]))));
            tracep->chgBit(oldp+593,((1U & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))));
            tracep->chgBit(oldp+594,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2dU])));
            tracep->chgBit(oldp+595,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x2dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+596,((1U & (~ (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U)))))));
            tracep->chgBit(oldp+597,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x25U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x2dU]))));
            tracep->chgBit(oldp+598,((1U & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))));
            tracep->chgBit(oldp+599,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2eU])));
            tracep->chgBit(oldp+600,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x2eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+601,((1U & (~ (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U)))))));
            tracep->chgBit(oldp+602,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x26U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x2eU]))));
            tracep->chgBit(oldp+603,((1U & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))));
            tracep->chgBit(oldp+604,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2fU])));
            tracep->chgBit(oldp+605,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x2fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+606,((1U & (~ (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U)))))));
            tracep->chgBit(oldp+607,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x27U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x2fU]))));
            tracep->chgBit(oldp+608,((1U & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))));
            tracep->chgBit(oldp+609,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x30U])));
            tracep->chgBit(oldp+610,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x30U] 
                                            >> 1U))));
            tracep->chgBit(oldp+611,((1U & (~ (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U)))))));
            tracep->chgBit(oldp+612,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x28U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x30U]))));
            tracep->chgBit(oldp+613,((1U & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))));
            tracep->chgBit(oldp+614,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x31U])));
            tracep->chgBit(oldp+615,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x31U] 
                                            >> 1U))));
            tracep->chgBit(oldp+616,((1U & (~ (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U)))))));
            tracep->chgBit(oldp+617,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x29U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x31U]))));
            tracep->chgBit(oldp+618,((1U & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))));
            tracep->chgBit(oldp+619,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x32U])));
            tracep->chgBit(oldp+620,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x32U] 
                                            >> 1U))));
            tracep->chgBit(oldp+621,((1U & (~ (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU)))))));
            tracep->chgBit(oldp+622,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2aU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x32U]))));
            tracep->chgBit(oldp+623,((1U & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))));
            tracep->chgBit(oldp+624,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x33U])));
            tracep->chgBit(oldp+625,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x33U] 
                                            >> 1U))));
            tracep->chgBit(oldp+626,((1U & (~ (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU)))))));
            tracep->chgBit(oldp+627,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2bU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x33U]))));
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))));
            tracep->chgBit(oldp+629,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x34U])));
            tracep->chgBit(oldp+630,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x34U] 
                                            >> 1U))));
            tracep->chgBit(oldp+631,((1U & (~ (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU)))))));
            tracep->chgBit(oldp+632,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2cU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x34U]))));
            tracep->chgBit(oldp+633,((1U & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))));
            tracep->chgBit(oldp+634,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x35U])));
            tracep->chgBit(oldp+635,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x35U] 
                                            >> 1U))));
            tracep->chgBit(oldp+636,((1U & (~ (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU)))))));
            tracep->chgBit(oldp+637,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2dU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x35U]))));
            tracep->chgBit(oldp+638,((1U & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2eU))))));
            tracep->chgBit(oldp+639,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x36U])));
            tracep->chgBit(oldp+640,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x36U] 
                                            >> 1U))));
            tracep->chgBit(oldp+641,((1U & (~ (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU)))))));
            tracep->chgBit(oldp+642,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2eU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x36U]))));
            tracep->chgBit(oldp+643,((1U & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2fU))))));
            tracep->chgBit(oldp+644,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x37U])));
            tracep->chgBit(oldp+645,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x37U] 
                                            >> 1U))));
            tracep->chgBit(oldp+646,((1U & (~ (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU)))))));
            tracep->chgBit(oldp+647,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2fU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x37U]))));
            tracep->chgBit(oldp+648,((1U & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x30U))))));
            tracep->chgBit(oldp+649,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x38U])));
            tracep->chgBit(oldp+650,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x38U] 
                                            >> 1U))));
            tracep->chgBit(oldp+651,((1U & (~ (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U)))))));
            tracep->chgBit(oldp+652,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x30U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x38U]))));
            tracep->chgBit(oldp+653,((1U & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x31U))))));
            tracep->chgBit(oldp+654,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x39U])));
            tracep->chgBit(oldp+655,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x39U] 
                                            >> 1U))));
            tracep->chgBit(oldp+656,((1U & (~ (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U)))))));
            tracep->chgBit(oldp+657,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x31U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x39U]))));
            tracep->chgBit(oldp+658,((1U & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x32U))))));
            tracep->chgBit(oldp+659,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU])));
            tracep->chgBit(oldp+660,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x3aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+661,((1U & (~ (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U)))))));
            tracep->chgBit(oldp+662,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x32U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x3aU]))));
            tracep->chgBit(oldp+663,((1U & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x33U))))));
            tracep->chgBit(oldp+664,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU])));
            tracep->chgBit(oldp+665,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x3bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+666,((1U & (~ (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U)))))));
            tracep->chgBit(oldp+667,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x33U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x3bU]))));
            tracep->chgBit(oldp+668,((1U & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x34U))))));
            tracep->chgBit(oldp+669,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU])));
            tracep->chgBit(oldp+670,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x3cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+671,((1U & (~ (IData)(
                                                      (0xfULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U)))))));
            tracep->chgBit(oldp+672,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x34U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x3cU]))));
            tracep->chgBit(oldp+673,((1U & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x35U))))));
            tracep->chgBit(oldp+674,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3dU])));
            tracep->chgBit(oldp+675,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x3dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+676,((1U & (~ (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U)))))));
            tracep->chgBit(oldp+677,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (7ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x35U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x3dU]))));
            tracep->chgBit(oldp+678,((1U & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x36U))))));
            tracep->chgBit(oldp+679,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3eU])));
            tracep->chgBit(oldp+680,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x3eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+681,((1U & (~ (IData)(
                                                      (3ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x36U)))))));
            tracep->chgBit(oldp+682,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (3ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x36U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (3ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x36U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x3eU]))));
            tracep->chgBit(oldp+683,((1U & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x37U))))));
            tracep->chgBit(oldp+684,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3fU])));
            tracep->chgBit(oldp+685,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                            [0x3fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+686,((1U & (~ (IData)(
                                                      (1ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x37U)))))));
            tracep->chgBit(oldp+687,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (1ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x37U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (1ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x37U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                         [0x3fU]))));
            tracep->chgCData(oldp+688,((7U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                      >> 9U)))),3);
            tracep->chgQData(oldp+689,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0xaU)),64);
            tracep->chgQData(oldp+691,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__10__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+693,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+694,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+695,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+696,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+697,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+698,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+699,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))));
            tracep->chgBit(oldp+700,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))));
            tracep->chgBit(oldp+701,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 0xaU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+702,((1U & (IData)(
                                                   (0x7ffffffffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))));
            tracep->chgBit(oldp+703,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [1U])));
            tracep->chgBit(oldp+704,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+705,((1U & (~ (IData)(
                                                      (0x7ffffffffffffe00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 9U)))))));
            tracep->chgBit(oldp+706,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffffe00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffffe00ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 9U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [1U]))));
            tracep->chgBit(oldp+707,((1U & (IData)(
                                                   (0x3fffffffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))));
            tracep->chgBit(oldp+708,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [2U])));
            tracep->chgBit(oldp+709,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+710,((1U & (~ (IData)(
                                                      (0x3fffffffffffff00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 8U)))))));
            tracep->chgBit(oldp+711,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffff00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffff00ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 8U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [2U]))));
            tracep->chgBit(oldp+712,((1U & (IData)(
                                                   (0x1fffffffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))));
            tracep->chgBit(oldp+713,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [3U])));
            tracep->chgBit(oldp+714,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+715,((1U & (~ (IData)(
                                                      (0x1fffffffffffff80ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 7U)))))));
            tracep->chgBit(oldp+716,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffff80ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffff80ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 7U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [3U]))));
            tracep->chgBit(oldp+717,((1U & (IData)(
                                                   (0xfffffffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))));
            tracep->chgBit(oldp+718,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [4U])));
            tracep->chgBit(oldp+719,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [4U] >> 1U))));
            tracep->chgBit(oldp+720,((1U & (~ (IData)(
                                                      (0xfffffffffffffc0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 6U)))))));
            tracep->chgBit(oldp+721,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffffffc0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffffffc0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 6U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [4U]))));
            tracep->chgBit(oldp+722,((1U & (IData)(
                                                   (0x7ffffffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))));
            tracep->chgBit(oldp+723,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [5U])));
            tracep->chgBit(oldp+724,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [5U] >> 1U))));
            tracep->chgBit(oldp+725,((1U & (~ (IData)(
                                                      (0x7ffffffffffffe0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 5U)))))));
            tracep->chgBit(oldp+726,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffffe0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffffe0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 5U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [5U]))));
            tracep->chgBit(oldp+727,((1U & (IData)(
                                                   (0x3fffffffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))));
            tracep->chgBit(oldp+728,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [6U])));
            tracep->chgBit(oldp+729,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [6U] >> 1U))));
            tracep->chgBit(oldp+730,((1U & (~ (IData)(
                                                      (0x3fffffffffffff0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 4U)))))));
            tracep->chgBit(oldp+731,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffff0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffff0ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 4U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [6U]))));
            tracep->chgBit(oldp+732,((1U & (IData)(
                                                   (0x1fffffffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))));
            tracep->chgBit(oldp+733,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [7U])));
            tracep->chgBit(oldp+734,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [7U] >> 1U))));
            tracep->chgBit(oldp+735,((1U & (~ (IData)(
                                                      (0x1fffffffffffff8ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 3U)))))));
            tracep->chgBit(oldp+736,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffff8ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffff8ULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 3U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [7U]))));
            tracep->chgBit(oldp+737,((1U & (IData)(
                                                   (0xfffffffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))));
            tracep->chgBit(oldp+738,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [8U])));
            tracep->chgBit(oldp+739,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [8U] >> 1U))));
            tracep->chgBit(oldp+740,((1U & (~ (IData)(
                                                      (0xfffffffffffffcULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 2U)))))));
            tracep->chgBit(oldp+741,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffffffcULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffffffcULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 2U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [8U]))));
            tracep->chgBit(oldp+742,((1U & (IData)(
                                                   (0x7ffffffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))));
            tracep->chgBit(oldp+743,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [9U])));
            tracep->chgBit(oldp+744,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [9U] >> 1U))));
            tracep->chgBit(oldp+745,((1U & (~ (IData)(
                                                      (0x7ffffffffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U)))))));
            tracep->chgBit(oldp+746,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffffeULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         << 1U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [9U]))));
            tracep->chgBit(oldp+747,((1U & (IData)(
                                                   (0x3fffffffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+748,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0xaU])));
            tracep->chgBit(oldp+749,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0xaU] 
                                            >> 1U))));
            tracep->chgBit(oldp+750,((1U & (~ (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+751,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffffULL 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0xaU]))));
            tracep->chgBit(oldp+752,((1U & (IData)(
                                                   (0x1fffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))));
            tracep->chgBit(oldp+753,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0xbU])));
            tracep->chgBit(oldp+754,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0xbU] 
                                            >> 1U))));
            tracep->chgBit(oldp+755,((1U & (~ (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U)))))));
            tracep->chgBit(oldp+756,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 1U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0xbU]))));
            tracep->chgBit(oldp+757,((1U & (IData)(
                                                   (0xfffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))));
            tracep->chgBit(oldp+758,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0xcU])));
            tracep->chgBit(oldp+759,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0xcU] 
                                            >> 1U))));
            tracep->chgBit(oldp+760,((1U & (~ (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U)))))));
            tracep->chgBit(oldp+761,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 2U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0xcU]))));
            tracep->chgBit(oldp+762,((1U & (IData)(
                                                   (0x7ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))));
            tracep->chgBit(oldp+763,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0xdU])));
            tracep->chgBit(oldp+764,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0xdU] 
                                            >> 1U))));
            tracep->chgBit(oldp+765,((1U & (~ (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U)))))));
            tracep->chgBit(oldp+766,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 3U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0xdU]))));
            tracep->chgBit(oldp+767,((1U & (IData)(
                                                   (0x3ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))));
            tracep->chgBit(oldp+768,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0xeU])));
            tracep->chgBit(oldp+769,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0xeU] 
                                            >> 1U))));
            tracep->chgBit(oldp+770,((1U & (~ (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U)))))));
            tracep->chgBit(oldp+771,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 4U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0xeU]))));
            tracep->chgBit(oldp+772,((1U & (IData)(
                                                   (0x1ffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))));
            tracep->chgBit(oldp+773,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0xfU])));
            tracep->chgBit(oldp+774,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0xfU] 
                                            >> 1U))));
            tracep->chgBit(oldp+775,((1U & (~ (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U)))))));
            tracep->chgBit(oldp+776,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 5U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0xfU]))));
            tracep->chgBit(oldp+777,((1U & (IData)(
                                                   (0xffffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))));
            tracep->chgBit(oldp+778,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x10U])));
            tracep->chgBit(oldp+779,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x10U] 
                                            >> 1U))));
            tracep->chgBit(oldp+780,((1U & (~ (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U)))))));
            tracep->chgBit(oldp+781,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 6U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x10U]))));
            tracep->chgBit(oldp+782,((1U & (IData)(
                                                   (0x7fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))));
            tracep->chgBit(oldp+783,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x11U])));
            tracep->chgBit(oldp+784,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x11U] 
                                            >> 1U))));
            tracep->chgBit(oldp+785,((1U & (~ (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U)))))));
            tracep->chgBit(oldp+786,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 7U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x11U]))));
            tracep->chgBit(oldp+787,((1U & (IData)(
                                                   (0x3fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))));
            tracep->chgBit(oldp+788,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x12U])));
            tracep->chgBit(oldp+789,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x12U] 
                                            >> 1U))));
            tracep->chgBit(oldp+790,((1U & (~ (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U)))))));
            tracep->chgBit(oldp+791,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 8U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x12U]))));
            tracep->chgBit(oldp+792,((1U & (IData)(
                                                   (0x1fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))));
            tracep->chgBit(oldp+793,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x13U])));
            tracep->chgBit(oldp+794,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x13U] 
                                            >> 1U))));
            tracep->chgBit(oldp+795,((1U & (~ (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U)))))));
            tracep->chgBit(oldp+796,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 9U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x13U]))));
            tracep->chgBit(oldp+797,((1U & (IData)(
                                                   (0xfffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))));
            tracep->chgBit(oldp+798,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x14U])));
            tracep->chgBit(oldp+799,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x14U] 
                                            >> 1U))));
            tracep->chgBit(oldp+800,((1U & (~ (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU)))))));
            tracep->chgBit(oldp+801,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xaU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x14U]))));
            tracep->chgBit(oldp+802,((1U & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))));
            tracep->chgBit(oldp+803,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x15U])));
            tracep->chgBit(oldp+804,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x15U] 
                                            >> 1U))));
            tracep->chgBit(oldp+805,((1U & (~ (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU)))))));
            tracep->chgBit(oldp+806,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xbU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x15U]))));
            tracep->chgBit(oldp+807,((1U & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))));
            tracep->chgBit(oldp+808,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x16U])));
            tracep->chgBit(oldp+809,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x16U] 
                                            >> 1U))));
            tracep->chgBit(oldp+810,((1U & (~ (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU)))))));
            tracep->chgBit(oldp+811,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xcU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x16U]))));
            tracep->chgBit(oldp+812,((1U & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))));
            tracep->chgBit(oldp+813,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x17U])));
            tracep->chgBit(oldp+814,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x17U] 
                                            >> 1U))));
            tracep->chgBit(oldp+815,((1U & (~ (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU)))))));
            tracep->chgBit(oldp+816,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xdU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x17U]))));
            tracep->chgBit(oldp+817,((1U & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))));
            tracep->chgBit(oldp+818,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x18U])));
            tracep->chgBit(oldp+819,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x18U] 
                                            >> 1U))));
            tracep->chgBit(oldp+820,((1U & (~ (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU)))))));
            tracep->chgBit(oldp+821,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xeU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x18U]))));
            tracep->chgBit(oldp+822,((1U & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))));
            tracep->chgBit(oldp+823,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x19U])));
            tracep->chgBit(oldp+824,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x19U] 
                                            >> 1U))));
            tracep->chgBit(oldp+825,((1U & (~ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU)))))));
            tracep->chgBit(oldp+826,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0xfU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x19U]))));
            tracep->chgBit(oldp+827,((1U & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))));
            tracep->chgBit(oldp+828,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x1aU])));
            tracep->chgBit(oldp+829,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x1aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+830,((1U & (~ (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U)))))));
            tracep->chgBit(oldp+831,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x10U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x1aU]))));
            tracep->chgBit(oldp+832,((1U & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))));
            tracep->chgBit(oldp+833,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x1bU])));
            tracep->chgBit(oldp+834,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x1bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+835,((1U & (~ (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U)))))));
            tracep->chgBit(oldp+836,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x11U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x1bU]))));
            tracep->chgBit(oldp+837,((1U & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))));
            tracep->chgBit(oldp+838,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x1cU])));
            tracep->chgBit(oldp+839,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x1cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+840,((1U & (~ (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U)))))));
            tracep->chgBit(oldp+841,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x12U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x1cU]))));
            tracep->chgBit(oldp+842,((1U & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))));
            tracep->chgBit(oldp+843,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x1dU])));
            tracep->chgBit(oldp+844,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x1dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+845,((1U & (~ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U)))))));
            tracep->chgBit(oldp+846,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x13U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x1dU]))));
            tracep->chgBit(oldp+847,((1U & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))));
            tracep->chgBit(oldp+848,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x1eU])));
            tracep->chgBit(oldp+849,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x1eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+850,((1U & (~ (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U)))))));
            tracep->chgBit(oldp+851,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x14U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x1eU]))));
            tracep->chgBit(oldp+852,((1U & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))));
            tracep->chgBit(oldp+853,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x1fU])));
            tracep->chgBit(oldp+854,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x1fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+855,((1U & (~ (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U)))))));
            tracep->chgBit(oldp+856,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x15U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x1fU]))));
            tracep->chgBit(oldp+857,((1U & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))));
            tracep->chgBit(oldp+858,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x20U])));
            tracep->chgBit(oldp+859,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x20U] 
                                            >> 1U))));
            tracep->chgBit(oldp+860,((1U & (~ (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U)))))));
            tracep->chgBit(oldp+861,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x16U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x20U]))));
            tracep->chgBit(oldp+862,((1U & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))));
            tracep->chgBit(oldp+863,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x21U])));
            tracep->chgBit(oldp+864,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x21U] 
                                            >> 1U))));
            tracep->chgBit(oldp+865,((1U & (~ (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U)))))));
            tracep->chgBit(oldp+866,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x17U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x21U]))));
            tracep->chgBit(oldp+867,((1U & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))));
            tracep->chgBit(oldp+868,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x22U])));
            tracep->chgBit(oldp+869,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x22U] 
                                            >> 1U))));
            tracep->chgBit(oldp+870,((1U & (~ (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U)))))));
            tracep->chgBit(oldp+871,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x18U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x22U]))));
            tracep->chgBit(oldp+872,((1U & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))));
            tracep->chgBit(oldp+873,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x23U])));
            tracep->chgBit(oldp+874,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x23U] 
                                            >> 1U))));
            tracep->chgBit(oldp+875,((1U & (~ (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U)))))));
            tracep->chgBit(oldp+876,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x19U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x23U]))));
            tracep->chgBit(oldp+877,((1U & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))));
            tracep->chgBit(oldp+878,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x24U])));
            tracep->chgBit(oldp+879,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x24U] 
                                            >> 1U))));
            tracep->chgBit(oldp+880,((1U & (~ (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU)))))));
            tracep->chgBit(oldp+881,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1aU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x24U]))));
            tracep->chgBit(oldp+882,((1U & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))));
            tracep->chgBit(oldp+883,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x25U])));
            tracep->chgBit(oldp+884,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x25U] 
                                            >> 1U))));
            tracep->chgBit(oldp+885,((1U & (~ (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU)))))));
            tracep->chgBit(oldp+886,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1bU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x25U]))));
            tracep->chgBit(oldp+887,((1U & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))));
            tracep->chgBit(oldp+888,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x26U])));
            tracep->chgBit(oldp+889,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x26U] 
                                            >> 1U))));
            tracep->chgBit(oldp+890,((1U & (~ (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU)))))));
            tracep->chgBit(oldp+891,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1cU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x26U]))));
            tracep->chgBit(oldp+892,((1U & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))));
            tracep->chgBit(oldp+893,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x27U])));
            tracep->chgBit(oldp+894,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x27U] 
                                            >> 1U))));
            tracep->chgBit(oldp+895,((1U & (~ (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU)))))));
            tracep->chgBit(oldp+896,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1dU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x27U]))));
            tracep->chgBit(oldp+897,((1U & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))));
            tracep->chgBit(oldp+898,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x28U])));
            tracep->chgBit(oldp+899,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x28U] 
                                            >> 1U))));
            tracep->chgBit(oldp+900,((1U & (~ (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU)))))));
            tracep->chgBit(oldp+901,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1eU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x28U]))));
            tracep->chgBit(oldp+902,((1U & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+903,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x29U])));
            tracep->chgBit(oldp+904,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x29U] 
                                            >> 1U))));
            tracep->chgBit(oldp+905,((1U & (~ (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU)))))));
            tracep->chgBit(oldp+906,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x1fU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x29U]))));
            tracep->chgBit(oldp+907,((1U & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))));
            tracep->chgBit(oldp+908,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x2aU])));
            tracep->chgBit(oldp+909,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x2aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+910,((1U & (~ (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U)))))));
            tracep->chgBit(oldp+911,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x20U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x2aU]))));
            tracep->chgBit(oldp+912,((1U & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))));
            tracep->chgBit(oldp+913,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x2bU])));
            tracep->chgBit(oldp+914,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x2bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+915,((1U & (~ (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U)))))));
            tracep->chgBit(oldp+916,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x21U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x2bU]))));
            tracep->chgBit(oldp+917,((1U & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))));
            tracep->chgBit(oldp+918,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x2cU])));
            tracep->chgBit(oldp+919,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x2cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+920,((1U & (~ (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U)))))));
            tracep->chgBit(oldp+921,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x22U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x2cU]))));
            tracep->chgBit(oldp+922,((1U & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))));
            tracep->chgBit(oldp+923,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x2dU])));
            tracep->chgBit(oldp+924,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x2dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+925,((1U & (~ (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U)))))));
            tracep->chgBit(oldp+926,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x23U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x2dU]))));
            tracep->chgBit(oldp+927,((1U & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))));
            tracep->chgBit(oldp+928,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x2eU])));
            tracep->chgBit(oldp+929,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x2eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+930,((1U & (~ (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U)))))));
            tracep->chgBit(oldp+931,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x24U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x2eU]))));
            tracep->chgBit(oldp+932,((1U & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))));
            tracep->chgBit(oldp+933,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x2fU])));
            tracep->chgBit(oldp+934,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x2fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+935,((1U & (~ (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U)))))));
            tracep->chgBit(oldp+936,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x25U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x2fU]))));
            tracep->chgBit(oldp+937,((1U & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))));
            tracep->chgBit(oldp+938,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x30U])));
            tracep->chgBit(oldp+939,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x30U] 
                                            >> 1U))));
            tracep->chgBit(oldp+940,((1U & (~ (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U)))))));
            tracep->chgBit(oldp+941,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x26U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x30U]))));
            tracep->chgBit(oldp+942,((1U & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))));
            tracep->chgBit(oldp+943,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x31U])));
            tracep->chgBit(oldp+944,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x31U] 
                                            >> 1U))));
            tracep->chgBit(oldp+945,((1U & (~ (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U)))))));
            tracep->chgBit(oldp+946,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x27U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x31U]))));
            tracep->chgBit(oldp+947,((1U & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))));
            tracep->chgBit(oldp+948,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x32U])));
            tracep->chgBit(oldp+949,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x32U] 
                                            >> 1U))));
            tracep->chgBit(oldp+950,((1U & (~ (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U)))))));
            tracep->chgBit(oldp+951,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x28U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x32U]))));
            tracep->chgBit(oldp+952,((1U & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))));
            tracep->chgBit(oldp+953,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x33U])));
            tracep->chgBit(oldp+954,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x33U] 
                                            >> 1U))));
            tracep->chgBit(oldp+955,((1U & (~ (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U)))))));
            tracep->chgBit(oldp+956,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x29U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x33U]))));
            tracep->chgBit(oldp+957,((1U & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))));
            tracep->chgBit(oldp+958,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x34U])));
            tracep->chgBit(oldp+959,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x34U] 
                                            >> 1U))));
            tracep->chgBit(oldp+960,((1U & (~ (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU)))))));
            tracep->chgBit(oldp+961,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xfffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2aU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x34U]))));
            tracep->chgBit(oldp+962,((1U & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))));
            tracep->chgBit(oldp+963,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x35U])));
            tracep->chgBit(oldp+964,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x35U] 
                                            >> 1U))));
            tracep->chgBit(oldp+965,((1U & (~ (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU)))))));
            tracep->chgBit(oldp+966,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2bU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x35U]))));
            tracep->chgBit(oldp+967,((1U & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))));
            tracep->chgBit(oldp+968,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x36U])));
            tracep->chgBit(oldp+969,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x36U] 
                                            >> 1U))));
            tracep->chgBit(oldp+970,((1U & (~ (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU)))))));
            tracep->chgBit(oldp+971,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2cU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x36U]))));
            tracep->chgBit(oldp+972,((1U & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))));
            tracep->chgBit(oldp+973,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x37U])));
            tracep->chgBit(oldp+974,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x37U] 
                                            >> 1U))));
            tracep->chgBit(oldp+975,((1U & (~ (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU)))))));
            tracep->chgBit(oldp+976,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1ffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2dU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x37U]))));
            tracep->chgBit(oldp+977,((1U & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2eU))))));
            tracep->chgBit(oldp+978,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x38U])));
            tracep->chgBit(oldp+979,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x38U] 
                                            >> 1U))));
            tracep->chgBit(oldp+980,((1U & (~ (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU)))))));
            tracep->chgBit(oldp+981,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0xffULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2eU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x38U]))));
            tracep->chgBit(oldp+982,((1U & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2fU))))));
            tracep->chgBit(oldp+983,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x39U])));
            tracep->chgBit(oldp+984,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x39U] 
                                            >> 1U))));
            tracep->chgBit(oldp+985,((1U & (~ (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU)))))));
            tracep->chgBit(oldp+986,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x7fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x2fU))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x39U]))));
            tracep->chgBit(oldp+987,((1U & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x30U))))));
            tracep->chgBit(oldp+988,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU])));
            tracep->chgBit(oldp+989,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x3aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+990,((1U & (~ (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U)))))));
            tracep->chgBit(oldp+991,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x3fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x30U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x3aU]))));
            tracep->chgBit(oldp+992,((1U & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x31U))))));
            tracep->chgBit(oldp+993,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU])));
            tracep->chgBit(oldp+994,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x3bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+995,((1U & (~ (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U)))))));
            tracep->chgBit(oldp+996,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (0x1fULL 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                         >> 0x31U))))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                         [0x3bU]))));
            tracep->chgBit(oldp+997,((1U & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x32U))))));
            tracep->chgBit(oldp+998,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU])));
            tracep->chgBit(oldp+999,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                            [0x3cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+1000,((1U & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U)))))));
            tracep->chgBit(oldp+1001,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                              [0x3cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU]))));
            tracep->chgBit(oldp+1002,((1U & (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x33U))))));
            tracep->chgBit(oldp+1003,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU])));
            tracep->chgBit(oldp+1004,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1005,((1U & (~ (IData)(
                                                       (7ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U)))))));
            tracep->chgBit(oldp+1006,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (7ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                              [0x3dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU]))));
            tracep->chgBit(oldp+1007,((1U & (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x34U))))));
            tracep->chgBit(oldp+1008,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU])));
            tracep->chgBit(oldp+1009,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1010,((1U & (~ (IData)(
                                                       (3ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U)))))));
            tracep->chgBit(oldp+1011,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (3ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (3ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                              [0x3eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU]))));
            tracep->chgBit(oldp+1012,((1U & (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x35U))))));
            tracep->chgBit(oldp+1013,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU])));
            tracep->chgBit(oldp+1014,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1015,((1U & (~ (IData)(
                                                       (1ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U)))))));
            tracep->chgBit(oldp+1016,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (1ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (1ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                              [0x3fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU]))));
            tracep->chgCData(oldp+1017,((7U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 0xbU)))),3);
            tracep->chgQData(oldp+1018,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xcU)),64);
            tracep->chgQData(oldp+1020,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__12__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+1022,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1023,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+1024,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+1025,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+1026,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1027,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1028,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU)))));
            tracep->chgBit(oldp+1029,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))));
            tracep->chgBit(oldp+1030,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 0xcU)))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1031,((1U & (IData)(
                                                    (0x7ffffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))));
            tracep->chgBit(oldp+1032,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [1U])));
            tracep->chgBit(oldp+1033,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1034,((1U & (~ (IData)(
                                                       (0x7ffffffffffff800ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xbU)))))));
            tracep->chgBit(oldp+1035,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffff800ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xbU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffff800ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [1U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [1U]))));
            tracep->chgBit(oldp+1036,((1U & (IData)(
                                                    (0x3ffffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))));
            tracep->chgBit(oldp+1037,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [2U])));
            tracep->chgBit(oldp+1038,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1039,((1U & (~ (IData)(
                                                       (0x3ffffffffffffc00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xaU)))))));
            tracep->chgBit(oldp+1040,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffc00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xaU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffc00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [2U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [2U]))));
            tracep->chgBit(oldp+1041,((1U & (IData)(
                                                    (0x1ffffffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))));
            tracep->chgBit(oldp+1042,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [3U])));
            tracep->chgBit(oldp+1043,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1044,((1U & (~ (IData)(
                                                       (0x1ffffffffffffe00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 9U)))))));
            tracep->chgBit(oldp+1045,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffe00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 9U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffe00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [3U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [3U]))));
            tracep->chgBit(oldp+1046,((1U & (IData)(
                                                    (0xfffffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))));
            tracep->chgBit(oldp+1047,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [4U])));
            tracep->chgBit(oldp+1048,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1049,((1U & (~ (IData)(
                                                       (0xfffffffffffff00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 8U)))))));
            tracep->chgBit(oldp+1050,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffff00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 8U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffff00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [4U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [4U]))));
            tracep->chgBit(oldp+1051,((1U & (IData)(
                                                    (0x7ffffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))));
            tracep->chgBit(oldp+1052,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [5U])));
            tracep->chgBit(oldp+1053,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1054,((1U & (~ (IData)(
                                                       (0x7ffffffffffff80ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 7U)))))));
            tracep->chgBit(oldp+1055,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffff80ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 7U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffff80ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [5U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [5U]))));
            tracep->chgBit(oldp+1056,((1U & (IData)(
                                                    (0x3ffffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))));
            tracep->chgBit(oldp+1057,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [6U])));
            tracep->chgBit(oldp+1058,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+1059,((1U & (~ (IData)(
                                                       (0x3ffffffffffffc0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 6U)))))));
            tracep->chgBit(oldp+1060,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffc0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 6U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffc0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [6U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [6U]))));
            tracep->chgBit(oldp+1061,((1U & (IData)(
                                                    (0x1ffffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))));
            tracep->chgBit(oldp+1062,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [7U])));
            tracep->chgBit(oldp+1063,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+1064,((1U & (~ (IData)(
                                                       (0x1ffffffffffffe0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 5U)))))));
            tracep->chgBit(oldp+1065,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffe0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 5U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffe0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [7U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [7U]))));
            tracep->chgBit(oldp+1066,((1U & (IData)(
                                                    (0xfffffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))));
            tracep->chgBit(oldp+1067,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [8U])));
            tracep->chgBit(oldp+1068,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+1069,((1U & (~ (IData)(
                                                       (0xfffffffffffff0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 4U)))))));
            tracep->chgBit(oldp+1070,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffff0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 4U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffff0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [8U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [8U]))));
            tracep->chgBit(oldp+1071,((1U & (IData)(
                                                    (0x7ffffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))));
            tracep->chgBit(oldp+1072,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [9U])));
            tracep->chgBit(oldp+1073,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+1074,((1U & (~ (IData)(
                                                       (0x7ffffffffffff8ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 3U)))))));
            tracep->chgBit(oldp+1075,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffff8ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffff8ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1076,((1U & (IData)(
                                                    (0x3ffffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1077,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1078,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1079,((1U & (~ (IData)(
                                                       (0x3ffffffffffffcULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 2U)))))));
            tracep->chgBit(oldp+1080,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffcULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffcULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+1081,((1U & (IData)(
                                                    (0x1ffffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1082,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+1083,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1084,((1U & (~ (IData)(
                                                       (0x1ffffffffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1085,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+1086,((1U & (IData)(
                                                    (0xfffffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1087,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+1088,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1089,((1U & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1090,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+1091,((1U & (IData)(
                                                    (0x7ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1092,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+1093,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1094,((1U & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1095,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+1096,((1U & (IData)(
                                                    (0x3ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1097,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+1098,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1099,((1U & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1100,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+1101,((1U & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1102,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+1103,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1104,((1U & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1105,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+1106,((1U & (IData)(
                                                    (0xffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1107,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+1108,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1109,((1U & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1110,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+1111,((1U & (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1112,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+1113,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1114,((1U & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1115,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+1116,((1U & (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1117,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+1118,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1119,((1U & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+1120,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+1121,((1U & (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+1122,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+1123,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1124,((1U & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+1125,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+1126,((1U & (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1127,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+1128,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1129,((1U & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1130,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+1131,((1U & (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+1132,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+1133,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1134,((1U & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+1135,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+1136,((1U & (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+1137,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+1138,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1139,((1U & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+1140,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+1141,((1U & (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1142,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+1143,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1144,((1U & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1145,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+1146,((1U & (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+1147,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+1148,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1149,((1U & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+1150,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+1151,((1U & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+1152,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+1153,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1154,((1U & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+1155,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+1156,((1U & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1157,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+1158,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1159,((1U & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1160,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+1161,((1U & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+1162,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+1163,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1164,((1U & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+1165,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+1166,((1U & (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+1167,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+1168,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1169,((1U & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+1170,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+1171,((1U & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1172,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+1173,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1174,((1U & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1175,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+1176,((1U & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+1177,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+1178,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1179,((1U & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+1180,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+1181,((1U & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+1182,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+1183,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1184,((1U & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+1185,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x1fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU]))));
            tracep->chgBit(oldp+1186,((1U & (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1187,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+1188,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1189,((1U & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1190,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x20U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x20U]))));
            tracep->chgBit(oldp+1191,((1U & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+1192,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+1193,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1194,((1U & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+1195,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x21U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x21U]))));
            tracep->chgBit(oldp+1196,((1U & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+1197,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+1198,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1199,((1U & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+1200,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x22U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x22U]))));
            tracep->chgBit(oldp+1201,((1U & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1202,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+1203,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1204,((1U & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1205,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x23U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x23U]))));
            tracep->chgBit(oldp+1206,((1U & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+1207,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+1208,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1209,((1U & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+1210,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x24U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x24U]))));
            tracep->chgBit(oldp+1211,((1U & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+1212,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+1213,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1214,((1U & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+1215,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x25U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x25U]))));
            tracep->chgBit(oldp+1216,((1U & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1217,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+1218,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1219,((1U & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1220,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x26U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x26U]))));
            tracep->chgBit(oldp+1221,((1U & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))));
            tracep->chgBit(oldp+1222,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+1223,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1224,((1U & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU)))))));
            tracep->chgBit(oldp+1225,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x27U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x27U]))));
            tracep->chgBit(oldp+1226,((1U & (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))));
            tracep->chgBit(oldp+1227,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+1228,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1229,((1U & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU)))))));
            tracep->chgBit(oldp+1230,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x28U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x28U]))));
            tracep->chgBit(oldp+1231,((1U & (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1232,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x29U])));
            tracep->chgBit(oldp+1233,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1234,((1U & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1235,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x29U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x29U]))));
            tracep->chgBit(oldp+1236,((1U & (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))));
            tracep->chgBit(oldp+1237,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU])));
            tracep->chgBit(oldp+1238,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1239,((1U & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+1240,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x2aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU]))));
            tracep->chgBit(oldp+1241,((1U & (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))));
            tracep->chgBit(oldp+1242,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU])));
            tracep->chgBit(oldp+1243,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1244,((1U & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU)))))));
            tracep->chgBit(oldp+1245,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x2bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU]))));
            tracep->chgBit(oldp+1246,((1U & (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1247,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU])));
            tracep->chgBit(oldp+1248,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1249,((1U & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+1250,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x2cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU]))));
            tracep->chgBit(oldp+1251,((1U & (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))));
            tracep->chgBit(oldp+1252,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU])));
            tracep->chgBit(oldp+1253,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1254,((1U & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U)))))));
            tracep->chgBit(oldp+1255,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x2dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU]))));
            tracep->chgBit(oldp+1256,((1U & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))));
            tracep->chgBit(oldp+1257,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU])));
            tracep->chgBit(oldp+1258,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1259,((1U & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U)))))));
            tracep->chgBit(oldp+1260,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x2eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU]))));
            tracep->chgBit(oldp+1261,((1U & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))));
            tracep->chgBit(oldp+1262,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU])));
            tracep->chgBit(oldp+1263,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1264,((1U & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U)))))));
            tracep->chgBit(oldp+1265,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x2fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU]))));
            tracep->chgBit(oldp+1266,((1U & (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))));
            tracep->chgBit(oldp+1267,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x30U])));
            tracep->chgBit(oldp+1268,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1269,((1U & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U)))))));
            tracep->chgBit(oldp+1270,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x30U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x30U]))));
            tracep->chgBit(oldp+1271,((1U & (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))));
            tracep->chgBit(oldp+1272,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x31U])));
            tracep->chgBit(oldp+1273,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1274,((1U & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U)))))));
            tracep->chgBit(oldp+1275,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x31U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x31U]))));
            tracep->chgBit(oldp+1276,((1U & (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))));
            tracep->chgBit(oldp+1277,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x32U])));
            tracep->chgBit(oldp+1278,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1279,((1U & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U)))))));
            tracep->chgBit(oldp+1280,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x32U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x32U]))));
            tracep->chgBit(oldp+1281,((1U & (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))));
            tracep->chgBit(oldp+1282,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x33U])));
            tracep->chgBit(oldp+1283,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1284,((1U & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U)))))));
            tracep->chgBit(oldp+1285,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x33U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x33U]))));
            tracep->chgBit(oldp+1286,((1U & (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))));
            tracep->chgBit(oldp+1287,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x34U])));
            tracep->chgBit(oldp+1288,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1289,((1U & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U)))))));
            tracep->chgBit(oldp+1290,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x34U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x34U]))));
            tracep->chgBit(oldp+1291,((1U & (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))));
            tracep->chgBit(oldp+1292,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x35U])));
            tracep->chgBit(oldp+1293,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1294,((1U & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U)))))));
            tracep->chgBit(oldp+1295,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x35U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x35U]))));
            tracep->chgBit(oldp+1296,((1U & (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))));
            tracep->chgBit(oldp+1297,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x36U])));
            tracep->chgBit(oldp+1298,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1299,((1U & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU)))))));
            tracep->chgBit(oldp+1300,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x36U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x36U]))));
            tracep->chgBit(oldp+1301,((1U & (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))));
            tracep->chgBit(oldp+1302,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x37U])));
            tracep->chgBit(oldp+1303,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1304,((1U & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU)))))));
            tracep->chgBit(oldp+1305,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x37U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x37U]))));
            tracep->chgBit(oldp+1306,((1U & (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))));
            tracep->chgBit(oldp+1307,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x38U])));
            tracep->chgBit(oldp+1308,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1309,((1U & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU)))))));
            tracep->chgBit(oldp+1310,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x38U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x38U]))));
            tracep->chgBit(oldp+1311,((1U & (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))));
            tracep->chgBit(oldp+1312,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x39U])));
            tracep->chgBit(oldp+1313,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1314,((1U & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU)))))));
            tracep->chgBit(oldp+1315,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x39U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x39U]))));
            tracep->chgBit(oldp+1316,((1U & (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))));
            tracep->chgBit(oldp+1317,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU])));
            tracep->chgBit(oldp+1318,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1319,((1U & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU)))))));
            tracep->chgBit(oldp+1320,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x3aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU]))));
            tracep->chgBit(oldp+1321,((1U & (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))));
            tracep->chgBit(oldp+1322,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU])));
            tracep->chgBit(oldp+1323,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1324,((1U & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU)))))));
            tracep->chgBit(oldp+1325,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x3bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU]))));
            tracep->chgBit(oldp+1326,((1U & (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x30U))))));
            tracep->chgBit(oldp+1327,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU])));
            tracep->chgBit(oldp+1328,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1329,((1U & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U)))))));
            tracep->chgBit(oldp+1330,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x3cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU]))));
            tracep->chgBit(oldp+1331,((1U & (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x31U))))));
            tracep->chgBit(oldp+1332,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU])));
            tracep->chgBit(oldp+1333,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1334,((1U & (~ (IData)(
                                                       (7ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U)))))));
            tracep->chgBit(oldp+1335,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (7ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x3dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU]))));
            tracep->chgBit(oldp+1336,((1U & (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x32U))))));
            tracep->chgBit(oldp+1337,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU])));
            tracep->chgBit(oldp+1338,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1339,((1U & (~ (IData)(
                                                       (3ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U)))))));
            tracep->chgBit(oldp+1340,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (3ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (3ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x3eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU]))));
            tracep->chgBit(oldp+1341,((1U & (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x33U))))));
            tracep->chgBit(oldp+1342,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU])));
            tracep->chgBit(oldp+1343,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1344,((1U & (~ (IData)(
                                                       (1ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U)))))));
            tracep->chgBit(oldp+1345,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (1ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (1ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                              [0x3fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU]))));
            tracep->chgCData(oldp+1346,((7U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 0xdU)))),3);
            tracep->chgQData(oldp+1347,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xeU)),64);
            tracep->chgQData(oldp+1349,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__14__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+1351,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1352,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+1353,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+1354,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+1355,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1356,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1357,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU)))));
            tracep->chgBit(oldp+1358,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))));
            tracep->chgBit(oldp+1359,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 0xeU)))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1360,((1U & (IData)(
                                                    (0x7fffffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))));
            tracep->chgBit(oldp+1361,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [1U])));
            tracep->chgBit(oldp+1362,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1363,((1U & (~ (IData)(
                                                       (0x7fffffffffffe000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xdU)))))));
            tracep->chgBit(oldp+1364,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffe000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xdU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffe000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [1U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [1U]))));
            tracep->chgBit(oldp+1365,((1U & (IData)(
                                                    (0x3ffffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))));
            tracep->chgBit(oldp+1366,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [2U])));
            tracep->chgBit(oldp+1367,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1368,((1U & (~ (IData)(
                                                       (0x3ffffffffffff000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xcU)))))));
            tracep->chgBit(oldp+1369,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffff000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xcU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffff000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [2U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [2U]))));
            tracep->chgBit(oldp+1370,((1U & (IData)(
                                                    (0x1ffffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))));
            tracep->chgBit(oldp+1371,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [3U])));
            tracep->chgBit(oldp+1372,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1373,((1U & (~ (IData)(
                                                       (0x1ffffffffffff800ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xbU)))))));
            tracep->chgBit(oldp+1374,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffff800ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xbU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffff800ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [3U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [3U]))));
            tracep->chgBit(oldp+1375,((1U & (IData)(
                                                    (0xffffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))));
            tracep->chgBit(oldp+1376,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [4U])));
            tracep->chgBit(oldp+1377,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1378,((1U & (~ (IData)(
                                                       (0xffffffffffffc00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xaU)))))));
            tracep->chgBit(oldp+1379,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffc00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xaU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffc00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [4U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [4U]))));
            tracep->chgBit(oldp+1380,((1U & (IData)(
                                                    (0x7fffffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))));
            tracep->chgBit(oldp+1381,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [5U])));
            tracep->chgBit(oldp+1382,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1383,((1U & (~ (IData)(
                                                       (0x7fffffffffffe00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 9U)))))));
            tracep->chgBit(oldp+1384,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffe00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 9U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffe00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [5U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [5U]))));
            tracep->chgBit(oldp+1385,((1U & (IData)(
                                                    (0x3ffffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))));
            tracep->chgBit(oldp+1386,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [6U])));
            tracep->chgBit(oldp+1387,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+1388,((1U & (~ (IData)(
                                                       (0x3ffffffffffff00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 8U)))))));
            tracep->chgBit(oldp+1389,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffff00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 8U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffff00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [6U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [6U]))));
            tracep->chgBit(oldp+1390,((1U & (IData)(
                                                    (0x1ffffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))));
            tracep->chgBit(oldp+1391,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [7U])));
            tracep->chgBit(oldp+1392,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+1393,((1U & (~ (IData)(
                                                       (0x1ffffffffffff80ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 7U)))))));
            tracep->chgBit(oldp+1394,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffff80ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 7U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffff80ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [7U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [7U]))));
            tracep->chgBit(oldp+1395,((1U & (IData)(
                                                    (0xffffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))));
            tracep->chgBit(oldp+1396,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [8U])));
            tracep->chgBit(oldp+1397,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+1398,((1U & (~ (IData)(
                                                       (0xffffffffffffc0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 6U)))))));
            tracep->chgBit(oldp+1399,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffc0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 6U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffc0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [8U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [8U]))));
            tracep->chgBit(oldp+1400,((1U & (IData)(
                                                    (0x7fffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))));
            tracep->chgBit(oldp+1401,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [9U])));
            tracep->chgBit(oldp+1402,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+1403,((1U & (~ (IData)(
                                                       (0x7fffffffffffe0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 5U)))))));
            tracep->chgBit(oldp+1404,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffe0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 5U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffe0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1405,((1U & (IData)(
                                                    (0x3ffffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))));
            tracep->chgBit(oldp+1406,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1407,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1408,((1U & (~ (IData)(
                                                       (0x3ffffffffffff0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 4U)))))));
            tracep->chgBit(oldp+1409,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffff0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 4U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffff0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+1410,((1U & (IData)(
                                                    (0x1ffffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))));
            tracep->chgBit(oldp+1411,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+1412,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1413,((1U & (~ (IData)(
                                                       (0x1ffffffffffff8ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 3U)))))));
            tracep->chgBit(oldp+1414,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffff8ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffff8ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+1415,((1U & (IData)(
                                                    (0xffffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1416,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+1417,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1418,((1U & (~ (IData)(
                                                       (0xffffffffffffcULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 2U)))))));
            tracep->chgBit(oldp+1419,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffcULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffcULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+1420,((1U & (IData)(
                                                    (0x7fffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1421,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+1422,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1423,((1U & (~ (IData)(
                                                       (0x7fffffffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1424,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+1425,((1U & (IData)(
                                                    (0x3ffffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1426,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+1427,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1428,((1U & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1429,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+1430,((1U & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1431,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+1432,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1433,((1U & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1434,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+1435,((1U & (IData)(
                                                    (0xffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1436,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+1437,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1438,((1U & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1439,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+1440,((1U & (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1441,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+1442,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1443,((1U & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1444,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+1445,((1U & (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1446,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+1447,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1448,((1U & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1449,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+1450,((1U & (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1451,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+1452,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1453,((1U & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1454,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+1455,((1U & (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1456,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+1457,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1458,((1U & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+1459,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+1460,((1U & (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+1461,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+1462,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1463,((1U & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+1464,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+1465,((1U & (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1466,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+1467,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1468,((1U & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1469,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+1470,((1U & (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+1471,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+1472,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1473,((1U & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+1474,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+1475,((1U & (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+1476,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+1477,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1478,((1U & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+1479,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+1480,((1U & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1481,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+1482,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1483,((1U & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1484,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+1485,((1U & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+1486,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+1487,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1488,((1U & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+1489,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+1490,((1U & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+1491,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+1492,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1493,((1U & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+1494,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+1495,((1U & (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1496,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+1497,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1498,((1U & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1499,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+1500,((1U & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+1501,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+1502,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1503,((1U & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+1504,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+1505,((1U & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+1506,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+1507,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1508,((1U & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+1509,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+1510,((1U & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1511,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+1512,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1513,((1U & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1514,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x1fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU]))));
            tracep->chgBit(oldp+1515,((1U & (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+1516,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+1517,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1518,((1U & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+1519,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x20U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x20U]))));
            tracep->chgBit(oldp+1520,((1U & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+1521,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+1522,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1523,((1U & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+1524,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x21U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x21U]))));
            tracep->chgBit(oldp+1525,((1U & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1526,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+1527,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1528,((1U & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1529,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x22U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x22U]))));
            tracep->chgBit(oldp+1530,((1U & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+1531,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+1532,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1533,((1U & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+1534,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x23U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x23U]))));
            tracep->chgBit(oldp+1535,((1U & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+1536,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+1537,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1538,((1U & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+1539,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x24U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x24U]))));
            tracep->chgBit(oldp+1540,((1U & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1541,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+1542,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1543,((1U & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1544,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x25U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x25U]))));
            tracep->chgBit(oldp+1545,((1U & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+1546,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+1547,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1548,((1U & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+1549,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x26U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x26U]))));
            tracep->chgBit(oldp+1550,((1U & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+1551,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+1552,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1553,((1U & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+1554,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x27U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x27U]))));
            tracep->chgBit(oldp+1555,((1U & (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1556,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+1557,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1558,((1U & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1559,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                              [0x28U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x28U]))));
        }
    }
}