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

Void Vector2_obj::__construct(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y)
{
HX_STACK_FRAME("haxor.math.Vector2","new",0x45778267,"haxor.math.Vector2.new","haxor/math/Vector2.hx",120,0x4f419b49)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_x,"p_x")
HX_STACK_ARG(__o_p_y,"p_y")
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
{
	HX_STACK_LINE(121)
	this->x = p_x;
	HX_STACK_LINE(122)
	this->y = p_y;
}
;
	return null();
}

//Vector2_obj::~Vector2_obj() { }

Dynamic Vector2_obj::__CreateEmpty() { return  new Vector2_obj; }
hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y)
{  hx::ObjectPtr< Vector2_obj > _result_ = new Vector2_obj();
	_result_->__construct(__o_p_x,__o_p_y);
	return _result_;}

Dynamic Vector2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector2_obj > _result_ = new Vector2_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::haxor::math::Vector2 Vector2_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_clone",0xdd17e0fb,"haxor.math.Vector2.get_clone","haxor/math/Vector2.hx",68,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_clone,return )

::haxor::math::Vector2 Vector2_obj::get_xy( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_xy",0xa2880ca3,"haxor.math.Vector2.get_xy","haxor/math/Vector2.hx",73,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_xy,return )

::haxor::math::Vector2 Vector2_obj::get_yx( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_yx",0xa2880d81,"haxor.math.Vector2.get_yx","haxor/math/Vector2.hx",78,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_yx,return )

Float Vector2_obj::get_length( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_length",0x2886b188,"haxor.math.Vector2.get_length","haxor/math/Vector2.hx",84,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(84)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(84)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(84)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_length,return )

Float Vector2_obj::get_lengthSqr( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_lengthSqr",0xc822516c,"haxor.math.Vector2.get_lengthSqr","haxor/math/Vector2.hx",90,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(90)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(90)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_lengthSqr,return )

::haxor::math::Vector2 Vector2_obj::get_normalized( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_normalized",0xb59679d9,"haxor.math.Vector2.get_normalized","haxor/math/Vector2.hx",96,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	::haxor::math::Vector2 tmp3 = tmp2->Normalize();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_normalized,return )

::haxor::math::Vector2 Vector2_obj::get_inverse( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_inverse",0x03ab3cce,"haxor.math.Vector2.get_inverse","haxor/math/Vector2.hx",102,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	::haxor::math::Vector2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		::haxor::math::Vector2 tmp3 = ::haxor::math::Vector2_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		::haxor::math::Vector2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(102)
		Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		_this->x = tmp5;
		HX_STACK_LINE(102)
		Float tmp6 = _this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		_this->y = tmp7;
		HX_STACK_LINE(102)
		tmp = _this;
	}
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_inverse,return )

::haxor::math::Vector2 Vector2_obj::Set( hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y){
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
	HX_STACK_FRAME("haxor.math.Vector2","Set",0x45630589,"haxor.math.Vector2.Set","haxor/math/Vector2.hx",132,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
{
		HX_STACK_LINE(132)
		this->x = p_x;
		HX_STACK_LINE(132)
		this->y = p_y;
		HX_STACK_LINE(132)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Set,return )

::haxor::math::Vector2 Vector2_obj::Set2( ::haxor::math::Vector2 v){
	HX_STACK_FRAME("haxor.math.Vector2","Set2",0x7141d289,"haxor.math.Vector2.Set2","haxor/math/Vector2.hx",139,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(139)
	this->x = v->x;
	HX_STACK_LINE(139)
	this->y = v->y;
	HX_STACK_LINE(139)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Set2,return )

::haxor::math::Vector2 Vector2_obj::Set3( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.Vector2","Set3",0x7141d28a,"haxor.math.Vector2.Set3","haxor/math/Vector2.hx",146,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(146)
	this->x = v->x;
	HX_STACK_LINE(146)
	this->y = v->y;
	HX_STACK_LINE(146)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Set3,return )

::haxor::math::Vector2 Vector2_obj::Set4( ::haxor::math::Vector4 v){
	HX_STACK_FRAME("haxor.math.Vector2","Set4",0x7141d28b,"haxor.math.Vector2.Set4","haxor/math/Vector2.hx",153,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(153)
	this->x = v->x;
	HX_STACK_LINE(153)
	this->y = v->y;
	HX_STACK_LINE(153)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Set4,return )

Float Vector2_obj::Get( int p){
	HX_STACK_FRAME("haxor.math.Vector2","Get",0x4559ea7d,"haxor.math.Vector2.Get","haxor/math/Vector2.hx",160,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(160)
	bool tmp = (p == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	if ((tmp)){
		HX_STACK_LINE(160)
		tmp1 = this->x;
	}
	else{
		HX_STACK_LINE(160)
		tmp1 = this->y;
	}
	HX_STACK_LINE(160)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Get,return )

::haxor::math::Vector2 Vector2_obj::Add( ::haxor::math::Vector2 p_v){
	HX_STACK_FRAME("haxor.math.Vector2","Add",0x45555c08,"haxor.math.Vector2.Add","haxor/math/Vector2.hx",167,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(167)
	hx::AddEq(this->x,p_v->x);
	HX_STACK_LINE(167)
	hx::AddEq(this->y,p_v->y);
	HX_STACK_LINE(167)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Add,return )

::haxor::math::Vector2 Vector2_obj::Sub( ::haxor::math::Vector2 p_v){
	HX_STACK_FRAME("haxor.math.Vector2","Sub",0x45631367,"haxor.math.Vector2.Sub","haxor/math/Vector2.hx",174,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(174)
	hx::SubEq(this->x,p_v->x);
	HX_STACK_LINE(174)
	hx::SubEq(this->y,p_v->y);
	HX_STACK_LINE(174)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Sub,return )

::haxor::math::Vector2 Vector2_obj::Multiply( ::haxor::math::Vector2 p_v){
	HX_STACK_FRAME("haxor.math.Vector2","Multiply",0x02f532dd,"haxor.math.Vector2.Multiply","haxor/math/Vector2.hx",181,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(181)
	hx::MultEq(this->x,p_v->x);
	HX_STACK_LINE(181)
	hx::MultEq(this->y,p_v->y);
	HX_STACK_LINE(181)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Multiply,return )

::haxor::math::Vector2 Vector2_obj::Scale( Float p_s){
	HX_STACK_FRAME("haxor.math.Vector2","Scale",0xa6f5c031,"haxor.math.Vector2.Scale","haxor/math/Vector2.hx",188,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_s,"p_s")
	HX_STACK_LINE(188)
	hx::MultEq(this->x,p_s);
	HX_STACK_LINE(188)
	hx::MultEq(this->y,p_s);
	HX_STACK_LINE(188)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Scale,return )

bool Vector2_obj::Step( ::haxor::math::Vector2 p_to,Float p_step){
	HX_STACK_FRAME("haxor.math.Vector2","Step",0x714d2785,"haxor.math.Vector2.Step","haxor/math/Vector2.hx",197,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_to,"p_to")
	HX_STACK_ARG(p_step,"p_step")
	HX_STACK_LINE(198)
	Float tmp = p_to->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	Float vx = tmp2;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(199)
	Float tmp3 = p_to->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(199)
	Float vy = tmp5;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(200)
	Float tmp6 = (vx * vx);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	Float tmp7 = (vy * vy);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(200)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(200)
	Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(200)
	Float l = tmp9;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(201)
	bool tmp10 = (l <= ((Float)0.0001));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(201)
	if ((tmp10)){
		HX_STACK_LINE(201)
		return false;
	}
	HX_STACK_LINE(202)
	bool tmp11 = (p_step > l);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(202)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(202)
	if ((tmp11)){
		HX_STACK_LINE(202)
		tmp12 = l;
	}
	else{
		HX_STACK_LINE(202)
		tmp12 = p_step;
	}
	HX_STACK_LINE(202)
	Float s = tmp12;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(203)
	Float tmp13 = (Float(s) / Float(l));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(203)
	l = tmp13;
	HX_STACK_LINE(204)
	hx::MultEq(vx,l);
	HX_STACK_LINE(205)
	hx::MultEq(vy,l);
	HX_STACK_LINE(206)
	hx::AddEq(this->x,vx);
	HX_STACK_LINE(207)
	hx::AddEq(this->y,vy);
	HX_STACK_LINE(208)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Step,return )

::haxor::math::Vector2 Vector2_obj::Reflect( ::haxor::math::Vector2 p_normal){
	HX_STACK_FRAME("haxor.math.Vector2","Reflect",0x242d6da4,"haxor.math.Vector2.Reflect","haxor/math/Vector2.hx",217,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_normal,"p_normal")
	HX_STACK_LINE(218)
	Float tmp = p_normal->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	Float tmp3 = p_normal->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(218)
	Float tmp7 = ::Math_obj::min(((Float)0.0),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(218)
	Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(218)
	Float d = tmp8;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(219)
	Float tmp9 = p_normal->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(219)
	Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(219)
	Float tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(219)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(219)
	hx::AddEq(this->x,tmp12);
	HX_STACK_LINE(220)
	Float tmp13 = p_normal->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(220)
	Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(220)
	Float tmp15 = d;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(220)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(220)
	hx::AddEq(this->y,tmp16);
	HX_STACK_LINE(221)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Reflect,return )

::haxor::math::Vector2 Vector2_obj::Invert( ){
	HX_STACK_FRAME("haxor.math.Vector2","Invert",0xd3c5678f,"haxor.math.Vector2.Invert","haxor/math/Vector2.hx",228,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	this->x = tmp1;
	HX_STACK_LINE(228)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	this->y = tmp3;
	HX_STACK_LINE(228)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,Invert,return )

::haxor::math::Vector2 Vector2_obj::Normalize( ){
	HX_STACK_FRAME("haxor.math.Vector2","Normalize",0x9e7f88b4,"haxor.math.Vector2.Normalize","haxor/math/Vector2.hx",235,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(236)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(236)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(236)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(236)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(236)
	Float l = tmp7;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(237)
	bool tmp8 = (l <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(237)
	if ((tmp8)){
		HX_STACK_LINE(237)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(238)
	Float tmp9 = (Float(((Float)1.0)) / Float(l));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(238)
	Float tmp10 = l = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(238)
	hx::MultEq(this->x,tmp10);
	HX_STACK_LINE(239)
	hx::MultEq(this->y,l);
	HX_STACK_LINE(240)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,Normalize,return )

Array< Float > Vector2_obj::ToArray( ){
	HX_STACK_FRAME("haxor.math.Vector2","ToArray",0x2d17a385,"haxor.math.Vector2.ToArray","haxor/math/Vector2.hx",247,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(247)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	Array< Float > tmp2 = Array_obj< Float >::__new().Add(tmp).Add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,ToArray,return )

::String Vector2_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.Vector2","ToString",0xa0d72165,"haxor.math.Vector2.ToString","haxor/math/Vector2.hx",253,0x4f419b49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(253)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			int tmp1 = p_places;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(253)
			Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			Float d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(253)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(253)
				Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(253)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(253)
				Float p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(253)
				Float tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(253)
				bool tmp8 = (p_v < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(253)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(253)
				if ((tmp8)){
					HX_STACK_LINE(253)
					tmp9 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(253)
					tmp9 = ((Float)0.5);
				}
				HX_STACK_LINE(253)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(253)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(253)
				tmp3 = ((Float)(tmp11));
			}
			HX_STACK_LINE(253)
			Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(253)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		HX_STACK_LINE(253)
		::String tmp1 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		::String tmp2 = (tmp1 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			int tmp4 = p_places;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(253)
			Float tmp5 = ::Math_obj::pow((int)10,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(253)
			Float d = tmp5;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(253)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(253)
				Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(253)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(253)
				Float p_v = tmp9;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(253)
				Float tmp10 = p_v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(253)
				bool tmp11 = (p_v < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(253)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(253)
				if ((tmp11)){
					HX_STACK_LINE(253)
					tmp12 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(253)
					tmp12 = ((Float)0.5);
				}
				HX_STACK_LINE(253)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(253)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(253)
				tmp6 = ((Float)(tmp14));
			}
			HX_STACK_LINE(253)
			Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(253)
			tmp3 = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(253)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		::String tmp5 = (tmp4 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(253)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,ToString,return )

::haxor::math::Vector2 Vector2_obj::temp;

::haxor::math::Vector2 Vector2_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_temp",0x5b6b1336,"haxor.math.Vector2.get_temp","haxor/math/Vector2.hx",15,0x4f419b49)
	HX_STACK_LINE(15)
	::haxor::math::Vector2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		Array< ::Dynamic > tmp2 = _this->m_v2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = (_this->m_nv2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		int tmp4 = _this->m_v2->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		int tmp6 = _this->m_nv2 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector2 >();
	}
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_temp,return )

::haxor::math::Vector2 Vector2_obj::zero;

::haxor::math::Vector2 Vector2_obj::get_zero( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_zero",0x5f625f4a,"haxor.math.Vector2.get_zero","haxor/math/Vector2.hx",21,0x4f419b49)
	HX_STACK_LINE(21)
	::haxor::math::Vector2 tmp = ::haxor::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_zero,return )

::haxor::math::Vector2 Vector2_obj::one;

::haxor::math::Vector2 Vector2_obj::get_one( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_one",0x947c2484,"haxor.math.Vector2.get_one","haxor/math/Vector2.hx",27,0x4f419b49)
	HX_STACK_LINE(27)
	::haxor::math::Vector2 tmp = ::haxor::math::Vector2_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_one,return )

::haxor::math::Vector2 Vector2_obj::right;

::haxor::math::Vector2 Vector2_obj::get_right( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_right",0x7e18d97a,"haxor.math.Vector2.get_right","haxor/math/Vector2.hx",33,0x4f419b49)
	HX_STACK_LINE(33)
	::haxor::math::Vector2 tmp = ::haxor::math::Vector2_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_right,return )

::haxor::math::Vector2 Vector2_obj::up;

::haxor::math::Vector2 Vector2_obj::get_up( ){
	HX_STACK_FRAME("haxor.math.Vector2","get_up",0xa28809fd,"haxor.math.Vector2.get_up","haxor/math/Vector2.hx",39,0x4f419b49)
	HX_STACK_LINE(39)
	::haxor::math::Vector2 tmp = ::haxor::math::Vector2_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_up,return )

Float Vector2_obj::Dot( ::haxor::math::Vector2 p_a,::haxor::math::Vector2 p_b){
	HX_STACK_FRAME("haxor.math.Vector2","Dot",0x4557ac70,"haxor.math.Vector2.Dot","haxor/math/Vector2.hx",47,0x4f419b49)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_LINE(47)
	Float tmp = (p_a->x * p_b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Float tmp1 = (p_a->y * p_b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Dot,return )

::haxor::math::Vector2 Vector2_obj::Lerp( ::haxor::math::Vector2 p_a,::haxor::math::Vector2 p_b,Float p_r){
	HX_STACK_FRAME("haxor.math.Vector2","Lerp",0x6ca152b0,"haxor.math.Vector2.Lerp","haxor/math/Vector2.hx",57,0x4f419b49)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_r,"p_r")
	HX_STACK_LINE(59)
	Float tmp = p_a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	Float tmp1 = (p_b->x - p_a->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	Float tmp2 = p_r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	Float tmp5 = p_a->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	Float tmp6 = (p_b->y - p_a->y);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	Float tmp7 = p_r;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(58)
	::haxor::math::Vector2 tmp10 = ::haxor::math::Vector2_obj::__new(tmp4,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(58)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,Lerp,return )

::haxor::math::Vector2 Vector2_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.math.Vector2","Parse",0xeb7c81da,"haxor.math.Vector2.Parse","haxor/math/Vector2.hx",261,0x4f419b49)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(262)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(263)
		::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		::String tmp3 = tk->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		::String tmp4 = ::StringTools_obj::trim(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(264)
		Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		::String tmp6 = tk->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(265)
		::String tmp7 = ::StringTools_obj::trim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(265)
		Float tmp8 = ::Std_obj::parseFloat(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		::haxor::math::Vector2 tmp9 = tmp2->Set(tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(263)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Parse,return )


Vector2_obj::Vector2_obj()
{
}

void Vector2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector2);
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(xy,"xy");
	HX_MARK_MEMBER_NAME(yx,"yx");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthSqr,"lengthSqr");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(inverse,"inverse");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void Vector2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(xy,"xy");
	HX_VISIT_MEMBER_NAME(yx,"yx");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lengthSqr,"lengthSqr");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(inverse,"inverse");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic Vector2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return inCallProp == hx::paccAlways ? get_xy() : xy; }
		if (HX_FIELD_EQ(inName,"yx") ) { return inCallProp == hx::paccAlways ? get_yx() : yx; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Sub") ) { return Sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Set2") ) { return Set2_dyn(); }
		if (HX_FIELD_EQ(inName,"Set3") ) { return Set3_dyn(); }
		if (HX_FIELD_EQ(inName,"Set4") ) { return Set4_dyn(); }
		if (HX_FIELD_EQ(inName,"Step") ) { return Step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return inCallProp == hx::paccAlways ? get_clone() : clone; }
		if (HX_FIELD_EQ(inName,"Scale") ) { return Scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_xy") ) { return get_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yx") ) { return get_yx_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"Invert") ) { return Invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return inCallProp == hx::paccAlways ? get_inverse() : inverse; }
		if (HX_FIELD_EQ(inName,"Reflect") ) { return Reflect_dyn(); }
		if (HX_FIELD_EQ(inName,"ToArray") ) { return ToArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
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

bool Vector2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { outValue = inCallProp == hx::paccAlways ? get_up() : up; return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { outValue = inCallProp == hx::paccAlways ? get_one() : one; return true; }
		if (HX_FIELD_EQ(inName,"Dot") ) { outValue = Dot_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = inCallProp == hx::paccAlways ? get_temp() : temp; return true; }
		if (HX_FIELD_EQ(inName,"zero") ) { outValue = inCallProp == hx::paccAlways ? get_zero() : zero; return true; }
		if (HX_FIELD_EQ(inName,"Lerp") ) { outValue = Lerp_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { outValue = inCallProp == hx::paccAlways ? get_right() : right; return true; }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_up") ) { outValue = get_up_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_one") ) { outValue = get_one_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { outValue = get_temp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_zero") ) { outValue = get_zero_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { outValue = get_right_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { xy=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yx") ) { yx=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { inverse=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lengthSqr") ) { lengthSqr=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector2_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=ioValue.Cast< ::haxor::math::Vector2 >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { one=ioValue.Cast< ::haxor::math::Vector2 >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< ::haxor::math::Vector2 >(); return true; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=ioValue.Cast< ::haxor::math::Vector2 >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=ioValue.Cast< ::haxor::math::Vector2 >(); return true; }
	}
	return false;
}

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("xy","\x01","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("yx","\xdf","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthSqr","\xce","\x5c","\x33","\xab"));
	outFields->push(HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"));
	outFields->push(HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector2_obj,clone),HX_HCSTRING("clone","\x5d","\x13","\x63","\x48")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector2_obj,xy),HX_HCSTRING("xy","\x01","\x69","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector2_obj,yx),HX_HCSTRING("yx","\xdf","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,lengthSqr),HX_HCSTRING("lengthSqr","\xce","\x5c","\x33","\xab")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector2_obj,normalized),HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector2_obj,inverse),HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Vector2_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Vector2_obj::zero,HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Vector2_obj::one,HX_HCSTRING("one","\x66","\x9a","\x54","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Vector2_obj::right,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Vector2_obj::up,HX_HCSTRING("up","\x5b","\x66","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_clone","\xb4","\x6f","\x0c","\x8c"),
	HX_HCSTRING("xy","\x01","\x69","\x00","\x00"),
	HX_HCSTRING("get_xy","\x4a","\x00","\x30","\xa3"),
	HX_HCSTRING("yx","\xdf","\x69","\x00","\x00"),
	HX_HCSTRING("get_yx","\x28","\x01","\x30","\xa3"),
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
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("Set2","\x70","\xbe","\x29","\x37"),
	HX_HCSTRING("Set3","\x71","\xbe","\x29","\x37"),
	HX_HCSTRING("Set4","\x72","\xbe","\x29","\x37"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Sub","\x60","\x61","\x3f","\x00"),
	HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74"),
	HX_HCSTRING("Scale","\x6a","\x3e","\xfc","\x0b"),
	HX_HCSTRING("Step","\x6c","\x13","\x35","\x37"),
	HX_HCSTRING("Reflect","\x1d","\xac","\x7a","\xb6"),
	HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4"),
	HX_HCSTRING("Normalize","\x6d","\x17","\x74","\x4d"),
	HX_HCSTRING("ToArray","\xfe","\xe1","\x64","\xbf"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector2_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(Vector2_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(Vector2_obj::one,"one");
	HX_MARK_MEMBER_NAME(Vector2_obj::right,"right");
	HX_MARK_MEMBER_NAME(Vector2_obj::up,"up");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector2_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(Vector2_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(Vector2_obj::one,"one");
	HX_VISIT_MEMBER_NAME(Vector2_obj::right,"right");
	HX_VISIT_MEMBER_NAME(Vector2_obj::up,"up");
};

#endif

hx::Class Vector2_obj::__mClass;

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
	HX_HCSTRING("Dot","\x69","\xfa","\x33","\x00"),
	HX_HCSTRING("Lerp","\x97","\x3e","\x89","\x32"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void Vector2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.Vector2","\xf5","\xc2","\x06","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector2_obj::__GetStatic;
	__mClass->mSetStaticField = &Vector2_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector2_obj >;
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
