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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_STANDARD;
static const char *ng1 = "Function tree_adder ended without a return statement";
static const char *ng2 = "C:/Users/IT CITY/Documents/CAD/Project/Project/Rasht.vhd";



double work_a_3573044658_3212880686_sub_1917195379_3057020925(char *t1, char *t2, int t3, int t4)
{
    char t5[608];
    char t6[32];
    char t7[16];
    char t14[8];
    char t20[8];
    char t26[8];
    char t32[8];
    char t38[8];
    double t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    int t47;
    unsigned char t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    double t53;
    char *t54;
    char *t55;
    double t56;
    double t57;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((STD_STANDARD) + 472);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t9 + 80U);
    *((unsigned int *)t16) = 8U;
    t17 = (t5 + 124U);
    t18 = ((STD_STANDARD) + 472);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 8U;
    t23 = (t5 + 244U);
    t24 = ((STD_STANDARD) + 384);
    t25 = (t23 + 88U);
    *((char **)t25) = t24;
    t27 = (t23 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t23 + 80U);
    *((unsigned int *)t28) = 4U;
    t29 = (t5 + 364U);
    t30 = ((STD_STANDARD) + 472);
    t31 = (t29 + 88U);
    *((char **)t31) = t30;
    t33 = (t29 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, 0);
    t34 = (t29 + 80U);
    *((unsigned int *)t34) = 8U;
    t35 = (t5 + 484U);
    t36 = ((STD_STANDARD) + 472);
    t37 = (t35 + 88U);
    *((char **)t37) = t36;
    t39 = (t35 + 56U);
    *((char **)t39) = t38;
    xsi_type_set_default_value(t36, t38, 0);
    t40 = (t35 + 80U);
    *((unsigned int *)t40) = 8U;
    t41 = (t6 + 4U);
    t42 = (t2 != 0);
    if (t42 == 1)
        goto LAB3;

LAB2:    t43 = (t6 + 12U);
    *((char **)t43) = t7;
    t44 = (t6 + 20U);
    *((int *)t44) = t3;
    t45 = (t6 + 24U);
    *((int *)t45) = t4;
    t46 = (t4 - t3);
    t47 = (t46 + 1);
    t48 = (t47 == 2);
    if (t48 != 0)
        goto LAB4;

LAB6:    t10 = (t3 + t4);
    t46 = (t10 / 2);
    t8 = (t23 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t46;
    t8 = (t23 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t53 = work_a_3573044658_3212880686_sub_1917195379_3057020925(t1, t2, t3, t10);
    t8 = (t9 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((double *)t8) = t53;
    t8 = (t23 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t46 = (t10 + 1);
    t53 = work_a_3573044658_3212880686_sub_1917195379_3057020925(t1, t2, t46, t4);
    t8 = (t17 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((double *)t8) = t53;
    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t53 = *((double *)t12);
    t8 = (t17 + 56U);
    t13 = *((char **)t8);
    t56 = *((double *)t13);
    t57 = (t53 + t56);
    t0 = t57;

LAB1:    return t0;
LAB3:    *((char **)t41) = t2;
    goto LAB2;

LAB4:    t49 = (t3 - 0);
    t11 = (t49 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t3);
    t50 = (8U * t11);
    t51 = (0 + t50);
    t52 = (t2 + t51);
    t53 = *((double *)t52);
    t54 = (t29 + 56U);
    t55 = *((char **)t54);
    t54 = (t55 + 0);
    *((double *)t54) = t53;
    t10 = (t4 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t4);
    t50 = (8U * t11);
    t51 = (0 + t50);
    t8 = (t2 + t51);
    t53 = *((double *)t8);
    t12 = (t35 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((double *)t12) = t53;
    t8 = (t29 + 56U);
    t12 = *((char **)t8);
    t53 = *((double *)t12);
    t8 = (t35 + 56U);
    t13 = *((char **)t8);
    t56 = *((double *)t13);
    t57 = (t53 + t56);
    t0 = t57;
    goto LAB1;

LAB5:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

static void work_a_3573044658_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    double t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(63, ng2);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (4U - 1);
    t4 = work_a_3573044658_3212880686_sub_1917195379_3057020925(t0, t2, 0, t3);
    t1 = (t0 + 2752);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((double *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 2672);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3573044658_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3573044658_3212880686_p_0};
	static char *se[] = {(void *)work_a_3573044658_3212880686_sub_1917195379_3057020925};
	xsi_register_didat("work_a_3573044658_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_3573044658_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
