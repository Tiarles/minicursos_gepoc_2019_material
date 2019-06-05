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
double _resistance__out;
double _ref_c__out;
double _ref_a__out;
double _ref_b__out;
double _modulation_index__out;
double _inductance__out;
double _c_function1__va;
double _c_function1__vb;
double _c_function1__vc;
double _c_function1__TPER;
double _c_function1__f;
double _c_function1__V;
double _c_function1__Vcc;
double _c_function1__va_m;
double _c_function1__vb_m;
double _c_function1__vc_m;
double _c_function1__enable;
double _c_function1__vab;
double _c_function1__vbc;
double _c_function1__vo;
double _c_function1__c1;
double _c_function1__c2;
double _c_function1__c3;
double _c_function1__c4;
double _c_function1__c5;
double _c_function1__c6;
double _c_function1__min;
double _c_function1__max;
double _c_function1__vag;
double _c_function1__vbg;
double _c_function1__vcg;
double _c_function1__M;
double _c_function1__ref_a;
double _c_function1__ref_b;
double _c_function1__ref_c;


double _c_function1__out1;
double _c_function1__out10;
double _c_function1__out2;
double _c_function1__out3;
X_Int32 _c_function1__out4;
double _c_function1__out5;
double _c_function1__out6;
double _c_function1__out7;
double _c_function1__out8;
double _c_function1__out9;
double _lb_reciprocal__out;
double _lc_reciprocal__out;
double _la_reciprocal__out;
X_UnInt32 _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[1] = {2};
double _three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter1_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[1] = {1};
double _three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter1_igbt_leg2_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[1] = {0};
double _three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter1_igbt_leg3_pwm_modulator__sig_dir[1];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _ref_c__current_phase;
double _ref_a__current_phase;
double _ref_b__current_phase;
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ref_c__current_phase = 120.0 / 360.0f;
    _ref_a__current_phase = 0.0 / 360.0f;
    _ref_b__current_phase = -120.0 / 360.0f;
    HIL_OutFloat(137363458, 0.0);
    HIL_OutFloat(137363456, 0.0);
    HIL_OutFloat(137363457, 0.0);
    _c_function1__va = 0, _c_function1__vb = 0, _c_function1__vc = 0;
    _c_function1__vag = 0, _c_function1__vbg = 0, _c_function1__vcg = 0;
    _c_function1__va_m = 0, _c_function1__vb_m = 0, _c_function1__vc_m = 0;
    _c_function1__V = 800;
    _c_function1__Vcc = 800;
    _c_function1__enable = 0;
    _c_function1__TPER = 100;
    _c_function1__f = 60;
    _c_function1__c1 = 0, _c_function1__c2 = 0, _c_function1__c3 = 0, _c_function1__c4 = 0, _c_function1__c5 = 0, _c_function1__c6 = 0;
    _c_function1__min = 0, _c_function1__max = 0;
    _c_function1__vo = 0;
    _c_function1__vab = 0, _c_function1__vbc = 0;
    HIL_OutAO(0x4008, 0.0f);
    _three_phase_inverter1_igbt_leg1_pwm_modulator__update_mask = 4;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg1_pwm_modulator__update_mask);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    _three_phase_inverter1_igbt_leg2_pwm_modulator__update_mask = 2;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg2_pwm_modulator__update_mask);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    _three_phase_inverter1_igbt_leg3_pwm_modulator__update_mask = 1;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg3_pwm_modulator__update_mask);
    HIL_OutFloat(137363460, 0.0);
    HIL_OutFloat(137363461, 0.0);
    HIL_OutFloat(137363459, 0.0);
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
    // Generated from the component: resistance
    _resistance__out = XIo_InFloat(0x55000108);
    // Generated from the component: ref_c
    _ref_c__out = (400.0 * sin(2.0f * M_PI * _ref_c__current_phase) + 0.0);
    // Generated from the component: ref_a
    _ref_a__out = (400.0 * sin(2.0f * M_PI * _ref_a__current_phase) + 0.0);
    // Generated from the component: ref_b
    _ref_b__out = (400.0 * sin(2.0f * M_PI * _ref_b__current_phase) + 0.0);
    // Generated from the component: modulation index
    _modulation_index__out = XIo_InFloat(0x55000104);
    // Generated from the component: inductance
    _inductance__out = XIo_InFloat(0x55000100);
    // Generated from the component: Rc.Vs
    HIL_OutFloat(137363458, (float) _resistance__out);
    // Generated from the component: Ra.Vs
    HIL_OutFloat(137363456, (float) _resistance__out);
    // Generated from the component: Rb.Vs
    HIL_OutFloat(137363457, (float) _resistance__out);
    // Generated from the component: C function1
    _c_function1__M = _modulation_index__out;
    _c_function1__ref_a = _ref_a__out;
    _c_function1__ref_b = _ref_b__out;
    _c_function1__ref_c = _ref_c__out;
    _c_function1__out1 = _c_function1__va_m;
    _c_function1__out2 = _c_function1__vb_m;
    _c_function1__out3 = _c_function1__vc_m;
    _c_function1__out4 = _c_function1__enable;
    _c_function1__out5 = _c_function1__min;
    _c_function1__out6 = _c_function1__max;
    _c_function1__out7 = _c_function1__vo;
    _c_function1__out8 = _c_function1__vag;
    _c_function1__out9 = _c_function1__vab;
    _c_function1__out10 = _c_function1__vbc;
    // Generated from the component: Lb.reciprocal
    _lb_reciprocal__out = 1.0 / (_inductance__out);
    // Generated from the component: Lc.reciprocal
    _lc_reciprocal__out = 1.0 / (_inductance__out);
    // Generated from the component: La.reciprocal
    _la_reciprocal__out = 1.0 / (_inductance__out);
    // Generated from the component: vo
    HIL_OutAO(0x4008, (float)_c_function1__out7);
    // Generated from the component: Three Phase Inverter1.IGBT Leg1.PWM_Modulator
    if (_c_function1__out1 < 0.0)
        _three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function1__out1 > 100.0)
        _three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[0] = 100.0;
    else
        _three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[0] = _c_function1__out1;
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[0] - (0.0)) * 25.0)));
    if (_c_function1__out4 == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: va_ref
    HIL_OutAO(0x4002, (float)_c_function1__out1);
    // Generated from the component: vb_ref
    HIL_OutAO(0x4004, (float)_c_function1__out2);
    // Generated from the component: vbg
    HIL_OutAO(0x4005, (float)_c_function1__out9);
    // Generated from the component: vc_ref
    HIL_OutAO(0x4006, (float)_c_function1__out3);
    // Generated from the component: Three Phase Inverter1.IGBT Leg2.PWM_Modulator
    if (_c_function1__out2 < 0.0)
        _three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function1__out2 > 100.0)
        _three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[0] = 100.0;
    else
        _three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[0] = _c_function1__out2;
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[0] - (0.0)) * 25.0)));
    if (_c_function1__out4 == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg2_pwm_modulator__update_mask);
    // Generated from the component: vcg
    HIL_OutAO(0x4007, (float)_c_function1__out10);
    // Generated from the component: vag
    HIL_OutAO(0x4003, (float)_c_function1__out8);
    // Generated from the component: min
    HIL_OutAO(0x4001, (float)_c_function1__out5);
    // Generated from the component: max
    HIL_OutAO(0x4000, (float)_c_function1__out6);
    // Generated from the component: Three Phase Inverter1.IGBT Leg3.PWM_Modulator
    if (_c_function1__out3 < 0.0)
        _three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function1__out3 > 100.0)
        _three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[0] = 100.0;
    else
        _three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[0] = _c_function1__out3;
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[0] - (0.0)) * 25.0)));
    if (_c_function1__out4 == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: Lb.Is
    HIL_OutFloat(137363460, (float) _lb_reciprocal__out);
    // Generated from the component: Lc.Is
    HIL_OutFloat(137363461, (float) _lc_reciprocal__out);
    // Generated from the component: La.Is
    HIL_OutFloat(137363459, (float) _la_reciprocal__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ref_c
    _ref_c__current_phase += 60.0 * 5e-05;
    if (_ref_c__current_phase >= 1.0f) {
        _ref_c__current_phase -= 1.0f;
    }
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
    // Generated from the component: C function1
    _c_function1__va = _c_function1__M * (_c_function1__ref_a + 400);
    _c_function1__vb = _c_function1__M * (_c_function1__ref_b + 400);
    _c_function1__vc = _c_function1__M * (_c_function1__ref_c + 400);
    _c_function1__vab = _c_function1__va - _c_function1__vb;
    _c_function1__vbc = _c_function1__vb - _c_function1__vc;
    _c_function1__c1 = _c_function1__Vcc - 0.6667 * _c_function1__vab - 0.3333 * _c_function1__vbc;
    _c_function1__c2 = _c_function1__Vcc + 0.3333 * _c_function1__vab - 0.3333 * _c_function1__vbc;
    _c_function1__c3 = _c_function1__Vcc + 0.3333 * _c_function1__vab + 0.6667 * _c_function1__vbc;
    _c_function1__c4 = -0.6667 * _c_function1__vab - 0.3333 * _c_function1__vbc;
    _c_function1__c5 = 0.3333 * _c_function1__vab - 0.3333 * _c_function1__vbc;
    _c_function1__c6 = 0.3333 * _c_function1__vab + 0.6667 * _c_function1__vbc;
    _c_function1__min = (_c_function1__c1 < _c_function1__c2) ? ((_c_function1__c1 < _c_function1__c3) ? _c_function1__c1 : _c_function1__c3) : ((_c_function1__c2 < _c_function1__c3) ? _c_function1__c2 : _c_function1__c3);
    _c_function1__max = (_c_function1__c4 > _c_function1__c5) ? ((_c_function1__c4 > _c_function1__c6) ? _c_function1__c4 : _c_function1__c6) : ((_c_function1__c5 > _c_function1__c6) ? _c_function1__c5 : _c_function1__c6);
    _c_function1__vo = 0.5 * (_c_function1__min + _c_function1__max);
    _c_function1__vag = 0.6667 * _c_function1__vab + 0.3333 * _c_function1__vbc + _c_function1__vo;
    _c_function1__vbg = -0.3333 * _c_function1__vab + 0.3333 * _c_function1__vbc + _c_function1__vo;
    _c_function1__vcg = -0.3333 * _c_function1__vab - 0.6667 * _c_function1__vbc + _c_function1__vo;
    _c_function1__va_m = (_c_function1__TPER * _c_function1__vag) / _c_function1__Vcc;
    _c_function1__vb_m = (_c_function1__TPER * _c_function1__vbg) / _c_function1__Vcc;
    _c_function1__vc_m = (_c_function1__TPER * _c_function1__vcg) / _c_function1__Vcc;
    _c_function1__enable = 1;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------