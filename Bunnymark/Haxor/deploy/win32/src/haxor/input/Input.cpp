#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_InputState
#include <haxor/core/InputState.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_input_Input
#include <haxor/input/Input.h>
#endif
#ifndef INCLUDED_haxor_input_InputHandler
#include <haxor/input/InputHandler.h>
#endif
#ifndef INCLUDED_haxor_input_InputLog
#include <haxor/input/InputLog.h>
#endif
#ifndef INCLUDED_haxor_input_Joystick
#include <haxor/input/Joystick.h>
#endif
#ifndef INCLUDED_haxor_input_Touch
#include <haxor/input/Touch.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
namespace haxor{
namespace input{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::IntMap Input_obj::m_state;

::haxe::ds::IntMap Input_obj::m_hold;

Array< bool > Input_obj::m_down;

Array< int > Input_obj::m_active;

::haxor::input::InputHandler Input_obj::m_handler;

Array< ::Dynamic > Input_obj::get_touches( ){
	HX_STACK_FRAME("haxor.input.Input","get_touches",0x329207f0,"haxor.input.Input.get_touches","haxor/input/Input.hx",73,0xee96c766)
	HX_STACK_LINE(73)
	Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_touches;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_touches,return )

Array< ::Dynamic > Input_obj::m_touches;

Array< ::Dynamic > Input_obj::m_api_touches;

Array< ::Dynamic > Input_obj::get_joystick( ){
	HX_STACK_FRAME("haxor.input.Input","get_joystick",0xa904b959,"haxor.input.Input.get_joystick","haxor/input/Input.hx",81,0xee96c766)
	HX_STACK_LINE(81)
	Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_joysticks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_joystick,return )

Array< ::Dynamic > Input_obj::m_joysticks;

Array< ::Dynamic > Input_obj::m_api_joystick;

bool Input_obj::get_multitouch( ){
	HX_STACK_FRAME("haxor.input.Input","get_multitouch",0xeaa7f083,"haxor.input.Input.get_multitouch","haxor/input/Input.hx",90,0xee96c766)
	HX_STACK_LINE(90)
	bool tmp = ::haxor::input::Input_obj::m_multitouch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_multitouch,return )

bool Input_obj::m_multitouch;

Array< ::Dynamic > Input_obj::log;

Float Input_obj::timeout;

Float Input_obj::m_timeout_elapsed;

::haxor::math::Vector2 Input_obj::mouse;

::haxor::math::Vector2 Input_obj::deltaMouse;

::haxor::math::Vector2 Input_obj::relativeMouse;

Float Input_obj::wheel;

bool Input_obj::scroll;

bool Input_obj::menu;

bool Input_obj::emulateTouch;

::haxor::core::InputState Input_obj::GetInputState( int p_code){
	HX_STACK_FRAME("haxor.input.Input","GetInputState",0x48afc6a9,"haxor.input.Input.GetInputState","haxor/input/Input.hx",152,0xee96c766)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_LINE(153)
	::haxe::ds::IntMap tmp = ::haxor::input::Input_obj::m_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	int tmp1 = p_code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	::haxor::core::InputState tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	::haxor::core::InputState tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,GetInputState,return )

bool Input_obj::Pressed( int p_code){
	HX_STACK_FRAME("haxor.input.Input","Pressed",0x3d791e6e,"haxor.input.Input.Pressed","haxor/input/Input.hx",162,0xee96c766)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_LINE(163)
	int tmp = p_code;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	::haxor::core::InputState tmp1 = ::haxor::input::Input_obj::GetInputState(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	::haxor::core::InputState s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(164)
	bool tmp2 = (s == ::haxor::core::InputState_obj::Down);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	if ((tmp3)){
		HX_STACK_LINE(164)
		tmp4 = (s == ::haxor::core::InputState_obj::Hold);
	}
	else{
		HX_STACK_LINE(164)
		tmp4 = true;
	}
	HX_STACK_LINE(164)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,Pressed,return )

bool Input_obj::Down( int p_code){
	HX_STACK_FRAME("haxor.input.Input","Down",0xbbbf9516,"haxor.input.Input.Down","haxor/input/Input.hx",173,0xee96c766)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_LINE(174)
	int tmp = p_code;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	::haxor::core::InputState tmp1 = ::haxor::input::Input_obj::GetInputState(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	::haxor::core::InputState s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(175)
	bool tmp2 = (s == ::haxor::core::InputState_obj::Down);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,Down,return )

bool Input_obj::Hit( int p_code){
	HX_STACK_FRAME("haxor.input.Input","Hit",0x4dc4bc1f,"haxor.input.Input.Hit","haxor/input/Input.hx",184,0xee96c766)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_LINE(185)
	int tmp = p_code;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	::haxor::core::InputState tmp1 = ::haxor::input::Input_obj::GetInputState(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	::haxor::core::InputState s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(186)
	bool tmp2 = (s == ::haxor::core::InputState_obj::Up);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,Hit,return )

Float Input_obj::GetHoldTime( int p_code){
	HX_STACK_FRAME("haxor.input.Input","GetHoldTime",0x1c85b16e,"haxor.input.Input.GetHoldTime","haxor/input/Input.hx",194,0xee96c766)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_LINE(194)
	::haxe::ds::IntMap tmp = ::haxor::input::Input_obj::m_hold;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	int tmp1 = p_code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,GetHoldTime,return )

Array< ::Dynamic > Input_obj::Filter( int p_code){
	HX_STACK_FRAME("haxor.input.Input","Filter",0x2bae516c,"haxor.input.Input.Filter","haxor/input/Input.hx",202,0xee96c766)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_LINE(203)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	Array< ::Dynamic > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(204)
		Array< ::Dynamic > tmp1 = ::haxor::input::Input_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		while((true)){
			HX_STACK_LINE(204)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(204)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			if ((tmp3)){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(204)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(204)
			Array< ::Dynamic > tmp5 = ::haxor::input::Input_obj::log;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			::haxor::input::InputLog tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::input::InputLog >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			int tmp8 = tmp7->key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			int tmp9 = p_code;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(204)
			if ((tmp10)){
				HX_STACK_LINE(204)
				Array< ::Dynamic > tmp11 = ::haxor::input::Input_obj::log;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(204)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(204)
				::haxor::input::InputLog tmp13 = tmp11->__get(tmp12).StaticCast< ::haxor::input::InputLog >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(204)
				res->push(tmp13);
			}
		}
	}
	HX_STACK_LINE(205)
	Array< ::Dynamic > tmp1 = res;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,Filter,return )

bool Input_obj::MultiHit( int p_code,hx::Null< int >  __o_p_count,hx::Null< Float >  __o_p_timeout,hx::Null< bool >  __o_p_clear){
int p_count = __o_p_count.Default(2);
Float p_timeout = __o_p_timeout.Default(((Float)-1.0));
bool p_clear = __o_p_clear.Default(true);
	HX_STACK_FRAME("haxor.input.Input","MultiHit",0xb6de8c0e,"haxor.input.Input.MultiHit","haxor/input/Input.hx",215,0xee96c766)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_ARG(p_count,"p_count")
	HX_STACK_ARG(p_timeout,"p_timeout")
	HX_STACK_ARG(p_clear,"p_clear")
{
		HX_STACK_LINE(216)
		int tmp = p_code;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		Array< ::Dynamic > tmp1 = ::haxor::input::Input_obj::Filter(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		Array< ::Dynamic > l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(217)
		bool tmp2 = (l->length < p_count);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		if ((tmp2)){
			HX_STACK_LINE(217)
			return false;
		}
		HX_STACK_LINE(218)
		bool tmp3 = (p_timeout < ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(218)
		if ((tmp3)){
			HX_STACK_LINE(218)
			tmp4 = ::haxor::input::Input_obj::timeout;
		}
		else{
			HX_STACK_LINE(218)
			tmp4 = p_timeout;
		}
		HX_STACK_LINE(218)
		Float tmo = tmp4;		HX_STACK_VAR(tmo,"tmo");
		HX_STACK_LINE(219)
		Float t_min = ((Float)99999.0);		HX_STACK_VAR(t_min,"t_min");
		HX_STACK_LINE(220)
		Float t_max = ((Float)-99990.0);		HX_STACK_VAR(t_max,"t_max");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(221)
			int _g = l->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(221)
			while((true)){
				HX_STACK_LINE(221)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(221)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				if ((tmp6)){
					HX_STACK_LINE(221)
					break;
				}
				HX_STACK_LINE(221)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(223)
				::haxor::input::InputLog tmp8 = l->__get(i).StaticCast< ::haxor::input::InputLog >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(223)
				Float tmp9 = tmp8->time;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(223)
				Float tmp10 = t_min;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(223)
				Float tmp11 = ::Math_obj::min(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(223)
				t_min = tmp11;
				HX_STACK_LINE(224)
				::haxor::input::InputLog tmp12 = l->__get(i).StaticCast< ::haxor::input::InputLog >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				Float tmp13 = tmp12->time;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(224)
				Float tmp14 = t_max;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(224)
				Float tmp15 = ::Math_obj::max(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(224)
				t_max = tmp15;
				HX_STACK_LINE(225)
				bool tmp16 = p_clear;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(225)
				if ((tmp16)){
					HX_STACK_LINE(225)
					Array< ::Dynamic > tmp17 = ::haxor::input::Input_obj::log;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(225)
					::haxor::input::InputLog tmp18 = l->__get(i).StaticCast< ::haxor::input::InputLog >();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(225)
					tmp17->remove(tmp18);
				}
			}
		}
		HX_STACK_LINE(227)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			Float tmp6 = (t_max - t_min);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			Float p_a = tmp6;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(227)
			bool tmp7 = (p_a < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			if ((tmp7)){
				HX_STACK_LINE(227)
				Float tmp8 = p_a;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(227)
				tmp5 = -(tmp8);
			}
			else{
				HX_STACK_LINE(227)
				tmp5 = p_a;
			}
		}
		HX_STACK_LINE(227)
		Float tmp6 = tmo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(227)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		if ((tmp7)){
			HX_STACK_LINE(227)
			return false;
		}
		HX_STACK_LINE(228)
		bool tmp8 = (l->length == p_count);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(228)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Input_obj,MultiHit,return )

Void Input_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.input.Input","Initialize",0x0a414d04,"haxor.input.Input.Initialize","haxor/input/Input.hx",237,0xee96c766)
		HX_STACK_LINE(238)
		::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(238)
			::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			tmp = tmp2;
		}
		HX_STACK_LINE(238)
		::haxor::input::Input_obj::m_state = tmp;
		HX_STACK_LINE(239)
		::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(239)
		::haxor::input::Input_obj::m_hold = tmp1;
		HX_STACK_LINE(240)
		Array< int > tmp2 = Array_obj< int >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		::haxor::input::Input_obj::m_active = tmp2;
		HX_STACK_LINE(241)
		Array< bool > tmp3 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		::haxor::input::Input_obj::m_down = tmp3;
		HX_STACK_LINE(243)
		Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		::haxor::input::Input_obj::m_touches = tmp4;
		HX_STACK_LINE(244)
		Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		::haxor::input::Input_obj::m_api_touches = tmp5;
		HX_STACK_LINE(246)
		Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(246)
		::haxor::input::Input_obj::log = tmp6;
		HX_STACK_LINE(247)
		::haxor::input::Input_obj::timeout = ((Float)2.0);
		HX_STACK_LINE(248)
		::haxor::input::Input_obj::m_timeout_elapsed = ((Float)0.0);
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			while((true)){
				HX_STACK_LINE(250)
				bool tmp7 = (_g < (int)10);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(250)
				if ((tmp8)){
					HX_STACK_LINE(250)
					break;
				}
				HX_STACK_LINE(250)
				int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(250)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(252)
				Array< ::Dynamic > tmp10 = ::haxor::input::Input_obj::m_api_touches;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(252)
				::haxor::input::Touch tmp11 = ::haxor::input::Touch_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(252)
				tmp10->push(tmp11);
			}
		}
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(255)
			while((true)){
				HX_STACK_LINE(255)
				bool tmp7 = (_g < (int)256);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(255)
				if ((tmp8)){
					HX_STACK_LINE(255)
					break;
				}
				HX_STACK_LINE(255)
				int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(255)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(257)
				::haxe::ds::IntMap tmp10 = ::haxor::input::Input_obj::m_state;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(257)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(257)
				tmp10->set(tmp11,::haxor::core::InputState_obj::None);
				HX_STACK_LINE(258)
				::haxe::ds::IntMap tmp12 = ::haxor::input::Input_obj::m_hold;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(258)
				int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(258)
				tmp12->set(tmp13,(int)0);
				HX_STACK_LINE(259)
				Array< bool > tmp14 = ::haxor::input::Input_obj::m_down;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(259)
				tmp14->push(false);
			}
		}
		HX_STACK_LINE(262)
		Array< ::Dynamic > tmp7 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(262)
		::haxor::input::Input_obj::m_joysticks = tmp7;
		HX_STACK_LINE(263)
		Array< ::Dynamic > tmp8 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		::haxor::input::Input_obj::m_api_joystick = tmp8;
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(264)
			while((true)){
				HX_STACK_LINE(264)
				bool tmp9 = (_g < (int)10);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(264)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(264)
				if ((tmp10)){
					HX_STACK_LINE(264)
					break;
				}
				HX_STACK_LINE(264)
				int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(264)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(266)
				Array< ::Dynamic > tmp12 = ::haxor::input::Input_obj::m_api_joystick;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(266)
				::haxor::input::Joystick tmp13 = ::haxor::input::Joystick_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(266)
				tmp12->push(tmp13);
			}
		}
		HX_STACK_LINE(269)
		::haxor::math::Vector2 tmp9 = ::haxor::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(269)
		::haxor::input::Input_obj::mouse = tmp9;
		HX_STACK_LINE(270)
		::haxor::math::Vector2 tmp10 = ::haxor::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(270)
		::haxor::input::Input_obj::deltaMouse = tmp10;
		HX_STACK_LINE(271)
		::haxor::math::Vector2 tmp11 = ::haxor::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(271)
		::haxor::input::Input_obj::relativeMouse = tmp11;
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int tmp12 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(273)
			bool tmp13 = (tmp12 >= (int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(273)
			if ((tmp13)){
				HX_STACK_LINE(273)
				::cpp::Lib_obj::println(HX_HCSTRING("Haxor> Input Initialize","\xaa","\xae","\x0e","\x58"));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,Initialize,(void))

Void Input_obj::UpdateTouchFSM( ){
{
		HX_STACK_FRAME("haxor.input.Input","UpdateTouchFSM",0x038468de,"haxor.input.Input.UpdateTouchFSM","haxor/input/Input.hx",281,0xee96c766)
		HX_STACK_LINE(281)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(281)
		Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_touches;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		while((true)){
			HX_STACK_LINE(281)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(281)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(281)
			if ((tmp2)){
				HX_STACK_LINE(281)
				break;
			}
			HX_STACK_LINE(281)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(281)
			int j = tmp3;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(281)
			Array< ::Dynamic > tmp4 = ::haxor::input::Input_obj::m_touches;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(281)
			int tmp5 = j;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(281)
			::haxor::input::Touch tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::input::Touch >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(281)
			::haxor::input::Input_obj::TouchFSM(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,UpdateTouchFSM,(void))

Void Input_obj::UpdateInput( ){
{
		HX_STACK_FRAME("haxor.input.Input","UpdateInput",0x5b884f0d,"haxor.input.Input.UpdateInput","haxor/input/Input.hx",288,0xee96c766)
		HX_STACK_LINE(289)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			Float tmp1 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			Float tmp2 = ::haxor::input::Input_obj::m_timeout_elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(289)
			bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			if ((tmp4)){
				HX_STACK_LINE(289)
				Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(289)
				tmp = -(tmp5);
			}
			else{
				HX_STACK_LINE(289)
				tmp = p_a;
			}
		}
		HX_STACK_LINE(289)
		Float tmp1 = ::haxor::input::Input_obj::timeout;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		if ((tmp2)){
			HX_STACK_LINE(291)
			Array< ::Dynamic > tmp3 = ::haxor::input::Input_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			if ((tmp5)){
				HX_STACK_LINE(291)
				Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(291)
				::haxor::input::Input_obj::log = tmp6;
			}
			HX_STACK_LINE(292)
			Float tmp6 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(292)
			::haxor::input::Input_obj::m_timeout_elapsed = tmp6;
		}
		HX_STACK_LINE(295)
		{
			HX_STACK_LINE(295)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(295)
			Array< int > tmp3 = ::haxor::input::Input_obj::m_active;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			int _g = tmp3->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(295)
			while((true)){
				HX_STACK_LINE(295)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(295)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(295)
				if ((tmp5)){
					HX_STACK_LINE(295)
					break;
				}
				HX_STACK_LINE(295)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(295)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(295)
				Array< int > tmp7 = ::haxor::input::Input_obj::m_active;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(295)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(295)
				int tmp9 = tmp7->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(295)
				Array< bool > tmp10 = ::haxor::input::Input_obj::m_down;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(295)
				Array< int > tmp11 = ::haxor::input::Input_obj::m_active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(295)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(295)
				int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(295)
				bool tmp14 = tmp10->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(295)
				::haxor::input::Input_obj::UpdateInputState(tmp9,tmp14,null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,UpdateInput,(void))

Void Input_obj::TouchFSM( ::haxor::input::Touch t){
{
		HX_STACK_FRAME("haxor.input.Input","TouchFSM",0x1c7a76b5,"haxor.input.Input.TouchFSM","haxor/input/Input.hx",303,0xee96c766)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(304)
		bool tmp = (t == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		if ((tmp)){
			HX_STACK_LINE(304)
			return null();
		}
		HX_STACK_LINE(305)
		::haxor::core::InputState current = t->state;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(306)
		bool d = t->m_down;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(307)
		bool tmp1 = (current == ::haxor::core::InputState_obj::Up);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		if ((tmp1)){
			HX_STACK_LINE(307)
			Array< ::Dynamic > tmp2 = ::haxor::input::Input_obj::m_touches;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			::haxor::input::Touch tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			tmp2->remove(tmp3);
		}
		HX_STACK_LINE(308)
		bool tmp2 = (current == ::haxor::core::InputState_obj::Hold);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		if ((tmp2)){
			HX_STACK_LINE(308)
			Float tmp3 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			hx::AddEq(t->hold,tmp3);
		}
		HX_STACK_LINE(309)
		::haxor::core::InputState tmp3 = current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		bool tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		::haxor::core::InputState tmp5 = ::haxor::input::Input_obj::InputStateFSM(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		t->state = tmp5;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,TouchFSM,(void))

Void Input_obj::UpdateInputState( int p_code,bool p_is_down,hx::Null< bool >  __o_p_update_state){
bool p_update_state = __o_p_update_state.Default(true);
	HX_STACK_FRAME("haxor.input.Input","UpdateInputState",0x52d5e7c4,"haxor.input.Input.UpdateInputState","haxor/input/Input.hx",318,0xee96c766)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_ARG(p_is_down,"p_is_down")
	HX_STACK_ARG(p_update_state,"p_update_state")
{
		HX_STACK_LINE(319)
		::haxe::ds::IntMap tmp = ::haxor::input::Input_obj::m_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		int tmp1 = p_code;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		::haxor::core::InputState tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		::haxor::core::InputState current = tmp2;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(320)
		bool tmp3 = (current == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		if ((tmp3)){
			HX_STACK_LINE(320)
			current = ::haxor::core::InputState_obj::None;
		}
		HX_STACK_LINE(321)
		::haxor::core::InputState next = current;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(322)
		Array< bool > tmp4 = ::haxor::input::Input_obj::m_down;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		int tmp5 = p_code;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(322)
		bool tmp6 = tmp4->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(322)
		bool d0 = tmp6;		HX_STACK_VAR(d0,"d0");
		HX_STACK_LINE(323)
		Array< bool > tmp7 = ::haxor::input::Input_obj::m_down;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(323)
		int tmp8 = p_code;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(323)
		bool tmp9 = p_is_down;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(323)
		bool tmp10 = tmp7[tmp8] = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(323)
		bool d = tmp10;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(325)
		bool tmp11 = d0;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(325)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(325)
		if ((tmp12)){
			HX_STACK_LINE(325)
			bool tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(325)
			if ((tmp13)){
				HX_STACK_LINE(325)
				Array< int > tmp14 = ::haxor::input::Input_obj::m_active;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(325)
				int tmp15 = p_code;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(325)
				tmp14->push(tmp15);
			}
		}
		HX_STACK_LINE(326)
		bool tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(326)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(326)
		if ((tmp14)){
			HX_STACK_LINE(326)
			bool tmp15 = d0;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(326)
			if ((tmp15)){
				HX_STACK_LINE(326)
				return null();
			}
		}
		HX_STACK_LINE(328)
		bool tmp15 = p_update_state;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(328)
		if ((tmp15)){
			HX_STACK_LINE(330)
			bool tmp16 = (current == ::haxor::core::InputState_obj::Up);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(330)
			if ((tmp16)){
				HX_STACK_LINE(332)
				Array< ::Dynamic > tmp17 = ::haxor::input::Input_obj::log;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(332)
				int tmp18 = p_code;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(332)
				Float tmp19 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(332)
				::haxor::input::InputLog tmp20 = ::haxor::input::InputLog_obj::__new(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(332)
				tmp17->push(tmp20);
				HX_STACK_LINE(333)
				Array< ::Dynamic > tmp21 = ::haxor::input::Input_obj::log;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(333)
				int tmp22 = tmp21->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(333)
				bool tmp23 = (tmp22 == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(333)
				if ((tmp23)){
					HX_STACK_LINE(333)
					Float tmp24 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(333)
					::haxor::input::Input_obj::m_timeout_elapsed = tmp24;
				}
				HX_STACK_LINE(334)
				::haxe::ds::IntMap tmp24 = ::haxor::input::Input_obj::m_hold;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(334)
				int tmp25 = p_code;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(334)
				tmp24->set(tmp25,(int)0);
				HX_STACK_LINE(335)
				Array< int > tmp26 = ::haxor::input::Input_obj::m_active;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(335)
				int tmp27 = p_code;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(335)
				tmp26->remove(tmp27);
			}
			HX_STACK_LINE(338)
			bool tmp17 = (current == ::haxor::core::InputState_obj::Hold);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(338)
			if ((tmp17)){
				HX_STACK_LINE(340)
				::haxe::ds::IntMap tmp18 = ::haxor::input::Input_obj::m_hold;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(340)
				int tmp19 = p_code;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(340)
				Dynamic tmp20 = tmp18->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(340)
				Float h = tmp20;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(341)
				::haxe::ds::IntMap tmp21 = ::haxor::input::Input_obj::m_hold;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(341)
				int tmp22 = p_code;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(341)
				Float tmp23 = h;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(341)
				Float tmp24 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(341)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(341)
				tmp21->set(tmp22,tmp25);
			}
			HX_STACK_LINE(344)
			::haxor::core::InputState tmp18 = current;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(344)
			bool tmp19 = d;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(344)
			::haxor::core::InputState tmp20 = ::haxor::input::Input_obj::InputStateFSM(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(344)
			next = tmp20;
			HX_STACK_LINE(346)
			bool tmp21 = (current != next);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(346)
			if ((tmp21)){
				HX_STACK_LINE(346)
				::haxe::ds::IntMap tmp22 = ::haxor::input::Input_obj::m_state;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(346)
				int tmp23 = p_code;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(346)
				::haxor::core::InputState tmp24 = next;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(346)
				tmp22->set(tmp23,tmp24);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Input_obj,UpdateInputState,(void))

::haxor::core::InputState Input_obj::InputStateFSM( ::haxor::core::InputState p_current,bool p_is_down){
	HX_STACK_FRAME("haxor.input.Input","InputStateFSM",0xd80d17e5,"haxor.input.Input.InputStateFSM","haxor/input/Input.hx",357,0xee96c766)
	HX_STACK_ARG(p_current,"p_current")
	HX_STACK_ARG(p_is_down,"p_is_down")
	HX_STACK_LINE(358)
	::haxor::core::InputState current = p_current;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(359)
	::haxor::core::InputState next = current;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(360)
	bool d = p_is_down;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(361)
	switch( (int)(current->__Index())){
		case (int)0: {
			HX_STACK_LINE(364)
			bool tmp = d;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(364)
			if ((tmp)){
				HX_STACK_LINE(364)
				next = ::haxor::core::InputState_obj::Down;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(366)
			bool tmp = d;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(366)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(366)
			if ((tmp1)){
				HX_STACK_LINE(366)
				next = ::haxor::core::InputState_obj::Up;
			}
			HX_STACK_LINE(367)
			next = ::haxor::core::InputState_obj::Hold;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(370)
			next = ::haxor::core::InputState_obj::None;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(373)
			bool tmp = d;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(373)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(373)
			if ((tmp1)){
				HX_STACK_LINE(373)
				next = ::haxor::core::InputState_obj::Up;
			}
		}
		;break;
	}
	HX_STACK_LINE(375)
	::haxor::core::InputState tmp = next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,InputStateFSM,return )


Input_obj::Input_obj()
{
}

bool Input_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log; return true;  }
		if (HX_FIELD_EQ(inName,"Hit") ) { outValue = Hit_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"menu") ) { outValue = menu; return true;  }
		if (HX_FIELD_EQ(inName,"Down") ) { outValue = Down_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { outValue = mouse; return true;  }
		if (HX_FIELD_EQ(inName,"wheel") ) { outValue = wheel; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_hold") ) { outValue = m_hold; return true;  }
		if (HX_FIELD_EQ(inName,"m_down") ) { outValue = m_down; return true;  }
		if (HX_FIELD_EQ(inName,"scroll") ) { outValue = scroll; return true;  }
		if (HX_FIELD_EQ(inName,"Filter") ) { outValue = Filter_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_state") ) { outValue = m_state; return true;  }
		if (HX_FIELD_EQ(inName,"touches") ) { if (inCallProp == hx::paccAlways) { outValue = get_touches(); return true; } }
		if (HX_FIELD_EQ(inName,"timeout") ) { outValue = timeout; return true;  }
		if (HX_FIELD_EQ(inName,"Pressed") ) { outValue = Pressed_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_active") ) { outValue = m_active; return true;  }
		if (HX_FIELD_EQ(inName,"joystick") ) { if (inCallProp == hx::paccAlways) { outValue = get_joystick(); return true; } }
		if (HX_FIELD_EQ(inName,"MultiHit") ) { outValue = MultiHit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TouchFSM") ) { outValue = TouchFSM_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_handler") ) { outValue = m_handler; return true;  }
		if (HX_FIELD_EQ(inName,"m_touches") ) { outValue = m_touches; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"multitouch") ) { if (inCallProp == hx::paccAlways) { outValue = get_multitouch(); return true; } }
		if (HX_FIELD_EQ(inName,"deltaMouse") ) { outValue = deltaMouse; return true;  }
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_touches") ) { outValue = get_touches_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_joysticks") ) { outValue = m_joysticks; return true;  }
		if (HX_FIELD_EQ(inName,"GetHoldTime") ) { outValue = GetHoldTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"UpdateInput") ) { outValue = UpdateInput_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_joystick") ) { outValue = get_joystick_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_multitouch") ) { outValue = m_multitouch; return true;  }
		if (HX_FIELD_EQ(inName,"emulateTouch") ) { outValue = emulateTouch; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_api_touches") ) { outValue = m_api_touches; return true;  }
		if (HX_FIELD_EQ(inName,"relativeMouse") ) { outValue = relativeMouse; return true;  }
		if (HX_FIELD_EQ(inName,"GetInputState") ) { outValue = GetInputState_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"InputStateFSM") ) { outValue = InputStateFSM_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_api_joystick") ) { outValue = m_api_joystick; return true;  }
		if (HX_FIELD_EQ(inName,"get_multitouch") ) { outValue = get_multitouch_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"UpdateTouchFSM") ) { outValue = UpdateTouchFSM_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"UpdateInputState") ) { outValue = UpdateInputState_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_timeout_elapsed") ) { outValue = m_timeout_elapsed; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Input_obj::m_state,HX_HCSTRING("m_state","\x7f","\x4d","\x96","\x34")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Input_obj::m_hold,HX_HCSTRING("m_hold","\x91","\x39","\x0a","\x8d")},
	{hx::fsObject /*Array< bool >*/ ,(void *) &Input_obj::m_down,HX_HCSTRING("m_down","\xb4","\x68","\x65","\x8a")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Input_obj::m_active,HX_HCSTRING("m_active","\x98","\xea","\x37","\xdf")},
	{hx::fsObject /*::haxor::input::InputHandler*/ ,(void *) &Input_obj::m_handler,HX_HCSTRING("m_handler","\xb8","\xbe","\x57","\x50")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Input_obj::m_touches,HX_HCSTRING("m_touches","\xdb","\x2c","\x7a","\xe3")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Input_obj::m_api_touches,HX_HCSTRING("m_api_touches","\xf6","\xbb","\x8e","\xa5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Input_obj::m_joysticks,HX_HCSTRING("m_joysticks","\xa5","\xea","\x08","\x12")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Input_obj::m_api_joystick,HX_HCSTRING("m_api_joystick","\x93","\x8a","\x25","\xd3")},
	{hx::fsBool,(void *) &Input_obj::m_multitouch,HX_HCSTRING("m_multitouch","\x78","\x70","\xc3","\x21")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Input_obj::log,HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsFloat,(void *) &Input_obj::timeout,HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8")},
	{hx::fsFloat,(void *) &Input_obj::m_timeout_elapsed,HX_HCSTRING("m_timeout_elapsed","\x4c","\xc2","\x9c","\xf7")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Input_obj::mouse,HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Input_obj::deltaMouse,HX_HCSTRING("deltaMouse","\x0d","\xbb","\x87","\xb7")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Input_obj::relativeMouse,HX_HCSTRING("relativeMouse","\xb9","\xe5","\xe1","\x71")},
	{hx::fsFloat,(void *) &Input_obj::wheel,HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")},
	{hx::fsBool,(void *) &Input_obj::scroll,HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47")},
	{hx::fsBool,(void *) &Input_obj::menu,HX_HCSTRING("menu","\x9f","\x45","\x59","\x48")},
	{hx::fsBool,(void *) &Input_obj::emulateTouch,HX_HCSTRING("emulateTouch","\x0c","\x06","\x5e","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::m_state,"m_state");
	HX_MARK_MEMBER_NAME(Input_obj::m_hold,"m_hold");
	HX_MARK_MEMBER_NAME(Input_obj::m_down,"m_down");
	HX_MARK_MEMBER_NAME(Input_obj::m_active,"m_active");
	HX_MARK_MEMBER_NAME(Input_obj::m_handler,"m_handler");
	HX_MARK_MEMBER_NAME(Input_obj::m_touches,"m_touches");
	HX_MARK_MEMBER_NAME(Input_obj::m_api_touches,"m_api_touches");
	HX_MARK_MEMBER_NAME(Input_obj::m_joysticks,"m_joysticks");
	HX_MARK_MEMBER_NAME(Input_obj::m_api_joystick,"m_api_joystick");
	HX_MARK_MEMBER_NAME(Input_obj::m_multitouch,"m_multitouch");
	HX_MARK_MEMBER_NAME(Input_obj::log,"log");
	HX_MARK_MEMBER_NAME(Input_obj::timeout,"timeout");
	HX_MARK_MEMBER_NAME(Input_obj::m_timeout_elapsed,"m_timeout_elapsed");
	HX_MARK_MEMBER_NAME(Input_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(Input_obj::deltaMouse,"deltaMouse");
	HX_MARK_MEMBER_NAME(Input_obj::relativeMouse,"relativeMouse");
	HX_MARK_MEMBER_NAME(Input_obj::wheel,"wheel");
	HX_MARK_MEMBER_NAME(Input_obj::scroll,"scroll");
	HX_MARK_MEMBER_NAME(Input_obj::menu,"menu");
	HX_MARK_MEMBER_NAME(Input_obj::emulateTouch,"emulateTouch");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::m_state,"m_state");
	HX_VISIT_MEMBER_NAME(Input_obj::m_hold,"m_hold");
	HX_VISIT_MEMBER_NAME(Input_obj::m_down,"m_down");
	HX_VISIT_MEMBER_NAME(Input_obj::m_active,"m_active");
	HX_VISIT_MEMBER_NAME(Input_obj::m_handler,"m_handler");
	HX_VISIT_MEMBER_NAME(Input_obj::m_touches,"m_touches");
	HX_VISIT_MEMBER_NAME(Input_obj::m_api_touches,"m_api_touches");
	HX_VISIT_MEMBER_NAME(Input_obj::m_joysticks,"m_joysticks");
	HX_VISIT_MEMBER_NAME(Input_obj::m_api_joystick,"m_api_joystick");
	HX_VISIT_MEMBER_NAME(Input_obj::m_multitouch,"m_multitouch");
	HX_VISIT_MEMBER_NAME(Input_obj::log,"log");
	HX_VISIT_MEMBER_NAME(Input_obj::timeout,"timeout");
	HX_VISIT_MEMBER_NAME(Input_obj::m_timeout_elapsed,"m_timeout_elapsed");
	HX_VISIT_MEMBER_NAME(Input_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(Input_obj::deltaMouse,"deltaMouse");
	HX_VISIT_MEMBER_NAME(Input_obj::relativeMouse,"relativeMouse");
	HX_VISIT_MEMBER_NAME(Input_obj::wheel,"wheel");
	HX_VISIT_MEMBER_NAME(Input_obj::scroll,"scroll");
	HX_VISIT_MEMBER_NAME(Input_obj::menu,"menu");
	HX_VISIT_MEMBER_NAME(Input_obj::emulateTouch,"emulateTouch");
};

#endif

hx::Class Input_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_state","\x7f","\x4d","\x96","\x34"),
	HX_HCSTRING("m_hold","\x91","\x39","\x0a","\x8d"),
	HX_HCSTRING("m_down","\xb4","\x68","\x65","\x8a"),
	HX_HCSTRING("m_active","\x98","\xea","\x37","\xdf"),
	HX_HCSTRING("m_handler","\xb8","\xbe","\x57","\x50"),
	HX_HCSTRING("get_touches","\x04","\x7e","\xf2","\x5e"),
	HX_HCSTRING("m_touches","\xdb","\x2c","\x7a","\xe3"),
	HX_HCSTRING("m_api_touches","\xf6","\xbb","\x8e","\xa5"),
	HX_HCSTRING("get_joystick","\xc5","\x94","\x0b","\x51"),
	HX_HCSTRING("m_joysticks","\xa5","\xea","\x08","\x12"),
	HX_HCSTRING("m_api_joystick","\x93","\x8a","\x25","\xd3"),
	HX_HCSTRING("get_multitouch","\xef","\x7e","\xad","\xc6"),
	HX_HCSTRING("m_multitouch","\x78","\x70","\xc3","\x21"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8"),
	HX_HCSTRING("m_timeout_elapsed","\x4c","\xc2","\x9c","\xf7"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("deltaMouse","\x0d","\xbb","\x87","\xb7"),
	HX_HCSTRING("relativeMouse","\xb9","\xe5","\xe1","\x71"),
	HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("menu","\x9f","\x45","\x59","\x48"),
	HX_HCSTRING("emulateTouch","\x0c","\x06","\x5e","\x3c"),
	HX_HCSTRING("GetInputState","\xbd","\xe9","\xa8","\xa6"),
	HX_HCSTRING("Pressed","\x82","\xfa","\x37","\x07"),
	HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"),
	HX_HCSTRING("Hit","\x33","\xfe","\x36","\x00"),
	HX_HCSTRING("GetHoldTime","\x82","\x27","\xe6","\x48"),
	HX_HCSTRING("Filter","\xd8","\x93","\xc9","\xb9"),
	HX_HCSTRING("MultiHit","\x7a","\x41","\x20","\x74"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("UpdateTouchFSM","\x4a","\xf7","\x89","\xdf"),
	HX_HCSTRING("UpdateInput","\x21","\xc5","\xe8","\x87"),
	HX_HCSTRING("TouchFSM","\x21","\x2c","\xbc","\xd9"),
	HX_HCSTRING("UpdateInputState","\x30","\xe9","\x2c","\x66"),
	HX_HCSTRING("InputStateFSM","\xf9","\x3a","\x06","\x36"),
	String(null()) };

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.input.Input","\x5a","\xb8","\xd9","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Input_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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

void Input_obj::__boot()
{
	scroll= false;
	menu= false;
	emulateTouch= false;
}

} // end namespace haxor
} // end namespace input
