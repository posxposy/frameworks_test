#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_core_InputState
#include <haxor/core/InputState.h>
#endif
#ifndef INCLUDED_haxor_input_Input
#include <haxor/input/Input.h>
#endif
#ifndef INCLUDED_haxor_input_InputHandler
#include <haxor/input/InputHandler.h>
#endif
#ifndef INCLUDED_haxor_input_Joystick
#include <haxor/input/Joystick.h>
#endif
#ifndef INCLUDED_haxor_input_KeyCode
#include <haxor/input/KeyCode.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace input{

Void Joystick_obj::__construct()
{
HX_STACK_FRAME("haxor.input.Joystick","new",0x36a0c55e,"haxor.input.Joystick.new","haxor/input/Joystick.hx",99,0x86e4ec50)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(100)
	::haxor::core::InputState st = ::haxor::core::InputState_obj::None;		HX_STACK_VAR(st,"st");
	HX_STACK_LINE(102)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(103)
	this->id = (int)-1;
	HX_STACK_LINE(104)
	Array< Float > tmp = Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	this->button = tmp;
	HX_STACK_LINE(105)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new().Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st).Add(st);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	this->state = tmp1;
	HX_STACK_LINE(106)
	Array< Float > tmp2 = Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	this->hold = tmp2;
	HX_STACK_LINE(107)
	Array< Float > tmp3 = Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	this->analog = tmp3;
	HX_STACK_LINE(108)
	::haxor::math::Vector3 tmp4 = ::haxor::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	this->analogLeft = tmp4;
	HX_STACK_LINE(109)
	::haxor::math::Vector3 tmp5 = ::haxor::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(109)
	this->analogRight = tmp5;
	HX_STACK_LINE(110)
	this->triggerLeft = ((Float)0.0);
	HX_STACK_LINE(111)
	this->triggerRight = ((Float)0.0);
	HX_STACK_LINE(112)
	this->m_vibrationLeft = ((Float)0.0);
	HX_STACK_LINE(113)
	this->m_vibrationRight = ((Float)0.0);
}
;
	return null();
}

//Joystick_obj::~Joystick_obj() { }

Dynamic Joystick_obj::__CreateEmpty() { return  new Joystick_obj; }
hx::ObjectPtr< Joystick_obj > Joystick_obj::__new()
{  hx::ObjectPtr< Joystick_obj > _result_ = new Joystick_obj();
	_result_->__construct();
	return _result_;}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joystick_obj > _result_ = new Joystick_obj();
	_result_->__construct();
	return _result_;}

