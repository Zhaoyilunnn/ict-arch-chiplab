// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top::traceFullSub3(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+5357,((1U & (IData)((0xffffffffffULL 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+5358,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+5359,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+5360,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+5361,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+5362,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+5363,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+5364,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+5365,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+5366,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+5367,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+5368,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+5369,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+5370,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+5371,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+5372,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+5373,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+5374,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+5375,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+5376,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+5377,((1U & (IData)((0xfffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+5378,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+5379,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+5380,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+5381,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+5382,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+5383,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+5384,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+5385,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+5386,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+5387,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+5388,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+5389,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+5390,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+5391,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+5392,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+5393,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+5394,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+5395,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+5396,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+5397,((1U & (IData)((0xffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+5398,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+5399,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+5400,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+5401,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+5402,((1U & (IData)((0x7fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+5403,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+5404,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+5405,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+5406,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+5407,((1U & (IData)((0x3fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+5408,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+5409,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+5410,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+5411,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+5412,((1U & (IData)((0x1fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+5413,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+5414,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+5415,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+5416,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+5417,((1U & (IData)((0xfffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+5418,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+5419,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+5420,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+5421,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+5422,((1U & (IData)((0x7ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+5423,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+5424,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+5425,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+5426,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+5427,((1U & (IData)((0x3ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+5428,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+5429,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+5430,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+5431,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+5432,((1U & (IData)((0x1ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+5433,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+5434,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+5435,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+5436,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+5437,((1U & (IData)((0xffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+5438,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+5439,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+5440,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+5441,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+5442,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+5443,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+5444,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+5445,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+5446,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+5447,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+5448,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+5449,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+5450,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+5451,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+5452,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+5453,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+5454,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+5455,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+5456,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+5457,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+5458,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+5459,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+5460,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+5461,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+5462,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+5463,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+5464,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+5465,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+5466,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+5467,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+5468,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+5469,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+5470,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+5471,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+5472,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+5473,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+5474,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+5475,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+5476,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+5477,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+5478,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+5479,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+5480,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+5481,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+5482,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+5483,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+5484,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+5485,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+5486,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+5487,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+5488,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+5489,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+5490,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+5491,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+5492,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+5493,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+5494,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+5495,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+5496,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+5497,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+5498,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+5499,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+5500,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+5501,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+5502,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+5503,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+5504,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+5505,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+5506,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+5507,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+5508,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+5509,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+5510,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+5511,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+5512,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+5513,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+5514,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+5515,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+5516,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+5517,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+5518,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+5519,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+5520,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+5521,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+5522,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+5523,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+5524,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+5525,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+5526,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+5527,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+5528,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+5529,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+5530,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+5531,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+5532,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+5533,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+5534,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+5535,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+5536,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+5537,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+5538,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+5539,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+5540,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+5541,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+5542,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+5543,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+5544,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+5545,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+5546,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+5547,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+5548,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+5549,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+5550,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+5551,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+5552,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+5553,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+5554,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+5555,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+5556,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+5557,((7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x19U)))),3);
        tracep->fullQData(oldp+5558,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1aU)),64);
        tracep->fullQData(oldp+5560,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__26__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+5562,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5563,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+5564,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+5565,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+5566,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1bU)))));
        tracep->fullBit(oldp+5567,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1aU)))));
        tracep->fullBit(oldp+5568,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU)))));
        tracep->fullBit(oldp+5569,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU))))));
        tracep->fullBit(oldp+5570,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1aU)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x1aU)))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5571,((1U & (IData)((0x7ffffffffe000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x19U))))));
        tracep->fullBit(oldp+5572,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+5573,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+5574,((1U & (~ (IData)(
                                                    (0x7ffffffffe000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x19U)))))));
        tracep->fullBit(oldp+5575,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+5576,((1U & (IData)((0x3fffffffff000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))));
        tracep->fullBit(oldp+5577,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+5578,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+5579,((1U & (~ (IData)(
                                                    (0x3fffffffff000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x18U)))))));
        tracep->fullBit(oldp+5580,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+5581,((1U & (IData)((0x1fffffffff800000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))));
        tracep->fullBit(oldp+5582,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+5583,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+5584,((1U & (~ (IData)(
                                                    (0x1fffffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U)))))));
        tracep->fullBit(oldp+5585,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff800000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+5586,((1U & (IData)((0xfffffffffc00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+5587,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+5588,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+5589,((1U & (~ (IData)(
                                                    (0xfffffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U)))))));
        tracep->fullBit(oldp+5590,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+5591,((1U & (IData)((0x7ffffffffe00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+5592,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+5593,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+5594,((1U & (~ (IData)(
                                                    (0x7ffffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+5595,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+5596,((1U & (IData)((0x3fffffffff00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+5597,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+5598,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+5599,((1U & (~ (IData)(
                                                    (0x3fffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+5600,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+5601,((1U & (IData)((0x1fffffffff80000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+5602,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+5603,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+5604,((1U & (~ (IData)(
                                                    (0x1fffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+5605,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff80000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+5606,((1U & (IData)((0xfffffffffc0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+5607,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+5608,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+5609,((1U & (~ (IData)(
                                                    (0xfffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+5610,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+5611,((1U & (IData)((0x7ffffffffe0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+5612,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+5613,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+5614,((1U & (~ (IData)(
                                                    (0x7ffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+5615,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+5616,((1U & (IData)((0x3fffffffff0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+5617,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+5618,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+5619,((1U & (~ (IData)(
                                                    (0x3fffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+5620,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+5621,((1U & (IData)((0x1fffffffff8000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+5622,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+5623,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+5624,((1U & (~ (IData)(
                                                    (0x1fffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+5625,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff8000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+5626,((1U & (IData)((0xfffffffffc000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+5627,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+5628,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+5629,((1U & (~ (IData)(
                                                    (0xfffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+5630,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+5631,((1U & (IData)((0x7ffffffffe000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+5632,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+5633,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+5634,((1U & (~ (IData)(
                                                    (0x7ffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+5635,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+5636,((1U & (IData)((0x3fffffffff000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+5637,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+5638,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+5639,((1U & (~ (IData)(
                                                    (0x3fffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+5640,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+5641,((1U & (IData)((0x1fffffffff800ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+5642,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+5643,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+5644,((1U & (~ (IData)(
                                                    (0x1fffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+5645,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff800ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+5646,((1U & (IData)((0xfffffffffc00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+5647,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+5648,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+5649,((1U & (~ (IData)(
                                                    (0xfffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+5650,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+5651,((1U & (IData)((0x7ffffffffe00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+5652,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+5653,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+5654,((1U & (~ (IData)(
                                                    (0x7ffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+5655,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+5656,((1U & (IData)((0x3fffffffff00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+5657,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+5658,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+5659,((1U & (~ (IData)(
                                                    (0x3fffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+5660,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+5661,((1U & (IData)((0x1fffffffff80ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+5662,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+5663,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+5664,((1U & (~ (IData)(
                                                    (0x1fffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+5665,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+5666,((1U & (IData)((0xfffffffffc0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+5667,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+5668,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+5669,((1U & (~ (IData)(
                                                    (0xfffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+5670,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+5671,((1U & (IData)((0x7ffffffffe0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+5672,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+5673,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+5674,((1U & (~ (IData)(
                                                    (0x7ffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+5675,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+5676,((1U & (IData)((0x3fffffffff0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+5677,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+5678,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+5679,((1U & (~ (IData)(
                                                    (0x3fffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+5680,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+5681,((1U & (IData)((0x1fffffffff8ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+5682,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+5683,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+5684,((1U & (~ (IData)(
                                                    (0x1fffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+5685,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+5686,((1U & (IData)((0xfffffffffcULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+5687,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+5688,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+5689,((1U & (~ (IData)(
                                                    (0xfffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+5690,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+5691,((1U & (IData)((0x7ffffffffeULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+5692,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+5693,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+5694,((1U & (~ (IData)(
                                                    (0x7ffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+5695,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+5696,((1U & (IData)((0x3fffffffffULL 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+5697,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+5698,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+5699,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+5700,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+5701,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+5702,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+5703,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+5704,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+5705,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+5706,((1U & (IData)((0xfffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+5707,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+5708,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+5709,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+5710,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+5711,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+5712,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+5713,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+5714,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+5715,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+5716,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+5717,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+5718,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+5719,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+5720,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+5721,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+5722,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+5723,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+5724,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+5725,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+5726,((1U & (IData)((0xffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+5727,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+5728,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+5729,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+5730,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+5731,((1U & (IData)((0x7fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+5732,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+5733,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+5734,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+5735,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+5736,((1U & (IData)((0x3fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+5737,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+5738,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+5739,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+5740,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+5741,((1U & (IData)((0x1fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+5742,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+5743,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+5744,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+5745,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+5746,((1U & (IData)((0xfffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+5747,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+5748,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+5749,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+5750,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+5751,((1U & (IData)((0x7ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+5752,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+5753,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+5754,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+5755,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+5756,((1U & (IData)((0x3ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+5757,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+5758,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+5759,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+5760,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+5761,((1U & (IData)((0x1ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+5762,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+5763,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+5764,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+5765,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+5766,((1U & (IData)((0xffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+5767,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+5768,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+5769,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+5770,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+5771,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+5772,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+5773,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+5774,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+5775,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+5776,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+5777,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+5778,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+5779,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+5780,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+5781,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+5782,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+5783,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+5784,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+5785,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+5786,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+5787,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+5788,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+5789,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+5790,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+5791,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+5792,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+5793,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+5794,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+5795,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+5796,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+5797,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+5798,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+5799,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+5800,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+5801,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+5802,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+5803,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+5804,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+5805,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+5806,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+5807,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+5808,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+5809,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+5810,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+5811,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+5812,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+5813,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+5814,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+5815,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+5816,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+5817,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+5818,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+5819,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+5820,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+5821,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+5822,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+5823,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+5824,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+5825,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+5826,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+5827,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+5828,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+5829,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+5830,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+5831,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+5832,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+5833,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+5834,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+5835,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+5836,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+5837,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+5838,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+5839,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+5840,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+5841,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+5842,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+5843,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+5844,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+5845,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+5846,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+5847,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+5848,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+5849,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+5850,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+5851,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+5852,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+5853,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+5854,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+5855,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+5856,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+5857,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+5858,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+5859,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+5860,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+5861,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+5862,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+5863,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+5864,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+5865,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+5866,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+5867,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+5868,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+5869,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+5870,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+5871,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+5872,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+5873,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+5874,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+5875,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+5876,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+5877,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+5878,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+5879,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+5880,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+5881,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+5882,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+5883,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+5884,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+5885,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+5886,((7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x1bU)))),3);
        tracep->fullQData(oldp+5887,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1cU)),64);
        tracep->fullQData(oldp+5889,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__28__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+5891,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5892,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+5893,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+5894,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+5895,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1dU)))));
        tracep->fullBit(oldp+5896,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1cU)))));
        tracep->fullBit(oldp+5897,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU)))));
        tracep->fullBit(oldp+5898,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU))))));
        tracep->fullBit(oldp+5899,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1cU)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x1cU)))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5900,((1U & (IData)((0x7ffffffff8000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU))))));
        tracep->fullBit(oldp+5901,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+5902,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+5903,((1U & (~ (IData)(
                                                    (0x7ffffffff8000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU)))))));
        tracep->fullBit(oldp+5904,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff8000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff8000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+5905,((1U & (IData)((0x3ffffffffc000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU))))));
        tracep->fullBit(oldp+5906,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+5907,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+5908,((1U & (~ (IData)(
                                                    (0x3ffffffffc000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU)))))));
        tracep->fullBit(oldp+5909,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+5910,((1U & (IData)((0x1ffffffffe000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x19U))))));
        tracep->fullBit(oldp+5911,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+5912,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+5913,((1U & (~ (IData)(
                                                    (0x1ffffffffe000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x19U)))))));
        tracep->fullBit(oldp+5914,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+5915,((1U & (IData)((0xfffffffff000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))));
        tracep->fullBit(oldp+5916,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+5917,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+5918,((1U & (~ (IData)(
                                                    (0xfffffffff000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x18U)))))));
        tracep->fullBit(oldp+5919,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+5920,((1U & (IData)((0x7ffffffff800000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))));
        tracep->fullBit(oldp+5921,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+5922,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+5923,((1U & (~ (IData)(
                                                    (0x7ffffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U)))))));
        tracep->fullBit(oldp+5924,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff800000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+5925,((1U & (IData)((0x3ffffffffc00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+5926,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+5927,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+5928,((1U & (~ (IData)(
                                                    (0x3ffffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U)))))));
        tracep->fullBit(oldp+5929,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+5930,((1U & (IData)((0x1ffffffffe00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+5931,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+5932,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+5933,((1U & (~ (IData)(
                                                    (0x1ffffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+5934,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+5935,((1U & (IData)((0xfffffffff00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+5936,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+5937,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+5938,((1U & (~ (IData)(
                                                    (0xfffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+5939,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+5940,((1U & (IData)((0x7ffffffff80000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+5941,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+5942,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+5943,((1U & (~ (IData)(
                                                    (0x7ffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+5944,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff80000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+5945,((1U & (IData)((0x3ffffffffc0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+5946,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+5947,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+5948,((1U & (~ (IData)(
                                                    (0x3ffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+5949,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+5950,((1U & (IData)((0x1ffffffffe0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+5951,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+5952,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+5953,((1U & (~ (IData)(
                                                    (0x1ffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+5954,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+5955,((1U & (IData)((0xfffffffff0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+5956,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+5957,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+5958,((1U & (~ (IData)(
                                                    (0xfffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+5959,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+5960,((1U & (IData)((0x7ffffffff8000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+5961,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+5962,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+5963,((1U & (~ (IData)(
                                                    (0x7ffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+5964,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff8000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+5965,((1U & (IData)((0x3ffffffffc000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+5966,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+5967,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+5968,((1U & (~ (IData)(
                                                    (0x3ffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+5969,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+5970,((1U & (IData)((0x1ffffffffe000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+5971,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+5972,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+5973,((1U & (~ (IData)(
                                                    (0x1ffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+5974,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+5975,((1U & (IData)((0xfffffffff000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+5976,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+5977,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+5978,((1U & (~ (IData)(
                                                    (0xfffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+5979,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+5980,((1U & (IData)((0x7ffffffff800ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+5981,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+5982,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+5983,((1U & (~ (IData)(
                                                    (0x7ffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+5984,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff800ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+5985,((1U & (IData)((0x3ffffffffc00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+5986,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+5987,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+5988,((1U & (~ (IData)(
                                                    (0x3ffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+5989,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+5990,((1U & (IData)((0x1ffffffffe00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+5991,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+5992,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+5993,((1U & (~ (IData)(
                                                    (0x1ffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+5994,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+5995,((1U & (IData)((0xfffffffff00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+5996,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+5997,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+5998,((1U & (~ (IData)(
                                                    (0xfffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+5999,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+6000,((1U & (IData)((0x7ffffffff80ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+6001,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+6002,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+6003,((1U & (~ (IData)(
                                                    (0x7ffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+6004,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+6005,((1U & (IData)((0x3ffffffffc0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+6006,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+6007,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+6008,((1U & (~ (IData)(
                                                    (0x3ffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+6009,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+6010,((1U & (IData)((0x1ffffffffe0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+6011,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+6012,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+6013,((1U & (~ (IData)(
                                                    (0x1ffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+6014,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+6015,((1U & (IData)((0xfffffffff0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+6016,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+6017,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+6018,((1U & (~ (IData)(
                                                    (0xfffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+6019,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+6020,((1U & (IData)((0x7ffffffff8ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+6021,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+6022,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+6023,((1U & (~ (IData)(
                                                    (0x7ffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+6024,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+6025,((1U & (IData)((0x3ffffffffcULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+6026,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+6027,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+6028,((1U & (~ (IData)(
                                                    (0x3ffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+6029,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+6030,((1U & (IData)((0x1ffffffffeULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+6031,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+6032,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+6033,((1U & (~ (IData)(
                                                    (0x1ffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+6034,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+6035,((1U & (IData)((0xfffffffffULL 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+6036,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+6037,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+6038,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+6039,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+6040,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+6041,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+6042,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+6043,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+6044,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+6045,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+6046,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+6047,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+6048,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+6049,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+6050,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+6051,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+6052,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+6053,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+6054,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+6055,((1U & (IData)((0xffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+6056,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+6057,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+6058,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+6059,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+6060,((1U & (IData)((0x7fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+6061,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+6062,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+6063,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+6064,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+6065,((1U & (IData)((0x3fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+6066,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+6067,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+6068,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+6069,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+6070,((1U & (IData)((0x1fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+6071,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+6072,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+6073,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+6074,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+6075,((1U & (IData)((0xfffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+6076,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+6077,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+6078,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+6079,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+6080,((1U & (IData)((0x7ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+6081,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+6082,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+6083,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+6084,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+6085,((1U & (IData)((0x3ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+6086,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+6087,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+6088,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+6089,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+6090,((1U & (IData)((0x1ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+6091,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+6092,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+6093,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+6094,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+6095,((1U & (IData)((0xffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+6096,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+6097,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+6098,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+6099,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+6100,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+6101,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+6102,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+6103,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+6104,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+6105,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+6106,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+6107,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+6108,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+6109,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+6110,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+6111,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+6112,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+6113,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+6114,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+6115,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+6116,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+6117,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+6118,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+6119,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+6120,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+6121,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+6122,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+6123,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+6124,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+6125,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+6126,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+6127,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+6128,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+6129,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+6130,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+6131,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+6132,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+6133,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+6134,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+6135,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+6136,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+6137,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+6138,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+6139,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+6140,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+6141,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+6142,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+6143,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+6144,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+6145,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+6146,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+6147,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+6148,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+6149,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+6150,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+6151,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+6152,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+6153,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+6154,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+6155,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+6156,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+6157,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+6158,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+6159,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+6160,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+6161,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+6162,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+6163,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+6164,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+6165,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+6166,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+6167,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+6168,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+6169,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+6170,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+6171,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+6172,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+6173,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+6174,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+6175,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+6176,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+6177,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+6178,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+6179,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+6180,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+6181,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+6182,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+6183,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+6184,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+6185,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+6186,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+6187,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+6188,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+6189,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+6190,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+6191,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+6192,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+6193,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+6194,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+6195,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+6196,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+6197,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+6198,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+6199,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+6200,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+6201,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+6202,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+6203,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+6204,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+6205,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+6206,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+6207,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+6208,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+6209,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+6210,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+6211,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+6212,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+6213,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+6214,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+6215,((7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0x1dU)))),3);
        tracep->fullQData(oldp+6216,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1eU)),64);
        tracep->fullQData(oldp+6218,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__30__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+6220,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+6221,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+6222,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+6223,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+6224,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1fU)))));
        tracep->fullBit(oldp+6225,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x1eU)))));
        tracep->fullBit(oldp+6226,((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1eU)))));
        tracep->fullBit(oldp+6227,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1eU))))));
        tracep->fullBit(oldp+6228,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1eU)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x1eU)))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+6229,((1U & (IData)((0x7fffffffe0000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1dU))))));
        tracep->fullBit(oldp+6230,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+6231,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+6232,((1U & (~ (IData)(
                                                    (0x7fffffffe0000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1dU)))))));
        tracep->fullBit(oldp+6233,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe0000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe0000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+6234,((1U & (IData)((0x3ffffffff0000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU))))));
        tracep->fullBit(oldp+6235,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+6236,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+6237,((1U & (~ (IData)(
                                                    (0x3ffffffff0000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1cU)))))));
        tracep->fullBit(oldp+6238,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff0000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff0000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+6239,((1U & (IData)((0x1ffffffff8000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU))))));
        tracep->fullBit(oldp+6240,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+6241,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+6242,((1U & (~ (IData)(
                                                    (0x1ffffffff8000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU)))))));
        tracep->fullBit(oldp+6243,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff8000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff8000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+6244,((1U & (IData)((0xffffffffc000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU))))));
        tracep->fullBit(oldp+6245,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+6246,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+6247,((1U & (~ (IData)(
                                                    (0xffffffffc000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU)))))));
        tracep->fullBit(oldp+6248,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+6249,((1U & (IData)((0x7fffffffe000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x19U))))));
        tracep->fullBit(oldp+6250,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+6251,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+6252,((1U & (~ (IData)(
                                                    (0x7fffffffe000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x19U)))))));
        tracep->fullBit(oldp+6253,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+6254,((1U & (IData)((0x3ffffffff000000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))));
        tracep->fullBit(oldp+6255,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+6256,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+6257,((1U & (~ (IData)(
                                                    (0x3ffffffff000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x18U)))))));
        tracep->fullBit(oldp+6258,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff000000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+6259,((1U & (IData)((0x1ffffffff800000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))));
        tracep->fullBit(oldp+6260,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+6261,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+6262,((1U & (~ (IData)(
                                                    (0x1ffffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U)))))));
        tracep->fullBit(oldp+6263,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff800000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+6264,((1U & (IData)((0xffffffffc00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+6265,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+6266,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+6267,((1U & (~ (IData)(
                                                    (0xffffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U)))))));
        tracep->fullBit(oldp+6268,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+6269,((1U & (IData)((0x7fffffffe00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+6270,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+6271,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+6272,((1U & (~ (IData)(
                                                    (0x7fffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+6273,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+6274,((1U & (IData)((0x3ffffffff00000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+6275,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+6276,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+6277,((1U & (~ (IData)(
                                                    (0x3ffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+6278,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff00000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+6279,((1U & (IData)((0x1ffffffff80000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+6280,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+6281,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+6282,((1U & (~ (IData)(
                                                    (0x1ffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+6283,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff80000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+6284,((1U & (IData)((0xffffffffc0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+6285,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+6286,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+6287,((1U & (~ (IData)(
                                                    (0xffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+6288,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+6289,((1U & (IData)((0x7fffffffe0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+6290,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+6291,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+6292,((1U & (~ (IData)(
                                                    (0x7fffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+6293,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+6294,((1U & (IData)((0x3ffffffff0000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+6295,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+6296,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+6297,((1U & (~ (IData)(
                                                    (0x3ffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+6298,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff0000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+6299,((1U & (IData)((0x1ffffffff8000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+6300,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+6301,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+6302,((1U & (~ (IData)(
                                                    (0x1ffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+6303,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff8000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+6304,((1U & (IData)((0xffffffffc000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+6305,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+6306,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+6307,((1U & (~ (IData)(
                                                    (0xffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+6308,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+6309,((1U & (IData)((0x7fffffffe000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+6310,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+6311,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+6312,((1U & (~ (IData)(
                                                    (0x7fffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+6313,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+6314,((1U & (IData)((0x3ffffffff000ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+6315,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+6316,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+6317,((1U & (~ (IData)(
                                                    (0x3ffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+6318,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff000ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+6319,((1U & (IData)((0x1ffffffff800ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+6320,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+6321,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+6322,((1U & (~ (IData)(
                                                    (0x1ffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+6323,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff800ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+6324,((1U & (IData)((0xffffffffc00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+6325,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+6326,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+6327,((1U & (~ (IData)(
                                                    (0xffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+6328,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+6329,((1U & (IData)((0x7fffffffe00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+6330,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+6331,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+6332,((1U & (~ (IData)(
                                                    (0x7fffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+6333,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+6334,((1U & (IData)((0x3ffffffff00ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+6335,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+6336,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+6337,((1U & (~ (IData)(
                                                    (0x3ffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+6338,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff00ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+6339,((1U & (IData)((0x1ffffffff80ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+6340,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+6341,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+6342,((1U & (~ (IData)(
                                                    (0x1ffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+6343,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff80ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+6344,((1U & (IData)((0xffffffffc0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+6345,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+6346,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+6347,((1U & (~ (IData)(
                                                    (0xffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+6348,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+6349,((1U & (IData)((0x7fffffffe0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+6350,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+6351,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+6352,((1U & (~ (IData)(
                                                    (0x7fffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+6353,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+6354,((1U & (IData)((0x3ffffffff0ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+6355,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+6356,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+6357,((1U & (~ (IData)(
                                                    (0x3ffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+6358,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff0ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+6359,((1U & (IData)((0x1ffffffff8ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+6360,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+6361,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+6362,((1U & (~ (IData)(
                                                    (0x1ffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+6363,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff8ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+6364,((1U & (IData)((0xffffffffcULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+6365,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+6366,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+6367,((1U & (~ (IData)(
                                                    (0xffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+6368,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffcULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+6369,((1U & (IData)((0x7fffffffeULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+6370,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+6371,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+6372,((1U & (~ (IData)(
                                                    (0x7fffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+6373,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffeULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+6374,((1U & (IData)((0x3ffffffffULL 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+6375,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+6376,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+6377,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+6378,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+6379,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+6380,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+6381,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+6382,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+6383,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+6384,((1U & (IData)((0xffffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+6385,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+6386,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+6387,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+6388,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+6389,((1U & (IData)((0x7fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+6390,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+6391,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+6392,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+6393,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+6394,((1U & (IData)((0x3fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+6395,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+6396,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+6397,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+6398,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+6399,((1U & (IData)((0x1fffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+6400,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+6401,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+6402,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+6403,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+6404,((1U & (IData)((0xfffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+6405,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+6406,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+6407,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+6408,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+6409,((1U & (IData)((0x7ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+6410,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+6411,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+6412,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+6413,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+6414,((1U & (IData)((0x3ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+6415,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+6416,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+6417,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+6418,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+6419,((1U & (IData)((0x1ffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+6420,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+6421,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+6422,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+6423,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+6424,((1U & (IData)((0xffffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+6425,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+6426,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+6427,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+6428,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+6429,((1U & (IData)((0x7fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+6430,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+6431,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+6432,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+6433,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+6434,((1U & (IData)((0x3fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+6435,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+6436,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+6437,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+6438,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+6439,((1U & (IData)((0x1fffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+6440,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+6441,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+6442,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+6443,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+6444,((1U & (IData)((0xfffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+6445,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+6446,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+6447,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+6448,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+6449,((1U & (IData)((0x7ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+6450,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+6451,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+6452,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+6453,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+6454,((1U & (IData)((0x3ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+6455,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+6456,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+6457,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+6458,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+6459,((1U & (IData)((0x1ffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+6460,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+6461,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+6462,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+6463,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+6464,((1U & (IData)((0xffffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+6465,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+6466,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+6467,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+6468,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+6469,((1U & (IData)((0x7fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+6470,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+6471,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+6472,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+6473,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+6474,((1U & (IData)((0x3fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+6475,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+6476,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+6477,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+6478,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+6479,((1U & (IData)((0x1fffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+6480,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+6481,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+6482,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+6483,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+6484,((1U & (IData)((0xfffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+6485,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+6486,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+6487,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+6488,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+6489,((1U & (IData)((0x7ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+6490,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+6491,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+6492,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+6493,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+6494,((1U & (IData)((0x3ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+6495,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+6496,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+6497,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+6498,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+6499,((1U & (IData)((0x1ffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+6500,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+6501,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+6502,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+6503,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+6504,((1U & (IData)((0xffULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+6505,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+6506,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+6507,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+6508,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+6509,((1U & (IData)((0x7fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+6510,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+6511,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+6512,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+6513,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+6514,((1U & (IData)((0x3fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+6515,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+6516,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+6517,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+6518,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+6519,((1U & (IData)((0x1fULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+6520,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+6521,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+6522,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+6523,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+6524,((1U & (IData)((0xfULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+6525,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+6526,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+6527,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+6528,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+6529,((1U & (IData)((7ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+6530,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+6531,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+6532,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+6533,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+6534,((1U & (IData)((3ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+6535,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+6536,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+6537,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+6538,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+6539,((1U & (IData)((1ULL 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+6540,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+6541,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+6542,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+6543,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullIData(oldp+6544,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData),17);
        tracep->fullBit(oldp+6545,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 0xdU) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 0xcU))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xcU))))));
        tracep->fullBit(oldp+6546,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 0xdU))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xcU)) 
                                            | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 0xcU)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 0xdU))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 0xcU)))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 0xdU)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xcU))))));
        tracep->fullCData(oldp+6547,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig),5);
        tracep->fullCData(oldp+6548,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig),4);
        tracep->fullCData(oldp+6549,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig),2);
        tracep->fullCData(oldp+6550,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig),2);
        tracep->fullBit(oldp+6551,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig));
        tracep->fullBit(oldp+6552,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 4U))));
        tracep->fullBit(oldp+6553,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 3U))));
        tracep->fullBit(oldp+6554,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 2U))));
        tracep->fullBit(oldp+6555,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 4U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 3U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 2U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 3U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 2U))))));
        tracep->fullBit(oldp+6556,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 3U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 2U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 4U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 3U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 2U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 4U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 3U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 2U))))));
        tracep->fullBit(oldp+6557,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 7U))));
        tracep->fullBit(oldp+6558,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 6U))));
        tracep->fullBit(oldp+6559,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 5U))));
        tracep->fullBit(oldp+6560,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 7U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 6U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 5U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 6U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 5U))))));
        tracep->fullBit(oldp+6561,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 6U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 5U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 5U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 7U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 6U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 5U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 7U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 6U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 5U))))));
        tracep->fullBit(oldp+6562,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6563,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 9U))));
        tracep->fullBit(oldp+6564,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 8U))));
        tracep->fullBit(oldp+6565,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 0xaU) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 9U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 8U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 9U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 8U))))));
        tracep->fullBit(oldp+6566,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 9U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 8U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 8U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xaU) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 9U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 8U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 0xaU) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 9U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 8U))))));
        tracep->fullBit(oldp+6567,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6568,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6569,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6570,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 0xdU) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 0xcU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 0xbU))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 0xcU) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6571,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xcU))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xbU)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0xbU)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xdU) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0xcU))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xbU)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 0xdU) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 0xcU)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6572,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6573,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 0xfU))));
        tracep->fullBit(oldp+6574,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 0xeU))));
        tracep->fullBit(oldp+6575,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 0x10U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 0xfU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 0xeU))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 0xfU) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xeU))))));
        tracep->fullBit(oldp+6576,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xfU))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0xeU)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0x10U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0xfU))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xeU)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 0x10U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 0xfU)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xeU))))));
        tracep->fullBit(oldp+6577,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 2U))));
        tracep->fullBit(oldp+6578,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 1U))));
        tracep->fullBit(oldp+6579,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))));
        tracep->fullBit(oldp+6580,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                            >> 2U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 1U) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 1U) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))));
        tracep->fullBit(oldp+6581,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 2U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 1U))) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 2U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 2U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 1U))) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 1U)) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))));
        tracep->fullBit(oldp+6582,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)));
        tracep->fullBit(oldp+6583,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 4U))));
        tracep->fullBit(oldp+6584,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 3U))));
        tracep->fullBit(oldp+6585,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 4U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 3U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 3U))))));
        tracep->fullBit(oldp+6586,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 4U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 3U)) 
                                            | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 4U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 3U)))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 4U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 3U)))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 4U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 3U))))));
        tracep->fullBit(oldp+6587,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6588,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig))));
        tracep->fullBit(oldp+6589,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 1U))));
        tracep->fullBit(oldp+6590,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 1U))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 1U))))));
        tracep->fullBit(oldp+6591,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 1U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 1U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 1U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 1U))))));
        tracep->fullBit(oldp+6592,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                          >> 4U))));
        tracep->fullBit(oldp+6593,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                          >> 3U))));
        tracep->fullBit(oldp+6594,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                          >> 2U))));
        tracep->fullBit(oldp+6595,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                               >> 3U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                 >> 2U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U))))));
        tracep->fullBit(oldp+6596,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                  >> 3U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                >> 4U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                               >> 4U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U))))));
        tracep->fullBit(oldp+6597,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig))));
        tracep->fullBit(oldp+6598,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 6U))));
        tracep->fullBit(oldp+6599,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 5U))));
        tracep->fullBit(oldp+6600,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 6U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 5U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 5U))))));
        tracep->fullBit(oldp+6601,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 6U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 5U)) 
                                            | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 5U)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 6U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 5U)))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 5U))))));
        tracep->fullBit(oldp+6602,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                          >> 3U))));
        tracep->fullBit(oldp+6603,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                          >> 2U))));
        tracep->fullBit(oldp+6604,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6605,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                               >> 2U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                 >> 1U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U))))));
        tracep->fullBit(oldp+6606,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                  >> 2U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                >> 3U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                               >> 3U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U))))));
        tracep->fullBit(oldp+6607,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 9U))));
        tracep->fullBit(oldp+6608,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 8U))));
        tracep->fullBit(oldp+6609,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 7U))));
        tracep->fullBit(oldp+6610,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                            >> 9U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 8U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 7U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 7U))))));
        tracep->fullBit(oldp+6611,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 9U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 8U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 7U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 9U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 8U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 7U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 9U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 8U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 7U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 8U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 7U))))));
        tracep->fullBit(oldp+6612,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6613,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig))));
        tracep->fullBit(oldp+6614,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6615,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 0xaU))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+6616,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xaU)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   >> 0xaU)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                  >> 0xaU)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+6617,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6618,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig))));
        tracep->fullBit(oldp+6619,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6620,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                 >> 0xbU))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6621,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6622,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 0xcU))));
        tracep->fullIData(oldp+6623,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData),17);
        tracep->fullBit(oldp+6624,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 0xdU) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 0xcU))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xcU))))));
        tracep->fullBit(oldp+6625,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 0xdU))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xcU)) 
                                            | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 0xcU)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 0xdU))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 0xcU)))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 0xdU)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xcU))))));
        tracep->fullCData(oldp+6626,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig),5);
        tracep->fullCData(oldp+6627,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig),4);
        tracep->fullCData(oldp+6628,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig),2);
        tracep->fullCData(oldp+6629,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig),2);
        tracep->fullBit(oldp+6630,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig));
        tracep->fullBit(oldp+6631,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 4U))));
        tracep->fullBit(oldp+6632,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 3U))));
        tracep->fullBit(oldp+6633,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 2U))));
        tracep->fullBit(oldp+6634,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 4U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 3U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 2U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 3U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 2U))))));
        tracep->fullBit(oldp+6635,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 3U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 2U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 4U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 3U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 2U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 4U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 3U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 2U))))));
        tracep->fullBit(oldp+6636,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 7U))));
        tracep->fullBit(oldp+6637,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 6U))));
        tracep->fullBit(oldp+6638,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 5U))));
        tracep->fullBit(oldp+6639,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 7U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 6U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 5U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 6U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 5U))))));
        tracep->fullBit(oldp+6640,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 6U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 5U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 5U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 7U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 6U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 5U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 7U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 6U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 5U))))));
        tracep->fullBit(oldp+6641,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6642,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 9U))));
        tracep->fullBit(oldp+6643,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 8U))));
        tracep->fullBit(oldp+6644,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 0xaU) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 9U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 8U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 9U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 8U))))));
        tracep->fullBit(oldp+6645,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 9U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 8U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 8U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xaU) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 9U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 8U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 0xaU) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 9U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 8U))))));
        tracep->fullBit(oldp+6646,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6647,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6648,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6649,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 0xdU) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 0xcU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 0xbU))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 0xcU) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6650,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xcU))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xbU)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0xbU)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xdU) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0xcU))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xbU)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 0xdU) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 0xcU)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6651,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6652,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 0xfU))));
        tracep->fullBit(oldp+6653,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 0xeU))));
        tracep->fullBit(oldp+6654,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 0x10U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 0xfU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 0xeU))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 0xfU) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xeU))))));
        tracep->fullBit(oldp+6655,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xfU))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0xeU)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0x10U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0xfU))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xeU)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 0x10U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 0xfU)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xeU))))));
        tracep->fullBit(oldp+6656,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 2U))));
        tracep->fullBit(oldp+6657,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 1U))));
        tracep->fullBit(oldp+6658,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))));
        tracep->fullBit(oldp+6659,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                            >> 2U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 1U) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 1U) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))));
        tracep->fullBit(oldp+6660,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 2U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 1U))) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 2U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 2U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 1U))) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 1U)) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))));
        tracep->fullBit(oldp+6661,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)));
        tracep->fullBit(oldp+6662,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 4U))));
        tracep->fullBit(oldp+6663,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 3U))));
        tracep->fullBit(oldp+6664,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 4U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 3U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 3U))))));
        tracep->fullBit(oldp+6665,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 4U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 3U)) 
                                            | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 4U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 3U)))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 4U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 3U)))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 4U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 3U))))));
        tracep->fullBit(oldp+6666,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6667,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig))));
        tracep->fullBit(oldp+6668,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 1U))));
        tracep->fullBit(oldp+6669,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 1U))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 1U))))));
        tracep->fullBit(oldp+6670,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 1U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 1U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 1U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 1U))))));
        tracep->fullBit(oldp+6671,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                          >> 4U))));
        tracep->fullBit(oldp+6672,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                          >> 3U))));
        tracep->fullBit(oldp+6673,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                          >> 2U))));
        tracep->fullBit(oldp+6674,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                               >> 3U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                 >> 2U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U))))));
        tracep->fullBit(oldp+6675,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                  >> 3U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                >> 4U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                               >> 4U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U))))));
        tracep->fullBit(oldp+6676,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig))));
        tracep->fullBit(oldp+6677,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 6U))));
        tracep->fullBit(oldp+6678,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 5U))));
        tracep->fullBit(oldp+6679,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 6U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 5U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 5U))))));
        tracep->fullBit(oldp+6680,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 6U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 5U)) 
                                            | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 5U)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 6U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 5U)))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 5U))))));
        tracep->fullBit(oldp+6681,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                          >> 3U))));
        tracep->fullBit(oldp+6682,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                          >> 2U))));
        tracep->fullBit(oldp+6683,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6684,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                               >> 2U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                 >> 1U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U))))));
        tracep->fullBit(oldp+6685,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                  >> 2U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                >> 3U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                               >> 3U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U))))));
        tracep->fullBit(oldp+6686,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 9U))));
        tracep->fullBit(oldp+6687,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 8U))));
        tracep->fullBit(oldp+6688,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 7U))));
        tracep->fullBit(oldp+6689,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                            >> 9U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 8U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 7U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 7U))))));
        tracep->fullBit(oldp+6690,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 9U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 8U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 7U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 9U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 8U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 7U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 9U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 8U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 7U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 8U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 7U))))));
        tracep->fullBit(oldp+6691,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6692,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig))));
        tracep->fullBit(oldp+6693,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6694,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 0xaU))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+6695,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xaU)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   >> 0xaU)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                  >> 0xaU)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+6696,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6697,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig))));
        tracep->fullBit(oldp+6698,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6699,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                 >> 0xbU))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6700,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6701,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 0xcU))));
        tracep->fullIData(oldp+6702,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData),17);
        tracep->fullBit(oldp+6703,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               >> 0xdU) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 0xcU))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 0xcU))))));
        tracep->fullBit(oldp+6704,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 0xdU))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 0xcU)) 
                                            | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 0xcU)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 0xdU))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 0xcU)))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 0xdU)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 0xcU))))));
        tracep->fullCData(oldp+6705,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig),5);
        tracep->fullCData(oldp+6706,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig),4);
        tracep->fullCData(oldp+6707,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig),2);
        tracep->fullCData(oldp+6708,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig),2);
        tracep->fullBit(oldp+6709,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig));
        tracep->fullBit(oldp+6710,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 4U))));
        tracep->fullBit(oldp+6711,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 3U))));
        tracep->fullBit(oldp+6712,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 2U))));
        tracep->fullBit(oldp+6713,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 4U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 3U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 2U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 3U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 2U))))));
        tracep->fullBit(oldp+6714,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 3U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 2U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 4U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 3U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 2U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 4U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 3U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 2U))))));
        tracep->fullBit(oldp+6715,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 7U))));
        tracep->fullBit(oldp+6716,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 6U))));
        tracep->fullBit(oldp+6717,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 5U))));
        tracep->fullBit(oldp+6718,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 7U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 6U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 5U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 6U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 5U))))));
        tracep->fullBit(oldp+6719,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 6U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 5U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 5U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 7U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 6U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 5U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 7U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 6U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 5U))))));
        tracep->fullBit(oldp+6720,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6721,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 9U))));
        tracep->fullBit(oldp+6722,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 8U))));
        tracep->fullBit(oldp+6723,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 0xaU) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 9U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 8U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 9U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 8U))))));
        tracep->fullBit(oldp+6724,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 9U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 8U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 8U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xaU) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 9U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 8U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 0xaU) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 9U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 8U))))));
        tracep->fullBit(oldp+6725,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6726,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6727,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6728,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 0xdU) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 0xcU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 0xbU))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 0xcU) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6729,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xcU))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xbU)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0xbU)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xdU) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0xcU))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xbU)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 0xdU) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 0xcU)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6730,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6731,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 0xfU))));
        tracep->fullBit(oldp+6732,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 0xeU))));
        tracep->fullBit(oldp+6733,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 0x10U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 0xfU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 0xeU))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 0xfU) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xeU))))));
        tracep->fullBit(oldp+6734,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xfU))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0xeU)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0x10U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0xfU))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xeU)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 0x10U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 0xfU)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xeU))))));
        tracep->fullBit(oldp+6735,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 2U))));
        tracep->fullBit(oldp+6736,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 1U))));
        tracep->fullBit(oldp+6737,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))));
        tracep->fullBit(oldp+6738,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                            >> 2U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               >> 1U) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                              >> 1U) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))));
        tracep->fullBit(oldp+6739,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 2U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 1U))) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 2U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 2U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 1U))) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 1U)) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))));
        tracep->fullBit(oldp+6740,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)));
        tracep->fullBit(oldp+6741,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 4U))));
        tracep->fullBit(oldp+6742,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 3U))));
        tracep->fullBit(oldp+6743,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               >> 4U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 3U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 3U))))));
        tracep->fullBit(oldp+6744,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 4U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 3U)) 
                                            | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 4U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 3U)))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 4U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 3U)))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 4U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 3U))))));
        tracep->fullBit(oldp+6745,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6746,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig))));
        tracep->fullBit(oldp+6747,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 1U))));
        tracep->fullBit(oldp+6748,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 1U))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 1U))))));
        tracep->fullBit(oldp+6749,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 1U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 1U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 1U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 1U))))));
        tracep->fullBit(oldp+6750,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                          >> 4U))));
        tracep->fullBit(oldp+6751,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                          >> 3U))));
        tracep->fullBit(oldp+6752,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                          >> 2U))));
        tracep->fullBit(oldp+6753,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                               >> 3U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                 >> 2U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U))))));
        tracep->fullBit(oldp+6754,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                  >> 3U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                >> 4U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                               >> 4U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig) 
                                                >> 2U))))));
        tracep->fullBit(oldp+6755,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig))));
        tracep->fullBit(oldp+6756,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 6U))));
        tracep->fullBit(oldp+6757,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 5U))));
        tracep->fullBit(oldp+6758,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               >> 6U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 5U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 5U))))));
        tracep->fullBit(oldp+6759,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 6U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 5U)) 
                                            | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 5U)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 6U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 5U)))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 5U))))));
        tracep->fullBit(oldp+6760,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                          >> 3U))));
        tracep->fullBit(oldp+6761,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                          >> 2U))));
        tracep->fullBit(oldp+6762,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6763,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                               >> 2U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                 >> 1U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U))))));
        tracep->fullBit(oldp+6764,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                  >> 2U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                >> 3U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                               >> 3U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig) 
                                                >> 1U))))));
        tracep->fullBit(oldp+6765,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 9U))));
        tracep->fullBit(oldp+6766,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 8U))));
        tracep->fullBit(oldp+6767,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 7U))));
        tracep->fullBit(oldp+6768,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                            >> 9U) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               >> 8U) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 7U))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 7U))))));
        tracep->fullBit(oldp+6769,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 9U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 8U))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 7U)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 9U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 8U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 7U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 9U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 8U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 7U)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 8U)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 7U))))));
        tracep->fullBit(oldp+6770,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6771,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig))));
        tracep->fullBit(oldp+6772,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6773,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 0xaU))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+6774,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 0xaU)) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   >> 0xaU)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                  >> 0xaU)))) 
                                          | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+6775,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig) 
                                          >> 1U))));
        tracep->fullBit(oldp+6776,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig))));
        tracep->fullBit(oldp+6777,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6778,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                 >> 0xbU))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+6779,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6780,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                          >> 0xcU))));
        tracep->fullIData(oldp+6781,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData),17);
        tracep->fullBit(oldp+6782,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                               >> 0xdU) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                 >> 0xcU))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                >> 0xcU))))));
        tracep->fullBit(oldp+6783,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                  >> 0xdU))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                >> 0xcU)) 
                                            | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                   >> 0xcU)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                   >> 0xdU))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                  >> 0xcU)))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                 >> 0xdU)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029) 
                                                >> 0xcU))))));
        tracep->fullCData(oldp+6784,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig),5);
        tracep->fullCData(oldp+6785,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__SecSig),4);
        tracep->fullCData(oldp+6786,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__ThiSig),2);
        tracep->fullCData(oldp+6787,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__ForSig),2);
        tracep->fullBit(oldp+6788,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig));
        tracep->fullBit(oldp+6789,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                          >> 4U))));
        tracep->fullBit(oldp+6790,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                          >> 3U))));
        tracep->fullBit(oldp+6791,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                          >> 2U))));
        tracep->fullBit(oldp+6792,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                            >> 4U) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                               >> 3U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                 >> 2U))) 
                                          | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                              >> 3U) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 2U))))));
        tracep->fullBit(oldp+6793,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 3U))) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 2U)) 
                                            | (((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 4U) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 3U))) 
                                              & (~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 2U)))) 
                                          | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                               >> 4U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                 >> 3U)) 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 2U))))));
    }
}
