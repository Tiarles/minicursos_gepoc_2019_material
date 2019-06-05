// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

// x86 libraries:
#include "../include/sp_functions_dev0.h"

// H files from Advanced C Function components
//#include "example_dll.h"

// Header files from additional sources (Advanced C Function)
// ----------------------------------------------------------------------------------------
// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines


































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _ic1_ia1__out;
double _ia1_ia1__out;
double _ib1_ia1__out;
double _vc1_va1__out;
double _vc2_va1__out;
double _inductance__out;
double _ref_a__out;
double _ref_b__out;
double _ref_c__out;
double _modulation_index__out;
double _resistance__out;
double _la_reciprocal__out;
double _lb_reciprocal__out;
double _lc_reciprocal__out;
double _c_function1__va;
double _c_function1__vb;
double _c_function1__vc;
double _c_function1__vab;
double _c_function1__vbc;
double _c_function1__va_m;
double _c_function1__vb_m;
double _c_function1__vc_m;
double _c_function1__vag1;
double _c_function1__vag2;
double _c_function1__vbg1;
double _c_function1__vbg2;
double _c_function1__vcg1;
double _c_function1__vcg2;
double _c_function1__TPER;
double _c_function1__Ts;
double _c_function1__Ts_pwm;
double _c_function1__fs;
double _c_function1__enable;
double _c_function1__t1;
double _c_function1__t2;
double _c_function1__t3;
double _c_function1__d1;
double _c_function1__d2;
double _c_function1__d3;
double _c_function1__v_alpha1;
double _c_function1__v_alpha;
double _c_function1__v_beta1;
double _c_function1__v_beta;
double _c_function1__vc1_m;
double _c_function1__vc2_m;
double _c_function1__ib_eq;
double _c_function1__ic_eq;
double _c_function1__COMP1;
double _c_function1__COMP2;
double _c_function1__COMP3;
double _c_function1__COMP4;
double _c_function1__COMP5;
double _c_function1__COMP6;
double _c_function1__COMPs1a;
double _c_function1__COMPs2a;
double _c_function1__COMPs1b;
double _c_function1__COMPs2b;
double _c_function1__COMPs1c;
double _c_function1__COMPs2c;
double _c_function1__sector;
double _c_function1__sextant;
double _c_function1__theta;
double _c_function1__Vcc_ref;
double _c_function1__C;
double _c_function1__a;
double _c_function1__K;
double _c_function1__Z;
double _c_function1__e;
double _c_function1__e_p;
double _c_function1__x_pi;
double _c_function1__x_pi_p;
double _c_function1__pi;
double _c_function1__ia_eq;
double _c_function1__i_ref;
double _c_function1__COMP1_p;
double _c_function1__COMP2_p;
double _c_function1__COMP3_p;
double _c_function1__COMP4_p;
double _c_function1__COMP5_p;
double _c_function1__COMP6_p;
double _c_function1__delta;
double _c_function1__error;
double _c_function1__hyteresis;
double _c_function1__sign;
double _c_function1__M;
double _c_function1__ia;
double _c_function1__ib;
double _c_function1__ic;
double _c_function1__ref_a;
double _c_function1__ref_b;
double _c_function1__ref_c;
double _c_function1__vc1;
double _c_function1__vc2;


double _c_function1__out1;
double _c_function1__out10;
double _c_function1__out11;
double _c_function1__out12;
double _c_function1__out13;
double _c_function1__out14;
double _c_function1__out15;
double _c_function1__out16;
double _c_function1__out17;
double _c_function1__out2;
double _c_function1__out3;
X_Int32 _c_function1__out4;
double _c_function1__out5;
double _c_function1__out6;
double _c_function1__out7;
double _c_function1__out8;
double _c_function1__out9;
X_UnInt32 _legc_pwm_modulator__channels[2] = {4, 5};
double _legc_pwm_modulator__limited_in[2];
X_UnInt32 _legc_pwm_modulator__update_mask;
X_UnInt32 _legc_pwm_modulator__sig_dir[2];

X_UnInt32 _lega_pwm_modulator__channels[2] = {2, 3};
double _lega_pwm_modulator__limited_in[2];
X_UnInt32 _lega_pwm_modulator__update_mask;
X_UnInt32 _lega_pwm_modulator__sig_dir[2];

