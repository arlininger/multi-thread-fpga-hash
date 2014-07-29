/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/arlininger/FPGA/ZYBO/custom_core/MyProcessorIPLib/pcores/sha256_v1_00_a/devl/projnav/t_mysha.vhd";



static void work_a_2532002326_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3192);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3192);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2532002326_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;
    int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;

LAB0:    t1 = (t0 + 3632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 7284);
    t4 = (t0 + 4208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (t9 * 0.29999999999999999);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t10);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 7316);
    t4 = (t0 + 4208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 7348);
    *((int *)t2) = 0;
    t3 = (t0 + 7352);
    *((int *)t3) = 15;
    t11 = 0;
    t12 = 15;

LAB16:    if (t11 <= t12)
        goto LAB17;

LAB19:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 7452);
    t4 = (t0 + 4208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 7348);
    if (*((int *)t4) == 0)
        goto LAB21;

LAB24:    if (*((int *)t4) == 15)
        goto LAB22;

LAB25:
LAB23:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7420);
    t4 = (t0 + 4208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);

LAB20:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t9);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB18:    t2 = (t0 + 7348);
    t11 = *((int *)t2);
    t3 = (t0 + 7352);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB19;

LAB31:    t16 = (t11 + 1);
    t11 = t16;
    t4 = (t0 + 7348);
    *((int *)t4) = t11;
    goto LAB16;

LAB21:    xsi_set_current_line(87, ng0);
    t5 = (t0 + 7356);
    t7 = (t0 + 4208);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 32U);
    xsi_driver_first_trans_fast(t7);
    goto LAB20;

LAB22:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 7388);
    t4 = (t0 + 4208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    goto LAB20;

LAB26:;
LAB27:    goto LAB18;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB32:    goto LAB2;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

}


extern void work_a_2532002326_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2532002326_3212880686_p_0,(void *)work_a_2532002326_3212880686_p_1};
	xsi_register_didat("work_a_2532002326_3212880686", "isim/t_mysha_isim_beh.exe.sim/work/a_2532002326_3212880686.didat");
	xsi_register_executes(pe);
}
