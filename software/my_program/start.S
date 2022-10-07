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
#define MAX_10          0xa
#define MAX_60          0x60
#define MAX_1000        0xa00
#define MAX_6000        0x6000
#define MAX_40000       0x40000
#define MAX_300000      0x300000

#define MASK_0      0xf
#define MASK_1      0xf0
#define MASK_2      0xf00
#define MASK_3      0xf000
#define MASK_4      0xf0000
#define MASK_5      0xf00000

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
    #li.w    t1, 0x00001003
    csrwr   t1, LOONGARCH_CSR_TCFG

    /* Enable clock interrupt */
    li.w    t1, 0x800
    csrwr   t1, LOONGARCH_CSR_ECFG

    # Initialize time 
    li.w    t0, NUM_ADDR
    #li.w    t4, INIT_S
    li.w    t4, 0x235950
1:
    b    1b

#t2: H, t3: M, t4: S
.org 0x9000
show_time:
    li.w    t1, MAX_10
    andi    t5, t4, MASK_0
    beq     t5, t1, carry_0

show_time_end:
    st.w    t4, t0, 0   # show time 
    addi.w  t4, t4, 1

1:
    b   1b

carry_0:
    sub.w   t4, t4, t5

    li.w    t1, MAX_60
    addi.w  t4, t4, 0x10    
    andi    t5, t4, MASK_1
    beq     t5, t1, carry_1 

    b       show_time_end

carry_1:
    sub.w   t4, t4, t5 

    li.w    t1, MAX_1000
    addi.w  t4, t4, 0x100 
    andi    t5, t4, MASK_2
    beq     t5, t1, carry_2 

    b       show_time_end 

carry_2:
    sub.w   t4, t4, t5 

    li.w    t1, MAX_6000
    li.w    t3, 0x1000
    add.w   t4, t4, t3 
    li.w    t3, MASK_3
    and     t5, t4, t3
    beq     t5, t1, carry_3 

    b       show_time_end 
    
carry_3:
    sub.w   t4, t4, t5 

    li.w    t1, MAX_40000
    li.w    t3, 0x10000
    add.w   t4, t4, t3 
    li.w    t3, MASK_4
    and     t5, t4, t3
    beq     t5, t1, carry_4 

    b       show_time_end 
    
carry_4:
    sub.w   t4, t4, t5 

    li.w    t1, MAX_300000
    li.w    t3, 0x100000
    add.w   t4, t4, t3 
    li.w    t3, MASK_5
    and     t5, t4, t3
    beq     t5, t1, carry_5 

    b       show_time_end 

carry_5:
    sub.w   t4, t4, t5 
    b       show_time_end 
