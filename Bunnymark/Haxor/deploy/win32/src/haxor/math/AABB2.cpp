#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_math_AABB2
#include <haxor/math/AABB2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
namespace haxor{
namespace math{

Void AABB2_obj::__construct(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_width,hx::Null< Float >  __o_p_height)
{
HX_STACK_FRAME("haxor.math.AABB2","new",0x803d220a,"haxor.math.AABB2.new","haxor/math/AABB2.hx",118,0x4f052906)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_x,"p_x")
HX_STACK_ARG(__o_p_y,"p_y")
HX_STACK_ARG(__o_p_width,"p_width")
HX_STACK_ARG(__o_p_height,"p_height")
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_width = __o_p_width.Default(0);
Float p_height = __o_p_height.Default(0);
{
	HX_STACK_LINE(119)
	Float tmp = p_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	Float tmp1 = p_y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	Float tmp2 = p_width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	Float tmp3 = p_height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(119)
	this->SetXYWH(tmp,tmp1,tmp2,tmp3);
}
;
	return null();
}

//AABB2_obj::~AABB2_obj() { }

Dynamic AABB2_obj::__CreateEmpty() { return  new AABB2_obj; }
hx::ObjectPtr< AABB2_obj > AABB2_obj::__new(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_width,hx::Null< Float >  __o_p_height)
{  hx::ObjectPtr< AABB2_obj > _result_ = new AABB2_obj();
	_result_->__construct(__o_p_x,__o_p_y,__o_p_width,__o_p_height);
	return _result_;}

Dynamic AABB2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AABB2_obj > _result_ = new AABB2_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::haxor::math::AABB2 AABB2_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_clone",0x48895cde,"haxor.math.AABB2.get_clone","haxor/math/AABB2.hx",46,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	Float tmp = this->get_xMin();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	Float tmp1 = this->get_xMax();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Float tmp2 = this->get_yMin();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = this->get_yMax();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	::haxor::math::AABB2 tmp4 = ::haxor::math::AABB2_obj::FromMinMax(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_clone,return )

::haxor::math::Vector2 AABB2_obj::get_min( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_min",0xa64c48d3,"haxor.math.AABB2.get_min","haxor/math/AABB2.hx",49,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	Float tmp1 = this->m_yMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_min,return )

::haxor::math::Vector2 AABB2_obj::set_min( ::haxor::math::Vector2 v){
	HX_STACK_FRAME("haxor.math.AABB2","set_min",0x994dd9df,"haxor.math.AABB2.set_min","haxor/math/AABB2.hx",50,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(50)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	this->set_xMin(tmp);
	HX_STACK_LINE(50)
	Float tmp1 = v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	this->set_yMin(tmp1);
	HX_STACK_LINE(50)
	::haxor::math::Vector2 tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_min,return )

::haxor::math::Vector2 AABB2_obj::get_max( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_max",0xa64c41e5,"haxor.math.AABB2.get_max","haxor/math/AABB2.hx",53,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	Float tmp = this->m_xMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float tmp1 = this->m_yMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_max,return )

::haxor::math::Vector2 AABB2_obj::set_max( ::haxor::math::Vector2 v){
	HX_STACK_FRAME("haxor.math.AABB2","set_max",0x994dd2f1,"haxor.math.AABB2.set_max","haxor/math/AABB2.hx",54,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(54)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	this->set_xMax(tmp);
	HX_STACK_LINE(54)
	Float tmp1 = v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	this->set_yMax(tmp1);
	HX_STACK_LINE(54)
	::haxor::math::Vector2 tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_max,return )

Float AABB2_obj::get_xMin( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_xMin",0xe3a38599,"haxor.math.AABB2.get_xMin","haxor/math/AABB2.hx",57,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_xMin,return )

Float AABB2_obj::set_xMin( Float v){
	HX_STACK_FRAME("haxor.math.AABB2","set_xMin",0x9200df0d,"haxor.math.AABB2.set_xMin","haxor/math/AABB2.hx",58,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(58)
	this->m_xMin = v;
	HX_STACK_LINE(58)
	this->Validate();
	HX_STACK_LINE(58)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_xMin,return )

Float AABB2_obj::get_yMin( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_yMin",0xe44cbc38,"haxor.math.AABB2.get_yMin","haxor/math/AABB2.hx",62,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Float tmp = this->m_yMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_yMin,return )

Float AABB2_obj::set_yMin( Float v){
	HX_STACK_FRAME("haxor.math.AABB2","set_yMin",0x92aa15ac,"haxor.math.AABB2.set_yMin","haxor/math/AABB2.hx",63,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(63)
	this->m_yMin = v;
	HX_STACK_LINE(63)
	this->Validate();
	HX_STACK_LINE(63)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_yMin,return )

Float AABB2_obj::get_xMax( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_xMax",0xe3a37eab,"haxor.math.AABB2.get_xMax","haxor/math/AABB2.hx",67,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	Float tmp = this->m_xMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_xMax,return )

Float AABB2_obj::set_xMax( Float v){
	HX_STACK_FRAME("haxor.math.AABB2","set_xMax",0x9200d81f,"haxor.math.AABB2.set_xMax","haxor/math/AABB2.hx",68,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(68)
	this->m_xMax = v;
	HX_STACK_LINE(68)
	this->Validate();
	HX_STACK_LINE(68)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_xMax,return )

Float AABB2_obj::get_yMax( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_yMax",0xe44cb54a,"haxor.math.AABB2.get_yMax","haxor/math/AABB2.hx",72,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	Float tmp = this->m_yMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_yMax,return )

Float AABB2_obj::set_yMax( Float v){
	HX_STACK_FRAME("haxor.math.AABB2","set_yMax",0x92aa0ebe,"haxor.math.AABB2.set_yMax","haxor/math/AABB2.hx",73,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(73)
	this->m_yMax = v;
	HX_STACK_LINE(73)
	this->Validate();
	HX_STACK_LINE(73)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_yMax,return )

::haxor::math::Vector2 AABB2_obj::get_center( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_center",0x27352d34,"haxor.math.AABB2.get_center","haxor/math/AABB2.hx",77,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	Float tmp = this->get_xMin();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	Float tmp1 = this->get_xMax();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	Float tmp2 = this->get_xMin();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	Float tmp5 = (tmp + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	Float tmp6 = this->get_yMin();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	Float tmp7 = this->get_yMax();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(77)
	Float tmp8 = this->get_yMin();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(77)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(77)
	Float tmp10 = (tmp9 * ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(77)
	Float tmp11 = (tmp6 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(77)
	::haxor::math::Vector2 tmp12 = ::haxor::math::Vector2_obj::__new(tmp5,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(77)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_center,return )

::haxor::math::Vector2 AABB2_obj::set_center( ::haxor::math::Vector2 v){
	HX_STACK_FRAME("haxor.math.AABB2","set_center",0x2ab2cba8,"haxor.math.AABB2.set_center","haxor/math/AABB2.hx",79,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(80)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		Float tmp1 = this->get_xMax();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		Float tmp2 = this->get_xMin();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(80)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(80)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(80)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(80)
	Float tmp1 = (tmp * ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	Float hw = tmp1;		HX_STACK_VAR(hw,"hw");
	HX_STACK_LINE(81)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		Float tmp3 = this->get_yMax();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		Float tmp4 = this->get_yMin();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		Float p_a = tmp5;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(81)
		bool tmp6 = (p_a < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		if ((tmp6)){
			HX_STACK_LINE(81)
			Float tmp7 = p_a;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			tmp2 = -(tmp7);
		}
		else{
			HX_STACK_LINE(81)
			tmp2 = p_a;
		}
	}
	HX_STACK_LINE(81)
	Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	Float hh = tmp3;		HX_STACK_VAR(hh,"hh");
	HX_STACK_LINE(82)
	Float tmp4 = (v->x - hw);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	this->m_xMin = tmp4;
	HX_STACK_LINE(83)
	Float tmp5 = (v->x + hw);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	this->m_xMax = tmp5;
	HX_STACK_LINE(84)
	Float tmp6 = (v->y - hh);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(84)
	this->m_yMin = tmp6;
	HX_STACK_LINE(85)
	Float tmp7 = (v->y + hh);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	this->m_yMax = tmp7;
	HX_STACK_LINE(86)
	::haxor::math::Vector2 tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(86)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_center,return )

Float AABB2_obj::get_x( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_x",0xdb813579,"haxor.math.AABB2.get_x","haxor/math/AABB2.hx",90,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	Float tmp = this->get_xMin();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_x,return )

Float AABB2_obj::set_x( Float v){
	HX_STACK_FRAME("haxor.math.AABB2","set_x",0xc4502b85,"haxor.math.AABB2.set_x","haxor/math/AABB2.hx",91,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(91)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	this->set_xMin(tmp);
	HX_STACK_LINE(91)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_x,return )

Float AABB2_obj::get_y( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_y",0xdb81357a,"haxor.math.AABB2.get_y","haxor/math/AABB2.hx",94,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	Float tmp = this->get_yMin();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_y,return )

Float AABB2_obj::set_y( Float v){
	HX_STACK_FRAME("haxor.math.AABB2","set_y",0xc4502b86,"haxor.math.AABB2.set_y","haxor/math/AABB2.hx",95,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(95)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	this->set_yMin(tmp);
	HX_STACK_LINE(95)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_y,return )

Float AABB2_obj::get_width( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_width",0xca88ff87,"haxor.math.AABB2.get_width","haxor/math/AABB2.hx",99,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float tmp1 = this->get_xMax();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		Float tmp2 = this->get_xMin();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(99)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		if ((tmp4)){
			HX_STACK_LINE(99)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(99)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(99)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_width,return )

Float AABB2_obj::set_width( Float v){
	HX_STACK_FRAME("haxor.math.AABB2","set_width",0xadd9eb93,"haxor.math.AABB2.set_width","haxor/math/AABB2.hx",100,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(100)
	Float tmp = this->get_xMin();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	this->set_xMax(tmp2);
	HX_STACK_LINE(100)
	Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_width,return )

Float AABB2_obj::get_height( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_height",0x23a60f46,"haxor.math.AABB2.get_height","haxor/math/AABB2.hx",103,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		Float tmp1 = this->get_yMax();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		Float tmp2 = this->get_yMin();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(103)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		if ((tmp4)){
			HX_STACK_LINE(103)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(103)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_height,return )

Float AABB2_obj::set_height( Float v){
	HX_STACK_FRAME("haxor.math.AABB2","set_height",0x2723adba,"haxor.math.AABB2.set_height","haxor/math/AABB2.hx",104,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(104)
	Float tmp = this->get_yMin();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	this->set_yMax(tmp2);
	HX_STACK_LINE(104)
	Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_height,return )

::haxor::math::Vector2 AABB2_obj::get_size( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_size",0xe06ac260,"haxor.math.AABB2.get_size","haxor/math/AABB2.hx",107,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(107)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		Float tmp1 = this->get_xMax();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		Float tmp2 = this->get_xMin();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(107)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		if ((tmp4)){
			HX_STACK_LINE(107)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(107)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(107)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		Float tmp2 = this->get_yMax();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		Float tmp3 = this->get_yMin();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		Float p_a = tmp4;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(107)
		bool tmp5 = (p_a < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		if ((tmp5)){
			HX_STACK_LINE(107)
			Float tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			tmp1 = -(tmp6);
		}
		else{
			HX_STACK_LINE(107)
			tmp1 = p_a;
		}
	}
	HX_STACK_LINE(107)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_size,return )

::haxor::math::Vector2 AABB2_obj::set_size( ::haxor::math::Vector2 v){
	HX_STACK_FRAME("haxor.math.AABB2","set_size",0x8ec81bd4,"haxor.math.AABB2.set_size","haxor/math/AABB2.hx",108,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		Float v1 = v->x;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(108)
		Float tmp = this->get_xMin();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		Float tmp1 = v1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		this->set_xMax(tmp2);
		HX_STACK_LINE(108)
		v1;
	}
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		Float v1 = v->y;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(108)
		Float tmp = this->get_yMin();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		Float tmp1 = v1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		this->set_yMax(tmp2);
		HX_STACK_LINE(108)
		v1;
	}
	HX_STACK_LINE(108)
	::haxor::math::Vector2 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,set_size,return )

Void AABB2_obj::Validate( ){
{
		HX_STACK_FRAME("haxor.math.AABB2","Validate",0xf2f1f2cc,"haxor.math.AABB2.Validate","haxor/math/AABB2.hx",126,0x4f052906)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,Validate,(void))

::haxor::math::AABB2 AABB2_obj::Add( ::haxor::math::AABB2 p_v){
	HX_STACK_FRAME("haxor.math.AABB2","Add",0x801afbab,"haxor.math.AABB2.Add","haxor/math/AABB2.hx",143,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(144)
	Float tmp = p_v->m_xMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	Float tmp1 = this->m_xMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	Float tmp2 = ::Math_obj::max(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	this->m_xMax = tmp2;
	HX_STACK_LINE(145)
	Float tmp3 = p_v->m_xMin;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	Float tmp4 = this->m_xMin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	Float tmp5 = ::Math_obj::min(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(145)
	this->m_xMin = tmp5;
	HX_STACK_LINE(146)
	Float tmp6 = p_v->m_yMax;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(146)
	Float tmp7 = this->m_yMax;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(146)
	Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(146)
	this->m_yMax = tmp8;
	HX_STACK_LINE(147)
	Float tmp9 = p_v->m_yMin;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(147)
	Float tmp10 = this->m_yMin;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(147)
	Float tmp11 = ::Math_obj::min(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(147)
	this->m_yMin = tmp11;
	HX_STACK_LINE(148)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,Add,return )

::haxor::math::AABB2 AABB2_obj::Set( Float p_xmin,Float p_xmax,Float p_ymin,Float p_ymax){
	HX_STACK_FRAME("haxor.math.AABB2","Set",0x8028a52c,"haxor.math.AABB2.Set","haxor/math/AABB2.hx",160,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_xmin,"p_xmin")
	HX_STACK_ARG(p_xmax,"p_xmax")
	HX_STACK_ARG(p_ymin,"p_ymin")
	HX_STACK_ARG(p_ymax,"p_ymax")
	HX_STACK_LINE(161)
	this->m_xMin = p_xmin;
	HX_STACK_LINE(162)
	this->m_yMin = p_ymin;
	HX_STACK_LINE(163)
	this->m_xMax = p_xmax;
	HX_STACK_LINE(164)
	this->m_yMax = p_ymax;
	HX_STACK_LINE(165)
	this->Validate();
	HX_STACK_LINE(166)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(AABB2_obj,Set,return )

::haxor::math::AABB2 AABB2_obj::SetXYWH( Float p_x,Float p_y,Float p_width,Float p_height){
	HX_STACK_FRAME("haxor.math.AABB2","SetXYWH",0x61ef467e,"haxor.math.AABB2.SetXYWH","haxor/math/AABB2.hx",178,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
	HX_STACK_LINE(179)
	this->m_xMin = p_x;
	HX_STACK_LINE(180)
	this->m_yMin = p_y;
	HX_STACK_LINE(181)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	Float tmp1 = p_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	this->m_xMax = tmp2;
	HX_STACK_LINE(182)
	Float tmp3 = this->m_yMin;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	Float tmp4 = p_height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(182)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(182)
	this->m_yMax = tmp5;
	HX_STACK_LINE(183)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(AABB2_obj,SetXYWH,return )

::haxor::math::AABB2 AABB2_obj::SetAABB2( ::haxor::math::AABB2 p_v){
	HX_STACK_FRAME("haxor.math.AABB2","SetAABB2",0x0149fce6,"haxor.math.AABB2.SetAABB2","haxor/math/AABB2.hx",192,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(193)
	this->m_xMin = p_v->m_xMin;
	HX_STACK_LINE(194)
	this->m_yMin = p_v->m_yMin;
	HX_STACK_LINE(195)
	this->m_xMax = p_v->m_xMax;
	HX_STACK_LINE(196)
	this->m_yMax = p_v->m_yMax;
	HX_STACK_LINE(197)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,SetAABB2,return )

Void AABB2_obj::Encapsulate( ::haxor::math::Vector2 p_point){
{
		HX_STACK_FRAME("haxor.math.AABB2","Encapsulate",0xf4daac5b,"haxor.math.AABB2.Encapsulate","haxor/math/AABB2.hx",205,0x4f052906)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_point,"p_point")
		HX_STACK_LINE(206)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			Float tmp1 = this->get_xMin();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(206)
			Float b = tmp1;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(206)
			Float tmp2 = p_point->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			Float tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			tmp = ::Math_obj::min(tmp2,tmp3);
		}
		HX_STACK_LINE(206)
		this->set_xMin(tmp);
		HX_STACK_LINE(207)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			Float tmp2 = this->get_xMax();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			Float b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(207)
			Float tmp3 = p_point->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			Float tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			tmp1 = ::Math_obj::max(tmp3,tmp4);
		}
		HX_STACK_LINE(207)
		this->set_xMax(tmp1);
		HX_STACK_LINE(208)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			Float tmp3 = this->get_yMin();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(208)
			Float b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(208)
			Float tmp4 = p_point->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			Float tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			tmp2 = ::Math_obj::min(tmp4,tmp5);
		}
		HX_STACK_LINE(208)
		this->set_yMin(tmp2);
		HX_STACK_LINE(209)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			Float tmp4 = this->get_yMax();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			Float b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(209)
			Float tmp5 = p_point->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			Float tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			tmp3 = ::Math_obj::max(tmp5,tmp6);
		}
		HX_STACK_LINE(209)
		this->set_yMax(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,Encapsulate,(void))

::haxor::math::AABB2 AABB2_obj::Encapsulate3( hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y){
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
	HX_STACK_FRAME("haxor.math.AABB2","Encapsulate3",0x4a7c2378,"haxor.math.AABB2.Encapsulate3","haxor/math/AABB2.hx",219,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
{
		HX_STACK_LINE(220)
		Float tmp = p_x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		Float tmp1 = this->m_xMin;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		this->m_xMin = tmp2;
		HX_STACK_LINE(221)
		Float tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		Float tmp4 = this->m_xMax;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		Float tmp5 = ::Math_obj::max(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		this->m_xMax = tmp5;
		HX_STACK_LINE(222)
		Float tmp6 = p_y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		Float tmp7 = this->m_yMin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		this->m_yMin = tmp8;
		HX_STACK_LINE(223)
		Float tmp9 = p_y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(223)
		Float tmp10 = this->m_yMax;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		Float tmp11 = ::Math_obj::max(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(223)
		this->m_yMax = tmp11;
		HX_STACK_LINE(224)
		this->Validate();
		HX_STACK_LINE(225)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AABB2_obj,Encapsulate3,return )

::String AABB2_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.AABB2","ToString",0x267cf2e2,"haxor.math.AABB2.ToString","haxor/math/AABB2.hx",233,0x4f052906)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(234)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int tmp1 = p_places;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(234)
			Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			Float d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(234)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				Float tmp4 = this->m_xMin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(234)
				Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(234)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(234)
				Float p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(234)
				Float tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(234)
				bool tmp8 = (p_v < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(234)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(234)
				if ((tmp8)){
					HX_STACK_LINE(234)
					tmp9 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(234)
					tmp9 = ((Float)0.5);
				}
				HX_STACK_LINE(234)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(234)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(234)
				tmp3 = ((Float)(tmp11));
			}
			HX_STACK_LINE(234)
			Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		HX_STACK_LINE(234)
		::String tmp1 = (tmp + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		::String s0 = tmp1;		HX_STACK_VAR(s0,"s0");
		HX_STACK_LINE(235)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int tmp3 = p_places;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			Float tmp4 = ::Math_obj::pow((int)10,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			Float d = tmp4;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(235)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				Float tmp6 = this->m_xMax;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(235)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(235)
				Float p_v = tmp8;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(235)
				Float tmp9 = p_v;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(235)
				bool tmp10 = (p_v < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(235)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(235)
				if ((tmp10)){
					HX_STACK_LINE(235)
					tmp11 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(235)
					tmp11 = ((Float)0.5);
				}
				HX_STACK_LINE(235)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(235)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(235)
				tmp5 = ((Float)(tmp13));
			}
			HX_STACK_LINE(235)
			Float tmp6 = d;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			tmp2 = (Float(tmp5) / Float(tmp6));
		}
		HX_STACK_LINE(235)
		::String tmp3 = (tmp2 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		::String s1 = tmp3;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(236)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			int tmp5 = p_places;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			Float tmp6 = ::Math_obj::pow((int)10,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			Float d = tmp6;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(236)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				Float tmp8 = this->m_yMin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(236)
				Float tmp9 = d;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(236)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(236)
				Float p_v = tmp10;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(236)
				Float tmp11 = p_v;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(236)
				bool tmp12 = (p_v < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(236)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(236)
				if ((tmp12)){
					HX_STACK_LINE(236)
					tmp13 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(236)
					tmp13 = ((Float)0.5);
				}
				HX_STACK_LINE(236)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(236)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(236)
				tmp7 = ((Float)(tmp15));
			}
			HX_STACK_LINE(236)
			Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(236)
			tmp4 = (Float(tmp7) / Float(tmp8));
		}
		HX_STACK_LINE(236)
		::String tmp5 = (tmp4 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(236)
		::String s2 = tmp5;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(237)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			int tmp7 = p_places;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			Float tmp8 = ::Math_obj::pow((int)10,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(237)
			Float d = tmp8;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(237)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				Float tmp10 = this->m_yMax;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				Float tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(237)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(237)
				Float p_v = tmp12;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(237)
				Float tmp13 = p_v;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(237)
				bool tmp14 = (p_v < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(237)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(237)
				if ((tmp14)){
					HX_STACK_LINE(237)
					tmp15 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(237)
					tmp15 = ((Float)0.5);
				}
				HX_STACK_LINE(237)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(237)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(237)
				tmp9 = ((Float)(tmp17));
			}
			HX_STACK_LINE(237)
			Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(237)
			tmp6 = (Float(tmp9) / Float(tmp10));
		}
		HX_STACK_LINE(237)
		::String tmp7 = (tmp6 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(237)
		::String s3 = tmp7;		HX_STACK_VAR(s3,"s3");
		HX_STACK_LINE(238)
		::String tmp8 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + s0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(238)
		::String tmp9 = (tmp8 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		::String tmp10 = s1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(238)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(238)
		::String tmp12 = (tmp11 + HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(238)
		::String tmp13 = s2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(238)
		::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(238)
		::String tmp15 = (tmp14 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(238)
		::String tmp16 = s3;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(238)
		::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(238)
		::String tmp18 = (tmp17 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(238)
		return tmp18;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(AABB2_obj,ToString,return )

::haxor::math::AABB2 AABB2_obj::temp;

::haxor::math::AABB2 AABB2_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_temp",0xe110e4b3,"haxor.math.AABB2.get_temp","haxor/math/AABB2.hx",15,0x4f052906)
	HX_STACK_LINE(15)
	::haxor::math::AABB2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		Array< ::Dynamic > tmp2 = _this->m_aabb2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = (_this->m_naabb2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		int tmp4 = _this->m_aabb2->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		int tmp6 = _this->m_naabb2 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::AABB2 >();
	}
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_temp,return )

::haxor::math::AABB2 AABB2_obj::FromMinMax( Float p_xmin,Float p_xmax,Float p_ymin,Float p_ymax){
	HX_STACK_FRAME("haxor.math.AABB2","FromMinMax",0xbdb118f2,"haxor.math.AABB2.FromMinMax","haxor/math/AABB2.hx",26,0x4f052906)
	HX_STACK_ARG(p_xmin,"p_xmin")
	HX_STACK_ARG(p_xmax,"p_xmax")
	HX_STACK_ARG(p_ymin,"p_ymin")
	HX_STACK_ARG(p_ymax,"p_ymax")
	HX_STACK_LINE(27)
	::haxor::math::AABB2 tmp = ::haxor::math::AABB2_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::haxor::math::AABB2 b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(28)
	b->m_xMin = p_xmin;
	HX_STACK_LINE(29)
	b->m_xMax = p_xmax;
	HX_STACK_LINE(30)
	b->m_yMin = p_ymin;
	HX_STACK_LINE(31)
	b->m_yMax = p_ymax;
	HX_STACK_LINE(32)
	b->Validate();
	HX_STACK_LINE(33)
	::haxor::math::AABB2 tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AABB2_obj,FromMinMax,return )

::haxor::math::AABB2 AABB2_obj::empty;

::haxor::math::AABB2 AABB2_obj::get_empty( ){
	HX_STACK_FRAME("haxor.math.AABB2","get_empty",0x7000840e,"haxor.math.AABB2.get_empty","haxor/math/AABB2.hx",40,0x4f052906)
	HX_STACK_LINE(40)
	::haxor::math::AABB2 tmp = ::haxor::math::AABB2_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AABB2_obj,get_empty,return )

::haxor::math::AABB2 AABB2_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.math.AABB2","Parse",0x9aa3903d,"haxor.math.AABB2.Parse","haxor/math/AABB2.hx",247,0x4f052906)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(248)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(250)
		::String tmp2 = tk->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		::String tmp3 = ::StringTools_obj::trim(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		Float tmp4 = ::Std_obj::parseFloat(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		::String tmp5 = tk->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		::String tmp6 = ::StringTools_obj::trim(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		Float tmp7 = ::Std_obj::parseFloat(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		::String tmp8 = tk->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(252)
		::String tmp9 = ::StringTools_obj::trim(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(252)
		Float tmp10 = ::Std_obj::parseFloat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(253)
		::String tmp11 = tk->__get((int)3);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(253)
		::String tmp12 = ::StringTools_obj::trim(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(253)
		Float tmp13 = ::Std_obj::parseFloat(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(249)
		::haxor::math::AABB2 tmp14 = ::haxor::math::AABB2_obj::FromMinMax(tmp4,tmp7,tmp10,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(249)
		return tmp14;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AABB2_obj,Parse,return )


AABB2_obj::AABB2_obj()
{
}

void AABB2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AABB2);
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(m_xMin,"m_xMin");
	HX_MARK_MEMBER_NAME(m_yMin,"m_yMin");
	HX_MARK_MEMBER_NAME(m_xMax,"m_xMax");
	HX_MARK_MEMBER_NAME(m_yMax,"m_yMax");
	HX_MARK_END_CLASS();
}

void AABB2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(m_xMin,"m_xMin");
	HX_VISIT_MEMBER_NAME(m_yMin,"m_yMin");
	HX_VISIT_MEMBER_NAME(m_xMax,"m_xMax");
	HX_VISIT_MEMBER_NAME(m_yMax,"m_yMax");
}

Dynamic AABB2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return get_max(); }
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { if (inCallProp == hx::paccAlways) return get_xMin(); }
		if (HX_FIELD_EQ(inName,"yMin") ) { if (inCallProp == hx::paccAlways) return get_yMin(); }
		if (HX_FIELD_EQ(inName,"xMax") ) { if (inCallProp == hx::paccAlways) return get_xMax(); }
		if (HX_FIELD_EQ(inName,"yMax") ) { if (inCallProp == hx::paccAlways) return get_yMax(); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return inCallProp == hx::paccAlways ? get_clone() : clone; }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_xMin") ) { return m_xMin; }
		if (HX_FIELD_EQ(inName,"m_yMin") ) { return m_yMin; }
		if (HX_FIELD_EQ(inName,"m_xMax") ) { return m_xMax; }
		if (HX_FIELD_EQ(inName,"m_yMax") ) { return m_yMax; }
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return get_center(); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		if (HX_FIELD_EQ(inName,"SetXYWH") ) { return SetXYWH_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_xMin") ) { return get_xMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xMin") ) { return set_xMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yMin") ) { return get_yMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_yMin") ) { return set_yMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_xMax") ) { return get_xMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xMax") ) { return set_xMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yMax") ) { return get_yMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_yMax") ) { return set_yMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"Validate") ) { return Validate_dyn(); }
		if (HX_FIELD_EQ(inName,"SetAABB2") ) { return SetAABB2_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_clone") ) { return get_clone_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_center") ) { return get_center_dyn(); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return set_center_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Encapsulate") ) { return Encapsulate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"Encapsulate3") ) { return Encapsulate3_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AABB2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = inCallProp == hx::paccAlways ? get_temp() : temp; return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = inCallProp == hx::paccAlways ? get_empty() : empty; return true; }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { outValue = get_temp_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { outValue = get_empty_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FromMinMax") ) { outValue = FromMinMax_dyn(); return true;  }
	}
	return false;
}

Dynamic AABB2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { if (inCallProp == hx::paccAlways) return set_xMin(inValue); }
		if (HX_FIELD_EQ(inName,"yMin") ) { if (inCallProp == hx::paccAlways) return set_yMin(inValue); }
		if (HX_FIELD_EQ(inName,"xMax") ) { if (inCallProp == hx::paccAlways) return set_xMax(inValue); }
		if (HX_FIELD_EQ(inName,"yMax") ) { if (inCallProp == hx::paccAlways) return set_yMax(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< ::haxor::math::AABB2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_xMin") ) { m_xMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_yMin") ) { m_yMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_xMax") ) { m_xMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_yMax") ) { m_yMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return set_center(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AABB2_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< ::haxor::math::AABB2 >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=ioValue.Cast< ::haxor::math::AABB2 >(); return true; }
	}
	return false;
}

void AABB2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("xMin","\xfa","\x63","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("m_xMin","\x4c","\xd4","\x83","\x97"));
	outFields->push(HX_HCSTRING("yMin","\x99","\x9a","\x35","\x50"));
	outFields->push(HX_HCSTRING("m_yMin","\xeb","\x0a","\x2d","\x98"));
	outFields->push(HX_HCSTRING("xMax","\x0c","\x5d","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("m_xMax","\x5e","\xcd","\x83","\x97"));
	outFields->push(HX_HCSTRING("yMax","\xab","\x93","\x35","\x50"));
	outFields->push(HX_HCSTRING("m_yMax","\xfd","\x03","\x2d","\x98"));
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::AABB2*/ ,(int)offsetof(AABB2_obj,clone),HX_HCSTRING("clone","\x5d","\x13","\x63","\x48")},
	{hx::fsFloat,(int)offsetof(AABB2_obj,m_xMin),HX_HCSTRING("m_xMin","\x4c","\xd4","\x83","\x97")},
	{hx::fsFloat,(int)offsetof(AABB2_obj,m_yMin),HX_HCSTRING("m_yMin","\xeb","\x0a","\x2d","\x98")},
	{hx::fsFloat,(int)offsetof(AABB2_obj,m_xMax),HX_HCSTRING("m_xMax","\x5e","\xcd","\x83","\x97")},
	{hx::fsFloat,(int)offsetof(AABB2_obj,m_yMax),HX_HCSTRING("m_yMax","\xfd","\x03","\x2d","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::AABB2*/ ,(void *) &AABB2_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsObject /*::haxor::math::AABB2*/ ,(void *) &AABB2_obj::empty,HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_clone","\xb4","\x6f","\x0c","\x8c"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("get_xMin","\x83","\x1f","\x47","\xcf"),
	HX_HCSTRING("set_xMin","\xf7","\x78","\xa4","\x7d"),
	HX_HCSTRING("m_xMin","\x4c","\xd4","\x83","\x97"),
	HX_HCSTRING("get_yMin","\x22","\x56","\xf0","\xcf"),
	HX_HCSTRING("set_yMin","\x96","\xaf","\x4d","\x7e"),
	HX_HCSTRING("m_yMin","\xeb","\x0a","\x2d","\x98"),
	HX_HCSTRING("get_xMax","\x95","\x18","\x47","\xcf"),
	HX_HCSTRING("set_xMax","\x09","\x72","\xa4","\x7d"),
	HX_HCSTRING("m_xMax","\x5e","\xcd","\x83","\x97"),
	HX_HCSTRING("get_yMax","\x34","\x4f","\xf0","\xcf"),
	HX_HCSTRING("set_yMax","\xa8","\xa8","\x4d","\x7e"),
	HX_HCSTRING("m_yMax","\xfd","\x03","\x2d","\x98"),
	HX_HCSTRING("get_center","\x9e","\x95","\x62","\xf6"),
	HX_HCSTRING("set_center","\x12","\x34","\xe0","\xf9"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("Validate","\xb6","\x8c","\x95","\xde"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("SetXYWH","\xd4","\xd7","\x6a","\xe2"),
	HX_HCSTRING("SetAABB2","\xd0","\x96","\xed","\xec"),
	HX_HCSTRING("Encapsulate","\xb1","\xa0","\x68","\x6d"),
	HX_HCSTRING("Encapsulate3","\x62","\xfa","\x23","\x4e"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AABB2_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AABB2_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(AABB2_obj::empty,"empty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AABB2_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AABB2_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(AABB2_obj::empty,"empty");
};

#endif

hx::Class AABB2_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c"),
	HX_HCSTRING("get_temp","\x9d","\x7e","\xb4","\xcc"),
	HX_HCSTRING("FromMinMax","\x5c","\x81","\xde","\x8c"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("get_empty","\xe4","\x96","\x83","\xb3"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void AABB2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.AABB2","\x18","\x15","\x35","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AABB2_obj::__GetStatic;
	__mClass->mSetStaticField = &AABB2_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AABB2_obj >;
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
} // end namespace math
