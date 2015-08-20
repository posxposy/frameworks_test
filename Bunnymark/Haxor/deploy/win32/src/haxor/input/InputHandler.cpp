#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_core_InputState
#include <haxor/core/InputState.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
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
#ifndef INCLUDED_haxor_input_Touch
#include <haxor/input/Touch.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace input{

Void InputHandler_obj::__construct()
{
HX_STACK_FRAME("haxor.input.InputHandler","new",0xc4966782,"haxor.input.InputHandler.new","haxor/input/InputHandler.hx",31,0x17daf1ac)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//InputHandler_obj::~InputHandler_obj() { }

Dynamic InputHandler_obj::__CreateEmpty() { return  new InputHandler_obj; }
hx::ObjectPtr< InputHandler_obj > InputHandler_obj::__new()
{  hx::ObjectPtr< InputHandler_obj > _result_ = new InputHandler_obj();
	_result_->__construct();
	return _result_;}

Dynamic InputHandler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputHandler_obj > _result_ = new InputHandler_obj();
	_result_->__construct();
	return _result_;}

Void InputHandler_obj::Update( ){
{
		HX_STACK_FRAME("haxor.input.InputHandler","Update",0x72490447,"haxor.input.InputHandler.Update","haxor/input/InputHandler.hx",38,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::haxor::input::Input_obj::UpdateInput();
		HX_STACK_LINE(40)
		::haxor::input::Input_obj::UpdateTouchFSM();
		HX_STACK_LINE(41)
		this->UpdateInput();
		HX_STACK_LINE(42)
		bool tmp = ::haxor::input::Input_obj::emulateTouch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(44)
			int tmp1 = ::haxor::input::KeyCode_obj::Mouse0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			this->EmulateTouch(tmp1,(int)0);
			HX_STACK_LINE(45)
			int tmp2 = ::haxor::input::KeyCode_obj::Mouse1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			this->EmulateTouch(tmp2,(int)2);
			HX_STACK_LINE(46)
			int tmp3 = ::haxor::input::KeyCode_obj::Mouse2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			this->EmulateTouch(tmp3,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputHandler_obj,Update,(void))

Void InputHandler_obj::UpdateInput( ){
{
		HX_STACK_FRAME("haxor.input.InputHandler","UpdateInput",0xc72a4e43,"haxor.input.InputHandler.UpdateInput","haxor/input/InputHandler.hx",53,0x17daf1ac)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputHandler_obj,UpdateInput,(void))

Void InputHandler_obj::Clear( ){
{
		HX_STACK_FRAME("haxor.input.InputHandler","Clear",0x26f9050f,"haxor.input.InputHandler.Clear","haxor/input/InputHandler.hx",59,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::haxor::input::Input_obj::wheel = (int)0;
		HX_STACK_LINE(61)
		::haxor::math::Vector2 tmp = ::haxor::input::Input_obj::deltaMouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		tmp->x = (int)0;
		HX_STACK_LINE(62)
		::haxor::math::Vector2 tmp1 = ::haxor::input::Input_obj::deltaMouse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		tmp1->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputHandler_obj,Clear,(void))

Void InputHandler_obj::OnMouseMove( Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnMouseMove",0x3a6c9fb9,"haxor.input.InputHandler.OnMouseMove","haxor/input/InputHandler.hx",71,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(72)
		Float tmp = p_x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		::haxor::math::Vector2 tmp1 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		::haxor::math::Vector2 tmp4 = ::haxor::input::Input_obj::deltaMouse;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		tmp4->x = tmp3;
		HX_STACK_LINE(73)
		Float tmp5 = p_y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		::haxor::math::Vector2 tmp6 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		::haxor::math::Vector2 tmp9 = ::haxor::input::Input_obj::deltaMouse;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		tmp9->y = tmp8;
		HX_STACK_LINE(74)
		::haxor::math::Vector2 tmp10 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(74)
		tmp10->x = p_x;
		HX_STACK_LINE(75)
		::haxor::math::Vector2 tmp11 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(75)
		tmp11->y = p_y;
		HX_STACK_LINE(76)
		::haxor::math::Vector2 tmp12 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(76)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(76)
		Float tmp14 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(76)
		Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(76)
		::haxor::math::Vector2 tmp16 = ::haxor::input::Input_obj::relativeMouse;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		tmp16->x = tmp15;
		HX_STACK_LINE(77)
		::haxor::math::Vector2 tmp17 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(77)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(77)
		Float tmp19 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(77)
		Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(77)
		::haxor::math::Vector2 tmp21 = ::haxor::input::Input_obj::relativeMouse;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(77)
		tmp21->y = tmp20;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputHandler_obj,OnMouseMove,(void))

Void InputHandler_obj::OnMouseWheel( Float p_wheel){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnMouseWheel",0xa1f38af3,"haxor.input.InputHandler.OnMouseWheel","haxor/input/InputHandler.hx",87,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_wheel,"p_wheel")
		HX_STACK_LINE(87)
		::haxor::input::Input_obj::wheel = p_wheel;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputHandler_obj,OnMouseWheel,(void))

Void InputHandler_obj::OnMouseButton( int p_button,bool p_down){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnMouseButton",0x33d2989a,"haxor.input.InputHandler.OnMouseButton","haxor/input/InputHandler.hx",96,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_button,"p_button")
		HX_STACK_ARG(p_down,"p_down")
		HX_STACK_LINE(97)
		int tmp = p_button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(99)
				int tmp1 = ::haxor::input::KeyCode_obj::Mouse0;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(99)
				bool tmp2 = p_down;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(99)
				::haxor::input::Input_obj::UpdateInputState(tmp1,tmp2,false);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(100)
				int tmp1 = ::haxor::input::KeyCode_obj::Mouse1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				bool tmp2 = p_down;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				::haxor::input::Input_obj::UpdateInputState(tmp1,tmp2,false);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(101)
				int tmp1 = ::haxor::input::KeyCode_obj::Mouse2;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				bool tmp2 = p_down;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				::haxor::input::Input_obj::UpdateInputState(tmp1,tmp2,false);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(102)
				int tmp1 = ::haxor::input::KeyCode_obj::Mouse3;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(102)
				bool tmp2 = p_down;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(102)
				::haxor::input::Input_obj::UpdateInputState(tmp1,tmp2,false);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(103)
				int tmp1 = ::haxor::input::KeyCode_obj::Mouse4;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(103)
				bool tmp2 = p_down;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(103)
				::haxor::input::Input_obj::UpdateInputState(tmp1,tmp2,false);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputHandler_obj,OnMouseButton,(void))

Void InputHandler_obj::OnKey( int p_code,bool p_down){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnKey",0x1106b142,"haxor.input.InputHandler.OnKey","haxor/input/InputHandler.hx",113,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_code,"p_code")
		HX_STACK_ARG(p_down,"p_down")
		HX_STACK_LINE(114)
		int tmp = p_code;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = p_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		::haxor::input::Input_obj::UpdateInputState(tmp,tmp1,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputHandler_obj,OnKey,(void))

Void InputHandler_obj::OnTouchStart( int p_id,Float p_x,Float p_y,hx::Null< Float >  __o_p_rx,hx::Null< Float >  __o_p_ry,hx::Null< Float >  __o_p_pressure,hx::Null< Float >  __o_p_angle){
Float p_rx = __o_p_rx.Default(((Float)0.0));
Float p_ry = __o_p_ry.Default(((Float)0.0));
Float p_pressure = __o_p_pressure.Default(((Float)0.0));
Float p_angle = __o_p_angle.Default(((Float)0.0));
	HX_STACK_FRAME("haxor.input.InputHandler","OnTouchStart",0x3808bae0,"haxor.input.InputHandler.OnTouchStart","haxor/input/InputHandler.hx",122,0x17daf1ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_id,"p_id")
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_rx,"p_rx")
	HX_STACK_ARG(p_ry,"p_ry")
	HX_STACK_ARG(p_pressure,"p_pressure")
	HX_STACK_ARG(p_angle,"p_angle")
{
		HX_STACK_LINE(124)
		Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_api_touches;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		::haxor::input::Touch tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::input::Touch >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		::haxor::input::Touch t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(125)
		t->id = p_id;
		HX_STACK_LINE(126)
		t->position->x = p_x;
		HX_STACK_LINE(127)
		t->position->y = p_y;
		HX_STACK_LINE(128)
		Float tmp3 = t->position->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		Float tmp4 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		t->relativePosition->x = tmp5;
		HX_STACK_LINE(129)
		Float tmp6 = t->position->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		Float tmp7 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(129)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(129)
		t->relativePosition->y = tmp8;
		HX_STACK_LINE(130)
		t->delta->x = ((Float)0.0);
		HX_STACK_LINE(131)
		t->delta->y = ((Float)0.0);
		HX_STACK_LINE(132)
		t->pressure = p_pressure;
		HX_STACK_LINE(133)
		t->radius->x = p_rx;
		HX_STACK_LINE(134)
		t->radius->y = p_ry;
		HX_STACK_LINE(135)
		t->angle = p_angle;
		HX_STACK_LINE(136)
		t->m_down = true;
		HX_STACK_LINE(137)
		Array< ::Dynamic > tmp9 = ::haxor::input::Input_obj::m_touches;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(137)
		::haxor::input::Touch tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(137)
		int tmp11 = tmp9->indexOf(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(137)
		bool tmp12 = (tmp11 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(137)
		if ((tmp12)){
			HX_STACK_LINE(137)
			Array< ::Dynamic > tmp13 = ::haxor::input::Input_obj::m_touches;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(137)
			::haxor::input::Touch tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			tmp13->push(tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(InputHandler_obj,OnTouchStart,(void))

Void InputHandler_obj::OnTouchMove( int p_id,Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnTouchMove",0x53847653,"haxor.input.InputHandler.OnTouchMove","haxor/input/InputHandler.hx",147,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(148)
		Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_api_touches;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		::haxor::input::Touch tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::input::Touch >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		::haxor::input::Touch t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(149)
		bool tmp3 = (t->id >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		if ((tmp3)){
			HX_STACK_LINE(151)
			Float tmp4 = p_x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			Float tmp5 = t->position->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			t->delta->x = tmp6;
			HX_STACK_LINE(152)
			Float tmp7 = p_y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			Float tmp8 = t->position->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(152)
			t->delta->y = tmp9;
		}
		HX_STACK_LINE(154)
		t->position->x = p_x;
		HX_STACK_LINE(155)
		t->position->y = p_y;
		HX_STACK_LINE(156)
		Float tmp4 = t->position->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		Float tmp5 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		t->relativePosition->x = tmp6;
		HX_STACK_LINE(157)
		Float tmp7 = t->position->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		Float tmp8 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		t->relativePosition->y = tmp9;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputHandler_obj,OnTouchMove,(void))

Void InputHandler_obj::OnTouchCancel( int p_id){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnTouchCancel",0x81d4553c,"haxor.input.InputHandler.OnTouchCancel","haxor/input/InputHandler.hx",165,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(166)
		Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_api_touches;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		::haxor::input::Touch tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::input::Touch >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		::haxor::input::Touch t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(167)
		t->m_down = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputHandler_obj,OnTouchCancel,(void))

Void InputHandler_obj::OnTouchEnd( int p_id){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnTouchEnd",0x56730ed9,"haxor.input.InputHandler.OnTouchEnd","haxor/input/InputHandler.hx",175,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(177)
		Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_api_touches;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		::haxor::input::Touch tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::input::Touch >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		::haxor::input::Touch t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(178)
		t->m_down = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputHandler_obj,OnTouchEnd,(void))

Void InputHandler_obj::OnJoystickStart( int p_id,::String p_name){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnJoystickStart",0x827d0b69,"haxor.input.InputHandler.OnJoystickStart","haxor/input/InputHandler.hx",187,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_LINE(188)
		this->m_joystick = null();
		HX_STACK_LINE(189)
		Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_api_joystick;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		::haxor::input::Joystick tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::input::Joystick >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		::haxor::input::Joystick jk = tmp2;		HX_STACK_VAR(jk,"jk");
		HX_STACK_LINE(190)
		bool tmp3 = (jk == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		if ((tmp3)){
			HX_STACK_LINE(190)
			return null();
		}
		HX_STACK_LINE(191)
		this->m_joystick = jk;
		HX_STACK_LINE(192)
		Array< ::Dynamic > tmp4 = ::haxor::input::Input_obj::m_joysticks;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		::haxor::input::Joystick tmp5 = jk;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		int tmp6 = tmp4->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		if ((tmp7)){
			HX_STACK_LINE(192)
			return null();
		}
		HX_STACK_LINE(193)
		jk->id = p_id;
		HX_STACK_LINE(194)
		jk->name = p_name;
		HX_STACK_LINE(195)
		Array< ::Dynamic > tmp8 = ::haxor::input::Input_obj::m_joysticks;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		::haxor::input::Joystick tmp9 = jk;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		tmp8->push(tmp9);
		HX_STACK_LINE(196)
		Array< ::Dynamic > tmp10 = ::haxor::input::Input_obj::m_joysticks;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		int tmp11 = tmp10->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(196)
		bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(196)
		::haxor::input::Joystick_obj::available = tmp12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputHandler_obj,OnJoystickStart,(void))

Void InputHandler_obj::OnJoystickDataUpdate( int p_code,Float p_value,bool p_is_analog){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnJoystickDataUpdate",0x2a91db6c,"haxor.input.InputHandler.OnJoystickDataUpdate","haxor/input/InputHandler.hx",206,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_code,"p_code")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_ARG(p_is_analog,"p_is_analog")
		HX_STACK_LINE(207)
		::haxor::input::Joystick tmp = this->m_joystick;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		if ((tmp1)){
			HX_STACK_LINE(207)
			return null();
		}
		HX_STACK_LINE(208)
		bool tmp2 = p_is_analog;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		if ((tmp3)){
			HX_STACK_LINE(210)
			::haxor::input::Joystick tmp4 = this->m_joystick;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(210)
			Array< Float > tmp5 = tmp4->button;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(210)
			int tmp6 = p_code;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(210)
			Float tmp7 = p_value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(210)
			tmp5[tmp6] = tmp7;
			HX_STACK_LINE(211)
			::haxor::input::Joystick tmp8 = this->m_joystick;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(211)
			Array< ::Dynamic > tmp9 = tmp8->state;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(211)
			int tmp10 = p_code;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(211)
			::haxor::input::Joystick tmp11 = this->m_joystick;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(211)
			Array< ::Dynamic > tmp12 = tmp11->state;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(211)
			int tmp13 = p_code;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(211)
			::haxor::core::InputState tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::core::InputState >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(211)
			::haxor::input::Joystick tmp15 = this->m_joystick;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(211)
			Array< Float > tmp16 = tmp15->button;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			int tmp17 = p_code;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(211)
			Float tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(211)
			Float tmp19 = ::haxor::input::Joystick_obj::buttonBias;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(211)
			bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(211)
			::haxor::core::InputState tmp21 = ::haxor::input::Input_obj::InputStateFSM(tmp14,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(211)
			tmp9[tmp10] = tmp21;
			HX_STACK_LINE(212)
			::haxor::input::Joystick tmp22 = this->m_joystick;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(212)
			Array< ::Dynamic > tmp23 = tmp22->state;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(212)
			int tmp24 = p_code;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(212)
			::haxor::core::InputState tmp25 = tmp23->__get(tmp24).StaticCast< ::haxor::core::InputState >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(212)
			bool tmp26 = (tmp25 == ::haxor::core::InputState_obj::Hold);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(212)
			if ((tmp26)){
				HX_STACK_LINE(212)
				::haxor::input::Joystick tmp27 = this->m_joystick;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(212)
				Array< Float > tmp28 = tmp27->hold;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(212)
				int tmp29 = p_code;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(212)
				Float tmp30 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(212)
				hx::AddEq(tmp28[tmp29],tmp30);
			}
			HX_STACK_LINE(213)
			::haxor::input::Joystick tmp27 = this->m_joystick;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(213)
			Array< ::Dynamic > tmp28 = tmp27->state;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(213)
			int tmp29 = p_code;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(213)
			::haxor::core::InputState tmp30 = tmp28->__get(tmp29).StaticCast< ::haxor::core::InputState >();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(213)
			bool tmp31 = (tmp30 == ::haxor::core::InputState_obj::None);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(213)
			if ((tmp31)){
				HX_STACK_LINE(213)
				::haxor::input::Joystick tmp32 = this->m_joystick;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(213)
				Array< Float > tmp33 = tmp32->hold;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(213)
				int tmp34 = p_code;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(213)
				tmp33[tmp34] = ((Float)0.0);
			}
		}
		else{
			HX_STACK_LINE(217)
			::haxor::input::Joystick tmp4 = this->m_joystick;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			Array< Float > tmp5 = tmp4->analog;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			int tmp6 = p_code;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			Float tmp7 = p_value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			tmp5[tmp6] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputHandler_obj,OnJoystickDataUpdate,(void))

Void InputHandler_obj::OnJoystickAnalogUpdate( ){
{
		HX_STACK_FRAME("haxor.input.InputHandler","OnJoystickAnalogUpdate",0xda26fc32,"haxor.input.InputHandler.OnJoystickAnalogUpdate","haxor/input/InputHandler.hx",225,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		::haxor::input::Joystick tmp = this->m_joystick;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		if ((tmp1)){
			HX_STACK_LINE(226)
			return null();
		}
		HX_STACK_LINE(227)
		Array< Float > tmp2 = ::haxor::input::Joystick_obj::analogBias;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		Float tmp3 = tmp2->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		Float b0 = tmp3;		HX_STACK_VAR(b0,"b0");
		HX_STACK_LINE(228)
		Array< Float > tmp4 = ::haxor::input::Joystick_obj::analogBias;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		Float tmp5 = tmp4->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(228)
		Float b1 = tmp5;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(229)
		Float s = ((Float)1.0);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(230)
		::haxor::math::Vector3 v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(231)
		::haxor::input::Joystick tmp6 = this->m_joystick;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		::haxor::input::Joystick jk = tmp6;		HX_STACK_VAR(jk,"jk");
		HX_STACK_LINE(233)
		v = jk->analogLeft;
		HX_STACK_LINE(234)
		Array< Float > tmp7 = jk->analog;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(234)
		int tmp8 = ::haxor::input::KeyCode_obj::LeftAnalogueHor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(234)
		Float tmp9 = tmp7->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(234)
		v->x = tmp9;
		HX_STACK_LINE(234)
		bool tmp10 = (v->x < ((Float)0.0));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(234)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(234)
		if ((tmp10)){
			HX_STACK_LINE(234)
			tmp11 = ((Float)-1.0);
		}
		else{
			HX_STACK_LINE(234)
			tmp11 = ((Float)1.0);
		}
		HX_STACK_LINE(234)
		s = tmp11;
		HX_STACK_LINE(234)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				Float p_a = v->x;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(234)
				bool tmp14 = (p_a < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(234)
				if ((tmp14)){
					HX_STACK_LINE(234)
					Float tmp15 = p_a;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(234)
					tmp13 = -(tmp15);
				}
				else{
					HX_STACK_LINE(234)
					tmp13 = p_a;
				}
			}
			HX_STACK_LINE(234)
			Float tmp14 = b0;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(234)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(234)
			Float tmp16 = (b1 - b0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(234)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(234)
			Float p_v = tmp17;		HX_STACK_VAR(p_v,"p_v");
			HX_STACK_LINE(234)
			bool tmp18 = (p_v <= ((Float)0.0));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(234)
			if ((tmp18)){
				HX_STACK_LINE(234)
				tmp12 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(234)
				bool tmp19 = (p_v >= ((Float)1.0));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(234)
				if ((tmp19)){
					HX_STACK_LINE(234)
					tmp12 = ((Float)1.0);
				}
				else{
					HX_STACK_LINE(234)
					tmp12 = p_v;
				}
			}
		}
		HX_STACK_LINE(234)
		v->x = tmp12;
		HX_STACK_LINE(234)
		Float tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(234)
		Float tmp14 = (v->x * ((Float)100.0));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(234)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(234)
		Float tmp16 = ((Float)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(234)
		Float tmp17 = (tmp13 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(234)
		Float tmp18 = (tmp17 * ((Float)0.01));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(234)
		v->x = tmp18;
		HX_STACK_LINE(235)
		Array< Float > tmp19 = jk->analog;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(235)
		int tmp20 = ::haxor::input::KeyCode_obj::LeftAnalogueVert;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(235)
		Float tmp21 = tmp19->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(235)
		v->y = tmp21;
		HX_STACK_LINE(235)
		bool tmp22 = (v->y < ((Float)0.0));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(235)
		Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(235)
		if ((tmp22)){
			HX_STACK_LINE(235)
			tmp23 = ((Float)-1.0);
		}
		else{
			HX_STACK_LINE(235)
			tmp23 = ((Float)1.0);
		}
		HX_STACK_LINE(235)
		s = tmp23;
		HX_STACK_LINE(235)
		Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				Float p_a = v->y;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(235)
				bool tmp26 = (p_a < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(235)
				if ((tmp26)){
					HX_STACK_LINE(235)
					Float tmp27 = p_a;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(235)
					tmp25 = -(tmp27);
				}
				else{
					HX_STACK_LINE(235)
					tmp25 = p_a;
				}
			}
			HX_STACK_LINE(235)
			Float tmp26 = b0;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(235)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(235)
			Float tmp28 = (b1 - b0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(235)
			Float tmp29 = (Float(tmp27) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(235)
			Float p_v = tmp29;		HX_STACK_VAR(p_v,"p_v");
			HX_STACK_LINE(235)
			bool tmp30 = (p_v <= ((Float)0.0));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(235)
			if ((tmp30)){
				HX_STACK_LINE(235)
				tmp24 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(235)
				bool tmp31 = (p_v >= ((Float)1.0));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(235)
				if ((tmp31)){
					HX_STACK_LINE(235)
					tmp24 = ((Float)1.0);
				}
				else{
					HX_STACK_LINE(235)
					tmp24 = p_v;
				}
			}
		}
		HX_STACK_LINE(235)
		v->y = tmp24;
		HX_STACK_LINE(235)
		Float tmp25 = s;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(235)
		Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(235)
		Float tmp27 = (v->y * ((Float)100.0));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(235)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(235)
		Float tmp29 = ((Float)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(235)
		Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(235)
		Float tmp31 = (tmp30 * ((Float)0.01));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(235)
		v->y = tmp31;
		HX_STACK_LINE(237)
		Array< Float > tmp32 = jk->button;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(237)
		int tmp33 = ::haxor::input::KeyCode_obj::LeftAnalogueStick;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(237)
		Float tmp34 = tmp32->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(237)
		bool tmp35 = (tmp34 > ((Float)0.5));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(237)
		Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(237)
		if ((tmp35)){
			HX_STACK_LINE(237)
			tmp36 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(237)
			tmp36 = ((Float)0.0);
		}
		HX_STACK_LINE(237)
		v->z = tmp36;
		HX_STACK_LINE(239)
		v = jk->analogRight;
		HX_STACK_LINE(240)
		Array< Float > tmp37 = jk->analog;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(240)
		int tmp38 = ::haxor::input::KeyCode_obj::RightAnalogueHor;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(240)
		Float tmp39 = tmp37->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(240)
		v->x = tmp39;
		HX_STACK_LINE(240)
		bool tmp40 = (v->x < ((Float)0.0));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(240)
		Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(240)
		if ((tmp40)){
			HX_STACK_LINE(240)
			tmp41 = ((Float)-1.0);
		}
		else{
			HX_STACK_LINE(240)
			tmp41 = ((Float)1.0);
		}
		HX_STACK_LINE(240)
		s = tmp41;
		HX_STACK_LINE(240)
		Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				Float p_a = v->x;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(240)
				bool tmp44 = (p_a < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(240)
				if ((tmp44)){
					HX_STACK_LINE(240)
					Float tmp45 = p_a;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(240)
					tmp43 = -(tmp45);
				}
				else{
					HX_STACK_LINE(240)
					tmp43 = p_a;
				}
			}
			HX_STACK_LINE(240)
			Float tmp44 = b0;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(240)
			Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(240)
			Float tmp46 = (b1 - b0);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(240)
			Float tmp47 = (Float(tmp45) / Float(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(240)
			Float p_v = tmp47;		HX_STACK_VAR(p_v,"p_v");
			HX_STACK_LINE(240)
			bool tmp48 = (p_v <= ((Float)0.0));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(240)
			if ((tmp48)){
				HX_STACK_LINE(240)
				tmp42 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(240)
				bool tmp49 = (p_v >= ((Float)1.0));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(240)
				if ((tmp49)){
					HX_STACK_LINE(240)
					tmp42 = ((Float)1.0);
				}
				else{
					HX_STACK_LINE(240)
					tmp42 = p_v;
				}
			}
		}
		HX_STACK_LINE(240)
		v->x = tmp42;
		HX_STACK_LINE(240)
		Float tmp43 = s;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(240)
		Float tmp44 = (v->x * ((Float)100.0));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(240)
		int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(240)
		Float tmp46 = ((Float)(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(240)
		Float tmp47 = (tmp43 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(240)
		Float tmp48 = (tmp47 * ((Float)0.01));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(240)
		v->x = tmp48;
		HX_STACK_LINE(241)
		Array< Float > tmp49 = jk->analog;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(241)
		int tmp50 = ::haxor::input::KeyCode_obj::RightAnalogueVert;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(241)
		Float tmp51 = tmp49->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(241)
		v->y = tmp51;
		HX_STACK_LINE(241)
		bool tmp52 = (v->y < ((Float)0.0));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(241)
		Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(241)
		if ((tmp52)){
			HX_STACK_LINE(241)
			tmp53 = ((Float)-1.0);
		}
		else{
			HX_STACK_LINE(241)
			tmp53 = ((Float)1.0);
		}
		HX_STACK_LINE(241)
		s = tmp53;
		HX_STACK_LINE(241)
		Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				Float p_a = v->y;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(241)
				bool tmp56 = (p_a < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(241)
				if ((tmp56)){
					HX_STACK_LINE(241)
					Float tmp57 = p_a;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(241)
					tmp55 = -(tmp57);
				}
				else{
					HX_STACK_LINE(241)
					tmp55 = p_a;
				}
			}
			HX_STACK_LINE(241)
			Float tmp56 = b0;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(241)
			Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(241)
			Float tmp58 = (b1 - b0);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(241)
			Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(241)
			Float p_v = tmp59;		HX_STACK_VAR(p_v,"p_v");
			HX_STACK_LINE(241)
			bool tmp60 = (p_v <= ((Float)0.0));		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(241)
			if ((tmp60)){
				HX_STACK_LINE(241)
				tmp54 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(241)
				bool tmp61 = (p_v >= ((Float)1.0));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(241)
				if ((tmp61)){
					HX_STACK_LINE(241)
					tmp54 = ((Float)1.0);
				}
				else{
					HX_STACK_LINE(241)
					tmp54 = p_v;
				}
			}
		}
		HX_STACK_LINE(241)
		v->y = tmp54;
		HX_STACK_LINE(241)
		Float tmp55 = s;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(241)
		Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(241)
		Float tmp57 = (v->y * ((Float)100.0));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(241)
		int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(241)
		Float tmp59 = ((Float)(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(241)
		Float tmp60 = (tmp56 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(241)
		Float tmp61 = (tmp60 * ((Float)0.01));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(241)
		v->y = tmp61;
		HX_STACK_LINE(242)
		Array< Float > tmp62 = jk->button;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(242)
		int tmp63 = ::haxor::input::KeyCode_obj::RightAnalogueStick;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(242)
		Float tmp64 = tmp62->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(242)
		bool tmp65 = (tmp64 > ((Float)0.5));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(242)
		Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(242)
		if ((tmp65)){
			HX_STACK_LINE(242)
			tmp66 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(242)
			tmp66 = ((Float)0.0);
		}
		HX_STACK_LINE(242)
		v->z = tmp66;
		HX_STACK_LINE(244)
		Array< Float > tmp67 = jk->button;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(244)
		int tmp68 = ::haxor::input::KeyCode_obj::LeftShoulderBottom;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(244)
		Float tmp69 = tmp67->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(244)
		jk->triggerLeft = tmp69;
		HX_STACK_LINE(244)
		Float tmp70;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			Float tmp71 = (jk->triggerLeft - b0);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(244)
			Float tmp72 = (b1 - b0);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(244)
			Float tmp73 = (Float(tmp71) / Float(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(244)
			Float p_v = tmp73;		HX_STACK_VAR(p_v,"p_v");
			HX_STACK_LINE(244)
			bool tmp74 = (p_v <= ((Float)0.0));		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(244)
			if ((tmp74)){
				HX_STACK_LINE(244)
				tmp70 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(244)
				bool tmp75 = (p_v >= ((Float)1.0));		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(244)
				if ((tmp75)){
					HX_STACK_LINE(244)
					tmp70 = ((Float)1.0);
				}
				else{
					HX_STACK_LINE(244)
					tmp70 = p_v;
				}
			}
		}
		HX_STACK_LINE(244)
		jk->triggerLeft = tmp70;
		HX_STACK_LINE(245)
		Array< Float > tmp71 = jk->button;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(245)
		int tmp72 = ::haxor::input::KeyCode_obj::RightShoulderBottom;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(245)
		Float tmp73 = tmp71->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(245)
		jk->triggerRight = tmp73;
		HX_STACK_LINE(245)
		Float tmp74;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			Float tmp75 = (jk->triggerRight - b0);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(245)
			Float tmp76 = (b1 - b0);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(245)
			Float tmp77 = (Float(tmp75) / Float(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(245)
			Float p_v = tmp77;		HX_STACK_VAR(p_v,"p_v");
			HX_STACK_LINE(245)
			bool tmp78 = (p_v <= ((Float)0.0));		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(245)
			if ((tmp78)){
				HX_STACK_LINE(245)
				tmp74 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(245)
				bool tmp79 = (p_v >= ((Float)1.0));		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(245)
				if ((tmp79)){
					HX_STACK_LINE(245)
					tmp74 = ((Float)1.0);
				}
				else{
					HX_STACK_LINE(245)
					tmp74 = p_v;
				}
			}
		}
		HX_STACK_LINE(245)
		jk->triggerRight = tmp74;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputHandler_obj,OnJoystickAnalogUpdate,(void))

Void InputHandler_obj::RequestJoystickVibration( ::haxor::input::Joystick p_joystick){
{
		HX_STACK_FRAME("haxor.input.InputHandler","RequestJoystickVibration",0x9aa08525,"haxor.input.InputHandler.RequestJoystickVibration","haxor/input/InputHandler.hx",253,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_joystick,"p_joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputHandler_obj,RequestJoystickVibration,(void))

Void InputHandler_obj::EmulateTouch( int p_code,int p_id){
{
		HX_STACK_FRAME("haxor.input.InputHandler","EmulateTouch",0x1e86c6ca,"haxor.input.InputHandler.EmulateTouch","haxor/input/InputHandler.hx",262,0x17daf1ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_code,"p_code")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(264)
		int tmp = p_code;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		bool tmp1 = ::haxor::input::Input_obj::Down(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		if ((tmp1)){
			HX_STACK_LINE(266)
			::haxor::math::Vector2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(266)
				Array< ::Dynamic > tmp4 = _this->m_v2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				int tmp5 = (_this->m_nv2 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				int tmp6 = _this->m_v2->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(266)
				int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				int tmp8 = _this->m_nv2 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(266)
				tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector2 >();
			}
			HX_STACK_LINE(266)
			::haxor::math::Vector2 p = tmp2;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(267)
			int tmp3 = p_id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			switch( (int)(tmp3)){
				case (int)0: {
					HX_STACK_LINE(269)
					::haxor::math::Vector2 tmp4 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(269)
					p->Set2(tmp4);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(270)
					Float tmp4 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(270)
					Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(270)
					Float tmp6 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(270)
					Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(270)
					p->Set(tmp5,tmp7);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(271)
					Float tmp4 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(271)
					Float tmp5 = ::Math_obj::random();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(271)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(271)
					Float tmp7 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(271)
					Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(271)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(271)
					p->Set(tmp6,tmp9);
				}
				;break;
			}
			HX_STACK_LINE(273)
			int tmp4 = p_id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			Float tmp5 = p->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			Float tmp6 = p->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(273)
			this->OnTouchStart(tmp4,tmp5,tmp6,null(),null(),null(),null());
		}
		HX_STACK_LINE(275)
		bool tmp2 = (p_id == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		if ((tmp2)){
			HX_STACK_LINE(275)
			int tmp3 = p_code;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			bool tmp4 = ::haxor::input::Input_obj::Pressed(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			if ((tmp4)){
				HX_STACK_LINE(275)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(275)
					::haxor::math::Vector2 tmp6 = ::haxor::input::Input_obj::deltaMouse;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(275)
					::haxor::math::Vector2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(275)
					Float tmp7 = (_this->x * _this->x);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(275)
					Float tmp8 = (_this->y * _this->y);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(275)
					Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(275)
					tmp5 = ::Math_obj::sqrt(tmp9);
				}
				HX_STACK_LINE(275)
				bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(275)
				if ((tmp6)){
					HX_STACK_LINE(275)
					int tmp7 = p_id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(275)
					::haxor::math::Vector2 tmp8 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(275)
					Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(275)
					::haxor::math::Vector2 tmp10 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(275)
					Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(275)
					this->OnTouchMove(tmp7,tmp9,tmp11);
				}
			}
		}
		HX_STACK_LINE(276)
		int tmp3 = p_code;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(276)
		bool tmp4 = ::haxor::input::Input_obj::Hit(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		if ((tmp4)){
			HX_STACK_LINE(276)
			int tmp5 = p_id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(276)
			this->OnTouchEnd(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputHandler_obj,EmulateTouch,(void))


InputHandler_obj::InputHandler_obj()
{
}

void InputHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputHandler);
	HX_MARK_MEMBER_NAME(m_joystick,"m_joystick");
	HX_MARK_END_CLASS();
}

void InputHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_joystick,"m_joystick");
}

Dynamic InputHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		if (HX_FIELD_EQ(inName,"OnKey") ) { return OnKey_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_joystick") ) { return m_joystick; }
		if (HX_FIELD_EQ(inName,"OnTouchEnd") ) { return OnTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"UpdateInput") ) { return UpdateInput_dyn(); }
		if (HX_FIELD_EQ(inName,"OnMouseMove") ) { return OnMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"OnTouchMove") ) { return OnTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"OnMouseWheel") ) { return OnMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"OnTouchStart") ) { return OnTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"EmulateTouch") ) { return EmulateTouch_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"OnMouseButton") ) { return OnMouseButton_dyn(); }
		if (HX_FIELD_EQ(inName,"OnTouchCancel") ) { return OnTouchCancel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"OnJoystickStart") ) { return OnJoystickStart_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"OnJoystickDataUpdate") ) { return OnJoystickDataUpdate_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"OnJoystickAnalogUpdate") ) { return OnJoystickAnalogUpdate_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RequestJoystickVibration") ) { return RequestJoystickVibration_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputHandler_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"m_joystick") ) { m_joystick=inValue.Cast< ::haxor::input::Joystick >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InputHandler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void InputHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_joystick","\x0e","\xe2","\x3c","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::input::Joystick*/ ,(int)offsetof(InputHandler_obj,m_joystick),HX_HCSTRING("m_joystick","\x0e","\xe2","\x3c","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_joystick","\x0e","\xe2","\x3c","\xc3"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("UpdateInput","\x21","\xc5","\xe8","\x87"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("OnMouseMove","\x97","\x16","\x2b","\xfb"),
	HX_HCSTRING("OnMouseWheel","\x55","\x16","\xdd","\x87"),
	HX_HCSTRING("OnMouseButton","\xf8","\x02","\x43","\x7a"),
	HX_HCSTRING("OnKey","\xa0","\x8d","\x96","\xc5"),
	HX_HCSTRING("OnTouchStart","\x42","\x46","\xf2","\x1d"),
	HX_HCSTRING("OnTouchMove","\x31","\xed","\x42","\x14"),
	HX_HCSTRING("OnTouchCancel","\x9a","\xbf","\x44","\xc8"),
	HX_HCSTRING("OnTouchEnd","\xbb","\x9d","\x71","\xd4"),
	HX_HCSTRING("OnJoystickStart","\x47","\x49","\xa3","\x95"),
	HX_HCSTRING("OnJoystickDataUpdate","\xce","\x98","\xe8","\x75"),
	HX_HCSTRING("OnJoystickAnalogUpdate","\x14","\x56","\xb1","\xb6"),
	HX_HCSTRING("RequestJoystickVibration","\x87","\x9b","\xde","\x71"),
	HX_HCSTRING("EmulateTouch","\x2c","\x52","\x70","\x04"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class InputHandler_obj::__mClass;

void InputHandler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.input.InputHandler","\x90","\x3e","\x30","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &InputHandler_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputHandler_obj >;
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

} // end namespace haxor
} // end namespace input