Float Joystick_obj::get_vibrationLeft( ){
	HX_STACK_FRAME("haxor.input.Joystick","get_vibrationLeft",0xb511060e,"haxor.input.Joystick.get_vibrationLeft","haxor/input/Joystick.hx",83,0x86e4ec50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	Float tmp = this->m_vibrationLeft;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_vibrationLeft,return )

Float Joystick_obj::set_vibrationLeft( Float v){
	HX_STACK_FRAME("haxor.input.Joystick","set_vibrationLeft",0xd87ede1a,"haxor.input.Joystick.set_vibrationLeft","haxor/input/Joystick.hx",84,0x86e4ec50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(84)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		Float tmp1 = this->m_vibrationLeft;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(84)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		if ((tmp4)){
			HX_STACK_LINE(84)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(84)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(84)
	bool tmp1 = (tmp <= ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	if ((tmp1)){
		HX_STACK_LINE(84)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		return tmp2;
	}
	HX_STACK_LINE(84)
	this->m_vibrationLeft = v;
	HX_STACK_LINE(84)
	::haxor::input::InputHandler tmp2 = ::haxor::input::Input_obj::m_handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	tmp2->RequestJoystickVibration(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(84)
	Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,set_vibrationLeft,return )

Float Joystick_obj::get_vibrationRight( ){
	HX_STACK_FRAME("haxor.input.Joystick","get_vibrationRight",0x30e153f5,"haxor.input.Joystick.get_vibrationRight","haxor/input/Joystick.hx",91,0x86e4ec50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	Float tmp = this->m_vibrationRight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_vibrationRight,return )

Float Joystick_obj::set_vibrationRight( Float v){
	HX_STACK_FRAME("haxor.input.Joystick","set_vibrationRight",0x0d908669,"haxor.input.Joystick.set_vibrationRight","haxor/input/Joystick.hx",92,0x86e4ec50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(92)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		Float tmp1 = this->m_vibrationRight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(92)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		if ((tmp4)){
			HX_STACK_LINE(92)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(92)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(92)
	bool tmp1 = (tmp <= ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	if ((tmp1)){
		HX_STACK_LINE(92)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		return tmp2;
	}
	HX_STACK_LINE(92)
	this->m_vibrationRight = v;
	HX_STACK_LINE(92)
	::haxor::input::InputHandler tmp2 = ::haxor::input::Input_obj::m_handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	tmp2->RequestJoystickVibration(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(92)
	Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,set_vibrationRight,return )

bool Joystick_obj::Pressed( int p_button){
	HX_STACK_FRAME("haxor.input.Joystick","Pressed",0x58d64680,"haxor.input.Joystick.Pressed","haxor/input/Joystick.hx",121,0x86e4ec50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_button,"p_button")
	HX_STACK_LINE(121)
	Array< ::Dynamic > tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	int tmp1 = p_button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	::haxor::core::InputState tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::core::InputState >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	bool tmp3 = (tmp2 == ::haxor::core::InputState_obj::Hold);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(121)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(121)
	if ((tmp4)){
		HX_STACK_LINE(121)
		Array< ::Dynamic > tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		Array< ::Dynamic > tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(121)
		int tmp8 = p_button;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(121)
		::haxor::core::InputState tmp9 = tmp7->__get(tmp8).StaticCast< ::haxor::core::InputState >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(121)
		::haxor::core::InputState tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		tmp5 = (tmp10 == ::haxor::core::InputState_obj::Down);
	}
	else{
		HX_STACK_LINE(121)
		tmp5 = true;
	}
	HX_STACK_LINE(121)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,Pressed,return )

bool Joystick_obj::Down( int p_button){
	HX_STACK_FRAME("haxor.input.Joystick","Down",0x7a508dc4,"haxor.input.Joystick.Down","haxor/input/Joystick.hx",128,0x86e4ec50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_button,"p_button")
	HX_STACK_LINE(128)
	Array< ::Dynamic > tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	int tmp1 = p_button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	::haxor::core::InputState tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::core::InputState >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	bool tmp3 = (tmp2 == ::haxor::core::InputState_obj::Down);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,Down,return )

bool Joystick_obj::Hit( int p_button){
	HX_STACK_FRAME("haxor.input.Joystick","Hit",0x3683f331,"haxor.input.Joystick.Hit","haxor/input/Joystick.hx",135,0x86e4ec50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_button,"p_button")
	HX_STACK_LINE(135)
	Array< ::Dynamic > tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	int tmp1 = p_button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	::haxor::core::InputState tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::core::InputState >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	bool tmp3 = (tmp2 == ::haxor::core::InputState_obj::Up);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,Hit,return )

::String Joystick_obj::ToString( hx::Null< bool >  __o_p_analog,hx::Null< bool >  __o_p_button,hx::Null< bool >  __o_p_trigger,hx::Null< bool >  __o_p_pad){
bool p_analog = __o_p_analog.Default(true);
bool p_button = __o_p_button.Default(true);
bool p_trigger = __o_p_trigger.Default(true);
bool p_pad = __o_p_pad.Default(true);
	HX_STACK_FRAME("haxor.input.Joystick","ToString",0x2b04bf0e,"haxor.input.Joystick.ToString","haxor/input/Joystick.hx",142,0x86e4ec50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_analog,"p_analog")
	HX_STACK_ARG(p_button,"p_button")
	HX_STACK_ARG(p_trigger,"p_trigger")
	HX_STACK_ARG(p_pad,"p_pad")
{
		HX_STACK_LINE(143)
		::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(144)
		int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		::String tmp1 = (HX_HCSTRING("J","\x4a","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		hx::AddEq(s,tmp1);
		HX_STACK_LINE(145)
		bool tmp2 = p_analog;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		if ((tmp2)){
			HX_STACK_LINE(147)
			::haxor::math::Vector3 tmp3 = this->analogLeft;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			::String tmp4 = tmp3->ToString((int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			::String tmp5 = (HX_HCSTRING(" AL","\x0b","\x81","\x18","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			hx::AddEq(s,tmp5);
			HX_STACK_LINE(148)
			::haxor::math::Vector3 tmp6 = this->analogRight;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			::String tmp7 = tmp6->ToString((int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			::String tmp8 = (HX_HCSTRING(" AR","\x11","\x81","\x18","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			hx::AddEq(s,tmp8);
		}
		HX_STACK_LINE(151)
		bool tmp3 = p_button;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		if ((tmp3)){
			HX_STACK_LINE(153)
			int tmp4 = ::haxor::input::KeyCode_obj::ButtonA;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			bool tmp5 = this->Pressed(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			if ((tmp5)){
				HX_STACK_LINE(153)
				tmp6 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(153)
				tmp6 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(153)
			::String tmp7 = (HX_HCSTRING(" A[","\x1a","\x81","\x18","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			hx::AddEq(s,tmp7);
			HX_STACK_LINE(154)
			int tmp8 = ::haxor::input::KeyCode_obj::ButtonB;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(154)
			bool tmp9 = this->Pressed(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(154)
			::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(154)
			if ((tmp9)){
				HX_STACK_LINE(154)
				tmp10 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(154)
				tmp10 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(154)
			::String tmp11 = (HX_HCSTRING(" B[","\xf9","\x81","\x18","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(154)
			hx::AddEq(s,tmp11);
			HX_STACK_LINE(155)
			int tmp12 = ::haxor::input::KeyCode_obj::ButtonX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(155)
			bool tmp13 = this->Pressed(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(155)
			::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(155)
			if ((tmp13)){
				HX_STACK_LINE(155)
				tmp14 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(155)
				tmp14 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(155)
			::String tmp15 = (HX_HCSTRING(" X[","\x23","\x95","\x18","\x00") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(155)
			hx::AddEq(s,tmp15);
			HX_STACK_LINE(156)
			int tmp16 = ::haxor::input::KeyCode_obj::ButtonY;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(156)
			bool tmp17 = this->Pressed(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(156)
			::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(156)
			if ((tmp17)){
				HX_STACK_LINE(156)
				tmp18 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(156)
				tmp18 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(156)
			::String tmp19 = (HX_HCSTRING(" Y[","\x02","\x96","\x18","\x00") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(156)
			hx::AddEq(s,tmp19);
			HX_STACK_LINE(157)
			int tmp20 = ::haxor::input::KeyCode_obj::LeftShoulder;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(157)
			bool tmp21 = this->Pressed(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(157)
			::String tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(157)
			if ((tmp21)){
				HX_STACK_LINE(157)
				tmp22 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(157)
				tmp22 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(157)
			::String tmp23 = (HX_HCSTRING(" L[","\xaf","\x8a","\x18","\x00") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(157)
			hx::AddEq(s,tmp23);
			HX_STACK_LINE(158)
			int tmp24 = ::haxor::input::KeyCode_obj::RightShoulder;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(158)
			bool tmp25 = this->Pressed(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(158)
			::String tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(158)
			if ((tmp25)){
				HX_STACK_LINE(158)
				tmp26 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(158)
				tmp26 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(158)
			::String tmp27 = (HX_HCSTRING(" R[","\xe9","\x8f","\x18","\x00") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(158)
			hx::AddEq(s,tmp27);
			HX_STACK_LINE(159)
			int tmp28 = ::haxor::input::KeyCode_obj::LeftShoulderBottom;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(159)
			bool tmp29 = this->Pressed(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(159)
			::String tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(159)
			if ((tmp29)){
				HX_STACK_LINE(159)
				tmp30 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(159)
				tmp30 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(159)
			::String tmp31 = (HX_HCSTRING(" LB[","\x05","\xb9","\x60","\x15") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(159)
			hx::AddEq(s,tmp31);
			HX_STACK_LINE(160)
			int tmp32 = ::haxor::input::KeyCode_obj::RightShoulderBottom;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(160)
			bool tmp33 = this->Pressed(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(160)
			::String tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(160)
			if ((tmp33)){
				HX_STACK_LINE(160)
				tmp34 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(160)
				tmp34 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(160)
			::String tmp35 = (HX_HCSTRING(" RB[","\x8b","\x46","\x65","\x15") + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(160)
			hx::AddEq(s,tmp35);
			HX_STACK_LINE(161)
			int tmp36 = ::haxor::input::KeyCode_obj::ButtonStart;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(161)
			bool tmp37 = this->Pressed(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(161)
			::String tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(161)
			if ((tmp37)){
				HX_STACK_LINE(161)
				tmp38 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(161)
				tmp38 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(161)
			::String tmp39 = (HX_HCSTRING(" Start[","\xf9","\xad","\x3d","\x6d") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(161)
			hx::AddEq(s,tmp39);
			HX_STACK_LINE(162)
			int tmp40 = ::haxor::input::KeyCode_obj::ButtonSelect;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(162)
			bool tmp41 = this->Pressed(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(162)
			::String tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(162)
			if ((tmp41)){
				HX_STACK_LINE(162)
				tmp42 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(162)
				tmp42 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(162)
			::String tmp43 = (HX_HCSTRING(" Select[","\x9f","\xed","\x23","\x76") + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(162)
			hx::AddEq(s,tmp43);
		}
		HX_STACK_LINE(165)
		bool tmp4 = p_pad;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		if ((tmp4)){
			HX_STACK_LINE(167)
			int tmp5 = ::haxor::input::KeyCode_obj::PadLeft;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			bool tmp6 = this->Pressed(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(167)
			if ((tmp6)){
				HX_STACK_LINE(167)
				tmp7 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(167)
				tmp7 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(167)
			::String tmp8 = (HX_HCSTRING(" PL[","\xbf","\xca","\x63","\x15") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(167)
			hx::AddEq(s,tmp8);
			HX_STACK_LINE(168)
			int tmp9 = ::haxor::input::KeyCode_obj::PadRight;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			bool tmp10 = this->Pressed(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(168)
			::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(168)
			if ((tmp10)){
				HX_STACK_LINE(168)
				tmp11 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(168)
				tmp11 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(168)
			::String tmp12 = (HX_HCSTRING(" PR[","\xf9","\xcf","\x63","\x15") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(168)
			hx::AddEq(s,tmp12);
			HX_STACK_LINE(169)
			int tmp13 = ::haxor::input::KeyCode_obj::PadTop;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(169)
			bool tmp14 = this->Pressed(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(169)
			::String tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(169)
			if ((tmp14)){
				HX_STACK_LINE(169)
				tmp15 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(169)
				tmp15 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(169)
			::String tmp16 = (HX_HCSTRING(" PU[","\x96","\xd2","\x63","\x15") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(169)
			hx::AddEq(s,tmp16);
			HX_STACK_LINE(170)
			int tmp17 = ::haxor::input::KeyCode_obj::PadBottom;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(170)
			bool tmp18 = this->Pressed(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(170)
			::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(170)
			if ((tmp18)){
				HX_STACK_LINE(170)
				tmp19 = HX_HCSTRING("1]","\x0c","\x2b","\x00","\x00");
			}
			else{
				HX_STACK_LINE(170)
				tmp19 = HX_HCSTRING("0]","\x2d","\x2a","\x00","\x00");
			}
			HX_STACK_LINE(170)
			::String tmp20 = (HX_HCSTRING(" PD[","\xc7","\xc3","\x63","\x15") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(170)
			hx::AddEq(s,tmp20);
		}
		HX_STACK_LINE(173)
		bool tmp5 = p_trigger;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		if ((tmp5)){
			HX_STACK_LINE(175)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			{
				HX_STACK_LINE(175)
				Float tmp7 = ::Math_obj::pow((int)10,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(175)
				Float d = tmp7;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(175)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(175)
				{
					HX_STACK_LINE(175)
					Float tmp9 = this->triggerLeft;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(175)
					Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(175)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(175)
					Float p_v = tmp11;		HX_STACK_VAR(p_v,"p_v");
					HX_STACK_LINE(175)
					Float tmp12 = p_v;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					bool tmp13 = (p_v < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(175)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(175)
					if ((tmp13)){
						HX_STACK_LINE(175)
						tmp14 = ((Float)-0.5);
					}
					else{
						HX_STACK_LINE(175)
						tmp14 = ((Float)0.5);
					}
					HX_STACK_LINE(175)
					Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(175)
					int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(175)
					tmp8 = ((Float)(tmp16));
				}
				HX_STACK_LINE(175)
				Float tmp9 = d;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(175)
				tmp6 = (Float(tmp8) / Float(tmp9));
			}
			HX_STACK_LINE(175)
			::String tmp7 = (HX_HCSTRING(" TL[","\xc3","\xd3","\x66","\x15") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			::String tmp8 = (tmp7 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			hx::AddEq(s,tmp8);
			HX_STACK_LINE(176)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				Float tmp10 = ::Math_obj::pow((int)10,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(176)
				Float d = tmp10;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(176)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					Float tmp12 = this->triggerRight;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(176)
					Float tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					Float p_v = tmp14;		HX_STACK_VAR(p_v,"p_v");
					HX_STACK_LINE(176)
					Float tmp15 = p_v;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (p_v < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						tmp17 = ((Float)-0.5);
					}
					else{
						HX_STACK_LINE(176)
						tmp17 = ((Float)0.5);
					}
					HX_STACK_LINE(176)
					Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					tmp11 = ((Float)(tmp19));
				}
				HX_STACK_LINE(176)
				Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				tmp9 = (Float(tmp11) / Float(tmp12));
			}
			HX_STACK_LINE(176)
			::String tmp10 = (HX_HCSTRING(" TR[","\xfd","\xd8","\x66","\x15") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			::String tmp11 = (tmp10 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(176)
			hx::AddEq(s,tmp11);
		}
		HX_STACK_LINE(178)
		::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Joystick_obj,ToString,return )

Array< Float > Joystick_obj::analogBias;

Float Joystick_obj::buttonBias;

bool Joystick_obj::available;


Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(hold,"hold");
	HX_MARK_MEMBER_NAME(analog,"analog");
	HX_MARK_MEMBER_NAME(analogLeft,"analogLeft");
	HX_MARK_MEMBER_NAME(analogRight,"analogRight");
	HX_MARK_MEMBER_NAME(triggerLeft,"triggerLeft");
	HX_MARK_MEMBER_NAME(triggerRight,"triggerRight");
	HX_MARK_MEMBER_NAME(m_vibrationLeft,"m_vibrationLeft");
	HX_MARK_MEMBER_NAME(m_vibrationRight,"m_vibrationRight");
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(hold,"hold");
	HX_VISIT_MEMBER_NAME(analog,"analog");
	HX_VISIT_MEMBER_NAME(analogLeft,"analogLeft");
	HX_VISIT_MEMBER_NAME(analogRight,"analogRight");
	HX_VISIT_MEMBER_NAME(triggerLeft,"triggerLeft");
	HX_VISIT_MEMBER_NAME(triggerRight,"triggerRight");
	HX_VISIT_MEMBER_NAME(m_vibrationLeft,"m_vibrationLeft");
	HX_VISIT_MEMBER_NAME(m_vibrationRight,"m_vibrationRight");
}

Dynamic Joystick_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"Hit") ) { return Hit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"hold") ) { return hold; }
		if (HX_FIELD_EQ(inName,"Down") ) { return Down_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		if (HX_FIELD_EQ(inName,"analog") ) { return analog; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Pressed") ) { return Pressed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"analogLeft") ) { return analogLeft; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"analogRight") ) { return analogRight; }
		if (HX_FIELD_EQ(inName,"triggerLeft") ) { return triggerLeft; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"triggerRight") ) { return triggerRight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"vibrationLeft") ) { if (inCallProp == hx::paccAlways) return get_vibrationLeft(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vibrationRight") ) { if (inCallProp == hx::paccAlways) return get_vibrationRight(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_vibrationLeft") ) { return m_vibrationLeft; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_vibrationRight") ) { return m_vibrationRight; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_vibrationLeft") ) { return get_vibrationLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vibrationLeft") ) { return set_vibrationLeft_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_vibrationRight") ) { return get_vibrationRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vibrationRight") ) { return set_vibrationRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Joystick_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { outValue = available; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"analogBias") ) { outValue = analogBias; return true;  }
		if (HX_FIELD_EQ(inName,"buttonBias") ) { outValue = buttonBias; return true;  }
	}
	return false;
}

Dynamic Joystick_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hold") ) { hold=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"analog") ) { analog=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"analogLeft") ) { analogLeft=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"analogRight") ) { analogRight=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"triggerLeft") ) { triggerLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"triggerRight") ) { triggerRight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"vibrationLeft") ) { if (inCallProp == hx::paccAlways) return set_vibrationLeft(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vibrationRight") ) { if (inCallProp == hx::paccAlways) return set_vibrationRight(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_vibrationLeft") ) { m_vibrationLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_vibrationRight") ) { m_vibrationRight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Joystick_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { available=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"analogBias") ) { analogBias=ioValue.Cast< Array< Float > >(); return true; }
		if (HX_FIELD_EQ(inName,"buttonBias") ) { buttonBias=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("hold","\x3f","\xc9","\x12","\x45"));
	outFields->push(HX_HCSTRING("analog","\x30","\xd6","\x21","\x5f"));
	outFields->push(HX_HCSTRING("analogLeft","\x57","\xe2","\x89","\x99"));
	outFields->push(HX_HCSTRING("analogRight","\x8c","\x37","\x29","\x36"));
	outFields->push(HX_HCSTRING("triggerLeft","\x5f","\x85","\xa7","\x81"));
	outFields->push(HX_HCSTRING("triggerRight","\x84","\x3b","\xfa","\x67"));
	outFields->push(HX_HCSTRING("vibrationLeft","\x39","\x85","\x68","\xe5"));
	outFields->push(HX_HCSTRING("m_vibrationLeft","\xa7","\x7a","\xdd","\x92"));
	outFields->push(HX_HCSTRING("vibrationRight","\x6a","\x1a","\x19","\x4d"));
	outFields->push(HX_HCSTRING("m_vibrationRight","\x3c","\xe5","\xfa","\x65"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Joystick_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Joystick_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Joystick_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Joystick_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Joystick_obj,hold),HX_HCSTRING("hold","\x3f","\xc9","\x12","\x45")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Joystick_obj,analog),HX_HCSTRING("analog","\x30","\xd6","\x21","\x5f")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Joystick_obj,analogLeft),HX_HCSTRING("analogLeft","\x57","\xe2","\x89","\x99")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Joystick_obj,analogRight),HX_HCSTRING("analogRight","\x8c","\x37","\x29","\x36")},
	{hx::fsFloat,(int)offsetof(Joystick_obj,triggerLeft),HX_HCSTRING("triggerLeft","\x5f","\x85","\xa7","\x81")},
	{hx::fsFloat,(int)offsetof(Joystick_obj,triggerRight),HX_HCSTRING("triggerRight","\x84","\x3b","\xfa","\x67")},
	{hx::fsFloat,(int)offsetof(Joystick_obj,m_vibrationLeft),HX_HCSTRING("m_vibrationLeft","\xa7","\x7a","\xdd","\x92")},
	{hx::fsFloat,(int)offsetof(Joystick_obj,m_vibrationRight),HX_HCSTRING("m_vibrationRight","\x3c","\xe5","\xfa","\x65")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &Joystick_obj::analogBias,HX_HCSTRING("analogBias","\xc9","\xc4","\xf0","\x92")},
	{hx::fsFloat,(void *) &Joystick_obj::buttonBias,HX_HCSTRING("buttonBias","\x8b","\x59","\x0d","\xab")},
	{hx::fsBool,(void *) &Joystick_obj::available,HX_HCSTRING("available","\xc9","\x59","\x83","\x77")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("hold","\x3f","\xc9","\x12","\x45"),
	HX_HCSTRING("analog","\x30","\xd6","\x21","\x5f"),
	HX_HCSTRING("analogLeft","\x57","\xe2","\x89","\x99"),
	HX_HCSTRING("analogRight","\x8c","\x37","\x29","\x36"),
	HX_HCSTRING("triggerLeft","\x5f","\x85","\xa7","\x81"),
	HX_HCSTRING("triggerRight","\x84","\x3b","\xfa","\x67"),
	HX_HCSTRING("get_vibrationLeft","\x90","\x90","\xd8","\xeb"),
	HX_HCSTRING("set_vibrationLeft","\x9c","\x68","\x46","\x0f"),
	HX_HCSTRING("m_vibrationLeft","\xa7","\x7a","\xdd","\x92"),
	HX_HCSTRING("get_vibrationRight","\x33","\xfb","\xb2","\xe8"),
	HX_HCSTRING("set_vibrationRight","\xa7","\x2d","\x62","\xc5"),
	HX_HCSTRING("m_vibrationRight","\x3c","\xe5","\xfa","\x65"),
	HX_HCSTRING("Pressed","\x82","\xfa","\x37","\x07"),
	HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"),
	HX_HCSTRING("Hit","\x33","\xfe","\x36","\x00"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::analogBias,"analogBias");
	HX_MARK_MEMBER_NAME(Joystick_obj::buttonBias,"buttonBias");
	HX_MARK_MEMBER_NAME(Joystick_obj::available,"available");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::analogBias,"analogBias");
	HX_VISIT_MEMBER_NAME(Joystick_obj::buttonBias,"buttonBias");
	HX_VISIT_MEMBER_NAME(Joystick_obj::available,"available");
};

#endif

hx::Class Joystick_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("analogBias","\xc9","\xc4","\xf0","\x92"),
	HX_HCSTRING("buttonBias","\x8b","\x59","\x0d","\xab"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	String(null()) };

void Joystick_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.input.Joystick","\x6c","\x7e","\x07","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Joystick_obj::__GetStatic;
	__mClass->mSetStaticField = &Joystick_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Joystick_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Joystick_obj::__boot()
{
	analogBias= Array_obj< Float >::__new().Add(((Float)0.1)).Add(((Float)0.9));
	buttonBias= ((Float)0.9);
	available= false;
}

} // end namespace haxor
} // end namespace input
