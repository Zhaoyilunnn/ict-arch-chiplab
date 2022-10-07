// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top::traceFullSub2(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+3797,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+3798,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+3799,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+3800,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+3801,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+3802,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+3803,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+3804,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+3805,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+3806,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+3807,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+3808,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+3809,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+3810,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+3811,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+3812,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+3813,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+3814,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+3815,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+3816,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+3817,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+3818,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+3819,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+3820,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+3821,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+3822,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+3823,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+3824,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+3825,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+3826,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+3827,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+3828,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+3829,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+3830,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+3831,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+3832,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+3833,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+3834,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+3835,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+3836,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+3837,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+3838,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+3839,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+3840,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+3841,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+3842,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+3843,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+3844,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+3845,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+3846,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+3847,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+3848,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+3849,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+3850,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+3851,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+3852,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+3853,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+3854,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+3855,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+3856,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+3857,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+3858,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+3859,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+3860,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+3861,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+3862,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+3863,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+3864,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+3865,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+3866,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+3867,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+3868,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+3869,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+3870,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+3871,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+3872,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))));
        tracep->fullBit(oldp+3873,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+3874,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+3875,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU)))))));
        tracep->fullBit(oldp+3876,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+3877,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))));
        tracep->fullBit(oldp+3878,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+3879,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+3880,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU)))))));
        tracep->fullBit(oldp+3881,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+3882,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))));
        tracep->fullBit(oldp+3883,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+3884,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+3885,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU)))))));
        tracep->fullBit(oldp+3886,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+3887,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))));
        tracep->fullBit(oldp+3888,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+3889,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+3890,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU)))))));
        tracep->fullBit(oldp+3891,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+3892,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU))))));
        tracep->fullBit(oldp+3893,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+3894,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+3895,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU)))))));
        tracep->fullBit(oldp+3896,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+3897,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU))))));
        tracep->fullBit(oldp+3898,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+3899,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+3900,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU)))))));
        tracep->fullBit(oldp+3901,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+3902,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U))))));
        tracep->fullBit(oldp+3903,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+3904,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+3905,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x30U)))))));
        tracep->fullBit(oldp+3906,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x30U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x30U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+3907,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U))))));
        tracep->fullBit(oldp+3908,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+3909,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+3910,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x31U)))))));
        tracep->fullBit(oldp+3911,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x31U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x31U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+3912,((7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xfU)))),3);
        tracep->fullQData(oldp+3913,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x10U)),64);
        tracep->fullQData(oldp+3915,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__16__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+3917,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+3918,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+3919,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+3920,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+3921,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x11U)))));
        tracep->fullBit(oldp+3922,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x10U)))));
        tracep->fullBit(oldp+3923,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x10U)))));
        tracep->fullBit(oldp+3924,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+3925,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+3926,((1U & (IData)((0x7fffffffffff8000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+3927,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+3928,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+3929,((1U & (~ (IData)(
                                                    (0x7fffffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+3930,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffff8000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+3931,((1U & (IData)((0x3fffffffffffc000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+3932,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+3933,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+3934,((1U & (~ (IData)(
                                                    (0x3fffffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+3935,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffc000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+3936,((1U & (IData)((0x1fffffffffffe000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+3937,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+3938,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+3939,((1U & (~ (IData)(
                                                    (0x1fffffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+3940,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffe000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+3941,((1U & (IData)((0xffffffffffff000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+3942,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+3943,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+3944,((1U & (~ (IData)(
                                                    (0xffffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+3945,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffff000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+3946,((1U & (IData)((0x7fffffffffff800ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+3947,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+3948,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+3949,((1U & (~ (IData)(
                                                    (0x7fffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+3950,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffff800ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+3951,((1U & (IData)((0x3fffffffffffc00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+3952,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+3953,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+3954,((1U & (~ (IData)(
                                                    (0x3fffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+3955,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffc00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+3956,((1U & (IData)((0x1fffffffffffe00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+3957,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+3958,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+3959,((1U & (~ (IData)(
                                                    (0x1fffffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+3960,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+3961,((1U & (IData)((0xffffffffffff00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+3962,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+3963,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+3964,((1U & (~ (IData)(
                                                    (0xffffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+3965,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+3966,((1U & (IData)((0x7fffffffffff80ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+3967,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+3968,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+3969,((1U & (~ (IData)(
                                                    (0x7fffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+3970,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+3971,((1U & (IData)((0x3fffffffffffc0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+3972,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+3973,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+3974,((1U & (~ (IData)(
                                                    (0x3fffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+3975,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+3976,((1U & (IData)((0x1fffffffffffe0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+3977,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+3978,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+3979,((1U & (~ (IData)(
                                                    (0x1fffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+3980,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+3981,((1U & (IData)((0xffffffffffff0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+3982,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+3983,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+3984,((1U & (~ (IData)(
                                                    (0xffffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+3985,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+3986,((1U & (IData)((0x7fffffffffff8ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+3987,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+3988,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+3989,((1U & (~ (IData)(
                                                    (0x7fffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+3990,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+3991,((1U & (IData)((0x3fffffffffffcULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+3992,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+3993,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+3994,((1U & (~ (IData)(
                                                    (0x3fffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+3995,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+3996,((1U & (IData)((0x1fffffffffffeULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+3997,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+3998,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+3999,((1U & (~ (IData)(
                                                    (0x1fffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+4000,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+4001,((1U & (IData)((0xffffffffffffULL 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+4002,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+4003,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+4004,((1U & (~ (IData)(
                                                    (0xffffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+4005,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+4006,((1U & (IData)((0x7fffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+4007,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+4008,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+4009,((1U & (~ (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+4010,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+4011,((1U & (IData)((0x3fffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+4012,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+4013,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+4014,((1U & (~ (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+4015,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+4016,((1U & (IData)((0x1fffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+4017,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+4018,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+4019,((1U & (~ (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+4020,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+4021,((1U & (IData)((0xfffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+4022,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+4023,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+4024,((1U & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+4025,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+4026,((1U & (IData)((0x7ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+4027,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+4028,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+4029,((1U & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+4030,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+4031,((1U & (IData)((0x3ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+4032,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+4033,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+4034,((1U & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+4035,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+4036,((1U & (IData)((0x1ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+4037,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+4038,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+4039,((1U & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+4040,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+4041,((1U & (IData)((0xffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+4042,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+4043,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+4044,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+4045,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+4046,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+4047,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+4048,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+4049,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+4050,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+4051,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+4052,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+4053,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+4054,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+4055,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+4056,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+4057,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+4058,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+4059,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+4060,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+4061,((1U & (IData)((0xfffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+4062,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+4063,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+4064,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+4065,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+4066,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+4067,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+4068,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+4069,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+4070,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+4071,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+4072,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+4073,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+4074,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+4075,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+4076,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+4077,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+4078,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+4079,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+4080,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+4081,((1U & (IData)((0xffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+4082,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+4083,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+4084,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+4085,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+4086,((1U & (IData)((0x7fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+4087,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+4088,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+4089,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+4090,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+4091,((1U & (IData)((0x3fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+4092,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+4093,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+4094,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+4095,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+4096,((1U & (IData)((0x1fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+4097,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+4098,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+4099,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+4100,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+4101,((1U & (IData)((0xfffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+4102,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+4103,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+4104,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+4105,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+4106,((1U & (IData)((0x7ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+4107,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+4108,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+4109,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+4110,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+4111,((1U & (IData)((0x3ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+4112,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+4113,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+4114,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+4115,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+4116,((1U & (IData)((0x1ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+4117,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+4118,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+4119,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+4120,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+4121,((1U & (IData)((0xffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+4122,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+4123,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+4124,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+4125,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+4126,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+4127,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+4128,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+4129,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+4130,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+4131,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+4132,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+4133,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+4134,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+4135,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+4136,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+4137,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+4138,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+4139,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+4140,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+4141,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+4142,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+4143,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+4144,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+4145,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+4146,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+4147,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+4148,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+4149,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+4150,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+4151,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+4152,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+4153,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+4154,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+4155,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+4156,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+4157,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+4158,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+4159,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+4160,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+4161,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+4162,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+4163,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+4164,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+4165,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+4166,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+4167,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+4168,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+4169,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+4170,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+4171,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+4172,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+4173,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+4174,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+4175,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+4176,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+4177,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+4178,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+4179,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+4180,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+4181,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+4182,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+4183,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+4184,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+4185,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+4186,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+4187,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+4188,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+4189,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+4190,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+4191,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+4192,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+4193,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+4194,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+4195,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+4196,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+4197,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+4198,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+4199,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+4200,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+4201,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+4202,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+4203,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+4204,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+4205,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+4206,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+4207,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+4208,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+4209,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+4210,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+4211,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))));
        tracep->fullBit(oldp+4212,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+4213,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+4214,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU)))))));
        tracep->fullBit(oldp+4215,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+4216,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))));
        tracep->fullBit(oldp+4217,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+4218,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+4219,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU)))))));
        tracep->fullBit(oldp+4220,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+4221,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))));
        tracep->fullBit(oldp+4222,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+4223,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+4224,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU)))))));
        tracep->fullBit(oldp+4225,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+4226,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))));
        tracep->fullBit(oldp+4227,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+4228,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+4229,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU)))))));
        tracep->fullBit(oldp+4230,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+4231,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU))))));
        tracep->fullBit(oldp+4232,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+4233,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+4234,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU)))))));
        tracep->fullBit(oldp+4235,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+4236,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU))))));
        tracep->fullBit(oldp+4237,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+4238,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+4239,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU)))))));
        tracep->fullBit(oldp+4240,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+4241,((7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x11U)))),3);
        tracep->fullQData(oldp+4242,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x12U)),64);
        tracep->fullQData(oldp+4244,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__18__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+4246,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4247,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+4248,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+4249,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+4250,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x13U)))));
        tracep->fullBit(oldp+4251,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+4252,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))));
        tracep->fullBit(oldp+4253,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+4254,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4255,((1U & (IData)((0x7ffffffffffe0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+4256,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+4257,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+4258,((1U & (~ (IData)(
                                                    (0x7ffffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+4259,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffe0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+4260,((1U & (IData)((0x3fffffffffff0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+4261,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+4262,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+4263,((1U & (~ (IData)(
                                                    (0x3fffffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+4264,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffff0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+4265,((1U & (IData)((0x1fffffffffff8000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+4266,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+4267,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+4268,((1U & (~ (IData)(
                                                    (0x1fffffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+4269,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffff8000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+4270,((1U & (IData)((0xfffffffffffc000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+4271,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+4272,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+4273,((1U & (~ (IData)(
                                                    (0xfffffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+4274,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffc000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+4275,((1U & (IData)((0x7ffffffffffe000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+4276,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+4277,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+4278,((1U & (~ (IData)(
                                                    (0x7ffffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+4279,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffe000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+4280,((1U & (IData)((0x3fffffffffff000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+4281,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+4282,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+4283,((1U & (~ (IData)(
                                                    (0x3fffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+4284,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffff000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+4285,((1U & (IData)((0x1fffffffffff800ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+4286,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+4287,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+4288,((1U & (~ (IData)(
                                                    (0x1fffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+4289,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffff800ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+4290,((1U & (IData)((0xfffffffffffc00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+4291,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+4292,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+4293,((1U & (~ (IData)(
                                                    (0xfffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+4294,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffc00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+4295,((1U & (IData)((0x7ffffffffffe00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+4296,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+4297,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+4298,((1U & (~ (IData)(
                                                    (0x7ffffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+4299,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+4300,((1U & (IData)((0x3fffffffffff00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+4301,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+4302,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+4303,((1U & (~ (IData)(
                                                    (0x3fffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+4304,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+4305,((1U & (IData)((0x1fffffffffff80ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+4306,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+4307,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+4308,((1U & (~ (IData)(
                                                    (0x1fffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+4309,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+4310,((1U & (IData)((0xfffffffffffc0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+4311,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+4312,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+4313,((1U & (~ (IData)(
                                                    (0xfffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+4314,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+4315,((1U & (IData)((0x7ffffffffffe0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+4316,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+4317,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+4318,((1U & (~ (IData)(
                                                    (0x7ffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+4319,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+4320,((1U & (IData)((0x3fffffffffff0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+4321,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+4322,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+4323,((1U & (~ (IData)(
                                                    (0x3fffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+4324,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+4325,((1U & (IData)((0x1fffffffffff8ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+4326,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+4327,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+4328,((1U & (~ (IData)(
                                                    (0x1fffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+4329,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+4330,((1U & (IData)((0xfffffffffffcULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+4331,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+4332,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+4333,((1U & (~ (IData)(
                                                    (0xfffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+4334,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+4335,((1U & (IData)((0x7ffffffffffeULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+4336,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+4337,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+4338,((1U & (~ (IData)(
                                                    (0x7ffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+4339,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+4340,((1U & (IData)((0x3fffffffffffULL 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+4341,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+4342,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+4343,((1U & (~ (IData)(
                                                    (0x3fffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+4344,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+4345,((1U & (IData)((0x1fffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+4346,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+4347,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+4348,((1U & (~ (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+4349,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+4350,((1U & (IData)((0xfffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+4351,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+4352,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+4353,((1U & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+4354,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+4355,((1U & (IData)((0x7ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+4356,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+4357,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+4358,((1U & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+4359,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+4360,((1U & (IData)((0x3ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+4361,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+4362,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+4363,((1U & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+4364,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+4365,((1U & (IData)((0x1ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+4366,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+4367,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+4368,((1U & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+4369,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+4370,((1U & (IData)((0xffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+4371,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+4372,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+4373,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+4374,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+4375,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+4376,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+4377,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+4378,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+4379,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+4380,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+4381,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+4382,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+4383,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+4384,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+4385,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+4386,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+4387,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+4388,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+4389,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+4390,((1U & (IData)((0xfffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+4391,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+4392,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+4393,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+4394,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+4395,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+4396,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+4397,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+4398,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+4399,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+4400,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+4401,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+4402,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+4403,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+4404,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+4405,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+4406,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+4407,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+4408,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+4409,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+4410,((1U & (IData)((0xffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+4411,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+4412,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+4413,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+4414,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+4415,((1U & (IData)((0x7fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+4416,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+4417,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+4418,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+4419,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+4420,((1U & (IData)((0x3fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+4421,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+4422,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+4423,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+4424,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+4425,((1U & (IData)((0x1fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+4426,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+4427,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+4428,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+4429,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+4430,((1U & (IData)((0xfffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+4431,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+4432,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+4433,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+4434,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+4435,((1U & (IData)((0x7ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+4436,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+4437,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+4438,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+4439,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+4440,((1U & (IData)((0x3ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+4441,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+4442,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+4443,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+4444,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+4445,((1U & (IData)((0x1ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+4446,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+4447,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+4448,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+4449,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+4450,((1U & (IData)((0xffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+4451,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+4452,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+4453,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+4454,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+4455,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+4456,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+4457,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+4458,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+4459,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+4460,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+4461,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+4462,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+4463,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+4464,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+4465,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+4466,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+4467,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+4468,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+4469,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+4470,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+4471,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+4472,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+4473,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+4474,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+4475,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+4476,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+4477,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+4478,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+4479,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+4480,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+4481,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+4482,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+4483,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+4484,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+4485,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+4486,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+4487,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+4488,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+4489,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+4490,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+4491,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+4492,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+4493,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+4494,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+4495,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+4496,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+4497,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+4498,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+4499,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+4500,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+4501,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+4502,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+4503,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+4504,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+4505,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+4506,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+4507,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+4508,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+4509,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+4510,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+4511,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+4512,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+4513,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+4514,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+4515,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+4516,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+4517,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+4518,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+4519,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+4520,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+4521,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+4522,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+4523,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+4524,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+4525,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+4526,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+4527,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+4528,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+4529,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+4530,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+4531,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+4532,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+4533,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+4534,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+4535,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+4536,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+4537,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+4538,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+4539,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+4540,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+4541,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+4542,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+4543,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+4544,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+4545,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+4546,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+4547,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+4548,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+4549,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+4550,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))));
        tracep->fullBit(oldp+4551,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+4552,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+4553,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU)))))));
        tracep->fullBit(oldp+4554,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+4555,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))));
        tracep->fullBit(oldp+4556,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+4557,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+4558,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU)))))));
        tracep->fullBit(oldp+4559,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+4560,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))));
        tracep->fullBit(oldp+4561,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+4562,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+4563,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU)))))));
        tracep->fullBit(oldp+4564,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+4565,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))));
        tracep->fullBit(oldp+4566,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+4567,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+4568,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU)))))));
        tracep->fullBit(oldp+4569,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+4570,((7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x13U)))),3);
        tracep->fullQData(oldp+4571,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x14U)),64);
        tracep->fullQData(oldp+4573,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__20__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+4575,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4576,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+4577,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+4578,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+4579,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x15U)))));
        tracep->fullBit(oldp+4580,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x14U)))));
        tracep->fullBit(oldp+4581,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x14U)))));
        tracep->fullBit(oldp+4582,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+4583,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x14U)))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4584,((1U & (IData)((0x7ffffffffff80000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+4585,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+4586,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+4587,((1U & (~ (IData)(
                                                    (0x7ffffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+4588,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff80000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+4589,((1U & (IData)((0x3ffffffffffc0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+4590,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+4591,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+4592,((1U & (~ (IData)(
                                                    (0x3ffffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+4593,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffc0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+4594,((1U & (IData)((0x1ffffffffffe0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+4595,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+4596,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+4597,((1U & (~ (IData)(
                                                    (0x1ffffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+4598,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffe0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+4599,((1U & (IData)((0xfffffffffff0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+4600,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+4601,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+4602,((1U & (~ (IData)(
                                                    (0xfffffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+4603,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffff0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+4604,((1U & (IData)((0x7ffffffffff8000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+4605,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+4606,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+4607,((1U & (~ (IData)(
                                                    (0x7ffffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+4608,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff8000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+4609,((1U & (IData)((0x3ffffffffffc000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+4610,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+4611,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+4612,((1U & (~ (IData)(
                                                    (0x3ffffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+4613,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffc000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+4614,((1U & (IData)((0x1ffffffffffe000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+4615,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+4616,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+4617,((1U & (~ (IData)(
                                                    (0x1ffffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+4618,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffe000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+4619,((1U & (IData)((0xfffffffffff000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+4620,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+4621,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+4622,((1U & (~ (IData)(
                                                    (0xfffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+4623,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffff000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+4624,((1U & (IData)((0x7ffffffffff800ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+4625,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+4626,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+4627,((1U & (~ (IData)(
                                                    (0x7ffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+4628,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff800ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+4629,((1U & (IData)((0x3ffffffffffc00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+4630,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+4631,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+4632,((1U & (~ (IData)(
                                                    (0x3ffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+4633,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffc00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+4634,((1U & (IData)((0x1ffffffffffe00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+4635,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+4636,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+4637,((1U & (~ (IData)(
                                                    (0x1ffffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+4638,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+4639,((1U & (IData)((0xfffffffffff00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+4640,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+4641,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+4642,((1U & (~ (IData)(
                                                    (0xfffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+4643,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+4644,((1U & (IData)((0x7ffffffffff80ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+4645,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+4646,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+4647,((1U & (~ (IData)(
                                                    (0x7ffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+4648,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+4649,((1U & (IData)((0x3ffffffffffc0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+4650,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+4651,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+4652,((1U & (~ (IData)(
                                                    (0x3ffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+4653,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+4654,((1U & (IData)((0x1ffffffffffe0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+4655,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+4656,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+4657,((1U & (~ (IData)(
                                                    (0x1ffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+4658,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+4659,((1U & (IData)((0xfffffffffff0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+4660,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+4661,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+4662,((1U & (~ (IData)(
                                                    (0xfffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+4663,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+4664,((1U & (IData)((0x7ffffffffff8ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+4665,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+4666,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+4667,((1U & (~ (IData)(
                                                    (0x7ffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+4668,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+4669,((1U & (IData)((0x3ffffffffffcULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+4670,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+4671,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+4672,((1U & (~ (IData)(
                                                    (0x3ffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+4673,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+4674,((1U & (IData)((0x1ffffffffffeULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+4675,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+4676,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+4677,((1U & (~ (IData)(
                                                    (0x1ffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+4678,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+4679,((1U & (IData)((0xfffffffffffULL 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+4680,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+4681,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+4682,((1U & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+4683,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+4684,((1U & (IData)((0x7ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+4685,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+4686,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+4687,((1U & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+4688,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+4689,((1U & (IData)((0x3ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+4690,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+4691,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+4692,((1U & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+4693,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+4694,((1U & (IData)((0x1ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+4695,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+4696,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+4697,((1U & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+4698,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+4699,((1U & (IData)((0xffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+4700,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+4701,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+4702,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+4703,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+4704,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+4705,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+4706,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+4707,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+4708,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+4709,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+4710,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+4711,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+4712,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+4713,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+4714,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+4715,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+4716,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+4717,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+4718,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+4719,((1U & (IData)((0xfffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+4720,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+4721,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+4722,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+4723,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+4724,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+4725,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+4726,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+4727,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+4728,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+4729,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+4730,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+4731,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+4732,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+4733,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+4734,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+4735,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+4736,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+4737,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+4738,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+4739,((1U & (IData)((0xffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+4740,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+4741,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+4742,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+4743,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+4744,((1U & (IData)((0x7fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+4745,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+4746,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+4747,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+4748,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+4749,((1U & (IData)((0x3fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+4750,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+4751,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+4752,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+4753,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+4754,((1U & (IData)((0x1fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+4755,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+4756,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+4757,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+4758,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+4759,((1U & (IData)((0xfffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+4760,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+4761,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+4762,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+4763,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+4764,((1U & (IData)((0x7ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+4765,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+4766,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+4767,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+4768,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+4769,((1U & (IData)((0x3ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+4770,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+4771,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+4772,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+4773,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+4774,((1U & (IData)((0x1ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+4775,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+4776,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+4777,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+4778,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+4779,((1U & (IData)((0xffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+4780,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+4781,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+4782,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+4783,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+4784,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+4785,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+4786,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+4787,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+4788,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+4789,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+4790,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+4791,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+4792,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+4793,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+4794,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+4795,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+4796,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+4797,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+4798,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+4799,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+4800,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+4801,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+4802,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+4803,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+4804,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+4805,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+4806,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+4807,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+4808,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+4809,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+4810,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+4811,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+4812,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+4813,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+4814,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+4815,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+4816,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+4817,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+4818,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+4819,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+4820,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+4821,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+4822,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+4823,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+4824,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+4825,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+4826,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+4827,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+4828,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+4829,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+4830,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+4831,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+4832,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+4833,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+4834,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+4835,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+4836,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+4837,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+4838,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+4839,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+4840,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+4841,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+4842,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+4843,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+4844,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+4845,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+4846,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+4847,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+4848,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+4849,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+4850,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+4851,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+4852,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+4853,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+4854,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+4855,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+4856,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+4857,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+4858,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+4859,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+4860,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+4861,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+4862,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+4863,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+4864,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+4865,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+4866,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+4867,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+4868,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+4869,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+4870,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+4871,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+4872,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+4873,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+4874,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+4875,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+4876,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+4877,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+4878,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+4879,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+4880,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+4881,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+4882,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+4883,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+4884,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+4885,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+4886,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+4887,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+4888,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+4889,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))));
        tracep->fullBit(oldp+4890,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+4891,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+4892,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU)))))));
        tracep->fullBit(oldp+4893,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+4894,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))));
        tracep->fullBit(oldp+4895,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+4896,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+4897,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU)))))));
        tracep->fullBit(oldp+4898,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+4899,((7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x15U)))),3);
        tracep->fullQData(oldp+4900,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x16U)),64);
        tracep->fullQData(oldp+4902,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__22__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+4904,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4905,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+4906,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+4907,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+4908,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x17U)))));
        tracep->fullBit(oldp+4909,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x16U)))));
        tracep->fullBit(oldp+4910,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x16U)))));
        tracep->fullBit(oldp+4911,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+4912,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x16U)))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4913,((1U & (IData)((0x7fffffffffe00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+4914,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+4915,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+4916,((1U & (~ (IData)(
                                                    (0x7fffffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+4917,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+4918,((1U & (IData)((0x3ffffffffff00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+4919,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+4920,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+4921,((1U & (~ (IData)(
                                                    (0x3ffffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+4922,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+4923,((1U & (IData)((0x1ffffffffff80000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+4924,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+4925,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+4926,((1U & (~ (IData)(
                                                    (0x1ffffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+4927,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff80000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+4928,((1U & (IData)((0xffffffffffc0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+4929,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+4930,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+4931,((1U & (~ (IData)(
                                                    (0xffffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+4932,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffc0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+4933,((1U & (IData)((0x7fffffffffe0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+4934,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+4935,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+4936,((1U & (~ (IData)(
                                                    (0x7fffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+4937,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+4938,((1U & (IData)((0x3ffffffffff0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+4939,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+4940,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+4941,((1U & (~ (IData)(
                                                    (0x3ffffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+4942,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+4943,((1U & (IData)((0x1ffffffffff8000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+4944,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+4945,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+4946,((1U & (~ (IData)(
                                                    (0x1ffffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+4947,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff8000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+4948,((1U & (IData)((0xffffffffffc000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+4949,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+4950,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+4951,((1U & (~ (IData)(
                                                    (0xffffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+4952,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffc000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+4953,((1U & (IData)((0x7fffffffffe000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+4954,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+4955,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+4956,((1U & (~ (IData)(
                                                    (0x7fffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+4957,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+4958,((1U & (IData)((0x3ffffffffff000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+4959,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+4960,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+4961,((1U & (~ (IData)(
                                                    (0x3ffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+4962,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+4963,((1U & (IData)((0x1ffffffffff800ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+4964,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+4965,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+4966,((1U & (~ (IData)(
                                                    (0x1ffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+4967,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff800ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+4968,((1U & (IData)((0xffffffffffc00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+4969,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+4970,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+4971,((1U & (~ (IData)(
                                                    (0xffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+4972,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffc00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+4973,((1U & (IData)((0x7fffffffffe00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+4974,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+4975,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+4976,((1U & (~ (IData)(
                                                    (0x7fffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+4977,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+4978,((1U & (IData)((0x3ffffffffff00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+4979,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+4980,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+4981,((1U & (~ (IData)(
                                                    (0x3ffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+4982,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+4983,((1U & (IData)((0x1ffffffffff80ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+4984,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+4985,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+4986,((1U & (~ (IData)(
                                                    (0x1ffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+4987,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+4988,((1U & (IData)((0xffffffffffc0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+4989,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+4990,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+4991,((1U & (~ (IData)(
                                                    (0xffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+4992,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+4993,((1U & (IData)((0x7fffffffffe0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+4994,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+4995,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+4996,((1U & (~ (IData)(
                                                    (0x7fffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+4997,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+4998,((1U & (IData)((0x3ffffffffff0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+4999,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+5000,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+5001,((1U & (~ (IData)(
                                                    (0x3ffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+5002,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+5003,((1U & (IData)((0x1ffffffffff8ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+5004,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+5005,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+5006,((1U & (~ (IData)(
                                                    (0x1ffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+5007,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+5008,((1U & (IData)((0xffffffffffcULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+5009,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+5010,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+5011,((1U & (~ (IData)(
                                                    (0xffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+5012,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+5013,((1U & (IData)((0x7fffffffffeULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+5014,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+5015,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+5016,((1U & (~ (IData)(
                                                    (0x7fffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+5017,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+5018,((1U & (IData)((0x3ffffffffffULL 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+5019,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+5020,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+5021,((1U & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+5022,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+5023,((1U & (IData)((0x1ffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+5024,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+5025,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+5026,((1U & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+5027,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+5028,((1U & (IData)((0xffffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+5029,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+5030,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+5031,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+5032,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+5033,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+5034,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+5035,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+5036,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+5037,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+5038,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+5039,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+5040,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+5041,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+5042,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+5043,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+5044,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+5045,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+5046,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+5047,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+5048,((1U & (IData)((0xfffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+5049,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+5050,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+5051,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+5052,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+5053,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+5054,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+5055,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+5056,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+5057,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+5058,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+5059,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+5060,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+5061,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+5062,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+5063,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+5064,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+5065,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+5066,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+5067,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+5068,((1U & (IData)((0xffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+5069,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+5070,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+5071,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+5072,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+5073,((1U & (IData)((0x7fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+5074,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+5075,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+5076,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+5077,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+5078,((1U & (IData)((0x3fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+5079,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+5080,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+5081,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+5082,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+5083,((1U & (IData)((0x1fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+5084,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+5085,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+5086,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+5087,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+5088,((1U & (IData)((0xfffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+5089,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+5090,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+5091,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+5092,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+5093,((1U & (IData)((0x7ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+5094,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+5095,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+5096,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+5097,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+5098,((1U & (IData)((0x3ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+5099,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+5100,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+5101,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+5102,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+5103,((1U & (IData)((0x1ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+5104,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+5105,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+5106,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+5107,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+5108,((1U & (IData)((0xffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+5109,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+5110,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+5111,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+5112,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+5113,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+5114,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+5115,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+5116,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+5117,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+5118,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+5119,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+5120,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+5121,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+5122,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+5123,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+5124,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+5125,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+5126,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+5127,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+5128,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+5129,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+5130,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+5131,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+5132,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+5133,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+5134,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+5135,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+5136,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+5137,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+5138,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+5139,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+5140,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+5141,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+5142,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+5143,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+5144,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+5145,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+5146,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+5147,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+5148,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+5149,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+5150,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+5151,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+5152,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+5153,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+5154,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+5155,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+5156,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+5157,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+5158,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+5159,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+5160,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+5161,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+5162,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+5163,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+5164,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+5165,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+5166,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+5167,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+5168,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+5169,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+5170,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+5171,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+5172,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+5173,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+5174,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+5175,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+5176,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+5177,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+5178,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+5179,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+5180,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+5181,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+5182,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+5183,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+5184,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+5185,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+5186,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+5187,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+5188,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+5189,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+5190,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+5191,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+5192,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+5193,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+5194,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+5195,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+5196,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+5197,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+5198,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+5199,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+5200,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+5201,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+5202,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+5203,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+5204,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+5205,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+5206,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+5207,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+5208,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+5209,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+5210,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+5211,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+5212,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+5213,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+5214,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+5215,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+5216,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+5217,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+5218,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+5219,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+5220,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+5221,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+5222,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+5223,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+5224,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+5225,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+5226,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+5227,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+5228,((7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x17U)))),3);
        tracep->fullQData(oldp+5229,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x18U)),64);
        tracep->fullQData(oldp+5231,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__24__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+5233,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5234,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+5235,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+5236,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+5237,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x19U)))));
        tracep->fullBit(oldp+5238,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x18U)))));
        tracep->fullBit(oldp+5239,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x18U)))));
        tracep->fullBit(oldp+5240,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))));
        tracep->fullBit(oldp+5241,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x18U)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x18U)))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5242,((1U & (IData)((0x7fffffffff800000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))));
        tracep->fullBit(oldp+5243,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+5244,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+5245,((1U & (~ (IData)(
                                                    (0x7fffffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U)))))));
        tracep->fullBit(oldp+5246,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff800000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+5247,((1U & (IData)((0x3fffffffffc00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+5248,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+5249,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+5250,((1U & (~ (IData)(
                                                    (0x3fffffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U)))))));
        tracep->fullBit(oldp+5251,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+5252,((1U & (IData)((0x1fffffffffe00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+5253,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+5254,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+5255,((1U & (~ (IData)(
                                                    (0x1fffffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+5256,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+5257,((1U & (IData)((0xffffffffff00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+5258,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+5259,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+5260,((1U & (~ (IData)(
                                                    (0xffffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+5261,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+5262,((1U & (IData)((0x7fffffffff80000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+5263,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+5264,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+5265,((1U & (~ (IData)(
                                                    (0x7fffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+5266,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff80000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+5267,((1U & (IData)((0x3fffffffffc0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+5268,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+5269,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+5270,((1U & (~ (IData)(
                                                    (0x3fffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+5271,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+5272,((1U & (IData)((0x1fffffffffe0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+5273,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+5274,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+5275,((1U & (~ (IData)(
                                                    (0x1fffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+5276,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+5277,((1U & (IData)((0xffffffffff0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+5278,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+5279,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+5280,((1U & (~ (IData)(
                                                    (0xffffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+5281,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+5282,((1U & (IData)((0x7fffffffff8000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+5283,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+5284,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+5285,((1U & (~ (IData)(
                                                    (0x7fffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+5286,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff8000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+5287,((1U & (IData)((0x3fffffffffc000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+5288,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+5289,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+5290,((1U & (~ (IData)(
                                                    (0x3fffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+5291,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+5292,((1U & (IData)((0x1fffffffffe000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+5293,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+5294,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+5295,((1U & (~ (IData)(
                                                    (0x1fffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+5296,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+5297,((1U & (IData)((0xffffffffff000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+5298,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+5299,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+5300,((1U & (~ (IData)(
                                                    (0xffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+5301,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+5302,((1U & (IData)((0x7fffffffff800ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+5303,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+5304,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+5305,((1U & (~ (IData)(
                                                    (0x7fffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+5306,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff800ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+5307,((1U & (IData)((0x3fffffffffc00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+5308,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+5309,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+5310,((1U & (~ (IData)(
                                                    (0x3fffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+5311,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+5312,((1U & (IData)((0x1fffffffffe00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+5313,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+5314,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+5315,((1U & (~ (IData)(
                                                    (0x1fffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+5316,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+5317,((1U & (IData)((0xffffffffff00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+5318,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+5319,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+5320,((1U & (~ (IData)(
                                                    (0xffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+5321,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+5322,((1U & (IData)((0x7fffffffff80ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+5323,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+5324,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+5325,((1U & (~ (IData)(
                                                    (0x7fffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+5326,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+5327,((1U & (IData)((0x3fffffffffc0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+5328,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+5329,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+5330,((1U & (~ (IData)(
                                                    (0x3fffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+5331,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+5332,((1U & (IData)((0x1fffffffffe0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+5333,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+5334,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+5335,((1U & (~ (IData)(
                                                    (0x1fffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+5336,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+5337,((1U & (IData)((0xffffffffff0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+5338,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+5339,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+5340,((1U & (~ (IData)(
                                                    (0xffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+5341,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+5342,((1U & (IData)((0x7fffffffff8ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+5343,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+5344,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+5345,((1U & (~ (IData)(
                                                    (0x7fffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+5346,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+5347,((1U & (IData)((0x3fffffffffcULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+5348,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+5349,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+5350,((1U & (~ (IData)(
                                                    (0x3fffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+5351,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+5352,((1U & (IData)((0x1fffffffffeULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+5353,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+5354,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+5355,((1U & (~ (IData)(
                                                    (0x1fffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+5356,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
    }
}
