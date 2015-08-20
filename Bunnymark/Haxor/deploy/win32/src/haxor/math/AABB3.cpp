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
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace math{

Void AABB3_obj::__construct(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_width,hx::Null< Float >  __o_p_height,hx::Null< Float >  __o_p_depth)
{
HX_STACK_FRAME("haxor.math.AABB3","new",0x13a3b68b,"haxor.math.AABB3.new","haxor/math/AABB3.hx",174,0x4fae5fa5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_x,"p_x")
HX_STACK_ARG(__o_p_y,"p_y")
HX_STACK_ARG(__o_p_z,"p_z")
HX_STACK_ARG(__o_p_width,"p_width")
HX_STACK_ARG(__o_p_height,"p_height")
HX_STACK_ARG(__o_p_depth,"p_depth")
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
Float p_width = __o_p_width.Default(0);
Float p_height = __o_p_height.Default(0);
Float p_depth = __o_p_depth.Default(0);
{
	HX_STACK_LINE(175)
	this->m_xMin = p_x;
	HX_STACK_LINE(176)
	this->m_yMin = p_y;
	HX_STACK_LINE(177)
	this->m_zMin = p_y;
	HX_STACK_LINE(178)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	Float tmp1 = p_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	this->m_xMax = tmp2;
	HX_STACK_LINE(179)
	Float tmp3 = this->m_yMin;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	Float tmp4 = p_height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	this->m_yMax = tmp5;
	HX_STACK_LINE(180)
	Float tmp6 = this->m_zMin;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	Float tmp7 = p_depth;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	this->m_zMax = tmp8;
}
;
	return null();
}

//AABB3_obj::~AABB3_obj() { }

Dynamic AABB3_obj::__CreateEmpty() { return  new AABB3_obj; }
hx::ObjectPtr< AABB3_obj > AABB3_obj::__new(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_width,hx::Null< Float >  __o_p_height,hx::Null< Float >  __o_p_depth)
{  hx::ObjectPtr< AABB3_obj > _result_ = new AABB3_obj();
	_result_->__construct(__o_p_x,__o_p_y,__o_p_z,__o_p_width,__o_p_height,__o_p_depth);
	return _result_;}

Dynamic AABB3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AABB3_obj > _result_ = new AABB3_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::haxor::math::AABB3 AABB3_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_clone",0xc967c81f,"haxor.math.AABB3.get_clone","haxor/math/AABB3.hx",77,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	Float tmp1 = this->m_xMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	Float tmp2 = this->m_yMin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	Float tmp3 = this->m_yMax;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	Float tmp4 = this->m_zMin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	Float tmp5 = this->m_zMax;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	::haxor::math::AABB3 tmp6 = ::haxor::math::AABB3_obj::FromMinMax(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_clone,return )

::haxor::math::Vector3 AABB3_obj::get_min( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_min",0x793db1d4,"haxor.math.AABB3.get_min","haxor/math/AABB3.hx",81,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	Float tmp1 = this->m_yMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	::haxor::math::Vector3 tmp2 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_min,return )

::haxor::math::Vector3 AABB3_obj::set_min( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.AABB3","set_min",0x6c3f42e0,"haxor.math.AABB3.set_min","haxor/math/AABB3.hx",82,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(82)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	this->set_xMin(tmp);
	HX_STACK_LINE(82)
	Float tmp1 = v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	this->set_yMin(tmp1);
	HX_STACK_LINE(82)
	::haxor::math::Vector3 tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_min,return )

::haxor::math::Vector3 AABB3_obj::get_max( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_max",0x793daae6,"haxor.math.AABB3.get_max","haxor/math/AABB3.hx",85,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	Float tmp = this->m_xMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	Float tmp1 = this->m_yMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	::haxor::math::Vector3 tmp2 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_max,return )

::haxor::math::Vector3 AABB3_obj::set_max( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.AABB3","set_max",0x6c3f3bf2,"haxor.math.AABB3.set_max","haxor/math/AABB3.hx",86,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(86)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	this->set_xMax(tmp);
	HX_STACK_LINE(86)
	Float tmp1 = v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	this->set_yMax(tmp1);
	HX_STACK_LINE(86)
	::haxor::math::Vector3 tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_max,return )

Float AABB3_obj::get_xMin( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_xMin",0xa3edfd78,"haxor.math.AABB3.get_xMin","haxor/math/AABB3.hx",89,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_xMin,return )

Float AABB3_obj::set_xMin( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_xMin",0x524b56ec,"haxor.math.AABB3.set_xMin","haxor/math/AABB3.hx",90,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(90)
	this->m_xMin = v;
	HX_STACK_LINE(90)
	this->Validate();
	HX_STACK_LINE(90)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_xMin,return )

Float AABB3_obj::get_yMin( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_yMin",0xa4973417,"haxor.math.AABB3.get_yMin","haxor/math/AABB3.hx",94,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	Float tmp = this->m_yMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_yMin,return )

Float AABB3_obj::set_yMin( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_yMin",0x52f48d8b,"haxor.math.AABB3.set_yMin","haxor/math/AABB3.hx",95,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(95)
	this->m_yMin = v;
	HX_STACK_LINE(95)
	this->Validate();
	HX_STACK_LINE(95)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_yMin,return )

Float AABB3_obj::get_zMin( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_zMin",0xa5406ab6,"haxor.math.AABB3.get_zMin","haxor/math/AABB3.hx",99,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	Float tmp = this->m_zMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_zMin,return )

Float AABB3_obj::set_zMin( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_zMin",0x539dc42a,"haxor.math.AABB3.set_zMin","haxor/math/AABB3.hx",100,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(100)
	this->m_zMin = v;
	HX_STACK_LINE(100)
	this->Validate();
	HX_STACK_LINE(100)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_zMin,return )

Float AABB3_obj::get_xMax( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_xMax",0xa3edf68a,"haxor.math.AABB3.get_xMax","haxor/math/AABB3.hx",104,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	Float tmp = this->m_xMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_xMax,return )

Float AABB3_obj::set_xMax( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_xMax",0x524b4ffe,"haxor.math.AABB3.set_xMax","haxor/math/AABB3.hx",105,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(105)
	this->m_xMax = v;
	HX_STACK_LINE(105)
	this->Validate();
	HX_STACK_LINE(105)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_xMax,return )

Float AABB3_obj::get_yMax( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_yMax",0xa4972d29,"haxor.math.AABB3.get_yMax","haxor/math/AABB3.hx",109,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	Float tmp = this->m_yMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_yMax,return )

Float AABB3_obj::set_yMax( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_yMax",0x52f4869d,"haxor.math.AABB3.set_yMax","haxor/math/AABB3.hx",110,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(110)
	this->m_yMax = v;
	HX_STACK_LINE(110)
	this->Validate();
	HX_STACK_LINE(110)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_yMax,return )

Float AABB3_obj::get_zMax( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_zMax",0xa54063c8,"haxor.math.AABB3.get_zMax","haxor/math/AABB3.hx",114,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	Float tmp = this->m_zMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_zMax,return )

Float AABB3_obj::set_zMax( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_zMax",0x539dbd3c,"haxor.math.AABB3.set_zMax","haxor/math/AABB3.hx",115,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(115)
	this->m_zMax = v;
	HX_STACK_LINE(115)
	this->Validate();
	HX_STACK_LINE(115)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_zMax,return )

::haxor::math::Vector3 AABB3_obj::get_center( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_center",0x68f49ad3,"haxor.math.AABB3.get_center","haxor/math/AABB3.hx",119,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::haxor::math::Vector3 tmp = ::haxor::math::AABB3_obj::Center(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_center,return )

::haxor::math::Vector3 AABB3_obj::set_center( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.AABB3","set_center",0x6c723947,"haxor.math.AABB3.set_center","haxor/math/AABB3.hx",121,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(122)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		Float tmp1 = this->m_xMax;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		Float tmp2 = this->m_xMin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(122)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		if ((tmp4)){
			HX_STACK_LINE(122)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(122)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(122)
	Float tmp1 = (tmp * ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	Float hw = tmp1;		HX_STACK_VAR(hw,"hw");
	HX_STACK_LINE(123)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		Float tmp3 = this->m_yMax;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		Float tmp4 = this->m_yMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		Float p_a = tmp5;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(123)
		bool tmp6 = (p_a < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		if ((tmp6)){
			HX_STACK_LINE(123)
			Float tmp7 = p_a;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			tmp2 = -(tmp7);
		}
		else{
			HX_STACK_LINE(123)
			tmp2 = p_a;
		}
	}
	HX_STACK_LINE(123)
	Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	Float hh = tmp3;		HX_STACK_VAR(hh,"hh");
	HX_STACK_LINE(124)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		Float tmp5 = this->m_zMax;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		Float tmp6 = this->m_zMin;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		Float p_a = tmp7;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(124)
		bool tmp8 = (p_a < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		if ((tmp8)){
			HX_STACK_LINE(124)
			Float tmp9 = p_a;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			tmp4 = -(tmp9);
		}
		else{
			HX_STACK_LINE(124)
			tmp4 = p_a;
		}
	}
	HX_STACK_LINE(124)
	Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(124)
	Float hd = tmp5;		HX_STACK_VAR(hd,"hd");
	HX_STACK_LINE(125)
	Float tmp6 = (v->x - hw);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(125)
	this->m_xMin = tmp6;
	HX_STACK_LINE(126)
	Float tmp7 = (v->x + hw);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(126)
	this->m_xMax = tmp7;
	HX_STACK_LINE(127)
	Float tmp8 = (v->y - hh);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(127)
	this->m_yMin = tmp8;
	HX_STACK_LINE(128)
	Float tmp9 = (v->y + hh);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(128)
	this->m_yMax = tmp9;
	HX_STACK_LINE(129)
	Float tmp10 = (v->z - hd);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(129)
	this->m_zMin = tmp10;
	HX_STACK_LINE(130)
	Float tmp11 = (v->z + hd);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(130)
	this->m_zMax = tmp11;
	HX_STACK_LINE(131)
	this->Validate();
	HX_STACK_LINE(132)
	::haxor::math::Vector3 tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(132)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_center,return )

Float AABB3_obj::get_x( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_x",0x0516ac3a,"haxor.math.AABB3.get_x","haxor/math/AABB3.hx",136,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_x,return )

Float AABB3_obj::set_x( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_x",0xede5a246,"haxor.math.AABB3.set_x","haxor/math/AABB3.hx",137,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(137)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	this->set_xMin(tmp);
	HX_STACK_LINE(137)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_x,return )

Float AABB3_obj::get_y( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_y",0x0516ac3b,"haxor.math.AABB3.get_y","haxor/math/AABB3.hx",140,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	Float tmp = this->m_yMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_y,return )

Float AABB3_obj::set_y( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_y",0xede5a247,"haxor.math.AABB3.set_y","haxor/math/AABB3.hx",141,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(141)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	this->set_yMin(tmp);
	HX_STACK_LINE(141)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_y,return )

Float AABB3_obj::get_z( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_z",0x0516ac3c,"haxor.math.AABB3.get_z","haxor/math/AABB3.hx",144,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	Float tmp = this->m_zMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_z,return )

Float AABB3_obj::set_z( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_z",0xede5a248,"haxor.math.AABB3.set_z","haxor/math/AABB3.hx",145,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(145)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	this->set_zMin(tmp);
	HX_STACK_LINE(145)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_z,return )

Float AABB3_obj::get_width( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_width",0x4b676ac8,"haxor.math.AABB3.get_width","haxor/math/AABB3.hx",149,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		Float tmp1 = this->m_xMax;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		Float tmp2 = this->m_xMin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(149)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		if ((tmp4)){
			HX_STACK_LINE(149)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(149)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(149)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_width,return )

Float AABB3_obj::set_width( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_width",0x2eb856d4,"haxor.math.AABB3.set_width","haxor/math/AABB3.hx",150,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(150)
	Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	this->set_xMax(tmp2);
	HX_STACK_LINE(150)
	Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_width,return )

Float AABB3_obj::get_height( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_height",0x65657ce5,"haxor.math.AABB3.get_height","haxor/math/AABB3.hx",153,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		Float tmp1 = this->m_yMax;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		Float tmp2 = this->m_yMin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(153)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		if ((tmp4)){
			HX_STACK_LINE(153)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(153)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(153)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_height,return )

Float AABB3_obj::set_height( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_height",0x68e31b59,"haxor.math.AABB3.set_height","haxor/math/AABB3.hx",154,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(154)
	Float tmp = this->m_yMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	this->set_yMax(tmp2);
	HX_STACK_LINE(154)
	Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_height,return )

Float AABB3_obj::get_depth( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_depth",0x582ea5c5,"haxor.math.AABB3.get_depth","haxor/math/AABB3.hx",157,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		Float tmp1 = this->m_zMax;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		Float tmp2 = this->m_zMin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(157)
		bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		if ((tmp4)){
			HX_STACK_LINE(157)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(157)
			tmp = -(tmp5);
		}
		else{
			HX_STACK_LINE(157)
			tmp = p_a;
		}
	}
	HX_STACK_LINE(157)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_depth,return )

Float AABB3_obj::set_depth( Float v){
	HX_STACK_FRAME("haxor.math.AABB3","set_depth",0x3b7f91d1,"haxor.math.AABB3.set_depth","haxor/math/AABB3.hx",158,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(158)
	Float tmp = this->m_zMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	this->set_zMax(tmp2);
	HX_STACK_LINE(158)
	Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_depth,return )

::haxor::math::Vector3 AABB3_obj::get_size( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_size",0xa0b53a3f,"haxor.math.AABB3.get_size","haxor/math/AABB3.hx",161,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		Float tmp2 = this->m_xMax;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		Float tmp3 = this->m_xMin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		Float p_a = tmp4;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(161)
		bool tmp5 = (p_a < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		if ((tmp5)){
			HX_STACK_LINE(161)
			Float tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			tmp1 = -(tmp6);
		}
		else{
			HX_STACK_LINE(161)
			tmp1 = p_a;
		}
	}
	HX_STACK_LINE(161)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		Float tmp3 = this->m_yMax;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		Float tmp4 = this->m_yMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Float p_a = tmp5;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(161)
		bool tmp6 = (p_a < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		if ((tmp6)){
			HX_STACK_LINE(161)
			Float tmp7 = p_a;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			tmp2 = -(tmp7);
		}
		else{
			HX_STACK_LINE(161)
			tmp2 = p_a;
		}
	}
	HX_STACK_LINE(161)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		Float tmp4 = this->m_zMax;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		Float tmp5 = this->m_zMin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		Float p_a = tmp6;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(161)
		bool tmp7 = (p_a < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		if ((tmp7)){
			HX_STACK_LINE(161)
			Float tmp8 = p_a;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			tmp3 = -(tmp8);
		}
		else{
			HX_STACK_LINE(161)
			tmp3 = p_a;
		}
	}
	HX_STACK_LINE(161)
	::haxor::math::Vector3 tmp4 = tmp->Set(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_size,return )

::haxor::math::Vector3 AABB3_obj::set_size( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.AABB3","set_size",0x4f1293b3,"haxor.math.AABB3.set_size","haxor/math/AABB3.hx",162,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		Float v1 = v->x;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(162)
		Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		Float tmp1 = v1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		this->set_xMax(tmp2);
		HX_STACK_LINE(162)
		v1;
	}
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		Float v1 = v->y;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(162)
		Float tmp = this->m_yMin;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		Float tmp1 = v1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		this->set_yMax(tmp2);
		HX_STACK_LINE(162)
		v1;
	}
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		Float v1 = v->z;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(162)
		Float tmp = this->m_zMin;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		Float tmp1 = v1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		this->set_zMax(tmp2);
		HX_STACK_LINE(162)
		v1;
	}
	HX_STACK_LINE(162)
	::haxor::math::Vector3 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,set_size,return )

Void AABB3_obj::Validate( ){
{
		HX_STACK_FRAME("haxor.math.AABB3","Validate",0xb33c6aab,"haxor.math.AABB3.Validate","haxor/math/AABB3.hx",187,0x4fae5fa5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		Float x0 = tmp;		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(189)
		Float tmp1 = this->m_xMax;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		Float x1 = tmp1;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(190)
		Float tmp2 = this->m_yMin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		Float y0 = tmp2;		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(191)
		Float tmp3 = this->m_yMax;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		Float y1 = tmp3;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(192)
		Float tmp4 = this->m_zMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		Float z0 = tmp4;		HX_STACK_VAR(z0,"z0");
		HX_STACK_LINE(193)
		Float tmp5 = this->m_zMax;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		Float z1 = tmp5;		HX_STACK_VAR(z1,"z1");
		HX_STACK_LINE(194)
		bool tmp6 = (x0 <= x1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		if ((tmp6)){
			HX_STACK_LINE(194)
			this->m_xMin = x0;
			HX_STACK_LINE(194)
			this->m_xMax = x1;
		}
		else{
			HX_STACK_LINE(194)
			this->m_xMin = x1;
			HX_STACK_LINE(194)
			this->m_xMax = x0;
		}
		HX_STACK_LINE(195)
		bool tmp7 = (y0 <= y1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		if ((tmp7)){
			HX_STACK_LINE(195)
			this->m_yMin = y0;
			HX_STACK_LINE(195)
			this->m_yMax = y1;
		}
		else{
			HX_STACK_LINE(195)
			this->m_yMin = y1;
			HX_STACK_LINE(195)
			this->m_yMax = y0;
		}
		HX_STACK_LINE(196)
		bool tmp8 = (z0 <= z1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		if ((tmp8)){
			HX_STACK_LINE(196)
			this->m_zMin = z0;
			HX_STACK_LINE(196)
			this->m_zMax = z1;
		}
		else{
			HX_STACK_LINE(196)
			this->m_zMin = z1;
			HX_STACK_LINE(196)
			this->m_zMax = z0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,Validate,(void))

::haxor::math::AABB3 AABB3_obj::Add( ::haxor::math::AABB3 p_v){
	HX_STACK_FRAME("haxor.math.AABB3","Add",0x1381902c,"haxor.math.AABB3.Add","haxor/math/AABB3.hx",205,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(206)
	Float tmp = p_v->m_xMax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	Float tmp1 = this->m_xMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	Float tmp2 = ::Math_obj::max(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	this->m_xMax = tmp2;
	HX_STACK_LINE(207)
	Float tmp3 = p_v->m_xMin;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	Float tmp4 = this->m_xMin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	Float tmp5 = ::Math_obj::min(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(207)
	this->m_xMin = tmp5;
	HX_STACK_LINE(208)
	Float tmp6 = p_v->m_yMax;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(208)
	Float tmp7 = this->m_yMax;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(208)
	Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(208)
	this->m_yMax = tmp8;
	HX_STACK_LINE(209)
	Float tmp9 = p_v->m_yMin;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(209)
	Float tmp10 = this->m_yMin;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(209)
	Float tmp11 = ::Math_obj::min(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(209)
	this->m_yMin = tmp11;
	HX_STACK_LINE(210)
	Float tmp12 = p_v->m_zMax;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(210)
	Float tmp13 = this->m_zMax;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(210)
	Float tmp14 = ::Math_obj::max(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(210)
	this->m_zMax = tmp14;
	HX_STACK_LINE(211)
	Float tmp15 = p_v->m_zMin;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(211)
	Float tmp16 = this->m_zMin;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(211)
	Float tmp17 = ::Math_obj::min(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(211)
	this->m_zMin = tmp17;
	HX_STACK_LINE(212)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,Add,return )

::haxor::math::AABB3 AABB3_obj::Set( hx::Null< Float >  __o_p_xmin,hx::Null< Float >  __o_p_xmax,hx::Null< Float >  __o_p_ymin,hx::Null< Float >  __o_p_ymax,hx::Null< Float >  __o_p_zmin,hx::Null< Float >  __o_p_zmax){
Float p_xmin = __o_p_xmin.Default(0);
Float p_xmax = __o_p_xmax.Default(0);
Float p_ymin = __o_p_ymin.Default(0);
Float p_ymax = __o_p_ymax.Default(0);
Float p_zmin = __o_p_zmin.Default(0);
Float p_zmax = __o_p_zmax.Default(0);
	HX_STACK_FRAME("haxor.math.AABB3","Set",0x138f39ad,"haxor.math.AABB3.Set","haxor/math/AABB3.hx",226,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_xmin,"p_xmin")
	HX_STACK_ARG(p_xmax,"p_xmax")
	HX_STACK_ARG(p_ymin,"p_ymin")
	HX_STACK_ARG(p_ymax,"p_ymax")
	HX_STACK_ARG(p_zmin,"p_zmin")
	HX_STACK_ARG(p_zmax,"p_zmax")
{
		HX_STACK_LINE(227)
		this->m_xMin = p_xmin;
		HX_STACK_LINE(228)
		this->m_yMin = p_ymin;
		HX_STACK_LINE(229)
		this->m_zMin = p_zmin;
		HX_STACK_LINE(230)
		this->m_xMax = p_xmax;
		HX_STACK_LINE(231)
		this->m_yMax = p_ymax;
		HX_STACK_LINE(232)
		this->m_zMax = p_zmax;
		HX_STACK_LINE(233)
		this->Validate();
		HX_STACK_LINE(234)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(AABB3_obj,Set,return )

::haxor::math::AABB3 AABB3_obj::Set3( ::haxor::math::Vector3 p_min,::haxor::math::Vector3 p_max){
	HX_STACK_FRAME("haxor.math.AABB3","Set3",0x09c33de6,"haxor.math.AABB3.Set3","haxor/math/AABB3.hx",244,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_min,"p_min")
	HX_STACK_ARG(p_max,"p_max")
	HX_STACK_LINE(245)
	Float tmp = p_min->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	Float tmp1 = p_max->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	Float tmp2 = p_min->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(245)
	Float tmp3 = p_max->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	Float tmp4 = p_min->z;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(245)
	Float tmp5 = p_max->z;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(245)
	::haxor::math::AABB3 tmp6 = this->Set(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(245)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(AABB3_obj,Set3,return )

::haxor::math::AABB3 AABB3_obj::SetAABB3( ::haxor::math::AABB3 p_v){
	HX_STACK_FRAME("haxor.math.AABB3","SetAABB3",0xc19474c6,"haxor.math.AABB3.SetAABB3","haxor/math/AABB3.hx",254,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(255)
	this->m_xMin = p_v->m_xMin;
	HX_STACK_LINE(256)
	this->m_yMin = p_v->m_yMin;
	HX_STACK_LINE(257)
	this->m_zMin = p_v->m_zMin;
	HX_STACK_LINE(258)
	this->m_xMax = p_v->m_xMax;
	HX_STACK_LINE(259)
	this->m_yMax = p_v->m_yMax;
	HX_STACK_LINE(260)
	this->m_zMax = p_v->m_zMax;
	HX_STACK_LINE(261)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,SetAABB3,return )

::haxor::math::AABB3 AABB3_obj::SetXYZWHD( hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_width,hx::Null< Float >  __o_p_height,hx::Null< Float >  __o_p_depth){
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
Float p_width = __o_p_width.Default(0);
Float p_height = __o_p_height.Default(0);
Float p_depth = __o_p_depth.Default(0);
	HX_STACK_FRAME("haxor.math.AABB3","SetXYZWHD",0xb41211e7,"haxor.math.AABB3.SetXYZWHD","haxor/math/AABB3.hx",273,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_z,"p_z")
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
	HX_STACK_ARG(p_depth,"p_depth")
{
		HX_STACK_LINE(274)
		this->m_xMin = p_x;
		HX_STACK_LINE(275)
		this->m_yMin = p_y;
		HX_STACK_LINE(276)
		this->m_zMin = p_y;
		HX_STACK_LINE(277)
		Float tmp = this->m_xMin;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		Float tmp1 = p_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		this->m_xMax = tmp2;
		HX_STACK_LINE(278)
		Float tmp3 = this->m_yMin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		Float tmp4 = p_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(278)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(278)
		this->m_yMax = tmp5;
		HX_STACK_LINE(279)
		Float tmp6 = this->m_zMin;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(279)
		Float tmp7 = p_depth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(279)
		this->m_zMax = tmp8;
		HX_STACK_LINE(280)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(AABB3_obj,SetXYZWHD,return )

::haxor::math::AABB3 AABB3_obj::Encapsulate( ::haxor::math::Vector3 p_point){
	HX_STACK_FRAME("haxor.math.AABB3","Encapsulate",0x3a9b29dc,"haxor.math.AABB3.Encapsulate","haxor/math/AABB3.hx",287,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_point,"p_point")
	HX_STACK_LINE(287)
	Float tmp = p_point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	Float tmp1 = p_point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	Float tmp2 = p_point->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	::haxor::math::AABB3 tmp3 = this->Encapsulate3(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(287)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,Encapsulate,return )

::haxor::math::AABB3 AABB3_obj::Encapsulate3( hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z){
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
	HX_STACK_FRAME("haxor.math.AABB3","Encapsulate3",0x0d2976d7,"haxor.math.AABB3.Encapsulate3","haxor/math/AABB3.hx",296,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_z,"p_z")
{
		HX_STACK_LINE(297)
		Float tmp = p_x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		Float tmp1 = this->m_xMin;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		this->m_xMin = tmp2;
		HX_STACK_LINE(298)
		Float tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		Float tmp4 = this->m_xMax;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		Float tmp5 = ::Math_obj::max(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		this->m_xMax = tmp5;
		HX_STACK_LINE(299)
		Float tmp6 = p_y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(299)
		Float tmp7 = this->m_yMin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(299)
		Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(299)
		this->m_yMin = tmp8;
		HX_STACK_LINE(300)
		Float tmp9 = p_y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(300)
		Float tmp10 = this->m_yMax;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(300)
		Float tmp11 = ::Math_obj::max(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(300)
		this->m_yMax = tmp11;
		HX_STACK_LINE(301)
		Float tmp12 = p_z;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(301)
		Float tmp13 = this->m_zMin;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(301)
		Float tmp14 = ::Math_obj::min(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(301)
		this->m_zMin = tmp14;
		HX_STACK_LINE(302)
		Float tmp15 = p_z;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(302)
		Float tmp16 = this->m_zMax;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(302)
		Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(302)
		this->m_zMax = tmp17;
		HX_STACK_LINE(303)
		this->Validate();
		HX_STACK_LINE(304)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(AABB3_obj,Encapsulate3,return )

::String AABB3_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.AABB3","ToString",0xe6c76ac1,"haxor.math.AABB3.ToString","haxor/math/AABB3.hx",313,0x4fae5fa5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(314)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			int tmp1 = p_places;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(314)
			Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(314)
			Float d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(314)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				Float tmp4 = this->m_xMin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(314)
				Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(314)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(314)
				Float p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(314)
				Float tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(314)
				bool tmp8 = (p_v < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(314)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(314)
				if ((tmp8)){
					HX_STACK_LINE(314)
					tmp9 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(314)
					tmp9 = ((Float)0.5);
				}
				HX_STACK_LINE(314)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(314)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(314)
				tmp3 = ((Float)(tmp11));
			}
			HX_STACK_LINE(314)
			Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(314)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		HX_STACK_LINE(314)
		::String tmp1 = (tmp + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		::String s0 = tmp1;		HX_STACK_VAR(s0,"s0");
		HX_STACK_LINE(315)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			int tmp3 = p_places;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(315)
			Float tmp4 = ::Math_obj::pow((int)10,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(315)
			Float d = tmp4;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(315)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				Float tmp6 = this->m_xMax;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(315)
				Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(315)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(315)
				Float p_v = tmp8;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(315)
				Float tmp9 = p_v;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(315)
				bool tmp10 = (p_v < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(315)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(315)
				if ((tmp10)){
					HX_STACK_LINE(315)
					tmp11 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(315)
					tmp11 = ((Float)0.5);
				}
				HX_STACK_LINE(315)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(315)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(315)
				tmp5 = ((Float)(tmp13));
			}
			HX_STACK_LINE(315)
			Float tmp6 = d;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(315)
			tmp2 = (Float(tmp5) / Float(tmp6));
		}
		HX_STACK_LINE(315)
		::String tmp3 = (tmp2 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		::String s1 = tmp3;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(316)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		{
			HX_STACK_LINE(316)
			int tmp5 = p_places;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(316)
			Float tmp6 = ::Math_obj::pow((int)10,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(316)
			Float d = tmp6;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(316)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(316)
			{
				HX_STACK_LINE(316)
				Float tmp8 = this->m_yMin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(316)
				Float tmp9 = d;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(316)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(316)
				Float p_v = tmp10;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(316)
				Float tmp11 = p_v;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(316)
				bool tmp12 = (p_v < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(316)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(316)
				if ((tmp12)){
					HX_STACK_LINE(316)
					tmp13 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(316)
					tmp13 = ((Float)0.5);
				}
				HX_STACK_LINE(316)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(316)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(316)
				tmp7 = ((Float)(tmp15));
			}
			HX_STACK_LINE(316)
			Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(316)
			tmp4 = (Float(tmp7) / Float(tmp8));
		}
		HX_STACK_LINE(316)
		::String tmp5 = (tmp4 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(316)
		::String s2 = tmp5;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(317)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(317)
			int tmp7 = p_places;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(317)
			Float tmp8 = ::Math_obj::pow((int)10,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(317)
			Float d = tmp8;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(317)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				Float tmp10 = this->m_yMax;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(317)
				Float tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(317)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(317)
				Float p_v = tmp12;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(317)
				Float tmp13 = p_v;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(317)
				bool tmp14 = (p_v < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(317)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(317)
				if ((tmp14)){
					HX_STACK_LINE(317)
					tmp15 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(317)
					tmp15 = ((Float)0.5);
				}
				HX_STACK_LINE(317)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(317)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(317)
				tmp9 = ((Float)(tmp17));
			}
			HX_STACK_LINE(317)
			Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(317)
			tmp6 = (Float(tmp9) / Float(tmp10));
		}
		HX_STACK_LINE(317)
		::String tmp7 = (tmp6 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		::String s3 = tmp7;		HX_STACK_VAR(s3,"s3");
		HX_STACK_LINE(318)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(318)
			int tmp9 = p_places;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(318)
			Float tmp10 = ::Math_obj::pow((int)10,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(318)
			Float d = tmp10;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(318)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(318)
			{
				HX_STACK_LINE(318)
				Float tmp12 = this->m_zMin;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(318)
				Float tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(318)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(318)
				Float p_v = tmp14;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(318)
				Float tmp15 = p_v;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(318)
				bool tmp16 = (p_v < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(318)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(318)
				if ((tmp16)){
					HX_STACK_LINE(318)
					tmp17 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(318)
					tmp17 = ((Float)0.5);
				}
				HX_STACK_LINE(318)
				Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(318)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(318)
				tmp11 = ((Float)(tmp19));
			}
			HX_STACK_LINE(318)
			Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(318)
			tmp8 = (Float(tmp11) / Float(tmp12));
		}
		HX_STACK_LINE(318)
		::String tmp9 = (tmp8 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(318)
		::String s4 = tmp9;		HX_STACK_VAR(s4,"s4");
		HX_STACK_LINE(319)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			int tmp11 = p_places;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(319)
			Float tmp12 = ::Math_obj::pow((int)10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(319)
			Float d = tmp12;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(319)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				Float tmp14 = this->m_zMax;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(319)
				Float tmp15 = d;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(319)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(319)
				Float p_v = tmp16;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(319)
				Float tmp17 = p_v;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(319)
				bool tmp18 = (p_v < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(319)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(319)
				if ((tmp18)){
					HX_STACK_LINE(319)
					tmp19 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(319)
					tmp19 = ((Float)0.5);
				}
				HX_STACK_LINE(319)
				Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(319)
				int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(319)
				tmp13 = ((Float)(tmp21));
			}
			HX_STACK_LINE(319)
			Float tmp14 = d;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(319)
			tmp10 = (Float(tmp13) / Float(tmp14));
		}
		HX_STACK_LINE(319)
		::String tmp11 = (tmp10 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(319)
		::String s5 = tmp11;		HX_STACK_VAR(s5,"s5");
		HX_STACK_LINE(320)
		::String tmp12 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + s0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(320)
		::String tmp13 = (tmp12 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(320)
		::String tmp14 = s1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(320)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(320)
		::String tmp16 = (tmp15 + HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(320)
		::String tmp17 = s2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(320)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(320)
		::String tmp19 = (tmp18 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(320)
		::String tmp20 = s3;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(320)
		::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(320)
		::String tmp22 = (tmp21 + HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(320)
		::String tmp23 = s4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(320)
		::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(320)
		::String tmp25 = (tmp24 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(320)
		::String tmp26 = s5;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(320)
		::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(320)
		::String tmp28 = (tmp27 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(320)
		return tmp28;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(AABB3_obj,ToString,return )

::haxor::math::AABB3 AABB3_obj::temp;

::haxor::math::AABB3 AABB3_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_temp",0xa15b5c92,"haxor.math.AABB3.get_temp","haxor/math/AABB3.hx",16,0x4fae5fa5)
	HX_STACK_LINE(16)
	::haxor::math::AABB3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16)
		Array< ::Dynamic > tmp2 = _this->m_aabb3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		int tmp3 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		int tmp4 = _this->m_aabb3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		int tmp6 = _this->m_naabb3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::AABB3 >();
	}
	HX_STACK_LINE(16)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_temp,return )

::haxor::math::Vector3 AABB3_obj::Center( ::haxor::math::AABB3 p_b,::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.AABB3","Center",0x05ffa0aa,"haxor.math.AABB3.Center","haxor/math/AABB3.hx",25,0x4fae5fa5)
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(26)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp)){
		HX_STACK_LINE(26)
		tmp1 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);
	}
	else{
		HX_STACK_LINE(26)
		tmp1 = p_result;
	}
	HX_STACK_LINE(26)
	::haxor::math::Vector3 v = tmp1;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(28)
	Float tmp2 = p_b->m_xMin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	Float tmp3 = (p_b->m_xMax - p_b->m_xMin);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	Float tmp6 = p_b->m_yMin;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	Float tmp7 = (p_b->m_yMax - p_b->m_yMin);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(30)
	Float tmp10 = p_b->m_zMin;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(30)
	Float tmp11 = (p_b->m_zMax - p_b->m_zMin);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(30)
	Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(30)
	Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(27)
	::haxor::math::Vector3 tmp14 = v->Set(tmp5,tmp9,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(27)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AABB3_obj,Center,return )

::haxor::math::AABB3 AABB3_obj::FromMinMax( Float p_xmin,Float p_xmax,Float p_ymin,Float p_ymax,Float p_zmin,Float p_zmax,::haxor::math::AABB3 p_result){
	HX_STACK_FRAME("haxor.math.AABB3","FromMinMax",0xff708691,"haxor.math.AABB3.FromMinMax","haxor/math/AABB3.hx",44,0x4fae5fa5)
	HX_STACK_ARG(p_xmin,"p_xmin")
	HX_STACK_ARG(p_xmax,"p_xmax")
	HX_STACK_ARG(p_ymin,"p_ymin")
	HX_STACK_ARG(p_ymax,"p_ymax")
	HX_STACK_ARG(p_zmin,"p_zmin")
	HX_STACK_ARG(p_zmax,"p_zmax")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(45)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::haxor::math::AABB3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(45)
		tmp1 = ::haxor::math::AABB3_obj::__new(null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(45)
		tmp1 = p_result;
	}
	HX_STACK_LINE(45)
	::haxor::math::AABB3 b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(46)
	Float tmp2 = p_xmin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = p_xmax;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Float tmp4 = p_ymin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	Float tmp5 = p_ymax;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	Float tmp6 = p_zmin;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	Float tmp7 = p_zmax;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	::haxor::math::AABB3 tmp8 = b->Set(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(46)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(AABB3_obj,FromMinMax,return )

::haxor::math::AABB3 AABB3_obj::FromCenter( Float p_x,Float p_y,Float p_z,Float p_width,Float p_height,Float p_depth,::haxor::math::AABB3 p_result){
	HX_STACK_FRAME("haxor.math.AABB3","FromCenter",0xb2623434,"haxor.math.AABB3.FromCenter","haxor/math/AABB3.hx",60,0x4fae5fa5)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_z,"p_z")
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
	HX_STACK_ARG(p_depth,"p_depth")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(61)
	Float tmp = (p_width * ((Float)0.5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Float w2 = tmp;		HX_STACK_VAR(w2,"w2");
	HX_STACK_LINE(62)
	Float tmp1 = (p_height * ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float h2 = tmp1;		HX_STACK_VAR(h2,"h2");
	HX_STACK_LINE(63)
	Float tmp2 = (p_depth * ((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	Float d2 = tmp2;		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(64)
	Float tmp3 = (p_x - w2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	Float tmp4 = (p_x + w2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	Float tmp5 = (p_y - h2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	Float tmp6 = (p_y + h2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	Float tmp7 = (p_z - d2);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	Float tmp8 = (p_z + d2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	::haxor::math::AABB3 tmp9 = p_result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(64)
	::haxor::math::AABB3 tmp10 = ::haxor::math::AABB3_obj::FromMinMax(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(64)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(AABB3_obj,FromCenter,return )

::haxor::math::AABB3 AABB3_obj::empty;

::haxor::math::AABB3 AABB3_obj::get_empty( ){
	HX_STACK_FRAME("haxor.math.AABB3","get_empty",0xf0deef4f,"haxor.math.AABB3.get_empty","haxor/math/AABB3.hx",71,0x4fae5fa5)
	HX_STACK_LINE(71)
	::haxor::math::AABB3 tmp = ::haxor::math::AABB3_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AABB3_obj,get_empty,return )

::haxor::math::AABB3 AABB3_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.math.AABB3","Parse",0xc43906fe,"haxor.math.AABB3.Parse","haxor/math/AABB3.hx",329,0x4fae5fa5)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(330)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(332)
		::String tmp2 = tk->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		::String tmp3 = ::StringTools_obj::trim(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		Float tmp4 = ::Std_obj::parseFloat(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(333)
		::String tmp5 = tk->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(333)
		::String tmp6 = ::StringTools_obj::trim(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(333)
		Float tmp7 = ::Std_obj::parseFloat(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(334)
		::String tmp8 = tk->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(334)
		::String tmp9 = ::StringTools_obj::trim(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(334)
		Float tmp10 = ::Std_obj::parseFloat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(335)
		::String tmp11 = tk->__get((int)3);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(335)
		::String tmp12 = ::StringTools_obj::trim(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(335)
		Float tmp13 = ::Std_obj::parseFloat(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(336)
		::String tmp14 = tk->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(336)
		::String tmp15 = ::StringTools_obj::trim(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(336)
		Float tmp16 = ::Std_obj::parseFloat(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(337)
		::String tmp17 = tk->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(337)
		::String tmp18 = ::StringTools_obj::trim(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(337)
		Float tmp19 = ::Std_obj::parseFloat(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(331)
		::haxor::math::AABB3 tmp20 = ::haxor::math::AABB3_obj::FromMinMax(tmp4,tmp7,tmp10,tmp13,tmp16,tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(331)
		return tmp20;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AABB3_obj,Parse,return )


AABB3_obj::AABB3_obj()
{
}

void AABB3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AABB3);
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(m_xMin,"m_xMin");
	HX_MARK_MEMBER_NAME(m_yMin,"m_yMin");
	HX_MARK_MEMBER_NAME(m_zMin,"m_zMin");
	HX_MARK_MEMBER_NAME(m_xMax,"m_xMax");
	HX_MARK_MEMBER_NAME(m_yMax,"m_yMax");
	HX_MARK_MEMBER_NAME(m_zMax,"m_zMax");
	HX_MARK_END_CLASS();
}

void AABB3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(m_xMin,"m_xMin");
	HX_VISIT_MEMBER_NAME(m_yMin,"m_yMin");
	HX_VISIT_MEMBER_NAME(m_zMin,"m_zMin");
	HX_VISIT_MEMBER_NAME(m_xMax,"m_xMax");
	HX_VISIT_MEMBER_NAME(m_yMax,"m_yMax");
	HX_VISIT_MEMBER_NAME(m_zMax,"m_zMax");
}

Dynamic AABB3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return get_z(); }
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
		if (HX_FIELD_EQ(inName,"zMin") ) { if (inCallProp == hx::paccAlways) return get_zMin(); }
		if (HX_FIELD_EQ(inName,"xMax") ) { if (inCallProp == hx::paccAlways) return get_xMax(); }
		if (HX_FIELD_EQ(inName,"yMax") ) { if (inCallProp == hx::paccAlways) return get_yMax(); }
		if (HX_FIELD_EQ(inName,"zMax") ) { if (inCallProp == hx::paccAlways) return get_zMax(); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		if (HX_FIELD_EQ(inName,"Set3") ) { return Set3_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return inCallProp == hx::paccAlways ? get_clone() : clone; }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return get_depth(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_xMin") ) { return m_xMin; }
		if (HX_FIELD_EQ(inName,"m_yMin") ) { return m_yMin; }
		if (HX_FIELD_EQ(inName,"m_zMin") ) { return m_zMin; }
		if (HX_FIELD_EQ(inName,"m_xMax") ) { return m_xMax; }
		if (HX_FIELD_EQ(inName,"m_yMax") ) { return m_yMax; }
		if (HX_FIELD_EQ(inName,"m_zMax") ) { return m_zMax; }
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return get_center(); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_xMin") ) { return get_xMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xMin") ) { return set_xMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yMin") ) { return get_yMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_yMin") ) { return set_yMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_zMin") ) { return get_zMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zMin") ) { return set_zMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_xMax") ) { return get_xMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xMax") ) { return set_xMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yMax") ) { return get_yMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_yMax") ) { return set_yMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_zMax") ) { return get_zMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zMax") ) { return set_zMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"Validate") ) { return Validate_dyn(); }
		if (HX_FIELD_EQ(inName,"SetAABB3") ) { return SetAABB3_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_clone") ) { return get_clone_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"SetXYZWHD") ) { return SetXYZWHD_dyn(); }
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

bool AABB3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = inCallProp == hx::paccAlways ? get_temp() : temp; return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = inCallProp == hx::paccAlways ? get_empty() : empty; return true; }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Center") ) { outValue = Center_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { outValue = get_temp_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { outValue = get_empty_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FromMinMax") ) { outValue = FromMinMax_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FromCenter") ) { outValue = FromCenter_dyn(); return true;  }
	}
	return false;
}

Dynamic AABB3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return set_z(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { if (inCallProp == hx::paccAlways) return set_xMin(inValue); }
		if (HX_FIELD_EQ(inName,"yMin") ) { if (inCallProp == hx::paccAlways) return set_yMin(inValue); }
		if (HX_FIELD_EQ(inName,"zMin") ) { if (inCallProp == hx::paccAlways) return set_zMin(inValue); }
		if (HX_FIELD_EQ(inName,"xMax") ) { if (inCallProp == hx::paccAlways) return set_xMax(inValue); }
		if (HX_FIELD_EQ(inName,"yMax") ) { if (inCallProp == hx::paccAlways) return set_yMax(inValue); }
		if (HX_FIELD_EQ(inName,"zMax") ) { if (inCallProp == hx::paccAlways) return set_zMax(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< ::haxor::math::AABB3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_xMin") ) { m_xMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_yMin") ) { m_yMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_zMin") ) { m_zMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_xMax") ) { m_xMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_yMax") ) { m_yMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_zMax") ) { m_zMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return set_center(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AABB3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< ::haxor::math::AABB3 >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=ioValue.Cast< ::haxor::math::AABB3 >(); return true; }
	}
	return false;
}

void AABB3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("xMin","\xfa","\x63","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("m_xMin","\x4c","\xd4","\x83","\x97"));
	outFields->push(HX_HCSTRING("yMin","\x99","\x9a","\x35","\x50"));
	outFields->push(HX_HCSTRING("m_yMin","\xeb","\x0a","\x2d","\x98"));
	outFields->push(HX_HCSTRING("zMin","\x38","\xd1","\xde","\x50"));
	outFields->push(HX_HCSTRING("m_zMin","\x8a","\x41","\xd6","\x98"));
	outFields->push(HX_HCSTRING("xMax","\x0c","\x5d","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("m_xMax","\x5e","\xcd","\x83","\x97"));
	outFields->push(HX_HCSTRING("yMax","\xab","\x93","\x35","\x50"));
	outFields->push(HX_HCSTRING("m_yMax","\xfd","\x03","\x2d","\x98"));
	outFields->push(HX_HCSTRING("zMax","\x4a","\xca","\xde","\x50"));
	outFields->push(HX_HCSTRING("m_zMax","\x9c","\x3a","\xd6","\x98"));
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::AABB3*/ ,(int)offsetof(AABB3_obj,clone),HX_HCSTRING("clone","\x5d","\x13","\x63","\x48")},
	{hx::fsFloat,(int)offsetof(AABB3_obj,m_xMin),HX_HCSTRING("m_xMin","\x4c","\xd4","\x83","\x97")},
	{hx::fsFloat,(int)offsetof(AABB3_obj,m_yMin),HX_HCSTRING("m_yMin","\xeb","\x0a","\x2d","\x98")},
	{hx::fsFloat,(int)offsetof(AABB3_obj,m_zMin),HX_HCSTRING("m_zMin","\x8a","\x41","\xd6","\x98")},
	{hx::fsFloat,(int)offsetof(AABB3_obj,m_xMax),HX_HCSTRING("m_xMax","\x5e","\xcd","\x83","\x97")},
	{hx::fsFloat,(int)offsetof(AABB3_obj,m_yMax),HX_HCSTRING("m_yMax","\xfd","\x03","\x2d","\x98")},
	{hx::fsFloat,(int)offsetof(AABB3_obj,m_zMax),HX_HCSTRING("m_zMax","\x9c","\x3a","\xd6","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::AABB3*/ ,(void *) &AABB3_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsObject /*::haxor::math::AABB3*/ ,(void *) &AABB3_obj::empty,HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f")},
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
	HX_HCSTRING("get_zMin","\xc1","\x8c","\x99","\xd0"),
	HX_HCSTRING("set_zMin","\x35","\xe6","\xf6","\x7e"),
	HX_HCSTRING("m_zMin","\x8a","\x41","\xd6","\x98"),
	HX_HCSTRING("get_xMax","\x95","\x18","\x47","\xcf"),
	HX_HCSTRING("set_xMax","\x09","\x72","\xa4","\x7d"),
	HX_HCSTRING("m_xMax","\x5e","\xcd","\x83","\x97"),
	HX_HCSTRING("get_yMax","\x34","\x4f","\xf0","\xcf"),
	HX_HCSTRING("set_yMax","\xa8","\xa8","\x4d","\x7e"),
	HX_HCSTRING("m_yMax","\xfd","\x03","\x2d","\x98"),
	HX_HCSTRING("get_zMax","\xd3","\x85","\x99","\xd0"),
	HX_HCSTRING("set_zMax","\x47","\xdf","\xf6","\x7e"),
	HX_HCSTRING("m_zMax","\x9c","\x3a","\xd6","\x98"),
	HX_HCSTRING("get_center","\x9e","\x95","\x62","\xf6"),
	HX_HCSTRING("set_center","\x12","\x34","\xe0","\xf9"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_z","\x51","\xa5","\x60","\x91"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_depth","\x5a","\x4d","\xd3","\x1a"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("Validate","\xb6","\x8c","\x95","\xde"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("Set3","\x71","\xbe","\x29","\x37"),
	HX_HCSTRING("SetAABB3","\xd1","\x96","\xed","\xec"),
	HX_HCSTRING("SetXYZWHD","\x7c","\xb9","\xb6","\x76"),
	HX_HCSTRING("Encapsulate","\xb1","\xa0","\x68","\x6d"),
	HX_HCSTRING("Encapsulate3","\x62","\xfa","\x23","\x4e"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AABB3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AABB3_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(AABB3_obj::empty,"empty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AABB3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AABB3_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(AABB3_obj::empty,"empty");
};

#endif

hx::Class AABB3_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c"),
	HX_HCSTRING("get_temp","\x9d","\x7e","\xb4","\xcc"),
	HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a"),
	HX_HCSTRING("FromMinMax","\x5c","\x81","\xde","\x8c"),
	HX_HCSTRING("FromCenter","\xff","\x2e","\xd0","\x3f"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("get_empty","\xe4","\x96","\x83","\xb3"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void AABB3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.AABB3","\x19","\x15","\x35","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AABB3_obj::__GetStatic;
	__mClass->mSetStaticField = &AABB3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AABB3_obj >;
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
