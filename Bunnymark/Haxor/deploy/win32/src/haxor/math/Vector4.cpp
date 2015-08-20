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

Void Vector4_obj::__construct(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w)
{
HX_STACK_FRAME("haxor.math.Vector4","new",0x6c44ab69,"haxor.math.Vector4.new","haxor/math/Vector4.hx",128,0x50940887)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_x,"p_x")
HX_STACK_ARG(__o_p_y,"p_y")
HX_STACK_ARG(__o_p_z,"p_z")
HX_STACK_ARG(__o_p_w,"p_w")
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
Float p_w = __o_p_w.Default(0);
{
	HX_STACK_LINE(129)
	this->x = p_x;
	HX_STACK_LINE(130)
	this->y = p_y;
	HX_STACK_LINE(131)
	this->z = p_z;
	HX_STACK_LINE(132)
	this->w = p_w;
}
;
	return null();
}

//Vector4_obj::~Vector4_obj() { }

Dynamic Vector4_obj::__CreateEmpty() { return  new Vector4_obj; }
hx::ObjectPtr< Vector4_obj > Vector4_obj::__new(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w)
{  hx::ObjectPtr< Vector4_obj > _result_ = new Vector4_obj();
	_result_->__construct(__o_p_x,__o_p_y,__o_p_z,__o_p_w);
	return _result_;}

Dynamic Vector4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector4_obj > _result_ = new Vector4_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::haxor::math::Vector4 Vector4_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_clone",0xded4b77d,"haxor.math.Vector4.get_clone","haxor/math/Vector4.hx",56,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	::haxor::math::Vector4 tmp4 = ::haxor::math::Vector4_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_clone,return )

