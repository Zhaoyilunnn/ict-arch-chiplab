#include "asm.h"
#include "regdef.h"
#include "cpu_cde.h"

#define LOONGARCH_CSR_CRMD          0x0
#define LOONGARCH_CSR_EENTRY        0xc
#define LOONGARCH_CSR_TICLR         0x44
#define LOONGARCH_CSR_TCFG          0x41
#define LOONGARCH_CSR_ECFG          0x4

#define INIT_H      23
#define INIT_M      59
#define INIT_S      0x0
#define MAX_H       24
#define MAX_M       60
#define MAX_S       60
#define BIAS_H      16
#define BIAS_M      8
#define MAX_10      0xa
#define MAX_6       0x6
#define MAX_4       0x4
#define MAX_3       0x3

    .globl _start
    .globl start
    .globl __main

_start:
start:
    b    init

/* exception handle */
.org 0x8000 //0x1c008000 /* you can change exception handler entry at will */
                         /* but remember to set EENTRY.VA */
1:
    /* Clear clock interrupt */
    li.w    t1, 0x1
    csrwr   t1, LOONGARCH_CSR_TICLR
    
    # Set interrupt return entry
    li.w    t1, 0x1c009000
    csrwr   t1, csr_era 

    /* Open global interrupt */
    li.w    t1, 0x4
    li.w    t2, 0x4 # mask
    csrxchg t1, t2, LOONGARCH_CSR_CRMD # CRMD.IE = 1

    ertn

init:
    /* Set up exception and interrupt entry */
    li.w    t1, 0x1c008000
    csrwr   t1, LOONGARCH_CSR_EENTRY    
    
    /* Clear clock interrupt */
    li.w    t1, 0x1
    csrwr   t1, LOONGARCH_CSR_TICLR

    /* Open global interrupt */
    li.w    t1, 0x4
    li.w    t2, 0x4 # mask
    csrxchg t1, t2, LOONGARCH_CSR_CRMD # CRMD.IE = 1

    /* Init clock */
    li.w    t1, 0x00010003
    csrwr   t1, LOONGARCH_CSR_TCFG

    /* Enable clock interrupt */
    li.w    t1, 0x800
    csrwr   t1, LOONGARCH_CSR_ECFG

    # Initialize time 
    li.w    t0, NUM_ADDR
    li.w    t2, INIT_H
    li.w    t3, INIT_M
    li.w    t4, INIT_S
    li.w    t8, 0x0     # Carry flag
1:
    b    1b

#t2: H, t3: M, t4: S
.org 0x9000
show_time:
    li.w    t1, MAX_10
    beq     t4, t1, carry_1

show_time_end:
    st.w    t4, t0, 0   # show time 
    addi.w  t4, t4, 1

1:
    b   1b

carry_1:
    li.w    t4, 0x0
    b       show_time_end

