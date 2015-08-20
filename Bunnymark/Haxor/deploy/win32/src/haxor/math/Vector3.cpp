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
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace math{

Void Vector3_obj::__construct(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z)
{
HX_STACK_FRAME("haxor.math.Vector3","new",0xd8de16e8,"haxor.math.Vector3.new","haxor/math/Vector3.hx",267,0x4fead1e8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_x,"p_x")
HX_STACK_ARG(__o_p_y,"p_y")
HX_STACK_ARG(__o_p_z,"p_z")
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
{
	HX_STACK_LINE(268)
	this->x = p_x;
	HX_STACK_LINE(269)
	this->y = p_y;
	HX_STACK_LINE(270)
	this->z = p_z;
}
;
	return null();
}

//Vector3_obj::~Vector3_obj() { }

Dynamic Vector3_obj::__CreateEmpty() { return  new Vector3_obj; }
hx::ObjectPtr< Vector3_obj > Vector3_obj::__new(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z)
{  hx::ObjectPtr< Vector3_obj > _result_ = new Vector3_obj();
	_result_->__construct(__o_p_x,__o_p_y,__o_p_z);
	return _result_;}

Dynamic Vector3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3_obj > _result_ = new Vector3_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::haxor::math::Vector3 Vector3_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_clone",0x5df64c3c,"haxor.math.Vector3.get_clone","haxor/math/Vector3.hx",157,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_clone,return )

::haxor::math::Color Vector3_obj::get_color( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_color",0x5fefaa42,"haxor.math.Vector3.get_color","haxor/math/Vector3.hx",163,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	::haxor::math::Color tmp3 = ::haxor::math::Color_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_color,return )

::haxor::math::Vector3 Vector3_obj::get_xzy( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_xzy",0x67746c56,"haxor.math.Vector3.get_xzy","haxor/math/Vector3.hx",168,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	Float tmp1 = this->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_xzy,return )

::haxor::math::Vector3 Vector3_obj::get_yxz( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_yxz",0x67752cda,"haxor.math.Vector3.get_yxz","haxor/math/Vector3.hx",173,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	Float tmp1 = this->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_yxz,return )

::haxor::math::Vector3 Vector3_obj::get_yzx( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_yzx",0x67752e96,"haxor.math.Vector3.get_yzx","haxor/math/Vector3.hx",178,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	Float tmp1 = this->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_yzx,return )

::haxor::math::Vector3 Vector3_obj::get_zxy( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_zxy",0x6775ef1a,"haxor.math.Vector3.get_zxy","haxor/math/Vector3.hx",183,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	Float tmp = this->z;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(183)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_zxy,return )

::haxor::math::Vector3 Vector3_obj::get_zyx( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_zyx",0x6775eff8,"haxor.math.Vector3.get_zyx","haxor/math/Vector3.hx",188,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	Float tmp = this->z;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_zyx,return )

::haxor::math::Vector2 Vector3_obj::get_xy( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_xy",0xdbba7ec2,"haxor.math.Vector3.get_xy","haxor/math/Vector3.hx",193,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_xy,return )

::haxor::math::Vector2 Vector3_obj::get_xz( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_xz",0xdbba7ec3,"haxor.math.Vector3.get_xz","haxor/math/Vector3.hx",198,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	Float tmp1 = this->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_xz,return )

::haxor::math::Vector2 Vector3_obj::get_yx( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_yx",0xdbba7fa0,"haxor.math.Vector3.get_yx","haxor/math/Vector3.hx",203,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_yx,return )

::haxor::math::Vector2 Vector3_obj::get_yz( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_yz",0xdbba7fa2,"haxor.math.Vector3.get_yz","haxor/math/Vector3.hx",208,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	Float tmp1 = this->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_yz,return )

::haxor::math::Vector2 Vector3_obj::get_zx( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_zx",0xdbba807f,"haxor.math.Vector3.get_zx","haxor/math/Vector3.hx",213,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(213)
	Float tmp = this->z;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(213)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_zx,return )

::haxor::math::Vector2 Vector3_obj::get_zy( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_zy",0xdbba8080,"haxor.math.Vector3.get_zy","haxor/math/Vector3.hx",218,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	Float tmp = this->z;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_zy,return )

Float Vector3_obj::get_length( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_length",0x6a461f27,"haxor.math.Vector3.get_length","haxor/math/Vector3.hx",224,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(224)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(224)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(224)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(224)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(224)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(224)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(224)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(224)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(224)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_length,return )

Float Vector3_obj::get_lengthSqr( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_lengthSqr",0x5d1df12d,"haxor.math.Vector3.get_lengthSqr","haxor/math/Vector3.hx",230,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(230)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(230)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(230)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(230)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(230)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(230)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(230)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_lengthSqr,return )

::haxor::math::Vector3 Vector3_obj::get_normalized( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_normalized",0x7cc6a2f8,"haxor.math.Vector3.get_normalized","haxor/math/Vector3.hx",236,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(236)
	::haxor::math::Vector3 tmp4 = tmp3->Normalize();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(236)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_normalized,return )

::haxor::math::Vector3 Vector3_obj::get_inverse( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_inverse",0x496bba4f,"haxor.math.Vector3.get_inverse","haxor/math/Vector3.hx",242,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(242)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	::haxor::math::Vector3 tmp4 = tmp3->Invert();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(242)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_inverse,return )

::haxor::math::Vector3 Vector3_obj::Set( hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z){
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
	HX_STACK_FRAME("haxor.math.Vector3","Set",0xd8c99a0a,"haxor.math.Vector3.Set","haxor/math/Vector3.hx",280,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_z,"p_z")
{
		HX_STACK_LINE(280)
		this->x = p_x;
		HX_STACK_LINE(280)
		this->y = p_y;
		HX_STACK_LINE(280)
		this->z = p_z;
		HX_STACK_LINE(280)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,Set,return )

::haxor::math::Vector3 Vector3_obj::Set2( ::haxor::math::Vector2 v){
	HX_STACK_FRAME("haxor.math.Vector3","Set2",0xd79d2ee8,"haxor.math.Vector3.Set2","haxor/math/Vector3.hx",287,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(287)
	this->x = v->x;
	HX_STACK_LINE(287)
	this->y = v->y;
	HX_STACK_LINE(287)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Set2,return )

::haxor::math::Vector3 Vector3_obj::Set3( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.Vector3","Set3",0xd79d2ee9,"haxor.math.Vector3.Set3","haxor/math/Vector3.hx",294,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(294)
	this->x = v->x;
	HX_STACK_LINE(294)
	this->y = v->y;
	HX_STACK_LINE(294)
	this->z = v->z;
	HX_STACK_LINE(294)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Set3,return )

::haxor::math::Vector3 Vector3_obj::Set4( ::haxor::math::Vector4 v){
	HX_STACK_FRAME("haxor.math.Vector3","Set4",0xd79d2eea,"haxor.math.Vector3.Set4","haxor/math/Vector3.hx",301,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(301)
	this->x = v->x;
	HX_STACK_LINE(301)
	this->y = v->y;
	HX_STACK_LINE(301)
	this->z = v->z;
	HX_STACK_LINE(301)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Set4,return )

::haxor::math::Vector3 Vector3_obj::SetColor( ::haxor::math::Color v){
	HX_STACK_FRAME("haxor.math.Vector3","SetColor",0x8143a2f9,"haxor.math.Vector3.SetColor","haxor/math/Vector3.hx",308,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(308)
	this->x = v->r;
	HX_STACK_LINE(308)
	this->y = v->g;
	HX_STACK_LINE(308)
	this->z = v->b;
	HX_STACK_LINE(308)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,SetColor,return )

Float Vector3_obj::Get( int p){
	HX_STACK_FRAME("haxor.math.Vector3","Get",0xd8c07efe,"haxor.math.Vector3.Get","haxor/math/Vector3.hx",315,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(315)
	bool tmp = (p == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	if ((tmp)){
		HX_STACK_LINE(315)
		tmp1 = this->x;
	}
	else{
		HX_STACK_LINE(315)
		bool tmp2 = (p == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		if ((tmp2)){
			HX_STACK_LINE(315)
			tmp1 = this->y;
		}
		else{
			HX_STACK_LINE(315)
			tmp1 = this->z;
		}
	}
	HX_STACK_LINE(315)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Get,return )

::haxor::math::Vector3 Vector3_obj::Add( ::haxor::math::Vector3 p_v){
	HX_STACK_FRAME("haxor.math.Vector3","Add",0xd8bbf089,"haxor.math.Vector3.Add","haxor/math/Vector3.hx",322,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(322)
	hx::AddEq(this->x,p_v->x);
	HX_STACK_LINE(322)
	hx::AddEq(this->y,p_v->y);
	HX_STACK_LINE(322)
	hx::AddEq(this->z,p_v->z);
	HX_STACK_LINE(322)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Add,return )

::haxor::math::Vector3 Vector3_obj::Add3( Float p_x,Float p_y,Float p_z){
	HX_STACK_FRAME("haxor.math.Vector3","Add3",0xcbb6878a,"haxor.math.Vector3.Add3","haxor/math/Vector3.hx",331,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_z,"p_z")
	HX_STACK_LINE(331)
	hx::AddEq(this->x,p_x);
	HX_STACK_LINE(331)
	hx::AddEq(this->y,p_y);
	HX_STACK_LINE(331)
	hx::AddEq(this->z,p_z);
	HX_STACK_LINE(331)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,Add3,return )

::haxor::math::Vector3 Vector3_obj::Sub( ::haxor::math::Vector3 p_v){
	HX_STACK_FRAME("haxor.math.Vector3","Sub",0xd8c9a7e8,"haxor.math.Vector3.Sub","haxor/math/Vector3.hx",338,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(338)
	hx::SubEq(this->x,p_v->x);
	HX_STACK_LINE(338)
	hx::SubEq(this->y,p_v->y);
	HX_STACK_LINE(338)
	hx::SubEq(this->z,p_v->z);
	HX_STACK_LINE(338)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Sub,return )

::haxor::math::Vector3 Vector3_obj::Multiply( ::haxor::math::Vector3 p_v){
	HX_STACK_FRAME("haxor.math.Vector3","Multiply",0xc33faabc,"haxor.math.Vector3.Multiply","haxor/math/Vector3.hx",345,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(345)
	hx::MultEq(this->x,p_v->x);
	HX_STACK_LINE(345)
	hx::MultEq(this->y,p_v->y);
	HX_STACK_LINE(345)
	hx::MultEq(this->z,p_v->z);
	HX_STACK_LINE(345)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Multiply,return )

bool Vector3_obj::Step( ::haxor::math::Vector3 p_to,Float p_step){
	HX_STACK_FRAME("haxor.math.Vector3","Step",0xd7a883e4,"haxor.math.Vector3.Step","haxor/math/Vector3.hx",354,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_to,"p_to")
	HX_STACK_ARG(p_step,"p_step")
	HX_STACK_LINE(355)
	Float tmp = p_to->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	Float vx = tmp2;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(356)
	Float tmp3 = p_to->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(356)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(356)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(356)
	Float vy = tmp5;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(357)
	Float tmp6 = p_to->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(357)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(357)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(357)
	Float vz = tmp8;		HX_STACK_VAR(vz,"vz");
	HX_STACK_LINE(358)
	Float tmp9 = (vx * vx);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(358)
	Float tmp10 = (vy * vy);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(358)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(358)
	Float tmp12 = (vz * vz);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(358)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(358)
	Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(358)
	Float l = tmp14;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(359)
	bool tmp15 = (l <= ((Float)0.0001));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(359)
	if ((tmp15)){
		HX_STACK_LINE(359)
		return false;
	}
	HX_STACK_LINE(360)
	bool tmp16 = (p_step > l);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(360)
	Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(360)
	if ((tmp16)){
		HX_STACK_LINE(360)
		tmp17 = l;
	}
	else{
		HX_STACK_LINE(360)
		tmp17 = p_step;
	}
	HX_STACK_LINE(360)
	Float s = tmp17;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(361)
	Float tmp18 = (Float(s) / Float(l));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(361)
	l = tmp18;
	HX_STACK_LINE(362)
	hx::MultEq(vx,l);
	HX_STACK_LINE(363)
	hx::MultEq(vy,l);
	HX_STACK_LINE(364)
	hx::MultEq(vz,l);
	HX_STACK_LINE(365)
	hx::AddEq(this->x,vx);
	HX_STACK_LINE(366)
	hx::AddEq(this->y,vy);
	HX_STACK_LINE(367)
	hx::AddEq(this->z,vz);
	HX_STACK_LINE(368)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Step,return )

::haxor::math::Vector3 Vector3_obj::Reflect( ::haxor::math::Vector3 p_normal){
	HX_STACK_FRAME("haxor.math.Vector3","Reflect",0xf71ed6a5,"haxor.math.Vector3.Reflect","haxor/math/Vector3.hx",377,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_normal,"p_normal")
	HX_STACK_LINE(378)
	Float tmp = p_normal->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(378)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(378)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(378)
	Float tmp3 = p_normal->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(378)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(378)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(378)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(378)
	Float tmp7 = p_normal->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(378)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(378)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(378)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(378)
	Float tmp11 = ::Math_obj::min(((Float)0.0),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(378)
	Float tmp12 = (tmp11 * ((Float)2.0));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(378)
	Float d = tmp12;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(379)
	Float tmp13 = p_normal->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(379)
	Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(379)
	Float tmp15 = d;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(379)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(379)
	hx::AddEq(this->x,tmp16);
	HX_STACK_LINE(380)
	Float tmp17 = p_normal->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(380)
	Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(380)
	Float tmp19 = d;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(380)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(380)
	hx::AddEq(this->y,tmp20);
	HX_STACK_LINE(381)
	Float tmp21 = p_normal->z;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(381)
	Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(381)
	Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(381)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(381)
	hx::AddEq(this->z,tmp24);
	HX_STACK_LINE(382)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Reflect,return )

::haxor::math::Vector3 Vector3_obj::Invert( ){
	HX_STACK_FRAME("haxor.math.Vector3","Invert",0x0cf7d9ae,"haxor.math.Vector3.Invert","haxor/math/Vector3.hx",389,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(389)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	this->x = tmp1;
	HX_STACK_LINE(389)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(389)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(389)
	this->y = tmp3;
	HX_STACK_LINE(389)
	Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(389)
	Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(389)
	this->z = tmp5;
	HX_STACK_LINE(389)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,Invert,return )

::haxor::math::Vector3 Vector3_obj::Scale( Float p_s){
	HX_STACK_FRAME("haxor.math.Vector3","Scale",0xd08b36f2,"haxor.math.Vector3.Scale","haxor/math/Vector3.hx",396,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_s,"p_s")
	HX_STACK_LINE(396)
	hx::MultEq(this->x,p_s);
	HX_STACK_LINE(396)
	hx::MultEq(this->y,p_s);
	HX_STACK_LINE(396)
	hx::MultEq(this->z,p_s);
	HX_STACK_LINE(396)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Scale,return )

::haxor::math::Vector3 Vector3_obj::Normalize( ){
	HX_STACK_FRAME("haxor.math.Vector3","Normalize",0x1f5df3f5,"haxor.math.Vector3.Normalize","haxor/math/Vector3.hx",403,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(404)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(404)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(404)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(404)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(404)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(404)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(404)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(404)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(404)
	Float l = tmp11;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(405)
	bool tmp12 = (l <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(405)
	if ((tmp12)){
		HX_STACK_LINE(405)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(406)
	Float tmp13 = (Float(((Float)1.0)) / Float(l));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(406)
	Float tmp14 = l = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(406)
	hx::MultEq(this->x,tmp14);
	HX_STACK_LINE(407)
	hx::MultEq(this->y,l);
	HX_STACK_LINE(408)
	hx::MultEq(this->z,l);
	HX_STACK_LINE(409)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,Normalize,return )

Array< Float > Vector3_obj::ToArray( ){
	HX_STACK_FRAME("haxor.math.Vector3","ToArray",0x00090c86,"haxor.math.Vector3.ToArray","haxor/math/Vector3.hx",416,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(416)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(416)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(416)
	Array< Float > tmp3 = Array_obj< Float >::__new().Add(tmp).Add(tmp1).Add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(416)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,ToArray,return )

::String Vector3_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.Vector3","ToString",0x61219944,"haxor.math.Vector3.ToString","haxor/math/Vector3.hx",422,0x4fead1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(422)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int tmp1 = p_places;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(422)
			Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(422)
			Float d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(422)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(422)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(422)
				Float p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(422)
				Float tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(422)
				bool tmp8 = (p_v < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(422)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(422)
				if ((tmp8)){
					HX_STACK_LINE(422)
					tmp9 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(422)
					tmp9 = ((Float)0.5);
				}
				HX_STACK_LINE(422)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(422)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(422)
				tmp3 = ((Float)(tmp11));
			}
			HX_STACK_LINE(422)
			Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(422)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		HX_STACK_LINE(422)
		::String tmp1 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		::String tmp2 = (tmp1 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int tmp4 = p_places;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(422)
			Float tmp5 = ::Math_obj::pow((int)10,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			Float d = tmp5;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(422)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(422)
				Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(422)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(422)
				Float p_v = tmp9;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(422)
				Float tmp10 = p_v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(422)
				bool tmp11 = (p_v < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(422)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(422)
				if ((tmp11)){
					HX_STACK_LINE(422)
					tmp12 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(422)
					tmp12 = ((Float)0.5);
				}
				HX_STACK_LINE(422)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(422)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(422)
				tmp6 = ((Float)(tmp14));
			}
			HX_STACK_LINE(422)
			Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(422)
			tmp3 = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(422)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(422)
		::String tmp5 = (tmp4 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(422)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int tmp7 = p_places;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(422)
			Float tmp8 = ::Math_obj::pow((int)10,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(422)
			Float d = tmp8;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(422)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(422)
				Float tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(422)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(422)
				Float p_v = tmp12;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(422)
				Float tmp13 = p_v;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(422)
				bool tmp14 = (p_v < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(422)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(422)
				if ((tmp14)){
					HX_STACK_LINE(422)
					tmp15 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(422)
					tmp15 = ((Float)0.5);
				}
				HX_STACK_LINE(422)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(422)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(422)
				tmp9 = ((Float)(tmp17));
			}
			HX_STACK_LINE(422)
			Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(422)
			tmp6 = (Float(tmp9) / Float(tmp10));
		}
		HX_STACK_LINE(422)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(422)
		::String tmp8 = (tmp7 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(422)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,ToString,return )

::haxor::math::Vector3 Vector3_obj::temp;

::haxor::math::Vector3 Vector3_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_temp",0x1bb58b15,"haxor.math.Vector3.get_temp","haxor/math/Vector3.hx",15,0x4fead1e8)
	HX_STACK_LINE(15)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_temp,return )

::haxor::math::Vector3 Vector3_obj::zero;

::haxor::math::Vector3 Vector3_obj::get_zero( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_zero",0x1facd729,"haxor.math.Vector3.get_zero","haxor/math/Vector3.hx",21,0x4fead1e8)
	HX_STACK_LINE(21)
	::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_zero,return )

::haxor::math::Vector3 Vector3_obj::one;

::haxor::math::Vector3 Vector3_obj::get_one( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_one",0x676d8d85,"haxor.math.Vector3.get_one","haxor/math/Vector3.hx",27,0x4fead1e8)
	HX_STACK_LINE(27)
	::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_one,return )

::haxor::math::Vector3 Vector3_obj::right;

::haxor::math::Vector3 Vector3_obj::get_right( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_right",0xfef744bb,"haxor.math.Vector3.get_right","haxor/math/Vector3.hx",33,0x4fead1e8)
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)1,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_right,return )

::haxor::math::Vector3 Vector3_obj::up;

::haxor::math::Vector3 Vector3_obj::get_up( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_up",0xdbba7c1c,"haxor.math.Vector3.get_up","haxor/math/Vector3.hx",39,0x4fead1e8)
	HX_STACK_LINE(39)
	::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)1,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_up,return )

::haxor::math::Vector3 Vector3_obj::forward;

::haxor::math::Vector3 Vector3_obj::get_forward( ){
	HX_STACK_FRAME("haxor.math.Vector3","get_forward",0xf1455064,"haxor.math.Vector3.get_forward","haxor/math/Vector3.hx",45,0x4fead1e8)
	HX_STACK_LINE(45)
	::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_forward,return )

Float Vector3_obj::Dot( ::haxor::math::Vector3 p_a,::haxor::math::Vector3 p_b){
	HX_STACK_FRAME("haxor.math.Vector3","Dot",0xd8be40f1,"haxor.math.Vector3.Dot","haxor/math/Vector3.hx",53,0x4fead1e8)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_LINE(53)
	Float tmp = (p_a->x * p_b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float tmp1 = (p_a->y * p_b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	Float tmp3 = (p_a->z * p_b->z);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Dot,return )

Float Vector3_obj::Distance( ::haxor::math::Vector3 p_a,::haxor::math::Vector3 p_b){
	HX_STACK_FRAME("haxor.math.Vector3","Distance",0x94ac5bcd,"haxor.math.Vector3.Distance","haxor/math/Vector3.hx",62,0x4fead1e8)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_LINE(63)
	Float tmp = (p_a->x - p_b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	Float dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(64)
	Float tmp1 = (p_a->y - p_b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(65)
	Float tmp2 = (p_a->z - p_b->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float dz = tmp2;		HX_STACK_VAR(dz,"dz");
	HX_STACK_LINE(66)
	Float tmp3 = (dx * dx);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	Float tmp4 = (dy * dy);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	Float tmp6 = (dz * dz);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(66)
	Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(66)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Distance,return )

::haxor::math::Vector3 Vector3_obj::Cross( ::haxor::math::Vector3 p_a,::haxor::math::Vector3 p_b,::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Vector3","Cross",0xa416c7e8,"haxor.math.Vector3.Cross","haxor/math/Vector3.hx",76,0x4fead1e8)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(77)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	if ((tmp)){
		HX_STACK_LINE(77)
		tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
	}
	else{
		HX_STACK_LINE(77)
		tmp1 = p_result;
	}
	HX_STACK_LINE(77)
	p_result = tmp1;
	HX_STACK_LINE(79)
	Float tmp2 = (p_a->y * p_b->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	Float tmp3 = (p_a->z * p_b->y);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	Float tmp5 = (p_a->z * p_b->x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(80)
	Float tmp6 = (p_a->x * p_b->z);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(80)
	Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	Float tmp8 = (p_a->x * p_b->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(81)
	Float tmp9 = (p_a->y * p_b->x);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(81)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(78)
	::haxor::math::Vector3 tmp11 = p_result->Set(tmp4,tmp7,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(78)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,Cross,return )

::haxor::math::Vector3 Vector3_obj::Project( ::haxor::math::Vector3 p_point,::haxor::math::Vector3 p_origin,::haxor::math::Vector3 p_dir,::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Vector3","Project",0x03e06541,"haxor.math.Vector3.Project","haxor/math/Vector3.hx",93,0x4fead1e8)
	HX_STACK_ARG(p_point,"p_point")
	HX_STACK_ARG(p_origin,"p_origin")
	HX_STACK_ARG(p_dir,"p_dir")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(94)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	if ((tmp)){
		HX_STACK_LINE(94)
		tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
	}
	else{
		HX_STACK_LINE(94)
		tmp1 = p_result;
	}
	HX_STACK_LINE(94)
	p_result = tmp1;
	HX_STACK_LINE(95)
	::haxor::math::Vector3 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(95)
		Array< ::Dynamic > tmp4 = _this->m_v3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		int tmp5 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		int tmp6 = _this->m_v3->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		int tmp8 = _this->m_nv3 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(95)
	::haxor::math::Vector3 tmp3 = p_dir;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	::haxor::math::Vector3 tmp4 = tmp2->Set3(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	::haxor::math::Vector3 tmp5 = tmp4->Normalize();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	::haxor::math::Vector3 d = tmp5;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(96)
	::haxor::math::Vector3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		::haxor::context::DataContext tmp7 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		::haxor::context::DataContext _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(96)
		Array< ::Dynamic > tmp8 = _this->m_v3;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		int tmp9 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		int tmp10 = _this->m_v3->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(96)
		int tmp11 = hx::Mod(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(96)
		int tmp12 = _this->m_nv3 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(96)
		tmp6 = tmp8->__get(tmp12).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(96)
	::haxor::math::Vector3 tmp7 = p_point;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	::haxor::math::Vector3 tmp8 = tmp6->Set3(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(96)
	::haxor::math::Vector3 tmp9 = p_origin;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(96)
	::haxor::math::Vector3 tmp10 = tmp8->Sub(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(96)
	::haxor::math::Vector3 v = tmp10;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(97)
	Float tmp11 = (d->x * v->x);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(97)
	Float tmp12 = (d->y * v->y);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(97)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(97)
	Float tmp14 = (d->z * v->z);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(97)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(97)
	Float dot = tmp15;		HX_STACK_VAR(dot,"dot");
	HX_STACK_LINE(98)
	Float tmp16 = p_origin->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(98)
	Float tmp17 = (v->x * dot);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(98)
	Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(98)
	p_result->x = tmp18;
	HX_STACK_LINE(99)
	Float tmp19 = p_origin->y;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(99)
	Float tmp20 = (v->y * dot);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(99)
	Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(99)
	p_result->y = tmp21;
	HX_STACK_LINE(100)
	Float tmp22 = p_origin->z;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(100)
	Float tmp23 = (v->z * dot);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(100)
	Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(100)
	p_result->z = tmp24;
	HX_STACK_LINE(101)
	::haxor::math::Vector3 tmp25 = p_result;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(101)
	return tmp25;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector3_obj,Project,return )

::haxor::math::Vector3 Vector3_obj::Lerp( ::haxor::math::Vector3 p_a,::haxor::math::Vector3 p_b,Float p_r,::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Vector3","Lerp",0xd2fcaf0f,"haxor.math.Vector3.Lerp","haxor/math/Vector3.hx",112,0x4fead1e8)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_r,"p_r")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(113)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	if ((tmp)){
		HX_STACK_LINE(113)
		tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
	}
	else{
		HX_STACK_LINE(113)
		tmp1 = p_result;
	}
	HX_STACK_LINE(113)
	p_result = tmp1;
	HX_STACK_LINE(115)
	Float tmp2 = p_a->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	Float tmp3 = (p_b->x - p_a->x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	Float tmp4 = p_r;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(115)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(116)
	Float tmp7 = p_a->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(116)
	Float tmp8 = (p_b->y - p_a->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(116)
	Float tmp9 = p_r;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(116)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(116)
	Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(117)
	Float tmp12 = p_a->z;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(117)
	Float tmp13 = (p_b->z - p_a->z);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(117)
	Float tmp14 = p_r;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(117)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(117)
	Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(114)
	::haxor::math::Vector3 tmp17 = p_result->Set(tmp6,tmp11,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(114)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector3_obj,Lerp,return )

::haxor::math::Vector3 Vector3_obj::Min( ::haxor::math::Vector3 p_a,::haxor::math::Vector3 p_b,::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Vector3","Min",0xd8c50ffa,"haxor.math.Vector3.Min","haxor/math/Vector3.hx",129,0x4fead1e8)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(130)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	if ((tmp)){
		HX_STACK_LINE(130)
		tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
	}
	else{
		HX_STACK_LINE(130)
		tmp1 = p_result;
	}
	HX_STACK_LINE(130)
	p_result = tmp1;
	HX_STACK_LINE(131)
	Float tmp2 = p_a->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	Float tmp3 = p_b->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	Float tmp4 = ::Math_obj::min(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	p_result->x = tmp4;
	HX_STACK_LINE(132)
	Float tmp5 = p_a->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(132)
	Float tmp6 = p_b->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(132)
	Float tmp7 = ::Math_obj::min(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(132)
	p_result->y = tmp7;
	HX_STACK_LINE(133)
	Float tmp8 = p_a->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(133)
	Float tmp9 = p_b->z;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(133)
	Float tmp10 = ::Math_obj::min(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(133)
	p_result->z = tmp10;
	HX_STACK_LINE(134)
	::haxor::math::Vector3 tmp11 = p_result;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(134)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,Min,return )

::haxor::math::Vector3 Vector3_obj::Max( ::haxor::math::Vector3 p_a,::haxor::math::Vector3 p_b,::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Vector3","Max",0xd8c5090c,"haxor.math.Vector3.Max","haxor/math/Vector3.hx",145,0x4fead1e8)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(146)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	if ((tmp)){
		HX_STACK_LINE(146)
		tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
	}
	else{
		HX_STACK_LINE(146)
		tmp1 = p_result;
	}
	HX_STACK_LINE(146)
	p_result = tmp1;
	HX_STACK_LINE(147)
	Float tmp2 = p_a->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	Float tmp3 = p_b->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	Float tmp4 = ::Math_obj::max(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(147)
	p_result->x = tmp4;
	HX_STACK_LINE(148)
	Float tmp5 = p_a->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(148)
	Float tmp6 = p_b->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(148)
	Float tmp7 = ::Math_obj::max(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(148)
	p_result->y = tmp7;
	HX_STACK_LINE(149)
	Float tmp8 = p_a->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(149)
	Float tmp9 = p_b->z;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(149)
	Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(149)
	p_result->z = tmp10;
	HX_STACK_LINE(150)
	::haxor::math::Vector3 tmp11 = p_result;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(150)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,Max,return )

::haxor::math::Vector3 Vector3_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.math.Vector3","Parse",0x1511f89b,"haxor.math.Vector3.Parse","haxor/math/Vector3.hx",430,0x4fead1e8)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(431)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(432)
		::haxor::math::Vector3 tmp2 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(433)
		::String tmp3 = tk->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(433)
		::String tmp4 = ::StringTools_obj::trim(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(433)
		Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(434)
		::String tmp6 = tk->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(434)
		::String tmp7 = ::StringTools_obj::trim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(434)
		Float tmp8 = ::Std_obj::parseFloat(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(435)
		::String tmp9 = tk->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(435)
		::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(435)
		Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(432)
		::haxor::math::Vector3 tmp12 = tmp2->Set(tmp5,tmp8,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(432)
		return tmp12;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Parse,return )


Vector3_obj::Vector3_obj()
{
}

void Vector3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector3);
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(xzy,"xzy");
	HX_MARK_MEMBER_NAME(yxz,"yxz");
	HX_MARK_MEMBER_NAME(yzx,"yzx");
	HX_MARK_MEMBER_NAME(zxy,"zxy");
	HX_MARK_MEMBER_NAME(zyx,"zyx");
	HX_MARK_MEMBER_NAME(xy,"xy");
	HX_MARK_MEMBER_NAME(xz,"xz");
	HX_MARK_MEMBER_NAME(yx,"yx");
	HX_MARK_MEMBER_NAME(yz,"yz");
	HX_MARK_MEMBER_NAME(zx,"zx");
	HX_MARK_MEMBER_NAME(zy,"zy");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthSqr,"lengthSqr");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(inverse,"inverse");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_END_CLASS();
}

void Vector3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(xzy,"xzy");
	HX_VISIT_MEMBER_NAME(yxz,"yxz");
	HX_VISIT_MEMBER_NAME(yzx,"yzx");
	HX_VISIT_MEMBER_NAME(zxy,"zxy");
	HX_VISIT_MEMBER_NAME(zyx,"zyx");
	HX_VISIT_MEMBER_NAME(xy,"xy");
	HX_VISIT_MEMBER_NAME(xz,"xz");
	HX_VISIT_MEMBER_NAME(yx,"yx");
	HX_VISIT_MEMBER_NAME(yz,"yz");
	HX_VISIT_MEMBER_NAME(zx,"zx");
	HX_VISIT_MEMBER_NAME(zy,"zy");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lengthSqr,"lengthSqr");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(inverse,"inverse");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
}

Dynamic Vector3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return inCallProp == hx::paccAlways ? get_xy() : xy; }
		if (HX_FIELD_EQ(inName,"xz") ) { return inCallProp == hx::paccAlways ? get_xz() : xz; }
		if (HX_FIELD_EQ(inName,"yx") ) { return inCallProp == hx::paccAlways ? get_yx() : yx; }
		if (HX_FIELD_EQ(inName,"yz") ) { return inCallProp == hx::paccAlways ? get_yz() : yz; }
		if (HX_FIELD_EQ(inName,"zx") ) { return inCallProp == hx::paccAlways ? get_zx() : zx; }
		if (HX_FIELD_EQ(inName,"zy") ) { return inCallProp == hx::paccAlways ? get_zy() : zy; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xzy") ) { return inCallProp == hx::paccAlways ? get_xzy() : xzy; }
		if (HX_FIELD_EQ(inName,"yxz") ) { return inCallProp == hx::paccAlways ? get_yxz() : yxz; }
		if (HX_FIELD_EQ(inName,"yzx") ) { return inCallProp == hx::paccAlways ? get_yzx() : yzx; }
		if (HX_FIELD_EQ(inName,"zxy") ) { return inCallProp == hx::paccAlways ? get_zxy() : zxy; }
		if (HX_FIELD_EQ(inName,"zyx") ) { return inCallProp == hx::paccAlways ? get_zyx() : zyx; }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Sub") ) { return Sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Set2") ) { return Set2_dyn(); }
		if (HX_FIELD_EQ(inName,"Set3") ) { return Set3_dyn(); }
		if (HX_FIELD_EQ(inName,"Set4") ) { return Set4_dyn(); }
		if (HX_FIELD_EQ(inName,"Add3") ) { return Add3_dyn(); }
		if (HX_FIELD_EQ(inName,"Step") ) { return Step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return inCallProp == hx::paccAlways ? get_clone() : clone; }
		if (HX_FIELD_EQ(inName,"color") ) { return inCallProp == hx::paccAlways ? get_color() : color; }
		if (HX_FIELD_EQ(inName,"Scale") ) { return Scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_xy") ) { return get_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_xz") ) { return get_xz_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yx") ) { return get_yx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yz") ) { return get_yz_dyn(); }
		if (HX_FIELD_EQ(inName,"get_zx") ) { return get_zx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_zy") ) { return get_zy_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"Invert") ) { return Invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_xzy") ) { return get_xzy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yxz") ) { return get_yxz_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yzx") ) { return get_yzx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_zxy") ) { return get_zxy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_zyx") ) { return get_zyx_dyn(); }
		if (HX_FIELD_EQ(inName,"inverse") ) { return inCallProp == hx::paccAlways ? get_inverse() : inverse; }
		if (HX_FIELD_EQ(inName,"Reflect") ) { return Reflect_dyn(); }
		if (HX_FIELD_EQ(inName,"ToArray") ) { return ToArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SetColor") ) { return SetColor_dyn(); }
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_clone") ) { return get_clone_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSqr") ) { return inCallProp == hx::paccAlways ? get_lengthSqr() : lengthSqr; }
		if (HX_FIELD_EQ(inName,"Normalize") ) { return Normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"normalized") ) { return inCallProp == hx::paccAlways ? get_normalized() : normalized; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_inverse") ) { return get_inverse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_lengthSqr") ) { return get_lengthSqr_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_normalized") ) { return get_normalized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { outValue = inCallProp == hx::paccAlways ? get_up() : up; return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { outValue = inCallProp == hx::paccAlways ? get_one() : one; return true; }
		if (HX_FIELD_EQ(inName,"Dot") ) { outValue = Dot_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Min") ) { outValue = Min_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Max") ) { outValue = Max_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = inCallProp == hx::paccAlways ? get_temp() : temp; return true; }
		if (HX_FIELD_EQ(inName,"zero") ) { outValue = inCallProp == hx::paccAlways ? get_zero() : zero; return true; }
		if (HX_FIELD_EQ(inName,"Lerp") ) { outValue = Lerp_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { outValue = inCallProp == hx::paccAlways ? get_right() : right; return true; }
		if (HX_FIELD_EQ(inName,"Cross") ) { outValue = Cross_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_up") ) { outValue = get_up_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_one") ) { outValue = get_one_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"forward") ) { outValue = inCallProp == hx::paccAlways ? get_forward() : forward; return true; }
		if (HX_FIELD_EQ(inName,"Project") ) { outValue = Project_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { outValue = get_temp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_zero") ) { outValue = get_zero_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Distance") ) { outValue = Distance_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { outValue = get_right_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_forward") ) { outValue = get_forward_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { xy=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xz") ) { xz=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yx") ) { yx=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yz") ) { yz=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zx") ) { zx=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zy") ) { zy=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xzy") ) { xzy=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yxz") ) { yxz=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yzx") ) { yzx=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zxy") ) { zxy=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zyx") ) { zyx=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { inverse=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lengthSqr") ) { lengthSqr=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=ioValue.Cast< ::haxor::math::Vector3 >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { one=ioValue.Cast< ::haxor::math::Vector3 >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< ::haxor::math::Vector3 >(); return true; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=ioValue.Cast< ::haxor::math::Vector3 >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=ioValue.Cast< ::haxor::math::Vector3 >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forward") ) { forward=ioValue.Cast< ::haxor::math::Vector3 >(); return true; }
	}
	return false;
}

void Vector3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("xzy","\x37","\x79","\x5b","\x00"));
	outFields->push(HX_HCSTRING("yxz","\xbb","\x39","\x5c","\x00"));
	outFields->push(HX_HCSTRING("yzx","\x77","\x3b","\x5c","\x00"));
	outFields->push(HX_HCSTRING("zxy","\xfb","\xfb","\x5c","\x00"));
	outFields->push(HX_HCSTRING("zyx","\xd9","\xfc","\x5c","\x00"));
	outFields->push(HX_HCSTRING("xy","\x01","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("xz","\x02","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("yx","\xdf","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("yz","\xe1","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("zx","\xbe","\x6a","\x00","\x00"));
	outFields->push(HX_HCSTRING("zy","\xbf","\x6a","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthSqr","\xce","\x5c","\x33","\xab"));
	outFields->push(HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"));
	outFields->push(HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3_obj,clone),HX_HCSTRING("clone","\x5d","\x13","\x63","\x48")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Vector3_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3_obj,xzy),HX_HCSTRING("xzy","\x37","\x79","\x5b","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3_obj,yxz),HX_HCSTRING("yxz","\xbb","\x39","\x5c","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3_obj,yzx),HX_HCSTRING("yzx","\x77","\x3b","\x5c","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3_obj,zxy),HX_HCSTRING("zxy","\xfb","\xfb","\x5c","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3_obj,zyx),HX_HCSTRING("zyx","\xd9","\xfc","\x5c","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector3_obj,xy),HX_HCSTRING("xy","\x01","\x69","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector3_obj,xz),HX_HCSTRING("xz","\x02","\x69","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector3_obj,yx),HX_HCSTRING("yx","\xdf","\x69","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector3_obj,yz),HX_HCSTRING("yz","\xe1","\x69","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector3_obj,zx),HX_HCSTRING("zx","\xbe","\x6a","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector3_obj,zy),HX_HCSTRING("zy","\xbf","\x6a","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector3_obj,lengthSqr),HX_HCSTRING("lengthSqr","\xce","\x5c","\x33","\xab")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3_obj,normalized),HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3_obj,inverse),HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d")},
	{hx::fsFloat,(int)offsetof(Vector3_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Vector3_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Vector3_obj::zero,HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Vector3_obj::one,HX_HCSTRING("one","\x66","\x9a","\x54","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Vector3_obj::right,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Vector3_obj::up,HX_HCSTRING("up","\x5b","\x66","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Vector3_obj::forward,HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_clone","\xb4","\x6f","\x0c","\x8c"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("xzy","\x37","\x79","\x5b","\x00"),
	HX_HCSTRING("get_xzy","\xce","\x41","\xd0","\x26"),
	HX_HCSTRING("yxz","\xbb","\x39","\x5c","\x00"),
	HX_HCSTRING("get_yxz","\x52","\x02","\xd1","\x26"),
	HX_HCSTRING("yzx","\x77","\x3b","\x5c","\x00"),
	HX_HCSTRING("get_yzx","\x0e","\x04","\xd1","\x26"),
	HX_HCSTRING("zxy","\xfb","\xfb","\x5c","\x00"),
	HX_HCSTRING("get_zxy","\x92","\xc4","\xd1","\x26"),
	HX_HCSTRING("zyx","\xd9","\xfc","\x5c","\x00"),
	HX_HCSTRING("get_zyx","\x70","\xc5","\xd1","\x26"),
	HX_HCSTRING("xy","\x01","\x69","\x00","\x00"),
	HX_HCSTRING("get_xy","\x4a","\x00","\x30","\xa3"),
	HX_HCSTRING("xz","\x02","\x69","\x00","\x00"),
	HX_HCSTRING("get_xz","\x4b","\x00","\x30","\xa3"),
	HX_HCSTRING("yx","\xdf","\x69","\x00","\x00"),
	HX_HCSTRING("get_yx","\x28","\x01","\x30","\xa3"),
	HX_HCSTRING("yz","\xe1","\x69","\x00","\x00"),
	HX_HCSTRING("get_yz","\x2a","\x01","\x30","\xa3"),
	HX_HCSTRING("zx","\xbe","\x6a","\x00","\x00"),
	HX_HCSTRING("get_zx","\x07","\x02","\x30","\xa3"),
	HX_HCSTRING("zy","\xbf","\x6a","\x00","\x00"),
	HX_HCSTRING("get_zy","\x08","\x02","\x30","\xa3"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("lengthSqr","\xce","\x5c","\x33","\xab"),
	HX_HCSTRING("get_lengthSqr","\xa5","\x30","\x97","\x6c"),
	HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"),
	HX_HCSTRING("get_normalized","\x80","\xec","\x64","\xf7"),
	HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d"),
	HX_HCSTRING("get_inverse","\xc7","\xab","\xeb","\xc3"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("Set2","\x70","\xbe","\x29","\x37"),
	HX_HCSTRING("Set3","\x71","\xbe","\x29","\x37"),
	HX_HCSTRING("Set4","\x72","\xbe","\x29","\x37"),
	HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Add3","\x12","\x17","\x43","\x2b"),
	HX_HCSTRING("Sub","\x60","\x61","\x3f","\x00"),
	HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74"),
	HX_HCSTRING("Step","\x6c","\x13","\x35","\x37"),
	HX_HCSTRING("Reflect","\x1d","\xac","\x7a","\xb6"),
	HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4"),
	HX_HCSTRING("Scale","\x6a","\x3e","\xfc","\x0b"),
	HX_HCSTRING("Normalize","\x6d","\x17","\x74","\x4d"),
	HX_HCSTRING("ToArray","\xfe","\xe1","\x64","\xbf"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector3_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(Vector3_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(Vector3_obj::one,"one");
	HX_MARK_MEMBER_NAME(Vector3_obj::right,"right");
	HX_MARK_MEMBER_NAME(Vector3_obj::up,"up");
	HX_MARK_MEMBER_NAME(Vector3_obj::forward,"forward");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector3_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(Vector3_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(Vector3_obj::one,"one");
	HX_VISIT_MEMBER_NAME(Vector3_obj::right,"right");
	HX_VISIT_MEMBER_NAME(Vector3_obj::up,"up");
	HX_VISIT_MEMBER_NAME(Vector3_obj::forward,"forward");
};

#endif

hx::Class Vector3_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c"),
	HX_HCSTRING("get_temp","\x9d","\x7e","\xb4","\xcc"),
	HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50"),
	HX_HCSTRING("get_zero","\xb1","\xca","\xab","\xd0"),
	HX_HCSTRING("one","\x66","\x9a","\x54","\x00"),
	HX_HCSTRING("get_one","\xfd","\x62","\xc9","\x26"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),
	HX_HCSTRING("get_up","\xa4","\xfd","\x2f","\xa3"),
	HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5"),
	HX_HCSTRING("get_forward","\xdc","\x41","\xc5","\x6b"),
	HX_HCSTRING("Dot","\x69","\xfa","\x33","\x00"),
	HX_HCSTRING("Distance","\x55","\x4f","\xab","\x45"),
	HX_HCSTRING("Cross","\x60","\xcf","\x87","\xdf"),
	HX_HCSTRING("Project","\xb9","\x3a","\x3c","\xc3"),
	HX_HCSTRING("Lerp","\x97","\x3e","\x89","\x32"),
	HX_HCSTRING("Min","\x72","\xc9","\x3a","\x00"),
	HX_HCSTRING("Max","\x84","\xc2","\x3a","\x00"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void Vector3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.Vector3","\xf6","\xc2","\x06","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector3_obj::__GetStatic;
	__mClass->mSetStaticField = &Vector3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector3_obj >;
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