::haxor::math::Color Vector4_obj::get_rgba( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_rgba",0xdaaf1094,"haxor.math.Vector4.get_rgba","haxor/math/Vector4.hx",62,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	::haxor::math::Color tmp4 = ::haxor::math::Color_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_rgba,return )

::haxor::math::Color Vector4_obj::get_rgb( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_rgb",0x3a61372d,"haxor.math.Vector4.get_rgb","haxor/math/Vector4.hx",68,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::haxor::math::Color tmp3 = ::haxor::math::Color_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_rgb,return )

::haxor::math::Vector3 Vector4_obj::get_xyz( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_xyz",0x3a65d479,"haxor.math.Vector4.get_xyz","haxor/math/Vector4.hx",74,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_xyz,return )

::haxor::math::Vector2 Vector4_obj::get_xy( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_xy",0x14ecf0e1,"haxor.math.Vector4.get_xy","haxor/math/Vector4.hx",80,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_xy,return )

Float Vector4_obj::get_length( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_length",0xac058cc6,"haxor.math.Vector4.get_length","haxor/math/Vector4.hx",86,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(86)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(86)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(86)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(86)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(86)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(86)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(86)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(86)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_length,return )

Float Vector4_obj::get_lengthSqr( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_lengthSqr",0xf21990ee,"haxor.math.Vector4.get_lengthSqr","haxor/math/Vector4.hx",92,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(92)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(92)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(92)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(92)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(92)
	Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(92)
	Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(92)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(92)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(92)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_lengthSqr,return )

::haxor::math::Vector4 Vector4_obj::get_normalized( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_normalized",0x43f6cc17,"haxor.math.Vector4.get_normalized","haxor/math/Vector4.hx",98,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	::haxor::math::Vector4 tmp4 = ::haxor::math::Vector4_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	::haxor::math::Vector4 tmp5 = tmp4->Normalize();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_normalized,return )

Float Vector4_obj::Get( int p){
	HX_STACK_FRAME("haxor.math.Vector4","Get",0x6c27137f,"haxor.math.Vector4.Get","haxor/math/Vector4.hx",140,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(140)
	bool tmp = (p == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	if ((tmp)){
		HX_STACK_LINE(140)
		tmp1 = this->x;
	}
	else{
		HX_STACK_LINE(140)
		bool tmp2 = (p == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		if ((tmp2)){
			HX_STACK_LINE(140)
			tmp1 = this->y;
		}
		else{
			HX_STACK_LINE(140)
			bool tmp3 = (p == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(140)
				tmp1 = this->z;
			}
			else{
				HX_STACK_LINE(140)
				tmp1 = this->w;
			}
		}
	}
	HX_STACK_LINE(140)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Get,return )

::haxor::math::Vector4 Vector4_obj::Set( hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w){
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
Float p_w = __o_p_w.Default(0);
	HX_STACK_FRAME("haxor.math.Vector4","Set",0x6c302e8b,"haxor.math.Vector4.Set","haxor/math/Vector4.hx",150,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_z,"p_z")
	HX_STACK_ARG(p_w,"p_w")
{
		HX_STACK_LINE(150)
		this->x = p_x;
		HX_STACK_LINE(150)
		this->y = p_y;
		HX_STACK_LINE(150)
		this->z = p_z;
		HX_STACK_LINE(150)
		this->w = p_w;
		HX_STACK_LINE(150)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Vector4_obj,Set,return )

::haxor::math::Vector4 Vector4_obj::Set2( ::haxor::math::Vector2 v){
	HX_STACK_FRAME("haxor.math.Vector4","Set2",0x3df88b47,"haxor.math.Vector4.Set2","haxor/math/Vector4.hx",157,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(157)
	this->x = v->x;
	HX_STACK_LINE(157)
	this->y = v->y;
	HX_STACK_LINE(157)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Set2,return )

::haxor::math::Vector4 Vector4_obj::Set3( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.Vector4","Set3",0x3df88b48,"haxor.math.Vector4.Set3","haxor/math/Vector4.hx",164,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(164)
	this->x = v->x;
	HX_STACK_LINE(164)
	this->y = v->y;
	HX_STACK_LINE(164)
	this->z = v->z;
	HX_STACK_LINE(164)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Set3,return )

::haxor::math::Vector4 Vector4_obj::Set4( ::haxor::math::Vector4 v){
	HX_STACK_FRAME("haxor.math.Vector4","Set4",0x3df88b49,"haxor.math.Vector4.Set4","haxor/math/Vector4.hx",171,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(171)
	this->x = v->x;
	HX_STACK_LINE(171)
	this->y = v->y;
	HX_STACK_LINE(171)
	this->z = v->z;
	HX_STACK_LINE(171)
	this->w = v->w;
	HX_STACK_LINE(171)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Set4,return )

::haxor::math::Vector4 Vector4_obj::SetColor( ::haxor::math::Color v){
	HX_STACK_FRAME("haxor.math.Vector4","SetColor",0x418e1ad8,"haxor.math.Vector4.SetColor","haxor/math/Vector4.hx",178,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(178)
	this->x = v->r;
	HX_STACK_LINE(178)
	this->y = v->g;
	HX_STACK_LINE(178)
	this->z = v->b;
	HX_STACK_LINE(178)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,SetColor,return )

::haxor::math::Vector4 Vector4_obj::Add( ::haxor::math::Vector4 p_v){
	HX_STACK_FRAME("haxor.math.Vector4","Add",0x6c22850a,"haxor.math.Vector4.Add","haxor/math/Vector4.hx",185,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(185)
	hx::AddEq(this->x,p_v->x);
	HX_STACK_LINE(185)
	hx::AddEq(this->y,p_v->y);
	HX_STACK_LINE(185)
	hx::AddEq(this->z,p_v->z);
	HX_STACK_LINE(185)
	hx::AddEq(this->w,p_v->w);
	HX_STACK_LINE(185)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Add,return )

::haxor::math::Vector4 Vector4_obj::Sub( ::haxor::math::Vector4 p_v){
	HX_STACK_FRAME("haxor.math.Vector4","Sub",0x6c303c69,"haxor.math.Vector4.Sub","haxor/math/Vector4.hx",192,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(192)
	hx::SubEq(this->x,p_v->x);
	HX_STACK_LINE(192)
	hx::SubEq(this->y,p_v->y);
	HX_STACK_LINE(192)
	hx::SubEq(this->z,p_v->z);
	HX_STACK_LINE(192)
	hx::SubEq(this->w,p_v->w);
	HX_STACK_LINE(192)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Sub,return )

::haxor::math::Vector4 Vector4_obj::Multiply( ::haxor::math::Vector4 p_v){
	HX_STACK_FRAME("haxor.math.Vector4","Multiply",0x838a229b,"haxor.math.Vector4.Multiply","haxor/math/Vector4.hx",199,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(199)
	hx::MultEq(this->x,p_v->x);
	HX_STACK_LINE(199)
	hx::MultEq(this->y,p_v->y);
	HX_STACK_LINE(199)
	hx::MultEq(this->z,p_v->z);
	HX_STACK_LINE(199)
	hx::MultEq(this->w,p_v->w);
	HX_STACK_LINE(199)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Multiply,return )

::haxor::math::Vector4 Vector4_obj::Scale( Float p_s){
	HX_STACK_FRAME("haxor.math.Vector4","Scale",0xfa20adb3,"haxor.math.Vector4.Scale","haxor/math/Vector4.hx",206,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_s,"p_s")
	HX_STACK_LINE(206)
	hx::MultEq(this->x,p_s);
	HX_STACK_LINE(206)
	hx::MultEq(this->y,p_s);
	HX_STACK_LINE(206)
	hx::MultEq(this->z,p_s);
	HX_STACK_LINE(206)
	hx::MultEq(this->w,p_s);
	HX_STACK_LINE(206)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Scale,return )

::haxor::math::Vector4 Vector4_obj::Normalize( ){
	HX_STACK_FRAME("haxor.math.Vector4","Normalize",0xa03c5f36,"haxor.math.Vector4.Normalize","haxor/math/Vector4.hx",213,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(214)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(214)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(214)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(214)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(214)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(214)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(214)
	Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(214)
	Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(214)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(214)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(214)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(214)
	Float l = tmp15;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(215)
	bool tmp16 = (l <= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(215)
	if ((tmp16)){
		HX_STACK_LINE(215)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(216)
	Float tmp17 = (Float(((Float)1.0)) / Float(l));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(216)
	Float tmp18 = l = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(216)
	hx::MultEq(this->x,tmp18);
	HX_STACK_LINE(217)
	hx::MultEq(this->y,l);
	HX_STACK_LINE(218)
	hx::MultEq(this->z,l);
	HX_STACK_LINE(219)
	hx::MultEq(this->w,l);
	HX_STACK_LINE(220)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,Normalize,return )

bool Vector4_obj::IsCulled( ){
	HX_STACK_FRAME("haxor.math.Vector4","IsCulled",0x7c52ca92,"haxor.math.Vector4.IsCulled","haxor/math/Vector4.hx",228,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	Float tmp1 = this->w;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	if ((tmp3)){
		HX_STACK_LINE(229)
		return true;
	}
	HX_STACK_LINE(230)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(230)
	Float tmp5 = this->w;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(230)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(230)
	if ((tmp6)){
		HX_STACK_LINE(230)
		return true;
	}
	HX_STACK_LINE(231)
	Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(231)
	Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(231)
	Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(231)
	bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(231)
	if ((tmp10)){
		HX_STACK_LINE(231)
		return true;
	}
	HX_STACK_LINE(232)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(232)
	Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(232)
	bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(232)
	if ((tmp13)){
		HX_STACK_LINE(232)
		return true;
	}
	HX_STACK_LINE(233)
	Float tmp14 = this->z;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(233)
	Float tmp15 = this->w;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(233)
	Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(233)
	bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(233)
	if ((tmp17)){
		HX_STACK_LINE(233)
		return true;
	}
	HX_STACK_LINE(234)
	Float tmp18 = this->z;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(234)
	Float tmp19 = this->w;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(234)
	bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(234)
	if ((tmp20)){
		HX_STACK_LINE(234)
		return true;
	}
	HX_STACK_LINE(235)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,IsCulled,return )

Array< Float > Vector4_obj::ToArray( ){
	HX_STACK_FRAME("haxor.math.Vector4","ToArray",0xd2fa7587,"haxor.math.Vector4.ToArray","haxor/math/Vector4.hx",242,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(242)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	Array< Float > tmp4 = Array_obj< Float >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(242)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,ToArray,return )

::String Vector4_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.Vector4","ToString",0x216c1123,"haxor.math.Vector4.ToString","haxor/math/Vector4.hx",249,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(249)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			int tmp1 = p_places;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(249)
			Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			Float d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(249)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(249)
				Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(249)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(249)
				Float p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(249)
				Float tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(249)
				bool tmp8 = (p_v < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(249)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(249)
				if ((tmp8)){
					HX_STACK_LINE(249)
					tmp9 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(249)
					tmp9 = ((Float)0.5);
				}
				HX_STACK_LINE(249)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(249)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(249)
				tmp3 = ((Float)(tmp11));
			}
			HX_STACK_LINE(249)
			Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		HX_STACK_LINE(249)
		::String tmp1 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		::String tmp2 = (tmp1 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			int tmp4 = p_places;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			Float tmp5 = ::Math_obj::pow((int)10,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			Float d = tmp5;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(249)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(249)
				Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(249)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(249)
				Float p_v = tmp9;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(249)
				Float tmp10 = p_v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(249)
				bool tmp11 = (p_v < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(249)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(249)
				if ((tmp11)){
					HX_STACK_LINE(249)
					tmp12 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(249)
					tmp12 = ((Float)0.5);
				}
				HX_STACK_LINE(249)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(249)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(249)
				tmp6 = ((Float)(tmp14));
			}
			HX_STACK_LINE(249)
			Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			tmp3 = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(249)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		::String tmp5 = (tmp4 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			int tmp7 = p_places;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			Float tmp8 = ::Math_obj::pow((int)10,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(249)
			Float d = tmp8;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(249)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(249)
				Float tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(249)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(249)
				Float p_v = tmp12;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(249)
				Float tmp13 = p_v;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(249)
				bool tmp14 = (p_v < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(249)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(249)
				if ((tmp14)){
					HX_STACK_LINE(249)
					tmp15 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(249)
					tmp15 = ((Float)0.5);
				}
				HX_STACK_LINE(249)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(249)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(249)
				tmp9 = ((Float)(tmp17));
			}
			HX_STACK_LINE(249)
			Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(249)
			tmp6 = (Float(tmp9) / Float(tmp10));
		}
		HX_STACK_LINE(249)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(249)
		::String tmp8 = (tmp7 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(249)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			int tmp10 = p_places;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(249)
			Float tmp11 = ::Math_obj::pow((int)10,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(249)
			Float d = tmp11;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(249)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				Float tmp13 = this->w;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(249)
				Float tmp14 = d;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(249)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(249)
				Float p_v = tmp15;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(249)
				Float tmp16 = p_v;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(249)
				bool tmp17 = (p_v < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(249)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(249)
				if ((tmp17)){
					HX_STACK_LINE(249)
					tmp18 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(249)
					tmp18 = ((Float)0.5);
				}
				HX_STACK_LINE(249)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(249)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(249)
				tmp12 = ((Float)(tmp20));
			}
			HX_STACK_LINE(249)
			Float tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(249)
			tmp9 = (Float(tmp12) / Float(tmp13));
		}
		HX_STACK_LINE(249)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(249)
		::String tmp11 = (tmp10 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(249)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,ToString,return )

::haxor::math::Vector4 Vector4_obj::temp;

::haxor::math::Vector4 Vector4_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_temp",0xdc0002f4,"haxor.math.Vector4.get_temp","haxor/math/Vector4.hx",15,0x50940887)
	HX_STACK_LINE(15)
	::haxor::math::Vector4 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		Array< ::Dynamic > tmp2 = _this->m_v4;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		int tmp4 = _this->m_v4->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		int tmp6 = _this->m_nv4 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector4 >();
	}
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_temp,return )

::haxor::math::Vector4 Vector4_obj::zero;

::haxor::math::Vector4 Vector4_obj::get_zero( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_zero",0xdff74f08,"haxor.math.Vector4.get_zero","haxor/math/Vector4.hx",21,0x50940887)
	HX_STACK_LINE(21)
	::haxor::math::Vector4 tmp = ::haxor::math::Vector4_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_zero,return )

::haxor::math::Vector4 Vector4_obj::one;

::haxor::math::Vector4 Vector4_obj::get_one( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_one",0x3a5ef686,"haxor.math.Vector4.get_one","haxor/math/Vector4.hx",27,0x50940887)
	HX_STACK_LINE(27)
	::haxor::math::Vector4 tmp = ::haxor::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_one,return )

::haxor::math::Vector4 Vector4_obj::W;

::haxor::math::Vector4 Vector4_obj::get_W( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_W",0x7f851477,"haxor.math.Vector4.get_W","haxor/math/Vector4.hx",33,0x50940887)
	HX_STACK_LINE(33)
	::haxor::math::Vector4 tmp = ::haxor::math::Vector4_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_W,return )

::haxor::math::Vector4 Vector4_obj::Lerp( ::haxor::math::Vector4 p_a,::haxor::math::Vector4 p_b,Float p_r){
	HX_STACK_FRAME("haxor.math.Vector4","Lerp",0x39580b6e,"haxor.math.Vector4.Lerp","haxor/math/Vector4.hx",43,0x50940887)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_r,"p_r")
	HX_STACK_LINE(45)
	Float tmp = p_a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Float tmp1 = (p_b->x - p_a->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	Float tmp2 = p_r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	Float tmp5 = p_a->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	Float tmp6 = (p_b->y - p_a->y);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	Float tmp7 = p_r;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(46)
	Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(47)
	Float tmp10 = p_a->z;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(47)
	Float tmp11 = (p_b->z - p_a->z);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(47)
	Float tmp12 = p_r;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(47)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(47)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(48)
	Float tmp15 = p_a->w;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(48)
	Float tmp16 = (p_b->w - p_a->w);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(48)
	Float tmp17 = p_r;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(48)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(48)
	Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(44)
	::haxor::math::Vector4 tmp20 = ::haxor::math::Vector4_obj::__new(tmp4,tmp9,tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(44)
	return tmp20;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector4_obj,Lerp,return )

::haxor::math::Vector4 Vector4_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.math.Vector4","Parse",0x3ea76f5c,"haxor.math.Vector4.Parse","haxor/math/Vector4.hx",257,0x50940887)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(258)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(259)
		::haxor::math::Vector4 tmp2 = ::haxor::math::Vector4_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		::String tmp3 = tk->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(260)
		::String tmp4 = ::StringTools_obj::trim(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(261)
		::String tmp6 = tk->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		::String tmp7 = ::StringTools_obj::trim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(261)
		Float tmp8 = ::Std_obj::parseFloat(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(262)
		::String tmp9 = tk->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(262)
		::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(262)
		Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(263)
		::String tmp12 = tk->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(263)
		::String tmp13 = ::StringTools_obj::trim(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(263)
		Float tmp14 = ::Std_obj::parseFloat(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(259)
		::haxor::math::Vector4 tmp15 = tmp2->Set(tmp5,tmp8,tmp11,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(259)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,Parse,return )


Vector4_obj::Vector4_obj()
{
}

void Vector4_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector4);
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(rgba,"rgba");
	HX_MARK_MEMBER_NAME(rgb,"rgb");
	HX_MARK_MEMBER_NAME(xyz,"xyz");
	HX_MARK_MEMBER_NAME(xy,"xy");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthSqr,"lengthSqr");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void Vector4_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(rgba,"rgba");
	HX_VISIT_MEMBER_NAME(rgb,"rgb");
	HX_VISIT_MEMBER_NAME(xyz,"xyz");
	HX_VISIT_MEMBER_NAME(xy,"xy");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lengthSqr,"lengthSqr");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
}

Dynamic Vector4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return inCallProp == hx::paccAlways ? get_xy() : xy; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return inCallProp == hx::paccAlways ? get_rgb() : rgb; }
		if (HX_FIELD_EQ(inName,"xyz") ) { return inCallProp == hx::paccAlways ? get_xyz() : xyz; }
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Sub") ) { return Sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rgba") ) { return inCallProp == hx::paccAlways ? get_rgba() : rgba; }
		if (HX_FIELD_EQ(inName,"Set2") ) { return Set2_dyn(); }
		if (HX_FIELD_EQ(inName,"Set3") ) { return Set3_dyn(); }
		if (HX_FIELD_EQ(inName,"Set4") ) { return Set4_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return inCallProp == hx::paccAlways ? get_clone() : clone; }
		if (HX_FIELD_EQ(inName,"Scale") ) { return Scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_xy") ) { return get_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_rgb") ) { return get_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"get_xyz") ) { return get_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"ToArray") ) { return ToArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rgba") ) { return get_rgba_dyn(); }
		if (HX_FIELD_EQ(inName,"SetColor") ) { return SetColor_dyn(); }
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"IsCulled") ) { return IsCulled_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_clone") ) { return get_clone_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSqr") ) { return inCallProp == hx::paccAlways ? get_lengthSqr() : lengthSqr; }
		if (HX_FIELD_EQ(inName,"Normalize") ) { return Normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"normalized") ) { return inCallProp == hx::paccAlways ? get_normalized() : normalized; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_lengthSqr") ) { return get_lengthSqr_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_normalized") ) { return get_normalized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector4_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"W") ) { outValue = inCallProp == hx::paccAlways ? get_W() : W; return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { outValue = inCallProp == hx::paccAlways ? get_one() : one; return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = inCallProp == hx::paccAlways ? get_temp() : temp; return true; }
		if (HX_FIELD_EQ(inName,"zero") ) { outValue = inCallProp == hx::paccAlways ? get_zero() : zero; return true; }
		if (HX_FIELD_EQ(inName,"Lerp") ) { outValue = Lerp_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_W") ) { outValue = get_W_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_one") ) { outValue = get_one_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { outValue = get_temp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_zero") ) { outValue = get_zero_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector4_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { xy=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { rgb=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xyz") ) { xyz=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rgba") ) { rgba=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lengthSqr") ) { lengthSqr=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector4_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"W") ) { W=ioValue.Cast< ::haxor::math::Vector4 >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { one=ioValue.Cast< ::haxor::math::Vector4 >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< ::haxor::math::Vector4 >(); return true; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=ioValue.Cast< ::haxor::math::Vector4 >(); return true; }
	}
	return false;
}

void Vector4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("rgba","\xb4","\xd0","\xa8","\x4b"));
	outFields->push(HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"));
	outFields->push(HX_HCSTRING("xyz","\x59","\x78","\x5b","\x00"));
	outFields->push(HX_HCSTRING("xy","\x01","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthSqr","\xce","\x5c","\x33","\xab"));
	outFields->push(HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector4*/ ,(int)offsetof(Vector4_obj,clone),HX_HCSTRING("clone","\x5d","\x13","\x63","\x48")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Vector4_obj,rgba),HX_HCSTRING("rgba","\xb4","\xd0","\xa8","\x4b")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Vector4_obj,rgb),HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector4_obj,xyz),HX_HCSTRING("xyz","\x59","\x78","\x5b","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector4_obj,xy),HX_HCSTRING("xy","\x01","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,lengthSqr),HX_HCSTRING("lengthSqr","\xce","\x5c","\x33","\xab")},
	{hx::fsObject /*::haxor::math::Vector4*/ ,(int)offsetof(Vector4_obj,normalized),HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector4*/ ,(void *) &Vector4_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsObject /*::haxor::math::Vector4*/ ,(void *) &Vector4_obj::zero,HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50")},
	{hx::fsObject /*::haxor::math::Vector4*/ ,(void *) &Vector4_obj::one,HX_HCSTRING("one","\x66","\x9a","\x54","\x00")},
	{hx::fsObject /*::haxor::math::Vector4*/ ,(void *) &Vector4_obj::W,HX_HCSTRING("W","\x57","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_clone","\xb4","\x6f","\x0c","\x8c"),
	HX_HCSTRING("rgba","\xb4","\xd0","\xa8","\x4b"),
	HX_HCSTRING("get_rgba","\x3d","\x8c","\x63","\xcb"),
	HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"),
	HX_HCSTRING("get_rgb","\xa4","\xa3","\xcb","\x26"),
	HX_HCSTRING("xyz","\x59","\x78","\x5b","\x00"),
	HX_HCSTRING("get_xyz","\xf0","\x40","\xd0","\x26"),
	HX_HCSTRING("xy","\x01","\x69","\x00","\x00"),
	HX_HCSTRING("get_xy","\x4a","\x00","\x30","\xa3"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("lengthSqr","\xce","\x5c","\x33","\xab"),
	HX_HCSTRING("get_lengthSqr","\xa5","\x30","\x97","\x6c"),
	HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"),
	HX_HCSTRING("get_normalized","\x80","\xec","\x64","\xf7"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("Set2","\x70","\xbe","\x29","\x37"),
	HX_HCSTRING("Set3","\x71","\xbe","\x29","\x37"),
	HX_HCSTRING("Set4","\x72","\xbe","\x29","\x37"),
	HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Sub","\x60","\x61","\x3f","\x00"),
	HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74"),
	HX_HCSTRING("Scale","\x6a","\x3e","\xfc","\x0b"),
	HX_HCSTRING("Normalize","\x6d","\x17","\x74","\x4d"),
	HX_HCSTRING("IsCulled","\x3b","\x46","\x07","\x6d"),
	HX_HCSTRING("ToArray","\xfe","\xe1","\x64","\xbf"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector4_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(Vector4_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(Vector4_obj::one,"one");
	HX_MARK_MEMBER_NAME(Vector4_obj::W,"W");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector4_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(Vector4_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(Vector4_obj::one,"one");
	HX_VISIT_MEMBER_NAME(Vector4_obj::W,"W");
};

#endif

hx::Class Vector4_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c"),
	HX_HCSTRING("get_temp","\x9d","\x7e","\xb4","\xcc"),
	HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50"),
	HX_HCSTRING("get_zero","\xb1","\xca","\xab","\xd0"),
	HX_HCSTRING("one","\x66","\x9a","\x54","\x00"),
	HX_HCSTRING("get_one","\xfd","\x62","\xc9","\x26"),
	HX_HCSTRING("W","\x57","\x00","\x00","\x00"),
	HX_HCSTRING("get_W","\x2e","\xa5","\x60","\x91"),
	HX_HCSTRING("Lerp","\x97","\x3e","\x89","\x32"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void Vector4_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.Vector4","\xf7","\xc2","\x06","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector4_obj::__GetStatic;
	__mClass->mSetStaticField = &Vector4_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector4_obj >;
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