X_UnInt32 _legb_pwm_modulator__channels[2] = {0, 1};
double _legb_pwm_modulator__limited_in[2];
X_UnInt32 _legb_pwm_modulator__update_mask;
X_UnInt32 _legb_pwm_modulator__sig_dir[2];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _ref_a__current_phase;
double _ref_b__current_phase;
double _ref_c__current_phase;
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ref_a__current_phase = 0.0 / 360.0f;
    _ref_b__current_phase = -120.0 / 360.0f;
    _ref_c__current_phase = 120.0 / 360.0f;
    _c_function1__va = 0, _c_function1__vb = 0, _c_function1__vc = 0;
    _c_function1__vab = 0, _c_function1__vbc = 0;
    _c_function1__va_m = 0, _c_function1__vb_m = 0, _c_function1__vc_m = 0;
    _c_function1__vag1 = 0, _c_function1__vag2 = 0, _c_function1__vbg1 = 0, _c_function1__vbg2 = 0, _c_function1__vcg1 = 0, _c_function1__vcg2 = 0;
    _c_function1__enable = 0;
    _c_function1__delta = 10;
    _c_function1__error = 0;
    _c_function1__hyteresis = 0;
    _c_function1__sign = 0;
    _c_function1__fs = 1260;
    _c_function1__Ts = 1 / _c_function1__fs;
    _c_function1__Ts_pwm = 0.5 * _c_function1__Ts;
    _c_function1__TPER = 100;
    _c_function1__t1 - 0, _c_function1__t2 = 0, _c_function1__t3 = 0;
    _c_function1__d1 = 0, _c_function1__d2 = 0, _c_function1__d3 = 0;
    _c_function1__v_alpha1 = 0, _c_function1__v_beta1 = 0, _c_function1__v_alpha = 0, _c_function1__v_beta = 0;
    _c_function1__vc1_m = 0, _c_function1__vc2_m = 0;
    _c_function1__ia_eq = 0, _c_function1__ic_eq = 0, _c_function1__ic_eq = 0;
    _c_function1__i_ref = 0;
    _c_function1__COMP1 = 0, _c_function1__COMP2 = 0, _c_function1__COMP3 = 0, _c_function1__COMP4 = 0, _c_function1__COMP5 = 0, _c_function1__COMP6 = 0;
    _c_function1__COMP1_p = 0, _c_function1__COMP2_p = 0, _c_function1__COMP3_p = 0, _c_function1__COMP4_p = 0, _c_function1__COMP5_p = 0, _c_function1__COMP6_p = 0;
    _c_function1__COMPs1a = 0, _c_function1__COMPs2a = 0, _c_function1__COMPs1b = 0, _c_function1__COMPs2b = 0, _c_function1__COMPs1c = 0, _c_function1__COMPs2c = 0;
    _c_function1__sector = 0, _c_function1__sextant = 0, _c_function1__theta = 0;
    _c_function1__Vcc_ref = 400;
    HIL_OutFloat(137363456, 0.0);
    HIL_OutFloat(137363458, 0.0);
    HIL_OutFloat(137363457, 0.0);
    HIL_OutFloat(137363459, 0.0);
    HIL_OutFloat(137363460, 0.0);
    HIL_OutFloat(137363461, 0.0);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    _legc_pwm_modulator__update_mask = 48;
    HIL_OutInt32(0x2000080 + _legc_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _legc_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x2000080 + _legc_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _legc_pwm_modulator__channels[1], 25);
    HIL_OutInt32(0x20001c0 + _legc_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _legc_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _legc_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000200 + _legc_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000240 + _legc_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _legc_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _legc_pwm_modulator__update_mask);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    _lega_pwm_modulator__update_mask = 12;
    HIL_OutInt32(0x2000080 + _lega_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _lega_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x2000080 + _lega_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _lega_pwm_modulator__channels[1], 25);
    HIL_OutInt32(0x20001c0 + _lega_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _lega_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _lega_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000200 + _lega_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000240 + _lega_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _lega_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _lega_pwm_modulator__update_mask);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    _legb_pwm_modulator__update_mask = 3;
    HIL_OutInt32(0x2000080 + _legb_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _legb_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x2000080 + _legb_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _legb_pwm_modulator__channels[1], 25);
    HIL_OutInt32(0x20001c0 + _legb_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _legb_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _legb_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000200 + _legb_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000240 + _legb_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _legb_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _legb_pwm_modulator__update_mask);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Ic1.Ia1
    _ic1_ia1__out = HIL_InAO(0xf);
    // Generated from the component: Ia1.Ia1
    _ia1_ia1__out = HIL_InAO(0xb);
    // Generated from the component: Ib1.Ia1
    _ib1_ia1__out = HIL_InAO(0xd);
    // Generated from the component: Vc1.Va1
    _vc1_va1__out = HIL_InAO(0x206);
    // Generated from the component: Vc2.Va1
    _vc2_va1__out = HIL_InAO(0x207);
    // Generated from the component: inductance
    _inductance__out = XIo_InFloat(0x55000100);
    // Generated from the component: ref_a
    _ref_a__out = (400.0 * sin(2.0f * M_PI * _ref_a__current_phase) + 0.0);
    // Generated from the component: ref_b
    _ref_b__out = (400.0 * sin(2.0f * M_PI * _ref_b__current_phase) + 0.0);
    // Generated from the component: ref_c
    _ref_c__out = (400.0 * sin(2.0f * M_PI * _ref_c__current_phase) + 0.0);
    // Generated from the component: modulation index
    _modulation_index__out = XIo_InFloat(0x55000104);
    // Generated from the component: resistance
    _resistance__out = XIo_InFloat(0x55000108);
    // Generated from the component: La.reciprocal
    _la_reciprocal__out = 1.0 / (_inductance__out);
    // Generated from the component: Lb.reciprocal
    _lb_reciprocal__out = 1.0 / (_inductance__out);
    // Generated from the component: Lc.reciprocal
    _lc_reciprocal__out = 1.0 / (_inductance__out);
    // Generated from the component: C function1
    _c_function1__M = _modulation_index__out;
    _c_function1__ia = _ia1_ia1__out;
    _c_function1__ib = _ib1_ia1__out;
    _c_function1__ic = _ic1_ia1__out;
    _c_function1__ref_a = _ref_a__out;
    _c_function1__ref_b = _ref_b__out;
    _c_function1__ref_c = _ref_c__out;
    _c_function1__vc1 = _vc1_va1__out;
    _c_function1__vc2 = _vc2_va1__out;
    _c_function1__out1 = _c_function1__va_m;
    _c_function1__out2 = _c_function1__vb_m;
    _c_function1__out3 = _c_function1__vc_m;
    _c_function1__out4 = _c_function1__enable;
    _c_function1__out5 = _c_function1__d1;
    _c_function1__out6 = _c_function1__d2;
    _c_function1__out7 = _c_function1__d3;
    _c_function1__out8 = _c_function1__sector;
    _c_function1__out9 = _c_function1__error;
    _c_function1__out10 = _c_function1__sextant;
    _c_function1__out11 = _c_function1__hyteresis;
    _c_function1__out12 = _c_function1__vag1;
    _c_function1__out13 = _c_function1__vag2;
    _c_function1__out14 = _c_function1__vbg1;
    _c_function1__out15 = _c_function1__vbg2;
    _c_function1__out16 = _c_function1__vcg1;
    _c_function1__out17 = _c_function1__vcg2;
    // Generated from the component: Ra.Vs
    HIL_OutFloat(137363456, (float) _resistance__out);
    // Generated from the component: Rc.Vs
    HIL_OutFloat(137363458, (float) _resistance__out);
    // Generated from the component: Rb.Vs
    HIL_OutFloat(137363457, (float) _resistance__out);
    // Generated from the component: La.Is
    HIL_OutFloat(137363459, (float) _la_reciprocal__out);
    // Generated from the component: Lb.Is
    HIL_OutFloat(137363460, (float) _lb_reciprocal__out);
    // Generated from the component: Lc.Is
    HIL_OutFloat(137363461, (float) _lc_reciprocal__out);
    // Generated from the component: vb_ref
    HIL_OutAO(0x4008, (float)_c_function1__out2);
    // Generated from the component: d2
    HIL_OutAO(0x4001, (float)_c_function1__out6);
    // Generated from the component: LegC.PWM_Modulator
    if (_c_function1__out16 < 0.0)
        _legc_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function1__out16 > 100.0)
        _legc_pwm_modulator__limited_in[0] = 100.0;
    else
        _legc_pwm_modulator__limited_in[0] = _c_function1__out16;
    HIL_OutInt32(0x2000040 + _legc_pwm_modulator__channels[0], ((unsigned)((_legc_pwm_modulator__limited_in[0] - (0.0)) * 25.0)));
    if (_c_function1__out17 < 0.0)
        _legc_pwm_modulator__limited_in[1] = 0.0;
    else if (_c_function1__out17 > 100.0)
        _legc_pwm_modulator__limited_in[1] = 100.0;
    else
        _legc_pwm_modulator__limited_in[1] = _c_function1__out17;
    HIL_OutInt32(0x2000040 + _legc_pwm_modulator__channels[1], ((unsigned)((_legc_pwm_modulator__limited_in[1] - (0.0)) * 25.0)));
    if (_c_function1__out4 == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _legc_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _legc_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _legc_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _legc_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _legc_pwm_modulator__update_mask);
    // Generated from the component: hysteresis
    HIL_OutAO(0x4004, (float)_c_function1__out11);
    // Generated from the component: sextant
    HIL_OutAO(0x4006, (float)_c_function1__out10);
    // Generated from the component: d3
    HIL_OutAO(0x4002, (float)_c_function1__out7);
    // Generated from the component: va_ref
    HIL_OutAO(0x4007, (float)_c_function1__out1);
    // Generated from the component: LegA.PWM_Modulator
    if (_c_function1__out12 < 0.0)
        _lega_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function1__out12 > 100.0)
        _lega_pwm_modulator__limited_in[0] = 100.0;
    else
        _lega_pwm_modulator__limited_in[0] = _c_function1__out12;
    HIL_OutInt32(0x2000040 + _lega_pwm_modulator__channels[0], ((unsigned)((_lega_pwm_modulator__limited_in[0] - (0.0)) * 25.0)));
    if (_c_function1__out13 < 0.0)
        _lega_pwm_modulator__limited_in[1] = 0.0;
    else if (_c_function1__out13 > 100.0)
        _lega_pwm_modulator__limited_in[1] = 100.0;
    else
        _lega_pwm_modulator__limited_in[1] = _c_function1__out13;
    HIL_OutInt32(0x2000040 + _lega_pwm_modulator__channels[1], ((unsigned)((_lega_pwm_modulator__limited_in[1] - (0.0)) * 25.0)));
    if (_c_function1__out4 == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _lega_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _lega_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _lega_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _lega_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _lega_pwm_modulator__update_mask);
    // Generated from the component: vc_ref
    HIL_OutAO(0x4009, (float)_c_function1__out3);
    // Generated from the component: error
    HIL_OutAO(0x4003, (float)_c_function1__out9);
    // Generated from the component: LegB.PWM_Modulator
    if (_c_function1__out14 < 0.0)
        _legb_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function1__out14 > 100.0)
        _legb_pwm_modulator__limited_in[0] = 100.0;
    else
        _legb_pwm_modulator__limited_in[0] = _c_function1__out14;
    HIL_OutInt32(0x2000040 + _legb_pwm_modulator__channels[0], ((unsigned)((_legb_pwm_modulator__limited_in[0] - (0.0)) * 25.0)));
    if (_c_function1__out15 < 0.0)
        _legb_pwm_modulator__limited_in[1] = 0.0;
    else if (_c_function1__out15 > 100.0)
        _legb_pwm_modulator__limited_in[1] = 100.0;
    else
        _legb_pwm_modulator__limited_in[1] = _c_function1__out15;
    HIL_OutInt32(0x2000040 + _legb_pwm_modulator__channels[1], ((unsigned)((_legb_pwm_modulator__limited_in[1] - (0.0)) * 25.0)));
    if (_c_function1__out4 == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _legb_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _legb_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _legb_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _legb_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _legb_pwm_modulator__update_mask);
    // Generated from the component: sector
    HIL_OutAO(0x4005, (float)_c_function1__out8);
    // Generated from the component: d1
    HIL_OutAO(0x4000, (float)_c_function1__out5);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ref_a
    _ref_a__current_phase += 60.0 * 5e-05;
    if (_ref_a__current_phase >= 1.0f) {
        _ref_a__current_phase -= 1.0f;
    }
    // Generated from the component: ref_b
    _ref_b__current_phase += 60.0 * 5e-05;
    if (_ref_b__current_phase >= 1.0f) {
        _ref_b__current_phase -= 1.0f;
    }
    // Generated from the component: ref_c
    _ref_c__current_phase += 60.0 * 5e-05;
    if (_ref_c__current_phase >= 1.0f) {
        _ref_c__current_phase -= 1.0f;
    }
    // Generated from the component: C function1
    _c_function1__va = _c_function1__M * _c_function1__ref_a / 400;
    _c_function1__vb = _c_function1__M * _c_function1__ref_b / 400;
    _c_function1__vc = _c_function1__M * _c_function1__ref_c / 400;
    _c_function1__vab = _c_function1__va - _c_function1__vb;
    _c_function1__vbc = _c_function1__vb - _c_function1__vc;
    _c_function1__v_alpha = 0.666666666666667 * _c_function1__vab + 0.333333333333333 * _c_function1__vbc;
    _c_function1__v_beta = 0.577350269189626 * _c_function1__vbc;
    if (_c_function1__v_beta > 0) {
        if (_c_function1__v_beta - sqrt(3)*_c_function1__v_alpha > 0) {
            if (_c_function1__v_beta + sqrt(3)*_c_function1__v_alpha > 0) {
                _c_function1__sextant = 2;
            }
            else _c_function1__sextant = 3;
        }
        else _c_function1__sextant = 1;
    }
    else {
        if (_c_function1__v_beta - sqrt(3)*_c_function1__v_alpha > 0) {
            _c_function1__sextant = 4;
        }
        else {
            if (_c_function1__v_beta + sqrt(3)*_c_function1__v_alpha > 0) {
                _c_function1__sextant = 6;
            }
            else {
                _c_function1__sextant = 5;
            }
        }
    }
    _c_function1__theta = (3.141592653589793 / 3) * (_c_function1__sextant - 1);
    _c_function1__v_alpha1 = _c_function1__v_alpha * cos(_c_function1__theta) + _c_function1__v_beta * sin(_c_function1__theta);
    _c_function1__v_beta1 = _c_function1__v_alpha * (-sin(_c_function1__theta)) + _c_function1__v_beta * cos(_c_function1__theta);
    if (_c_function1__v_beta1 - 3 * sqrt(2) / 8 >= 0)_c_function1__sector = 4;
    else {
        if (-sqrt(3)*_c_function1__v_alpha1 + _c_function1__v_beta1 + 3 * sqrt(2) / 4 >= 0) {
            if (sqrt(3)*_c_function1__v_alpha1 + _c_function1__v_beta1 - 3 * sqrt(2) / 4 >= 0)_c_function1__sector = 3;
            else _c_function1__sector = 1;
        }
        else _c_function1__sector = 2;
    }
    if (_c_function1__sextant == 1) {
        _c_function1__ia_eq = _c_function1__ia;
        _c_function1__ib_eq = _c_function1__ib;
        _c_function1__ic_eq = _c_function1__ic;
    }
    else if (_c_function1__sextant == 2) {
        _c_function1__ia_eq = -_c_function1__ic;
        _c_function1__ib_eq = _c_function1__ia;
        _c_function1__ic_eq = -_c_function1__ib;
    }
    else if (_c_function1__sextant == 3) {
        _c_function1__ia_eq = _c_function1__ib;
        _c_function1__ib_eq = _c_function1__ic;
        _c_function1__ic_eq = _c_function1__ia;
    }
    else if (_c_function1__sextant == 4) {
        _c_function1__ia_eq = -_c_function1__ia;
        _c_function1__ib_eq = _c_function1__ib;
        _c_function1__ic_eq = -_c_function1__ic;
    }
    else if (_c_function1__sextant == 5) {
        _c_function1__ia_eq = _c_function1__ic;
        _c_function1__ib_eq = _c_function1__ia;
        _c_function1__ic_eq = _c_function1__ib;
    }
    else if (_c_function1__sextant == 6) {
        _c_function1__ia_eq = -_c_function1__ib;
        _c_function1__ib_eq = _c_function1__ic;
        _c_function1__ic_eq = -_c_function1__ia;
    }
    _c_function1__error = 400 - _c_function1__vc1;
    if (_c_function1__error >= 0)_c_function1__sign = 1;
    else _c_function1__sign = -1;
    if (_c_function1__sign * _c_function1__error > _c_function1__delta)_c_function1__hyteresis = 1;
    if (_c_function1__sign * _c_function1__error < _c_function1__delta)_c_function1__hyteresis = 0;
    if (_c_function1__sector == 1) {
        _c_function1__t1 = (1.732050807568877 * _c_function1__v_beta1) * _c_function1__Ts_pwm;
        _c_function1__t2 = (1.5 * _c_function1__v_alpha1 - 0.866025403784439 * _c_function1__v_beta1) * _c_function1__Ts_pwm;
        _c_function1__t3 = _c_function1__Ts_pwm - _c_function1__t1 - _c_function1__t2;
        _c_function1__d1 = _c_function1__t1 / _c_function1__Ts_pwm;
        _c_function1__d2 = _c_function1__t2 / _c_function1__Ts_pwm;
        _c_function1__d3 = _c_function1__t3 / _c_function1__Ts_pwm;
        if (_c_function1__hyteresis == 1) {
            if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq <= 0) & (_c_function1__ic_eq <= 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq > 0) & (_c_function1__ic_eq > 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = (_c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = 0.0;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = _c_function1__TPER;
                    _c_function1__COMP6 = (_c_function1__d2 + _c_function1__d3) * _c_function1__TPER;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = (_c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = (_c_function1__d2 + _c_function1__d3) * _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d2 + _c_function1__d3) * _c_function1__TPER;
                }
            }
            else if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq <= 0) & (_c_function1__ic_eq > 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq > 0) & (_c_function1__ic_eq <= 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = (_c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d1 + _c_function1__d2 + _c_function1__d3) * _c_function1__TPER;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = (_c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d2 + _c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = _c_function1__TPER;
                }
            }
            else if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq > 0) & (_c_function1__ic_eq <= 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq <= 0) & (_c_function1__ic_eq > 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = 0.0;
                    _c_function1__COMP2 = (_c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP3 = 0.0;
                    _c_function1__COMP4 = (_c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = 0.0;
                    _c_function1__COMP2 = (_c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP3 = 0.0;
                    _c_function1__COMP4 = (_c_function1__d2 + _c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
            }
            else if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq > 0) & (_c_function1__ic_eq > 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq <= 0) & (_c_function1__ic_eq <= 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = (_c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = (_c_function1__d1 + _c_function1__d3) * _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d1 + _c_function1__d3) * _c_function1__TPER;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = 0.0;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                }
            }
        }
        else {
            if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                _c_function1__COMP1 = (0.33333 * _c_function1__d3 + 0.5 * _c_function1__d1 + 0.5 * _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP2 = (0.66666 * _c_function1__d3 + _c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP3 = (0.3333 * _c_function1__d3 + 0.5 * _c_function1__d1) * _c_function1__TPER;
                _c_function1__COMP4 = (0.66666 * _c_function1__d3 + _c_function1__d1 + 0.5 * _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP5 = (0.33333 * _c_function1__d3) * _c_function1__TPER;
                _c_function1__COMP6 = (0.66666 * _c_function1__d3 + 0.5 * _c_function1__d1 + 0.5 * _c_function1__d2) * _c_function1__TPER;
            }
            else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                _c_function1__COMP1 = (0.33333 * _c_function1__d3 + 0.5 * _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP2 = (0.66666 * _c_function1__d3 + 0.5 * _c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP3 = (0.33333 * _c_function1__d3 + 0.5 * _c_function1__d1 + 0.5 * _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP4 = (0.66666 * _c_function1__d3 + _c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP5 = (0.33333 * _c_function1__d3) * _c_function1__TPER;
                _c_function1__COMP6 = (0.66666 * _c_function1__d3 + 0.5 * _c_function1__d1 + 0.5 * _c_function1__d2) * _c_function1__TPER;
            }
        }
    }
    else if (_c_function1__sector == 2) {
        _c_function1__t1 = (1.732050807568877 * _c_function1__v_beta1) * _c_function1__Ts_pwm;
        _c_function1__t2 = (1.5 * _c_function1__v_alpha1 - 0.866025403784439 * _c_function1__v_beta1 - 1) * _c_function1__Ts_pwm;
        _c_function1__t3 = _c_function1__Ts_pwm - _c_function1__t1 - _c_function1__t2;
        _c_function1__d1 = _c_function1__t1 / _c_function1__Ts_pwm;
        _c_function1__d2 = _c_function1__t2 / _c_function1__Ts_pwm;
        _c_function1__d3 = _c_function1__t3 / _c_function1__Ts_pwm;
        if (_c_function1__hyteresis == 1) {
            if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq > 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq <= 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = (_c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = 0.0;
                    _c_function1__COMP4 = (_c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = (_c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d2 + _c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
            }
            else if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq <= 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq > 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = 0.0;
                    _c_function1__COMP4 = (_c_function1__d3 + _c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d3) * _c_function1__TPER;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = (_c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d3) * _c_function1__TPER;
                }
            }
        }
        else {
            if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                _c_function1__COMP1 = (0.5 * _c_function1__d3 + _c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP2 = _c_function1__TPER;
                _c_function1__COMP3 = 0.0;
                _c_function1__COMP4 = (0.5 * _c_function1__d3 + _c_function1__d1) * _c_function1__TPER;
                _c_function1__COMP5 = 0.0;
                _c_function1__COMP6 = (0.5 * _c_function1__d3) * _c_function1__TPER;
            }
            else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                _c_function1__COMP1 = (0.5 * _c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP2 = _c_function1__TPER;
                _c_function1__COMP3 = (0.5 * _c_function1__d3 + _c_function1__d2 + _c_function1__d1) * _c_function1__TPER;
                _c_function1__COMP4 = _c_function1__TPER;
                _c_function1__COMP5 = 0.0;
                _c_function1__COMP6 = (0.5 * _c_function1__d3) * _c_function1__TPER;
            }
        }
    }
    else if (_c_function1__sector == 3) {
        _c_function1__t1 = (-1.732050807568877 * _c_function1__v_beta1 + 1) * _c_function1__Ts_pwm;
        _c_function1__t2 = (1.5 * _c_function1__v_alpha1 + 0.866025403784439 * _c_function1__v_beta1 - 1) * _c_function1__Ts_pwm;
        _c_function1__t3 = _c_function1__Ts_pwm - _c_function1__t1 - _c_function1__t2;
        _c_function1__d1 = _c_function1__t1 / _c_function1__Ts_pwm;
        _c_function1__d2 = _c_function1__t2 / _c_function1__Ts_pwm;
        _c_function1__d3 = _c_function1__t3 / _c_function1__Ts_pwm;
        if (_c_function1__hyteresis == 1) {
            if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq <= 0) & (_c_function1__ic_eq <= 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq > 0) & (_c_function1__ic_eq > 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = (_c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = 0.0;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d3) * _c_function1__TPER;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = (_c_function1__d3) * _c_function1__TPER;
                    _c_function1__COMP2 = (_c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d3) * _c_function1__TPER;
                }
            }
            else if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq <= 0) & (_c_function1__ic_eq > 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq > 0) & (_c_function1__ic_eq <= 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d3 + _c_function1__d1) * _c_function1__TPER;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = (_c_function1__d3) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d1 + _c_function1__d3) * _c_function1__TPER;
                }
            }
            else if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq > 0) & (_c_function1__ic_eq <= 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq <= 0) & (_c_function1__ic_eq > 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = (_c_function1__d3) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (0.0) * _c_function1__TPER;
                    _c_function1__COMP4 = (_c_function1__d1 + _c_function1__d3) * _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = 0.0;
                    _c_function1__COMP2 = (_c_function1__d2 + _c_function1__d3) * _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
            }
            else if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ia_eq > 0) & (_c_function1__ic_eq > 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ia_eq <= 0) & (_c_function1__ic_eq <= 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = (_c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d3) * _c_function1__TPER;
                    _c_function1__COMP4 = (_c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = 0.0;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d1) * _c_function1__TPER;
                }
            }
        }
        else {
            if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                _c_function1__COMP1 = (0.5 * _c_function1__d3 + 0.5 * _c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP2 = _c_function1__TPER;
                _c_function1__COMP3 = (0.5 * _c_function1__d3) * _c_function1__TPER;
                _c_function1__COMP4 = (0.5 * _c_function1__d1 + _c_function1__d2 + _c_function1__d3) * _c_function1__TPER;
                _c_function1__COMP5 = 0.0;
                _c_function1__COMP6 = (0.5 * _c_function1__d3 + 0.5 * _c_function1__d1) * _c_function1__TPER;
            }
            else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                _c_function1__COMP1 = (0.5 * _c_function1__d1) * _c_function1__TPER;
                _c_function1__COMP2 = (_c_function1__d1 + _c_function1__d2 + 0.5 * _c_function1__d3) * _c_function1__TPER;
                _c_function1__COMP3 = (0.5 * _c_function1__d1 + _c_function1__d2 + 0.5 * _c_function1__d3) * _c_function1__TPER;
                _c_function1__COMP4 = _c_function1__TPER;
                _c_function1__COMP5 = 0.0;
                _c_function1__COMP6 = (0.5 * _c_function1__d3 + 0.5 * _c_function1__d1) * _c_function1__TPER;
            }
        }
    }
    else if (_c_function1__sector == 4) {
        _c_function1__t1 = (1.732050807568877 * _c_function1__v_beta1 - 1) * _c_function1__Ts_pwm;
        _c_function1__t2 = (1.5 * _c_function1__v_alpha1 - 0.866025403784439 * _c_function1__v_beta1) * _c_function1__Ts_pwm;
        _c_function1__t3 = _c_function1__Ts_pwm - _c_function1__t1 - _c_function1__t2;
        _c_function1__d1 = _c_function1__t1 / _c_function1__Ts_pwm;
        _c_function1__d2 = _c_function1__t2 / _c_function1__Ts_pwm;
        _c_function1__d3 = _c_function1__t3 / _c_function1__Ts_pwm;
        if (_c_function1__hyteresis == 1) {
            if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ic_eq > 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ic_eq <= 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d3 + _c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d3) * _c_function1__TPER;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = 0.0;
                    _c_function1__COMP2 = (_c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP3 = _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = (_c_function1__d3) * _c_function1__TPER;
                }
            }
            else if (((_c_function1__vc2 <= _c_function1__vc1) & (_c_function1__ic_eq <= 0)) || ((_c_function1__vc2 > _c_function1__vc1) & (_c_function1__ic_eq > 0))) {
                if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                    _c_function1__COMP1 = (_c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP2 = _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
                else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                    _c_function1__COMP1 = 0.0;
                    _c_function1__COMP2 = (_c_function1__d2) * _c_function1__TPER;
                    _c_function1__COMP3 = (_c_function1__d2 + _c_function1__d1) * _c_function1__TPER;
                    _c_function1__COMP4 = _c_function1__TPER;
                    _c_function1__COMP5 = 0.0;
                    _c_function1__COMP6 = 0.0;
                }
            }
        }
        else {
            if (_c_function1__sextant == 1 || _c_function1__sextant == 3 || _c_function1__sextant == 5) {
                _c_function1__COMP1 = (0.5 * _c_function1__d3 + _c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP2 = _c_function1__TPER;
                _c_function1__COMP3 = (0.5 * _c_function1__d3 + _c_function1__d1) * _c_function1__TPER;
                _c_function1__COMP4 = _c_function1__TPER;
                _c_function1__COMP5 = 0.0;
                _c_function1__COMP6 = (0.5 * _c_function1__d3) * _c_function1__TPER;
            }
            else if (_c_function1__sextant == 2 || _c_function1__sextant == 4 || _c_function1__sextant == 6) {
                _c_function1__COMP1 = 0.0;
                _c_function1__COMP2 = (0.5 * _c_function1__d3 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP3 = (0.5 * _c_function1__d3 + _c_function1__d1 + _c_function1__d2) * _c_function1__TPER;
                _c_function1__COMP4 = _c_function1__TPER;
                _c_function1__COMP5 = 0.0;
                _c_function1__COMP6 = (0.5 * _c_function1__d3) * _c_function1__TPER;
            }
        }
    }
    if (_c_function1__sextant == 1 || _c_function1__sextant == 2) {
        _c_function1__COMPs1a = _c_function1__COMP1;
        _c_function1__COMPs2a = _c_function1__COMP2;
        _c_function1__COMPs1b = _c_function1__COMP3;
        _c_function1__COMPs2b = _c_function1__COMP4;
        _c_function1__COMPs1c = _c_function1__COMP5;
        _c_function1__COMPs2c = _c_function1__COMP6;
    }
    else if (_c_function1__sextant == 3 || _c_function1__sextant == 4) {
        _c_function1__COMPs1a = _c_function1__COMP5;
        _c_function1__COMPs2a = _c_function1__COMP6;
        _c_function1__COMPs1b = _c_function1__COMP1;
        _c_function1__COMPs2b = _c_function1__COMP2;
        _c_function1__COMPs1c = _c_function1__COMP3;
        _c_function1__COMPs2c = _c_function1__COMP4;
    }
    else if (_c_function1__sextant == 5 || _c_function1__sextant == 6) {
        _c_function1__COMPs1a = _c_function1__COMP3;
        _c_function1__COMPs2a = _c_function1__COMP4;
        _c_function1__COMPs1b = _c_function1__COMP5;
        _c_function1__COMPs2b = _c_function1__COMP6;
        _c_function1__COMPs1c = _c_function1__COMP1;
        _c_function1__COMPs2c = _c_function1__COMP2;
    }
    _c_function1__vag1 = _c_function1__COMPs1a;
    _c_function1__vag2 = _c_function1__COMPs2a;
    _c_function1__vbg1 = _c_function1__COMPs1b;
    _c_function1__vbg2 = _c_function1__COMPs2b;
    _c_function1__vcg1 = _c_function1__COMPs1c;
    _c_function1__vcg2 = _c_function1__COMPs2c;
    _c_function1__va_m = _c_function1__vag1 + _c_function1__vag2;
    _c_function1__vb_m = _c_function1__vbg1 + _c_function1__vbg2;
    _c_function1__vc_m = _c_function1__vcg1 + _c_function1__vcg2;
    _c_function1__enable = 1;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------