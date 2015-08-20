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
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
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

Void Matrix4_obj::__construct(hx::Null< Float >  __o_p_m00,hx::Null< Float >  __o_p_m01,hx::Null< Float >  __o_p_m02,hx::Null< Float >  __o_p_m03,hx::Null< Float >  __o_p_m10,hx::Null< Float >  __o_p_m11,hx::Null< Float >  __o_p_m12,hx::Null< Float >  __o_p_m13,hx::Null< Float >  __o_p_m20,hx::Null< Float >  __o_p_m21,hx::Null< Float >  __o_p_m22,hx::Null< Float >  __o_p_m23,hx::Null< Float >  __o_p_m30,hx::Null< Float >  __o_p_m31,hx::Null< Float >  __o_p_m32,hx::Null< Float >  __o_p_m33)
{
HX_STACK_FRAME("haxor.math.Matrix4","new",0xdf8f7d2b,"haxor.math.Matrix4.new","haxor/math/Matrix4.hx",454,0xc9a22505)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_m00,"p_m00")
HX_STACK_ARG(__o_p_m01,"p_m01")
HX_STACK_ARG(__o_p_m02,"p_m02")
HX_STACK_ARG(__o_p_m03,"p_m03")
HX_STACK_ARG(__o_p_m10,"p_m10")
HX_STACK_ARG(__o_p_m11,"p_m11")
HX_STACK_ARG(__o_p_m12,"p_m12")
HX_STACK_ARG(__o_p_m13,"p_m13")
HX_STACK_ARG(__o_p_m20,"p_m20")
HX_STACK_ARG(__o_p_m21,"p_m21")
HX_STACK_ARG(__o_p_m22,"p_m22")
HX_STACK_ARG(__o_p_m23,"p_m23")
HX_STACK_ARG(__o_p_m30,"p_m30")
HX_STACK_ARG(__o_p_m31,"p_m31")
HX_STACK_ARG(__o_p_m32,"p_m32")
HX_STACK_ARG(__o_p_m33,"p_m33")
Float p_m00 = __o_p_m00.Default(0);
Float p_m01 = __o_p_m01.Default(0);
Float p_m02 = __o_p_m02.Default(0);
Float p_m03 = __o_p_m03.Default(0);
Float p_m10 = __o_p_m10.Default(0);
Float p_m11 = __o_p_m11.Default(0);
Float p_m12 = __o_p_m12.Default(0);
Float p_m13 = __o_p_m13.Default(0);
Float p_m20 = __o_p_m20.Default(0);
Float p_m21 = __o_p_m21.Default(0);
Float p_m22 = __o_p_m22.Default(0);
Float p_m23 = __o_p_m23.Default(0);
Float p_m30 = __o_p_m30.Default(0);
Float p_m31 = __o_p_m31.Default(0);
Float p_m32 = __o_p_m32.Default(0);
Float p_m33 = __o_p_m33.Default(0);
{
	HX_STACK_LINE(455)
	this->m00 = p_m00;
	HX_STACK_LINE(455)
	this->m01 = p_m01;
	HX_STACK_LINE(455)
	this->m02 = p_m02;
	HX_STACK_LINE(455)
	this->m03 = p_m03;
	HX_STACK_LINE(455)
	this->m10 = p_m10;
	HX_STACK_LINE(455)
	this->m11 = p_m11;
	HX_STACK_LINE(455)
	this->m12 = p_m12;
	HX_STACK_LINE(455)
	this->m13 = p_m13;
	HX_STACK_LINE(455)
	this->m20 = p_m20;
	HX_STACK_LINE(455)
	this->m21 = p_m21;
	HX_STACK_LINE(455)
	this->m22 = p_m22;
	HX_STACK_LINE(455)
	this->m23 = p_m23;
	HX_STACK_LINE(455)
	this->m30 = p_m30;
	HX_STACK_LINE(455)
	this->m31 = p_m31;
	HX_STACK_LINE(455)
	this->m32 = p_m32;
	HX_STACK_LINE(455)
	this->m33 = p_m33;
}
;
	return null();
}

//Matrix4_obj::~Matrix4_obj() { }

Dynamic Matrix4_obj::__CreateEmpty() { return  new Matrix4_obj; }
hx::ObjectPtr< Matrix4_obj > Matrix4_obj::__new(hx::Null< Float >  __o_p_m00,hx::Null< Float >  __o_p_m01,hx::Null< Float >  __o_p_m02,hx::Null< Float >  __o_p_m03,hx::Null< Float >  __o_p_m10,hx::Null< Float >  __o_p_m11,hx::Null< Float >  __o_p_m12,hx::Null< Float >  __o_p_m13,hx::Null< Float >  __o_p_m20,hx::Null< Float >  __o_p_m21,hx::Null< Float >  __o_p_m22,hx::Null< Float >  __o_p_m23,hx::Null< Float >  __o_p_m30,hx::Null< Float >  __o_p_m31,hx::Null< Float >  __o_p_m32,hx::Null< Float >  __o_p_m33)
{  hx::ObjectPtr< Matrix4_obj > _result_ = new Matrix4_obj();
	_result_->__construct(__o_p_m00,__o_p_m01,__o_p_m02,__o_p_m03,__o_p_m10,__o_p_m11,__o_p_m12,__o_p_m13,__o_p_m20,__o_p_m21,__o_p_m22,__o_p_m23,__o_p_m30,__o_p_m31,__o_p_m32,__o_p_m33);
	return _result_;}

Dynamic Matrix4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix4_obj > _result_ = new Matrix4_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15]);
	return _result_;}

::haxor::math::Matrix4 Matrix4_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_clone",0x6ed646bf,"haxor.math.Matrix4.get_clone","haxor/math/Matrix4.hx",324,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	Float tmp1 = this->m01;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	Float tmp2 = this->m02;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(324)
	Float tmp3 = this->m03;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(324)
	Float tmp4 = this->m10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(324)
	Float tmp5 = this->m11;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(324)
	Float tmp6 = this->m12;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(324)
	Float tmp7 = this->m13;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(324)
	Float tmp8 = this->m20;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(324)
	Float tmp9 = this->m21;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(324)
	Float tmp10 = this->m22;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(324)
	Float tmp11 = this->m23;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(324)
	Float tmp12 = this->m30;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(324)
	Float tmp13 = this->m31;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(324)
	Float tmp14 = this->m32;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(324)
	Float tmp15 = this->m33;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(324)
	::haxor::math::Matrix4 tmp16 = ::haxor::math::Matrix4_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(324)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_clone,return )

::haxor::math::Quaternion Matrix4_obj::get_quaternion( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_quaternion",0x16d7567c,"haxor.math.Matrix4.get_quaternion","haxor/math/Matrix4.hx",330,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	::haxor::math::Matrix4 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(330)
		Array< ::Dynamic > tmp2 = _this->m_m4;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		int tmp3 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		int tmp4 = _this->m_m4->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		int tmp6 = _this->m_nq = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(330)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Matrix4 >();
	}
	HX_STACK_LINE(330)
	::haxor::math::Matrix4 tmp1 = tmp->SetMatrix4(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	::haxor::math::Matrix4 tmp2 = tmp1->ToRotation();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	::haxor::math::Quaternion tmp3 = ::haxor::math::Quaternion_obj::FromMatrix4(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(330)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_quaternion,return )

::haxor::math::Quaternion Matrix4_obj::set_quaternion( ::haxor::math::Quaternion v){
	HX_STACK_FRAME("haxor.math.Matrix4","set_quaternion",0x36f73ef0,"haxor.math.Matrix4.set_quaternion","haxor/math/Matrix4.hx",331,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(331)
	::haxor::math::Quaternion tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	::haxor::math::Matrix4_obj::FromQuaternion(tmp,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(331)
	::haxor::math::Quaternion tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,set_quaternion,return )

Float Matrix4_obj::get_trace( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_trace",0x3c92c1e7,"haxor.math.Matrix4.get_trace","haxor/math/Matrix4.hx",337,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(337)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(337)
	Float tmp1 = this->m11;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(337)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(337)
	Float tmp3 = this->m22;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(337)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(337)
	Float tmp5 = this->m33;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(337)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(337)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_trace,return )

::haxor::math::Matrix4 Matrix4_obj::get_rotation( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_rotation",0x229bd31c,"haxor.math.Matrix4.get_rotation","haxor/math/Matrix4.hx",344,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(344)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(344)
	Float tmp1 = this->m01;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(344)
	Float tmp2 = this->m02;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(344)
	Float tmp3 = this->m03;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(344)
	Float tmp4 = this->m10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(344)
	Float tmp5 = this->m11;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(344)
	Float tmp6 = this->m12;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(344)
	Float tmp7 = this->m13;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(344)
	Float tmp8 = this->m20;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(344)
	Float tmp9 = this->m21;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(344)
	Float tmp10 = this->m22;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(344)
	Float tmp11 = this->m23;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(344)
	Float tmp12 = this->m30;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(344)
	Float tmp13 = this->m31;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(344)
	Float tmp14 = this->m32;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(344)
	Float tmp15 = this->m33;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(344)
	::haxor::math::Matrix4 tmp16 = ::haxor::math::Matrix4_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(344)
	::haxor::math::Matrix4 tmp17 = tmp16->ToRotation();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(344)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_rotation,return )

::haxor::math::Matrix4 Matrix4_obj::get_scale( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_scale",0x9f4201ec,"haxor.math.Matrix4.get_scale","haxor/math/Matrix4.hx",350,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(350)
	::haxor::math::Matrix4 tmp = ::haxor::math::Matrix4_obj::GetScale(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_scale,return )

::haxor::math::Matrix4 Matrix4_obj::get_translation( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_translation",0x3b3519d3,"haxor.math.Matrix4.get_translation","haxor/math/Matrix4.hx",356,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(356)
	Float tmp = this->m03;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	Float tmp1 = this->m13;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(356)
	Float tmp2 = this->m23;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	::haxor::math::Matrix4 tmp3 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,tmp,(int)0,(int)1,(int)0,tmp1,(int)0,(int)0,(int)1,tmp2,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(356)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_translation,return )

::haxor::math::Matrix4 Matrix4_obj::get_inverseTransform( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_inverseTransform",0x0e316f7a,"haxor.math.Matrix4.get_inverseTransform","haxor/math/Matrix4.hx",363,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(391)
	::haxor::math::Matrix4 tmp = ::haxor::math::Matrix4_obj::GetInverseTransform(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(391)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_inverseTransform,return )

::haxor::math::Matrix4 Matrix4_obj::get_transposed( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_transposed",0x58446329,"haxor.math.Matrix4.get_transposed","haxor/math/Matrix4.hx",399,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	Float tmp1 = this->m10;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(399)
	Float tmp2 = this->m20;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(399)
	Float tmp3 = this->m30;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(399)
	Float tmp4 = this->m01;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(399)
	Float tmp5 = this->m11;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(399)
	Float tmp6 = this->m21;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(399)
	Float tmp7 = this->m31;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(399)
	Float tmp8 = this->m02;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(399)
	Float tmp9 = this->m12;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(399)
	Float tmp10 = this->m22;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(399)
	Float tmp11 = this->m32;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(399)
	Float tmp12 = this->m03;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(399)
	Float tmp13 = this->m13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(399)
	Float tmp14 = this->m23;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(399)
	Float tmp15 = this->m33;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(399)
	::haxor::math::Matrix4 tmp16 = ::haxor::math::Matrix4_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(399)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_transposed,return )

Array< Float > Matrix4_obj::ToRowMajor( ){
	HX_STACK_FRAME("haxor.math.Matrix4","ToRowMajor",0xa1a6580f,"haxor.math.Matrix4.ToRowMajor","haxor/math/Matrix4.hx",404,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	Float tmp1 = this->m01;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	Float tmp2 = this->m02;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	Float tmp3 = this->m03;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(404)
	Float tmp4 = this->m10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(404)
	Float tmp5 = this->m11;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(404)
	Float tmp6 = this->m12;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(404)
	Float tmp7 = this->m13;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(404)
	Float tmp8 = this->m20;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(404)
	Float tmp9 = this->m21;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(404)
	Float tmp10 = this->m22;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(404)
	Float tmp11 = this->m23;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(404)
	Float tmp12 = this->m30;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(404)
	Float tmp13 = this->m31;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(404)
	Float tmp14 = this->m32;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(404)
	Float tmp15 = this->m33;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(404)
	Array< Float > tmp16 = Array_obj< Float >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(404)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,ToRowMajor,return )

Array< Float > Matrix4_obj::ToColumnMajor( ){
	HX_STACK_FRAME("haxor.math.Matrix4","ToColumnMajor",0xdf285d33,"haxor.math.Matrix4.ToColumnMajor","haxor/math/Matrix4.hx",409,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(409)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	Float tmp1 = this->m10;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	Float tmp2 = this->m20;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(409)
	Float tmp3 = this->m30;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(409)
	Float tmp4 = this->m01;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(409)
	Float tmp5 = this->m11;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(409)
	Float tmp6 = this->m21;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(409)
	Float tmp7 = this->m31;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(409)
	Float tmp8 = this->m02;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(409)
	Float tmp9 = this->m12;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(409)
	Float tmp10 = this->m22;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(409)
	Float tmp11 = this->m32;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(409)
	Float tmp12 = this->m03;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(409)
	Float tmp13 = this->m13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(409)
	Float tmp14 = this->m23;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(409)
	Float tmp15 = this->m33;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(409)
	Array< Float > tmp16 = Array_obj< Float >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(409)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,ToColumnMajor,return )

::haxor::math::Vector4 Matrix4_obj::GetLine( int p_index,::haxor::math::Vector4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","GetLine",0x4e605dd5,"haxor.math.Matrix4.GetLine","haxor/math/Matrix4.hx",464,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(465)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(465)
	::haxor::math::Vector4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(465)
	if ((tmp)){
		HX_STACK_LINE(465)
		tmp1 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(465)
		tmp1 = p_result;
	}
	HX_STACK_LINE(465)
	p_result = tmp1;
	HX_STACK_LINE(466)
	int tmp2 = p_index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(466)
	Float tmp3 = this->GetRowCol(tmp2,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(466)
	int tmp4 = p_index;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(466)
	Float tmp5 = this->GetRowCol(tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(466)
	int tmp6 = p_index;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(466)
	Float tmp7 = this->GetRowCol(tmp6,(int)2);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(466)
	int tmp8 = p_index;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(466)
	Float tmp9 = this->GetRowCol(tmp8,(int)3);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(466)
	::haxor::math::Vector4 tmp10 = p_result->Set(tmp3,tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(466)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,GetLine,return )

Void Matrix4_obj::SetLine( int p_index,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.math.Matrix4","SetLine",0x4161eee1,"haxor.math.Matrix4.SetLine","haxor/math/Matrix4.hx",479,0xc9a22505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_index,"p_index")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(480)
		int tmp = p_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(480)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(482)
				this->m00 = p_x;
				HX_STACK_LINE(482)
				this->m01 = p_y;
				HX_STACK_LINE(482)
				this->m02 = p_z;
				HX_STACK_LINE(482)
				this->m03 = p_w;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(483)
				this->m10 = p_x;
				HX_STACK_LINE(483)
				this->m11 = p_y;
				HX_STACK_LINE(483)
				this->m12 = p_z;
				HX_STACK_LINE(483)
				this->m13 = p_w;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(484)
				this->m20 = p_x;
				HX_STACK_LINE(484)
				this->m21 = p_y;
				HX_STACK_LINE(484)
				this->m22 = p_z;
				HX_STACK_LINE(484)
				this->m23 = p_w;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(485)
				this->m30 = p_x;
				HX_STACK_LINE(485)
				this->m31 = p_y;
				HX_STACK_LINE(485)
				this->m32 = p_z;
				HX_STACK_LINE(485)
				this->m33 = p_w;
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix4_obj,SetLine,(void))

::haxor::math::Vector4 Matrix4_obj::GetColumn( int p_index,::haxor::math::Vector4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","GetColumn",0xc77e8ef7,"haxor.math.Matrix4.GetColumn","haxor/math/Matrix4.hx",495,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(496)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	::haxor::math::Vector4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	if ((tmp)){
		HX_STACK_LINE(496)
		tmp1 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(496)
		tmp1 = p_result;
	}
	HX_STACK_LINE(496)
	p_result = tmp1;
	HX_STACK_LINE(497)
	int tmp2 = p_index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(497)
	Float tmp3 = this->GetRowCol((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(497)
	int tmp4 = p_index;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(497)
	Float tmp5 = this->GetRowCol((int)1,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(497)
	int tmp6 = p_index;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(497)
	Float tmp7 = this->GetRowCol((int)2,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(497)
	int tmp8 = p_index;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(497)
	Float tmp9 = this->GetRowCol((int)3,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(497)
	::haxor::math::Vector4 tmp10 = p_result->Set(tmp3,tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(497)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,GetColumn,return )

Void Matrix4_obj::SetColumn( int p_index,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.math.Matrix4","SetColumn",0xaacf7b03,"haxor.math.Matrix4.SetColumn","haxor/math/Matrix4.hx",510,0xc9a22505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_index,"p_index")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(511)
		int tmp = p_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(513)
				this->m00 = p_x;
				HX_STACK_LINE(513)
				this->m10 = p_y;
				HX_STACK_LINE(513)
				this->m20 = p_z;
				HX_STACK_LINE(513)
				this->m30 = p_w;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(514)
				this->m01 = p_x;
				HX_STACK_LINE(514)
				this->m11 = p_y;
				HX_STACK_LINE(514)
				this->m21 = p_z;
				HX_STACK_LINE(514)
				this->m31 = p_w;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(515)
				this->m02 = p_x;
				HX_STACK_LINE(515)
				this->m12 = p_y;
				HX_STACK_LINE(515)
				this->m22 = p_z;
				HX_STACK_LINE(515)
				this->m32 = p_w;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(516)
				this->m03 = p_x;
				HX_STACK_LINE(516)
				this->m13 = p_y;
				HX_STACK_LINE(516)
				this->m23 = p_z;
				HX_STACK_LINE(516)
				this->m33 = p_w;
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix4_obj,SetColumn,(void))

::haxor::math::Vector4 Matrix4_obj::get_diagonalLR( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_diagonalLR",0xfc88f819,"haxor.math.Matrix4.get_diagonalLR","haxor/math/Matrix4.hx",524,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(524)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	Float tmp1 = this->m11;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(524)
	Float tmp2 = this->m22;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(524)
	Float tmp3 = this->m33;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(524)
	::haxor::math::Vector4 tmp4 = ::haxor::math::Vector4_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(524)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_diagonalLR,return )

::haxor::math::Vector4 Matrix4_obj::set_diagonalLR( ::haxor::math::Vector4 v){
	HX_STACK_FRAME("haxor.math.Matrix4","set_diagonalLR",0x1ca8e08d,"haxor.math.Matrix4.set_diagonalLR","haxor/math/Matrix4.hx",525,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(525)
	this->m00 = v->x;
	HX_STACK_LINE(525)
	this->m11 = v->y;
	HX_STACK_LINE(525)
	this->m22 = v->z;
	HX_STACK_LINE(525)
	this->m33 = v->w;
	HX_STACK_LINE(525)
	::haxor::math::Vector4 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,set_diagonalLR,return )

::haxor::math::Matrix4 Matrix4_obj::SetIdentity( ){
	HX_STACK_FRAME("haxor.math.Matrix4","SetIdentity",0x57f896ab,"haxor.math.Matrix4.SetIdentity","haxor/math/Matrix4.hx",531,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(531)
	::haxor::math::Matrix4 tmp = this->Set((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(531)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,SetIdentity,return )

::haxor::math::Matrix4 Matrix4_obj::Set( hx::Null< Float >  __o_p_m00,hx::Null< Float >  __o_p_m01,hx::Null< Float >  __o_p_m02,hx::Null< Float >  __o_p_m03,hx::Null< Float >  __o_p_m10,hx::Null< Float >  __o_p_m11,hx::Null< Float >  __o_p_m12,hx::Null< Float >  __o_p_m13,hx::Null< Float >  __o_p_m20,hx::Null< Float >  __o_p_m21,hx::Null< Float >  __o_p_m22,hx::Null< Float >  __o_p_m23,hx::Null< Float >  __o_p_m30,hx::Null< Float >  __o_p_m31,hx::Null< Float >  __o_p_m32,hx::Null< Float >  __o_p_m33){
Float p_m00 = __o_p_m00.Default(0);
Float p_m01 = __o_p_m01.Default(0);
Float p_m02 = __o_p_m02.Default(0);
Float p_m03 = __o_p_m03.Default(0);
Float p_m10 = __o_p_m10.Default(0);
Float p_m11 = __o_p_m11.Default(0);
Float p_m12 = __o_p_m12.Default(0);
Float p_m13 = __o_p_m13.Default(0);
Float p_m20 = __o_p_m20.Default(0);
Float p_m21 = __o_p_m21.Default(0);
Float p_m22 = __o_p_m22.Default(0);
Float p_m23 = __o_p_m23.Default(0);
Float p_m30 = __o_p_m30.Default(0);
Float p_m31 = __o_p_m31.Default(0);
Float p_m32 = __o_p_m32.Default(0);
Float p_m33 = __o_p_m33.Default(0);
	HX_STACK_FRAME("haxor.math.Matrix4","Set",0xdf7b004d,"haxor.math.Matrix4.Set","haxor/math/Matrix4.hx",556,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_m00,"p_m00")
	HX_STACK_ARG(p_m01,"p_m01")
	HX_STACK_ARG(p_m02,"p_m02")
	HX_STACK_ARG(p_m03,"p_m03")
	HX_STACK_ARG(p_m10,"p_m10")
	HX_STACK_ARG(p_m11,"p_m11")
	HX_STACK_ARG(p_m12,"p_m12")
	HX_STACK_ARG(p_m13,"p_m13")
	HX_STACK_ARG(p_m20,"p_m20")
	HX_STACK_ARG(p_m21,"p_m21")
	HX_STACK_ARG(p_m22,"p_m22")
	HX_STACK_ARG(p_m23,"p_m23")
	HX_STACK_ARG(p_m30,"p_m30")
	HX_STACK_ARG(p_m31,"p_m31")
	HX_STACK_ARG(p_m32,"p_m32")
	HX_STACK_ARG(p_m33,"p_m33")
{
		HX_STACK_LINE(557)
		this->m00 = p_m00;
		HX_STACK_LINE(557)
		this->m01 = p_m01;
		HX_STACK_LINE(557)
		this->m02 = p_m02;
		HX_STACK_LINE(557)
		this->m03 = p_m03;
		HX_STACK_LINE(558)
		this->m10 = p_m10;
		HX_STACK_LINE(558)
		this->m11 = p_m11;
		HX_STACK_LINE(558)
		this->m12 = p_m12;
		HX_STACK_LINE(558)
		this->m13 = p_m13;
		HX_STACK_LINE(559)
		this->m20 = p_m20;
		HX_STACK_LINE(559)
		this->m21 = p_m21;
		HX_STACK_LINE(559)
		this->m22 = p_m22;
		HX_STACK_LINE(559)
		this->m23 = p_m23;
		HX_STACK_LINE(560)
		this->m30 = p_m30;
		HX_STACK_LINE(560)
		this->m31 = p_m31;
		HX_STACK_LINE(560)
		this->m32 = p_m32;
		HX_STACK_LINE(560)
		this->m33 = p_m33;
		HX_STACK_LINE(561)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC16(Matrix4_obj,Set,return )

::haxor::math::Matrix4 Matrix4_obj::SetMatrix4( ::haxor::math::Matrix4 p_matrix){
	HX_STACK_FRAME("haxor.math.Matrix4","SetMatrix4",0x6ac9be06,"haxor.math.Matrix4.SetMatrix4","haxor/math/Matrix4.hx",570,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_matrix,"p_matrix")
	HX_STACK_LINE(571)
	this->m00 = p_matrix->m00;
	HX_STACK_LINE(571)
	this->m01 = p_matrix->m01;
	HX_STACK_LINE(571)
	this->m02 = p_matrix->m02;
	HX_STACK_LINE(571)
	this->m03 = p_matrix->m03;
	HX_STACK_LINE(572)
	this->m10 = p_matrix->m10;
	HX_STACK_LINE(572)
	this->m11 = p_matrix->m11;
	HX_STACK_LINE(572)
	this->m12 = p_matrix->m12;
	HX_STACK_LINE(572)
	this->m13 = p_matrix->m13;
	HX_STACK_LINE(573)
	this->m20 = p_matrix->m20;
	HX_STACK_LINE(573)
	this->m21 = p_matrix->m21;
	HX_STACK_LINE(573)
	this->m22 = p_matrix->m22;
	HX_STACK_LINE(573)
	this->m23 = p_matrix->m23;
	HX_STACK_LINE(574)
	this->m30 = p_matrix->m30;
	HX_STACK_LINE(574)
	this->m31 = p_matrix->m31;
	HX_STACK_LINE(574)
	this->m32 = p_matrix->m32;
	HX_STACK_LINE(574)
	this->m33 = p_matrix->m33;
	HX_STACK_LINE(575)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,SetMatrix4,return )

Float Matrix4_obj::GetIndex( int p_index){
	HX_STACK_FRAME("haxor.math.Matrix4","GetIndex",0x8f047a11,"haxor.math.Matrix4.GetIndex","haxor/math/Matrix4.hx",584,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_LINE(585)
	int tmp = p_index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(585)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(587)
			Float tmp1 = this->m00;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(587)
			return tmp1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(588)
			Float tmp1 = this->m01;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(588)
			return tmp1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(589)
			Float tmp1 = this->m02;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(589)
			return tmp1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(590)
			Float tmp1 = this->m03;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(590)
			return tmp1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(591)
			Float tmp1 = this->m10;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(591)
			return tmp1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(592)
			Float tmp1 = this->m11;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(592)
			return tmp1;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(593)
			Float tmp1 = this->m12;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(593)
			return tmp1;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(594)
			Float tmp1 = this->m13;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(594)
			return tmp1;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(595)
			Float tmp1 = this->m20;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(595)
			return tmp1;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(596)
			Float tmp1 = this->m21;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(596)
			return tmp1;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(597)
			Float tmp1 = this->m22;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(597)
			return tmp1;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(598)
			Float tmp1 = this->m23;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(598)
			return tmp1;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(599)
			Float tmp1 = this->m30;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(599)
			return tmp1;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(600)
			Float tmp1 = this->m31;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(600)
			return tmp1;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(601)
			Float tmp1 = this->m32;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(601)
			return tmp1;
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(602)
			Float tmp1 = this->m33;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(602)
			return tmp1;
		}
		;break;
	}
	HX_STACK_LINE(604)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,GetIndex,return )

::haxor::math::Matrix4 Matrix4_obj::SetIndex( int p_index,Float p_value){
	HX_STACK_FRAME("haxor.math.Matrix4","SetIndex",0x3d61d385,"haxor.math.Matrix4.SetIndex","haxor/math/Matrix4.hx",613,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_ARG(p_value,"p_value")
	HX_STACK_LINE(614)
	int tmp = p_index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(614)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(616)
			this->m00 = p_value;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(617)
			this->m01 = p_value;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(618)
			this->m02 = p_value;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(619)
			this->m03 = p_value;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(620)
			this->m10 = p_value;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(621)
			this->m11 = p_value;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(622)
			this->m12 = p_value;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(623)
			this->m13 = p_value;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(624)
			this->m20 = p_value;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(625)
			this->m21 = p_value;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(626)
			this->m22 = p_value;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(627)
			this->m23 = p_value;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(628)
			this->m30 = p_value;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(629)
			this->m31 = p_value;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(630)
			this->m32 = p_value;
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(631)
			this->m33 = p_value;
		}
		;break;
	}
	HX_STACK_LINE(633)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,SetIndex,return )

::haxor::math::Matrix4 Matrix4_obj::SetRowCol( int p_row,int p_col,Float p_value){
	HX_STACK_FRAME("haxor.math.Matrix4","SetRowCol",0xb1494e73,"haxor.math.Matrix4.SetRowCol","haxor/math/Matrix4.hx",642,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_row,"p_row")
	HX_STACK_ARG(p_col,"p_col")
	HX_STACK_ARG(p_value,"p_value")
	HX_STACK_LINE(642)
	int tmp = p_col;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(642)
	int tmp1 = (int(p_row) << int((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(642)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(642)
	Float tmp3 = p_value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(642)
	::haxor::math::Matrix4 tmp4 = this->SetIndex(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(642)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix4_obj,SetRowCol,return )

Float Matrix4_obj::GetRowCol( int p_row,int p_col){
	HX_STACK_FRAME("haxor.math.Matrix4","GetRowCol",0xcdf86267,"haxor.math.Matrix4.GetRowCol","haxor/math/Matrix4.hx",650,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_row,"p_row")
	HX_STACK_ARG(p_col,"p_col")
	HX_STACK_LINE(650)
	int tmp = p_col;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(650)
	int tmp1 = (int(p_row) << int((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(650)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(650)
	Float tmp3 = this->GetIndex(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(650)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,GetRowCol,return )

::haxor::math::Matrix4 Matrix4_obj::SwapCol( int p_a,int p_b){
	HX_STACK_FRAME("haxor.math.Matrix4","SwapCol",0x9ae04198,"haxor.math.Matrix4.SwapCol","haxor/math/Matrix4.hx",659,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_LINE(660)
	int tmp = p_a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(660)
	Float tmp1 = this->GetRowCol((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(660)
	Float a0 = tmp1;		HX_STACK_VAR(a0,"a0");
	HX_STACK_LINE(661)
	int tmp2 = p_a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(661)
	Float tmp3 = this->GetRowCol((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(661)
	Float a1 = tmp3;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(662)
	int tmp4 = p_a;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(662)
	Float tmp5 = this->GetRowCol((int)2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(662)
	Float a2 = tmp5;		HX_STACK_VAR(a2,"a2");
	HX_STACK_LINE(663)
	int tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(663)
	Float tmp7 = this->GetRowCol((int)3,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(663)
	Float a3 = tmp7;		HX_STACK_VAR(a3,"a3");
	HX_STACK_LINE(664)
	int tmp8 = p_a;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(664)
	int tmp9 = p_b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(664)
	Float tmp10 = this->GetRowCol((int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(664)
	this->SetRowCol((int)0,tmp8,tmp10);
	HX_STACK_LINE(665)
	int tmp11 = p_a;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(665)
	int tmp12 = p_b;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(665)
	Float tmp13 = this->GetRowCol((int)1,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(665)
	this->SetRowCol((int)1,tmp11,tmp13);
	HX_STACK_LINE(666)
	int tmp14 = p_a;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(666)
	int tmp15 = p_b;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(666)
	Float tmp16 = this->GetRowCol((int)2,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(666)
	this->SetRowCol((int)2,tmp14,tmp16);
	HX_STACK_LINE(667)
	int tmp17 = p_a;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(667)
	int tmp18 = p_b;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(667)
	Float tmp19 = this->GetRowCol((int)3,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(667)
	this->SetRowCol((int)3,tmp17,tmp19);
	HX_STACK_LINE(668)
	int tmp20 = p_b;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(668)
	Float tmp21 = a0;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(668)
	this->SetRowCol((int)0,tmp20,tmp21);
	HX_STACK_LINE(669)
	int tmp22 = p_b;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(669)
	Float tmp23 = a1;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(669)
	this->SetRowCol((int)1,tmp22,tmp23);
	HX_STACK_LINE(670)
	int tmp24 = p_b;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(670)
	Float tmp25 = a2;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(670)
	this->SetRowCol((int)2,tmp24,tmp25);
	HX_STACK_LINE(671)
	int tmp26 = p_b;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(671)
	Float tmp27 = a3;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(671)
	this->SetRowCol((int)3,tmp26,tmp27);
	HX_STACK_LINE(672)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,SwapCol,return )

::haxor::math::Matrix4 Matrix4_obj::SwapRow( int p_a,int p_b){
	HX_STACK_FRAME("haxor.math.Matrix4","SwapRow",0x9aeba372,"haxor.math.Matrix4.SwapRow","haxor/math/Matrix4.hx",682,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_LINE(683)
	int tmp = p_a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(683)
	Float tmp1 = this->GetRowCol(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(683)
	Float a0 = tmp1;		HX_STACK_VAR(a0,"a0");
	HX_STACK_LINE(684)
	int tmp2 = p_a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(684)
	Float tmp3 = this->GetRowCol(tmp2,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(684)
	Float a1 = tmp3;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(685)
	int tmp4 = p_a;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(685)
	Float tmp5 = this->GetRowCol(tmp4,(int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(685)
	Float a2 = tmp5;		HX_STACK_VAR(a2,"a2");
	HX_STACK_LINE(686)
	int tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(686)
	Float tmp7 = this->GetRowCol(tmp6,(int)3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(686)
	Float a3 = tmp7;		HX_STACK_VAR(a3,"a3");
	HX_STACK_LINE(687)
	int tmp8 = p_a;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(687)
	int tmp9 = p_b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(687)
	Float tmp10 = this->GetRowCol(tmp9,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(687)
	this->SetRowCol(tmp8,(int)0,tmp10);
	HX_STACK_LINE(688)
	int tmp11 = p_a;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(688)
	int tmp12 = p_b;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(688)
	Float tmp13 = this->GetRowCol(tmp12,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(688)
	this->SetRowCol(tmp11,(int)1,tmp13);
	HX_STACK_LINE(689)
	int tmp14 = p_a;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(689)
	int tmp15 = p_b;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(689)
	Float tmp16 = this->GetRowCol(tmp15,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(689)
	this->SetRowCol(tmp14,(int)2,tmp16);
	HX_STACK_LINE(690)
	int tmp17 = p_a;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(690)
	int tmp18 = p_b;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(690)
	Float tmp19 = this->GetRowCol(tmp18,(int)3);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(690)
	this->SetRowCol(tmp17,(int)3,tmp19);
	HX_STACK_LINE(691)
	int tmp20 = p_b;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(691)
	Float tmp21 = a0;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(691)
	this->SetRowCol(tmp20,(int)0,tmp21);
	HX_STACK_LINE(692)
	int tmp22 = p_b;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(692)
	Float tmp23 = a1;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(692)
	this->SetRowCol(tmp22,(int)1,tmp23);
	HX_STACK_LINE(693)
	int tmp24 = p_b;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(693)
	Float tmp25 = a2;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(693)
	this->SetRowCol(tmp24,(int)2,tmp25);
	HX_STACK_LINE(694)
	int tmp26 = p_b;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(694)
	Float tmp27 = a3;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(694)
	this->SetRowCol(tmp26,(int)3,tmp27);
	HX_STACK_LINE(695)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,SwapRow,return )

::haxor::math::Matrix4 Matrix4_obj::Transpose( ){
	HX_STACK_FRAME("haxor.math.Matrix4","Transpose",0xd0cc0764,"haxor.math.Matrix4.Transpose","haxor/math/Matrix4.hx",703,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(704)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(704)
	Float t00 = tmp;		HX_STACK_VAR(t00,"t00");
	HX_STACK_LINE(704)
	Float tmp1 = this->m01;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(704)
	Float t01 = tmp1;		HX_STACK_VAR(t01,"t01");
	HX_STACK_LINE(704)
	Float tmp2 = this->m02;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(704)
	Float t02 = tmp2;		HX_STACK_VAR(t02,"t02");
	HX_STACK_LINE(704)
	Float tmp3 = this->m03;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(704)
	Float t03 = tmp3;		HX_STACK_VAR(t03,"t03");
	HX_STACK_LINE(705)
	Float tmp4 = this->m10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(705)
	Float t10 = tmp4;		HX_STACK_VAR(t10,"t10");
	HX_STACK_LINE(705)
	Float tmp5 = this->m11;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(705)
	Float t11 = tmp5;		HX_STACK_VAR(t11,"t11");
	HX_STACK_LINE(705)
	Float tmp6 = this->m12;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(705)
	Float t12 = tmp6;		HX_STACK_VAR(t12,"t12");
	HX_STACK_LINE(705)
	Float tmp7 = this->m13;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(705)
	Float t13 = tmp7;		HX_STACK_VAR(t13,"t13");
	HX_STACK_LINE(706)
	Float tmp8 = this->m20;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(706)
	Float t20 = tmp8;		HX_STACK_VAR(t20,"t20");
	HX_STACK_LINE(706)
	Float tmp9 = this->m21;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(706)
	Float t21 = tmp9;		HX_STACK_VAR(t21,"t21");
	HX_STACK_LINE(706)
	Float tmp10 = this->m22;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(706)
	Float t22 = tmp10;		HX_STACK_VAR(t22,"t22");
	HX_STACK_LINE(706)
	Float tmp11 = this->m23;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(706)
	Float t23 = tmp11;		HX_STACK_VAR(t23,"t23");
	HX_STACK_LINE(707)
	Float tmp12 = this->m30;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(707)
	Float t30 = tmp12;		HX_STACK_VAR(t30,"t30");
	HX_STACK_LINE(707)
	Float tmp13 = this->m31;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(707)
	Float t31 = tmp13;		HX_STACK_VAR(t31,"t31");
	HX_STACK_LINE(707)
	Float tmp14 = this->m32;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(707)
	Float t32 = tmp14;		HX_STACK_VAR(t32,"t32");
	HX_STACK_LINE(707)
	Float tmp15 = this->m33;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(707)
	Float t33 = tmp15;		HX_STACK_VAR(t33,"t33");
	HX_STACK_LINE(708)
	Float tmp16 = t00;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(708)
	Float tmp17 = t10;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(708)
	Float tmp18 = t20;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(708)
	Float tmp19 = t30;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(708)
	Float tmp20 = t01;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(708)
	Float tmp21 = t11;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(708)
	Float tmp22 = t21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(708)
	Float tmp23 = t31;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(708)
	Float tmp24 = t02;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(708)
	Float tmp25 = t12;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(708)
	Float tmp26 = t22;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(708)
	Float tmp27 = t32;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(708)
	Float tmp28 = t03;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(708)
	Float tmp29 = t13;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(708)
	Float tmp30 = t23;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(708)
	Float tmp31 = t33;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(708)
	::haxor::math::Matrix4 tmp32 = this->Set(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(708)
	return tmp32;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,Transpose,return )

::haxor::math::Matrix4 Matrix4_obj::ToRotation( ){
	HX_STACK_FRAME("haxor.math.Matrix4","ToRotation",0xff26288e,"haxor.math.Matrix4.ToRotation","haxor/math/Matrix4.hx",716,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(717)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(717)
	{
		HX_STACK_LINE(717)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(717)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(717)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(717)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(717)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(717)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(717)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(717)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(717)
	::haxor::math::Vector3 tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(718)
	Float tmp2 = this->m00;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(718)
	Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(718)
	Float tmp4 = this->m02;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(718)
	::haxor::math::Vector3 tmp5 = tmp1->Set(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(718)
	tmp5->Normalize();
	HX_STACK_LINE(718)
	this->m00 = tmp1->x;
	HX_STACK_LINE(718)
	this->m01 = tmp1->y;
	HX_STACK_LINE(718)
	this->m02 = tmp1->z;
	HX_STACK_LINE(718)
	this->m03 = ((Float)0.0);
	HX_STACK_LINE(719)
	Float tmp6 = this->m10;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(719)
	Float tmp7 = this->m11;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(719)
	Float tmp8 = this->m12;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(719)
	::haxor::math::Vector3 tmp9 = tmp1->Set(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(719)
	tmp9->Normalize();
	HX_STACK_LINE(719)
	this->m10 = tmp1->x;
	HX_STACK_LINE(719)
	this->m11 = tmp1->y;
	HX_STACK_LINE(719)
	this->m12 = tmp1->z;
	HX_STACK_LINE(719)
	this->m13 = ((Float)0.0);
	HX_STACK_LINE(720)
	Float tmp10 = this->m20;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(720)
	Float tmp11 = this->m21;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(720)
	Float tmp12 = this->m22;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(720)
	::haxor::math::Vector3 tmp13 = tmp1->Set(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(720)
	tmp13->Normalize();
	HX_STACK_LINE(720)
	this->m20 = tmp1->x;
	HX_STACK_LINE(720)
	this->m21 = tmp1->y;
	HX_STACK_LINE(720)
	this->m22 = tmp1->z;
	HX_STACK_LINE(720)
	this->m23 = ((Float)0.0);
	HX_STACK_LINE(721)
	Float tmp14 = this->m32 = ((Float)0.0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(721)
	Float tmp15 = this->m31 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(721)
	this->m30 = tmp15;
	HX_STACK_LINE(721)
	this->m33 = ((Float)1.0);
	HX_STACK_LINE(722)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,ToRotation,return )

::haxor::math::Vector3 Matrix4_obj::Rotate( ::haxor::math::Vector3 p_vector){
	HX_STACK_FRAME("haxor.math.Matrix4","Rotate",0x4e3ade90,"haxor.math.Matrix4.Rotate","haxor/math/Matrix4.hx",731,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_vector,"p_vector")
	HX_STACK_LINE(732)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(732)
	{
		HX_STACK_LINE(732)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(732)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(732)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(732)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(732)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(732)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(732)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(732)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(732)
	::haxor::math::Vector3 tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(733)
	Float tmp2 = this->m00;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(733)
	Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(733)
	Float tmp4 = this->m02;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(733)
	::haxor::math::Vector3 tmp5 = tmp1->Set(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(733)
	tmp5->Normalize();
	HX_STACK_LINE(734)
	Float tmp6 = (tmp1->x * p_vector->x);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(734)
	Float tmp7 = (tmp1->y * p_vector->y);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(734)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(734)
	Float tmp9 = (tmp1->z * p_vector->z);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(734)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(734)
	p_vector->x = tmp10;
	HX_STACK_LINE(735)
	Float tmp11 = this->m10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(735)
	Float tmp12 = this->m11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(735)
	Float tmp13 = this->m12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(735)
	::haxor::math::Vector3 tmp14 = tmp1->Set(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(735)
	tmp14->Normalize();
	HX_STACK_LINE(736)
	Float tmp15 = (tmp1->x * p_vector->x);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(736)
	Float tmp16 = (tmp1->y * p_vector->y);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(736)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(736)
	Float tmp18 = (tmp1->z * p_vector->z);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(736)
	Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(736)
	p_vector->y = tmp19;
	HX_STACK_LINE(737)
	Float tmp20 = this->m20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(737)
	Float tmp21 = this->m21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(737)
	Float tmp22 = this->m22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(737)
	::haxor::math::Vector3 tmp23 = tmp1->Set(tmp20,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(737)
	tmp23->Normalize();
	HX_STACK_LINE(738)
	Float tmp24 = (tmp1->x * p_vector->x);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(738)
	Float tmp25 = (tmp1->y * p_vector->y);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(738)
	Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(738)
	Float tmp27 = (tmp1->z * p_vector->z);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(738)
	Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(738)
	p_vector->z = tmp28;
	HX_STACK_LINE(739)
	::haxor::math::Vector3 tmp29 = p_vector;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(739)
	return tmp29;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,Rotate,return )

::haxor::math::Matrix4 Matrix4_obj::SetTRS( ::haxor::math::Vector3 p_position,::haxor::math::Quaternion p_rotation,::haxor::math::Vector3 p_scale){
	HX_STACK_FRAME("haxor.math.Matrix4","SetTRS",0xf28a72e8,"haxor.math.Matrix4.SetTRS","haxor/math/Matrix4.hx",749,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_position,"p_position")
	HX_STACK_ARG(p_rotation,"p_rotation")
	HX_STACK_ARG(p_scale,"p_scale")
	HX_STACK_LINE(749)
	::haxor::math::Matrix4 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(749)
	{
		HX_STACK_LINE(749)
		bool tmp1 = (p_scale == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(749)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(749)
		if ((tmp1)){
			HX_STACK_LINE(749)
			tmp2 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(749)
			tmp2 = p_scale->x;
		}
		HX_STACK_LINE(749)
		Float sx = tmp2;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(749)
		bool tmp3 = (p_scale == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(749)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(749)
		if ((tmp3)){
			HX_STACK_LINE(749)
			tmp4 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(749)
			tmp4 = p_scale->y;
		}
		HX_STACK_LINE(749)
		Float sy = tmp4;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(749)
		bool tmp5 = (p_scale == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(749)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(749)
		if ((tmp5)){
			HX_STACK_LINE(749)
			tmp6 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(749)
			tmp6 = p_scale->z;
		}
		HX_STACK_LINE(749)
		Float sz = tmp6;		HX_STACK_VAR(sz,"sz");
		HX_STACK_LINE(749)
		Float px = p_position->x;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(749)
		Float py = p_position->y;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(749)
		Float pz = p_position->z;		HX_STACK_VAR(pz,"pz");
		HX_STACK_LINE(749)
		::haxor::math::Matrix4 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(749)
		{
			HX_STACK_LINE(749)
			::haxor::context::DataContext tmp8 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(749)
			::haxor::context::DataContext _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(749)
			Array< ::Dynamic > tmp9 = _this->m_m4;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(749)
			int tmp10 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(749)
			int tmp11 = _this->m_m4->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(749)
			int tmp12 = hx::Mod(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(749)
			int tmp13 = _this->m_nq = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(749)
			tmp7 = tmp9->__get(tmp13).StaticCast< ::haxor::math::Matrix4 >();
		}
		HX_STACK_LINE(749)
		::haxor::math::Matrix4 r = tmp7;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(749)
		::haxor::math::Quaternion tmp8 = p_rotation;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(749)
		::haxor::math::Matrix4 tmp9 = r;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(749)
		::haxor::math::Matrix4_obj::FromQuaternion(tmp8,tmp9);
		HX_STACK_LINE(749)
		bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(749)
		::haxor::math::Matrix4 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(749)
		if ((tmp10)){
			HX_STACK_LINE(749)
			tmp11 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);
		}
		else{
			HX_STACK_LINE(749)
			tmp11 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(749)
		::haxor::math::Matrix4 l = tmp11;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(749)
		Float tmp12 = (r->m00 * sx);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(749)
		l->m00 = tmp12;
		HX_STACK_LINE(749)
		Float tmp13 = (r->m01 * sy);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(749)
		l->m01 = tmp13;
		HX_STACK_LINE(749)
		Float tmp14 = (r->m02 * sz);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(749)
		l->m02 = tmp14;
		HX_STACK_LINE(749)
		l->m03 = px;
		HX_STACK_LINE(749)
		Float tmp15 = (r->m10 * sx);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(749)
		l->m10 = tmp15;
		HX_STACK_LINE(749)
		Float tmp16 = (r->m11 * sy);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(749)
		l->m11 = tmp16;
		HX_STACK_LINE(749)
		Float tmp17 = (r->m12 * sz);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(749)
		l->m12 = tmp17;
		HX_STACK_LINE(749)
		l->m13 = py;
		HX_STACK_LINE(749)
		Float tmp18 = (r->m20 * sx);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(749)
		l->m20 = tmp18;
		HX_STACK_LINE(749)
		Float tmp19 = (r->m21 * sy);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(749)
		l->m21 = tmp19;
		HX_STACK_LINE(749)
		Float tmp20 = (r->m22 * sz);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(749)
		l->m22 = tmp20;
		HX_STACK_LINE(749)
		l->m23 = pz;
		HX_STACK_LINE(749)
		Float tmp21 = l->m32 = ((Float)0.0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(749)
		Float tmp22 = l->m31 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(749)
		l->m30 = tmp22;
		HX_STACK_LINE(749)
		l->m33 = ((Float)1.0);
		HX_STACK_LINE(749)
		tmp = l;
	}
	HX_STACK_LINE(749)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix4_obj,SetTRS,return )

::haxor::math::Matrix4 Matrix4_obj::ToInverseTransform( ){
	HX_STACK_FRAME("haxor.math.Matrix4","ToInverseTransform",0x9c1986ec,"haxor.math.Matrix4.ToInverseTransform","haxor/math/Matrix4.hx",755,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(755)
	::haxor::math::Matrix4 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	{
		HX_STACK_LINE(755)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(755)
		Array< ::Dynamic > tmp2 = _this->m_m4;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		int tmp3 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(755)
		int tmp4 = _this->m_m4->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(755)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(755)
		int tmp6 = _this->m_nq = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(755)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Matrix4 >();
	}
	HX_STACK_LINE(755)
	::haxor::math::Matrix4 tmp1 = tmp->SetMatrix4(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(755)
	::haxor::math::Matrix4 tmp2 = ::haxor::math::Matrix4_obj::GetInverseTransform(tmp1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(755)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,ToInverseTransform,return )

::haxor::math::Matrix4 Matrix4_obj::MultiplyTransform( ::haxor::math::Matrix4 p_matrix){
	HX_STACK_FRAME("haxor.math.Matrix4","MultiplyTransform",0x2883e093,"haxor.math.Matrix4.MultiplyTransform","haxor/math/Matrix4.hx",763,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_matrix,"p_matrix")
	HX_STACK_LINE(764)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(764)
	Float tmp1 = p_matrix->m00;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(764)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(764)
	Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(764)
	Float tmp4 = p_matrix->m10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(764)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(764)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(764)
	Float tmp7 = this->m02;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(764)
	Float tmp8 = p_matrix->m20;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(764)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(764)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(764)
	Float r00 = tmp10;		HX_STACK_VAR(r00,"r00");
	HX_STACK_LINE(765)
	Float tmp11 = this->m00;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(765)
	Float tmp12 = p_matrix->m01;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(765)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(765)
	Float tmp14 = this->m01;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(765)
	Float tmp15 = p_matrix->m11;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(765)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(765)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(765)
	Float tmp18 = this->m02;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(765)
	Float tmp19 = p_matrix->m21;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(765)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(765)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(765)
	Float r01 = tmp21;		HX_STACK_VAR(r01,"r01");
	HX_STACK_LINE(766)
	Float tmp22 = this->m00;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(766)
	Float tmp23 = p_matrix->m02;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(766)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(766)
	Float tmp25 = this->m01;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(766)
	Float tmp26 = p_matrix->m12;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(766)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(766)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(766)
	Float tmp29 = this->m02;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(766)
	Float tmp30 = p_matrix->m22;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(766)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(766)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(766)
	Float r02 = tmp32;		HX_STACK_VAR(r02,"r02");
	HX_STACK_LINE(767)
	Float tmp33 = this->m00;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(767)
	Float tmp34 = p_matrix->m03;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(767)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(767)
	Float tmp36 = this->m01;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(767)
	Float tmp37 = p_matrix->m13;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(767)
	Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(767)
	Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(767)
	Float tmp40 = this->m02;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(767)
	Float tmp41 = p_matrix->m23;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(767)
	Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(767)
	Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(767)
	Float tmp44 = this->m03;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(767)
	Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(767)
	Float r03 = tmp45;		HX_STACK_VAR(r03,"r03");
	HX_STACK_LINE(768)
	Float tmp46 = this->m10;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(768)
	Float tmp47 = p_matrix->m00;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(768)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(768)
	Float tmp49 = this->m11;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(768)
	Float tmp50 = p_matrix->m10;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(768)
	Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(768)
	Float tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(768)
	Float tmp53 = this->m12;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(768)
	Float tmp54 = p_matrix->m20;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(768)
	Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(768)
	Float tmp56 = (tmp52 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(768)
	Float r10 = tmp56;		HX_STACK_VAR(r10,"r10");
	HX_STACK_LINE(769)
	Float tmp57 = this->m10;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(769)
	Float tmp58 = p_matrix->m01;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(769)
	Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(769)
	Float tmp60 = this->m11;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(769)
	Float tmp61 = p_matrix->m11;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(769)
	Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(769)
	Float tmp63 = (tmp59 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(769)
	Float tmp64 = this->m12;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(769)
	Float tmp65 = p_matrix->m21;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(769)
	Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(769)
	Float tmp67 = (tmp63 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(769)
	Float r11 = tmp67;		HX_STACK_VAR(r11,"r11");
	HX_STACK_LINE(770)
	Float tmp68 = this->m10;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(770)
	Float tmp69 = p_matrix->m02;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(770)
	Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(770)
	Float tmp71 = this->m11;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(770)
	Float tmp72 = p_matrix->m12;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(770)
	Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(770)
	Float tmp74 = (tmp70 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(770)
	Float tmp75 = this->m12;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(770)
	Float tmp76 = p_matrix->m22;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(770)
	Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(770)
	Float tmp78 = (tmp74 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(770)
	Float r12 = tmp78;		HX_STACK_VAR(r12,"r12");
	HX_STACK_LINE(771)
	Float tmp79 = this->m10;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(771)
	Float tmp80 = p_matrix->m03;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(771)
	Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(771)
	Float tmp82 = this->m11;		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(771)
	Float tmp83 = p_matrix->m13;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(771)
	Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(771)
	Float tmp85 = (tmp81 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(771)
	Float tmp86 = this->m12;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(771)
	Float tmp87 = p_matrix->m23;		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(771)
	Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(771)
	Float tmp89 = (tmp85 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(771)
	Float tmp90 = this->m13;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(771)
	Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(771)
	Float r13 = tmp91;		HX_STACK_VAR(r13,"r13");
	HX_STACK_LINE(772)
	Float tmp92 = this->m20;		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(772)
	Float tmp93 = p_matrix->m00;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(772)
	Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(772)
	Float tmp95 = this->m21;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(772)
	Float tmp96 = p_matrix->m10;		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(772)
	Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(772)
	Float tmp98 = (tmp94 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(772)
	Float tmp99 = this->m22;		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(772)
	Float tmp100 = p_matrix->m20;		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(772)
	Float tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(772)
	Float tmp102 = (tmp98 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(772)
	Float r20 = tmp102;		HX_STACK_VAR(r20,"r20");
	HX_STACK_LINE(773)
	Float tmp103 = this->m20;		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(773)
	Float tmp104 = p_matrix->m01;		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(773)
	Float tmp105 = (tmp103 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(773)
	Float tmp106 = this->m21;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(773)
	Float tmp107 = p_matrix->m11;		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(773)
	Float tmp108 = (tmp106 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(773)
	Float tmp109 = (tmp105 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(773)
	Float tmp110 = this->m22;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(773)
	Float tmp111 = p_matrix->m21;		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(773)
	Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(773)
	Float tmp113 = (tmp109 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(773)
	Float r21 = tmp113;		HX_STACK_VAR(r21,"r21");
	HX_STACK_LINE(774)
	Float tmp114 = this->m20;		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(774)
	Float tmp115 = p_matrix->m02;		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(774)
	Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(774)
	Float tmp117 = this->m21;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(774)
	Float tmp118 = p_matrix->m12;		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(774)
	Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(774)
	Float tmp120 = (tmp116 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(774)
	Float tmp121 = this->m22;		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(774)
	Float tmp122 = p_matrix->m22;		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(774)
	Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(774)
	Float tmp124 = (tmp120 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(774)
	Float r22 = tmp124;		HX_STACK_VAR(r22,"r22");
	HX_STACK_LINE(775)
	Float tmp125 = this->m20;		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(775)
	Float tmp126 = p_matrix->m03;		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(775)
	Float tmp127 = (tmp125 * tmp126);		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(775)
	Float tmp128 = this->m21;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(775)
	Float tmp129 = p_matrix->m13;		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(775)
	Float tmp130 = (tmp128 * tmp129);		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(775)
	Float tmp131 = (tmp127 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(775)
	Float tmp132 = this->m22;		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(775)
	Float tmp133 = p_matrix->m23;		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(775)
	Float tmp134 = (tmp132 * tmp133);		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(775)
	Float tmp135 = (tmp131 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(775)
	Float tmp136 = this->m23;		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(775)
	Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(775)
	Float r23 = tmp137;		HX_STACK_VAR(r23,"r23");
	HX_STACK_LINE(777)
	Float tmp138 = r00;		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(777)
	Float tmp139 = r01;		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(777)
	Float tmp140 = r02;		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(777)
	Float tmp141 = r03;		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(778)
	Float tmp142 = r10;		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(778)
	Float tmp143 = r11;		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(778)
	Float tmp144 = r12;		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(778)
	Float tmp145 = r13;		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(779)
	Float tmp146 = r20;		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(779)
	Float tmp147 = r21;		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(779)
	Float tmp148 = r22;		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(779)
	Float tmp149 = r23;		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(776)
	this->Set(tmp138,tmp139,tmp140,tmp141,tmp142,tmp143,tmp144,tmp145,tmp146,tmp147,tmp148,tmp149,(int)0,(int)0,(int)0,(int)1);
	HX_STACK_LINE(781)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,MultiplyTransform,return )

::haxor::math::Matrix4 Matrix4_obj::Multiply3x4( ::haxor::math::Matrix4 p_matrix){
	HX_STACK_FRAME("haxor.math.Matrix4","Multiply3x4",0x6d87afb6,"haxor.math.Matrix4.Multiply3x4","haxor/math/Matrix4.hx",790,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_matrix,"p_matrix")
	HX_STACK_LINE(791)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(791)
	Float tmp1 = p_matrix->m00;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(791)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(791)
	Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(791)
	Float tmp4 = p_matrix->m10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(791)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(791)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(791)
	Float tmp7 = this->m02;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(791)
	Float tmp8 = p_matrix->m20;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(791)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(791)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(791)
	Float tmp11 = this->m03;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(791)
	Float tmp12 = p_matrix->m30;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(791)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(791)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(791)
	Float r00 = tmp14;		HX_STACK_VAR(r00,"r00");
	HX_STACK_LINE(792)
	Float tmp15 = this->m00;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(792)
	Float tmp16 = p_matrix->m01;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(792)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(792)
	Float tmp18 = this->m01;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(792)
	Float tmp19 = p_matrix->m11;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(792)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(792)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(792)
	Float tmp22 = this->m02;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(792)
	Float tmp23 = p_matrix->m21;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(792)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(792)
	Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(792)
	Float tmp26 = this->m03;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(792)
	Float tmp27 = p_matrix->m31;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(792)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(792)
	Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(792)
	Float r01 = tmp29;		HX_STACK_VAR(r01,"r01");
	HX_STACK_LINE(793)
	Float tmp30 = this->m00;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(793)
	Float tmp31 = p_matrix->m02;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(793)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(793)
	Float tmp33 = this->m01;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(793)
	Float tmp34 = p_matrix->m12;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(793)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(793)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(793)
	Float tmp37 = this->m02;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(793)
	Float tmp38 = p_matrix->m22;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(793)
	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(793)
	Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(793)
	Float tmp41 = this->m03;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(793)
	Float tmp42 = p_matrix->m32;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(793)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(793)
	Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(793)
	Float r02 = tmp44;		HX_STACK_VAR(r02,"r02");
	HX_STACK_LINE(794)
	Float tmp45 = this->m00;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(794)
	Float tmp46 = p_matrix->m03;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(794)
	Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(794)
	Float tmp48 = this->m01;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(794)
	Float tmp49 = p_matrix->m13;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(794)
	Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(794)
	Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(794)
	Float tmp52 = this->m02;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(794)
	Float tmp53 = p_matrix->m23;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(794)
	Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(794)
	Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(794)
	Float tmp56 = this->m03;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(794)
	Float tmp57 = p_matrix->m33;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(794)
	Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(794)
	Float tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(794)
	Float r03 = tmp59;		HX_STACK_VAR(r03,"r03");
	HX_STACK_LINE(795)
	Float tmp60 = this->m10;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(795)
	Float tmp61 = p_matrix->m00;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(795)
	Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(795)
	Float tmp63 = this->m11;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(795)
	Float tmp64 = p_matrix->m10;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(795)
	Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(795)
	Float tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(795)
	Float tmp67 = this->m12;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(795)
	Float tmp68 = p_matrix->m20;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(795)
	Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(795)
	Float tmp70 = (tmp66 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(795)
	Float tmp71 = this->m13;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(795)
	Float tmp72 = p_matrix->m30;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(795)
	Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(795)
	Float tmp74 = (tmp70 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(795)
	Float r10 = tmp74;		HX_STACK_VAR(r10,"r10");
	HX_STACK_LINE(796)
	Float tmp75 = this->m10;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(796)
	Float tmp76 = p_matrix->m01;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(796)
	Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(796)
	Float tmp78 = this->m11;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(796)
	Float tmp79 = p_matrix->m11;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(796)
	Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(796)
	Float tmp81 = (tmp77 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(796)
	Float tmp82 = this->m12;		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(796)
	Float tmp83 = p_matrix->m21;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(796)
	Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(796)
	Float tmp85 = (tmp81 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(796)
	Float tmp86 = this->m13;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(796)
	Float tmp87 = p_matrix->m31;		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(796)
	Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(796)
	Float tmp89 = (tmp85 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(796)
	Float r11 = tmp89;		HX_STACK_VAR(r11,"r11");
	HX_STACK_LINE(797)
	Float tmp90 = this->m10;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(797)
	Float tmp91 = p_matrix->m02;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(797)
	Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(797)
	Float tmp93 = this->m11;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(797)
	Float tmp94 = p_matrix->m12;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(797)
	Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(797)
	Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(797)
	Float tmp97 = this->m12;		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(797)
	Float tmp98 = p_matrix->m22;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(797)
	Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(797)
	Float tmp100 = (tmp96 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(797)
	Float tmp101 = this->m13;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(797)
	Float tmp102 = p_matrix->m32;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(797)
	Float tmp103 = (tmp101 * tmp102);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(797)
	Float tmp104 = (tmp100 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(797)
	Float r12 = tmp104;		HX_STACK_VAR(r12,"r12");
	HX_STACK_LINE(798)
	Float tmp105 = this->m10;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(798)
	Float tmp106 = p_matrix->m03;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(798)
	Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(798)
	Float tmp108 = this->m11;		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(798)
	Float tmp109 = p_matrix->m13;		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(798)
	Float tmp110 = (tmp108 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(798)
	Float tmp111 = (tmp107 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(798)
	Float tmp112 = this->m12;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(798)
	Float tmp113 = p_matrix->m23;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(798)
	Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(798)
	Float tmp115 = (tmp111 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(798)
	Float tmp116 = this->m13;		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(798)
	Float tmp117 = p_matrix->m33;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(798)
	Float tmp118 = (tmp116 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(798)
	Float tmp119 = (tmp115 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(798)
	Float r13 = tmp119;		HX_STACK_VAR(r13,"r13");
	HX_STACK_LINE(799)
	Float tmp120 = this->m20;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(799)
	Float tmp121 = p_matrix->m00;		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(799)
	Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(799)
	Float tmp123 = this->m21;		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(799)
	Float tmp124 = p_matrix->m10;		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(799)
	Float tmp125 = (tmp123 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(799)
	Float tmp126 = (tmp122 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(799)
	Float tmp127 = this->m22;		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(799)
	Float tmp128 = p_matrix->m20;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(799)
	Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(799)
	Float tmp130 = (tmp126 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(799)
	Float tmp131 = this->m23;		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(799)
	Float tmp132 = p_matrix->m30;		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(799)
	Float tmp133 = (tmp131 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(799)
	Float tmp134 = (tmp130 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(799)
	Float r20 = tmp134;		HX_STACK_VAR(r20,"r20");
	HX_STACK_LINE(800)
	Float tmp135 = this->m20;		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(800)
	Float tmp136 = p_matrix->m01;		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(800)
	Float tmp137 = (tmp135 * tmp136);		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(800)
	Float tmp138 = this->m21;		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(800)
	Float tmp139 = p_matrix->m11;		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(800)
	Float tmp140 = (tmp138 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(800)
	Float tmp141 = (tmp137 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(800)
	Float tmp142 = this->m22;		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(800)
	Float tmp143 = p_matrix->m21;		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(800)
	Float tmp144 = (tmp142 * tmp143);		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(800)
	Float tmp145 = (tmp141 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(800)
	Float tmp146 = this->m23;		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(800)
	Float tmp147 = p_matrix->m31;		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(800)
	Float tmp148 = (tmp146 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(800)
	Float tmp149 = (tmp145 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(800)
	Float r21 = tmp149;		HX_STACK_VAR(r21,"r21");
	HX_STACK_LINE(801)
	Float tmp150 = this->m20;		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(801)
	Float tmp151 = p_matrix->m02;		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(801)
	Float tmp152 = (tmp150 * tmp151);		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(801)
	Float tmp153 = this->m21;		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(801)
	Float tmp154 = p_matrix->m12;		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(801)
	Float tmp155 = (tmp153 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(801)
	Float tmp156 = (tmp152 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(801)
	Float tmp157 = this->m22;		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(801)
	Float tmp158 = p_matrix->m22;		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(801)
	Float tmp159 = (tmp157 * tmp158);		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(801)
	Float tmp160 = (tmp156 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(801)
	Float tmp161 = this->m23;		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(801)
	Float tmp162 = p_matrix->m32;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(801)
	Float tmp163 = (tmp161 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(801)
	Float tmp164 = (tmp160 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(801)
	Float r22 = tmp164;		HX_STACK_VAR(r22,"r22");
	HX_STACK_LINE(802)
	Float tmp165 = this->m20;		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(802)
	Float tmp166 = p_matrix->m03;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(802)
	Float tmp167 = (tmp165 * tmp166);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(802)
	Float tmp168 = this->m21;		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(802)
	Float tmp169 = p_matrix->m13;		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(802)
	Float tmp170 = (tmp168 * tmp169);		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(802)
	Float tmp171 = (tmp167 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(802)
	Float tmp172 = this->m22;		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(802)
	Float tmp173 = p_matrix->m23;		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(802)
	Float tmp174 = (tmp172 * tmp173);		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(802)
	Float tmp175 = (tmp171 + tmp174);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(802)
	Float tmp176 = this->m23;		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(802)
	Float tmp177 = p_matrix->m33;		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(802)
	Float tmp178 = (tmp176 * tmp177);		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(802)
	Float tmp179 = (tmp175 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(802)
	Float r23 = tmp179;		HX_STACK_VAR(r23,"r23");
	HX_STACK_LINE(804)
	Float tmp180 = r00;		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(804)
	Float tmp181 = r01;		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(804)
	Float tmp182 = r02;		HX_STACK_VAR(tmp182,"tmp182");
	HX_STACK_LINE(804)
	Float tmp183 = r03;		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(805)
	Float tmp184 = r10;		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(805)
	Float tmp185 = r11;		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(805)
	Float tmp186 = r12;		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(805)
	Float tmp187 = r13;		HX_STACK_VAR(tmp187,"tmp187");
	HX_STACK_LINE(806)
	Float tmp188 = r20;		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(806)
	Float tmp189 = r21;		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(806)
	Float tmp190 = r22;		HX_STACK_VAR(tmp190,"tmp190");
	HX_STACK_LINE(806)
	Float tmp191 = r23;		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(807)
	Float tmp192 = this->m30;		HX_STACK_VAR(tmp192,"tmp192");
	HX_STACK_LINE(807)
	Float tmp193 = this->m31;		HX_STACK_VAR(tmp193,"tmp193");
	HX_STACK_LINE(807)
	Float tmp194 = this->m32;		HX_STACK_VAR(tmp194,"tmp194");
	HX_STACK_LINE(807)
	Float tmp195 = this->m33;		HX_STACK_VAR(tmp195,"tmp195");
	HX_STACK_LINE(803)
	this->Set(tmp180,tmp181,tmp182,tmp183,tmp184,tmp185,tmp186,tmp187,tmp188,tmp189,tmp190,tmp191,tmp192,tmp193,tmp194,tmp195);
	HX_STACK_LINE(808)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,Multiply3x4,return )

::haxor::math::Matrix4 Matrix4_obj::Multiply( ::haxor::math::Matrix4 p_matrix){
	HX_STACK_FRAME("haxor.math.Matrix4","Multiply",0x0ba5b199,"haxor.math.Matrix4.Multiply","haxor/math/Matrix4.hx",817,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_matrix,"p_matrix")
	HX_STACK_LINE(818)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	Float tmp1 = p_matrix->m00;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(818)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(818)
	Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(818)
	Float tmp4 = p_matrix->m10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(818)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(818)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(818)
	Float tmp7 = this->m02;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(818)
	Float tmp8 = p_matrix->m20;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(818)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(818)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(818)
	Float tmp11 = this->m03;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(818)
	Float tmp12 = p_matrix->m30;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(818)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(818)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(818)
	Float r00 = tmp14;		HX_STACK_VAR(r00,"r00");
	HX_STACK_LINE(819)
	Float tmp15 = this->m00;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(819)
	Float tmp16 = p_matrix->m01;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(819)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(819)
	Float tmp18 = this->m01;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(819)
	Float tmp19 = p_matrix->m11;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(819)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(819)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(819)
	Float tmp22 = this->m02;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(819)
	Float tmp23 = p_matrix->m21;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(819)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(819)
	Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(819)
	Float tmp26 = this->m03;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(819)
	Float tmp27 = p_matrix->m31;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(819)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(819)
	Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(819)
	Float r01 = tmp29;		HX_STACK_VAR(r01,"r01");
	HX_STACK_LINE(820)
	Float tmp30 = this->m00;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(820)
	Float tmp31 = p_matrix->m02;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(820)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(820)
	Float tmp33 = this->m01;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(820)
	Float tmp34 = p_matrix->m12;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(820)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(820)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(820)
	Float tmp37 = this->m02;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(820)
	Float tmp38 = p_matrix->m22;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(820)
	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(820)
	Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(820)
	Float tmp41 = this->m03;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(820)
	Float tmp42 = p_matrix->m32;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(820)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(820)
	Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(820)
	Float r02 = tmp44;		HX_STACK_VAR(r02,"r02");
	HX_STACK_LINE(821)
	Float tmp45 = this->m00;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(821)
	Float tmp46 = p_matrix->m03;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(821)
	Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(821)
	Float tmp48 = this->m01;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(821)
	Float tmp49 = p_matrix->m13;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(821)
	Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(821)
	Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(821)
	Float tmp52 = this->m02;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(821)
	Float tmp53 = p_matrix->m23;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(821)
	Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(821)
	Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(821)
	Float tmp56 = this->m03;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(821)
	Float tmp57 = p_matrix->m33;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(821)
	Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(821)
	Float tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(821)
	Float r03 = tmp59;		HX_STACK_VAR(r03,"r03");
	HX_STACK_LINE(822)
	Float tmp60 = this->m10;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(822)
	Float tmp61 = p_matrix->m00;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(822)
	Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(822)
	Float tmp63 = this->m11;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(822)
	Float tmp64 = p_matrix->m10;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(822)
	Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(822)
	Float tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(822)
	Float tmp67 = this->m12;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(822)
	Float tmp68 = p_matrix->m20;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(822)
	Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(822)
	Float tmp70 = (tmp66 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(822)
	Float tmp71 = this->m13;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(822)
	Float tmp72 = p_matrix->m30;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(822)
	Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(822)
	Float tmp74 = (tmp70 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(822)
	Float r10 = tmp74;		HX_STACK_VAR(r10,"r10");
	HX_STACK_LINE(823)
	Float tmp75 = this->m10;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(823)
	Float tmp76 = p_matrix->m01;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(823)
	Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(823)
	Float tmp78 = this->m11;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(823)
	Float tmp79 = p_matrix->m11;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(823)
	Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(823)
	Float tmp81 = (tmp77 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(823)
	Float tmp82 = this->m12;		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(823)
	Float tmp83 = p_matrix->m21;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(823)
	Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(823)
	Float tmp85 = (tmp81 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(823)
	Float tmp86 = this->m13;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(823)
	Float tmp87 = p_matrix->m31;		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(823)
	Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(823)
	Float tmp89 = (tmp85 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(823)
	Float r11 = tmp89;		HX_STACK_VAR(r11,"r11");
	HX_STACK_LINE(824)
	Float tmp90 = this->m10;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(824)
	Float tmp91 = p_matrix->m02;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(824)
	Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(824)
	Float tmp93 = this->m11;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(824)
	Float tmp94 = p_matrix->m12;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(824)
	Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(824)
	Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(824)
	Float tmp97 = this->m12;		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(824)
	Float tmp98 = p_matrix->m22;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(824)
	Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(824)
	Float tmp100 = (tmp96 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(824)
	Float tmp101 = this->m13;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(824)
	Float tmp102 = p_matrix->m32;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(824)
	Float tmp103 = (tmp101 * tmp102);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(824)
	Float tmp104 = (tmp100 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(824)
	Float r12 = tmp104;		HX_STACK_VAR(r12,"r12");
	HX_STACK_LINE(825)
	Float tmp105 = this->m10;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(825)
	Float tmp106 = p_matrix->m03;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(825)
	Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(825)
	Float tmp108 = this->m11;		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(825)
	Float tmp109 = p_matrix->m13;		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(825)
	Float tmp110 = (tmp108 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(825)
	Float tmp111 = (tmp107 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(825)
	Float tmp112 = this->m12;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(825)
	Float tmp113 = p_matrix->m23;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(825)
	Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(825)
	Float tmp115 = (tmp111 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(825)
	Float tmp116 = this->m13;		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(825)
	Float tmp117 = p_matrix->m33;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(825)
	Float tmp118 = (tmp116 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(825)
	Float tmp119 = (tmp115 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(825)
	Float r13 = tmp119;		HX_STACK_VAR(r13,"r13");
	HX_STACK_LINE(826)
	Float tmp120 = this->m20;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(826)
	Float tmp121 = p_matrix->m00;		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(826)
	Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(826)
	Float tmp123 = this->m21;		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(826)
	Float tmp124 = p_matrix->m10;		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(826)
	Float tmp125 = (tmp123 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(826)
	Float tmp126 = (tmp122 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(826)
	Float tmp127 = this->m22;		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(826)
	Float tmp128 = p_matrix->m20;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(826)
	Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(826)
	Float tmp130 = (tmp126 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(826)
	Float tmp131 = this->m23;		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(826)
	Float tmp132 = p_matrix->m30;		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(826)
	Float tmp133 = (tmp131 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(826)
	Float tmp134 = (tmp130 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(826)
	Float r20 = tmp134;		HX_STACK_VAR(r20,"r20");
	HX_STACK_LINE(827)
	Float tmp135 = this->m20;		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(827)
	Float tmp136 = p_matrix->m01;		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(827)
	Float tmp137 = (tmp135 * tmp136);		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(827)
	Float tmp138 = this->m21;		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(827)
	Float tmp139 = p_matrix->m11;		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(827)
	Float tmp140 = (tmp138 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(827)
	Float tmp141 = (tmp137 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(827)
	Float tmp142 = this->m22;		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(827)
	Float tmp143 = p_matrix->m21;		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(827)
	Float tmp144 = (tmp142 * tmp143);		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(827)
	Float tmp145 = (tmp141 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(827)
	Float tmp146 = this->m23;		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(827)
	Float tmp147 = p_matrix->m31;		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(827)
	Float tmp148 = (tmp146 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(827)
	Float tmp149 = (tmp145 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(827)
	Float r21 = tmp149;		HX_STACK_VAR(r21,"r21");
	HX_STACK_LINE(828)
	Float tmp150 = this->m20;		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(828)
	Float tmp151 = p_matrix->m02;		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(828)
	Float tmp152 = (tmp150 * tmp151);		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(828)
	Float tmp153 = this->m21;		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(828)
	Float tmp154 = p_matrix->m12;		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(828)
	Float tmp155 = (tmp153 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(828)
	Float tmp156 = (tmp152 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(828)
	Float tmp157 = this->m22;		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(828)
	Float tmp158 = p_matrix->m22;		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(828)
	Float tmp159 = (tmp157 * tmp158);		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(828)
	Float tmp160 = (tmp156 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(828)
	Float tmp161 = this->m23;		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(828)
	Float tmp162 = p_matrix->m32;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(828)
	Float tmp163 = (tmp161 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(828)
	Float tmp164 = (tmp160 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(828)
	Float r22 = tmp164;		HX_STACK_VAR(r22,"r22");
	HX_STACK_LINE(829)
	Float tmp165 = this->m20;		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(829)
	Float tmp166 = p_matrix->m03;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(829)
	Float tmp167 = (tmp165 * tmp166);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(829)
	Float tmp168 = this->m21;		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(829)
	Float tmp169 = p_matrix->m13;		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(829)
	Float tmp170 = (tmp168 * tmp169);		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(829)
	Float tmp171 = (tmp167 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(829)
	Float tmp172 = this->m22;		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(829)
	Float tmp173 = p_matrix->m23;		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(829)
	Float tmp174 = (tmp172 * tmp173);		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(829)
	Float tmp175 = (tmp171 + tmp174);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(829)
	Float tmp176 = this->m23;		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(829)
	Float tmp177 = p_matrix->m33;		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(829)
	Float tmp178 = (tmp176 * tmp177);		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(829)
	Float tmp179 = (tmp175 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(829)
	Float r23 = tmp179;		HX_STACK_VAR(r23,"r23");
	HX_STACK_LINE(831)
	Float tmp180 = this->m30;		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(831)
	Float tmp181 = p_matrix->m00;		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(831)
	Float tmp182 = (tmp180 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
	HX_STACK_LINE(831)
	Float tmp183 = this->m31;		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(831)
	Float tmp184 = p_matrix->m10;		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(831)
	Float tmp185 = (tmp183 * tmp184);		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(831)
	Float tmp186 = (tmp182 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(831)
	Float tmp187 = this->m32;		HX_STACK_VAR(tmp187,"tmp187");
	HX_STACK_LINE(831)
	Float tmp188 = p_matrix->m20;		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(831)
	Float tmp189 = (tmp187 * tmp188);		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(831)
	Float tmp190 = (tmp186 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
	HX_STACK_LINE(831)
	Float tmp191 = this->m33;		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(831)
	Float tmp192 = p_matrix->m30;		HX_STACK_VAR(tmp192,"tmp192");
	HX_STACK_LINE(831)
	Float tmp193 = (tmp191 * tmp192);		HX_STACK_VAR(tmp193,"tmp193");
	HX_STACK_LINE(831)
	Float tmp194 = (tmp190 + tmp193);		HX_STACK_VAR(tmp194,"tmp194");
	HX_STACK_LINE(831)
	Float r30 = tmp194;		HX_STACK_VAR(r30,"r30");
	HX_STACK_LINE(832)
	Float tmp195 = this->m30;		HX_STACK_VAR(tmp195,"tmp195");
	HX_STACK_LINE(832)
	Float tmp196 = p_matrix->m01;		HX_STACK_VAR(tmp196,"tmp196");
	HX_STACK_LINE(832)
	Float tmp197 = (tmp195 * tmp196);		HX_STACK_VAR(tmp197,"tmp197");
	HX_STACK_LINE(832)
	Float tmp198 = this->m31;		HX_STACK_VAR(tmp198,"tmp198");
	HX_STACK_LINE(832)
	Float tmp199 = p_matrix->m11;		HX_STACK_VAR(tmp199,"tmp199");
	HX_STACK_LINE(832)
	Float tmp200 = (tmp198 * tmp199);		HX_STACK_VAR(tmp200,"tmp200");
	HX_STACK_LINE(832)
	Float tmp201 = (tmp197 + tmp200);		HX_STACK_VAR(tmp201,"tmp201");
	HX_STACK_LINE(832)
	Float tmp202 = this->m32;		HX_STACK_VAR(tmp202,"tmp202");
	HX_STACK_LINE(832)
	Float tmp203 = p_matrix->m21;		HX_STACK_VAR(tmp203,"tmp203");
	HX_STACK_LINE(832)
	Float tmp204 = (tmp202 * tmp203);		HX_STACK_VAR(tmp204,"tmp204");
	HX_STACK_LINE(832)
	Float tmp205 = (tmp201 + tmp204);		HX_STACK_VAR(tmp205,"tmp205");
	HX_STACK_LINE(832)
	Float tmp206 = this->m33;		HX_STACK_VAR(tmp206,"tmp206");
	HX_STACK_LINE(832)
	Float tmp207 = p_matrix->m31;		HX_STACK_VAR(tmp207,"tmp207");
	HX_STACK_LINE(832)
	Float tmp208 = (tmp206 * tmp207);		HX_STACK_VAR(tmp208,"tmp208");
	HX_STACK_LINE(832)
	Float tmp209 = (tmp205 + tmp208);		HX_STACK_VAR(tmp209,"tmp209");
	HX_STACK_LINE(832)
	Float r31 = tmp209;		HX_STACK_VAR(r31,"r31");
	HX_STACK_LINE(833)
	Float tmp210 = this->m30;		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(833)
	Float tmp211 = p_matrix->m02;		HX_STACK_VAR(tmp211,"tmp211");
	HX_STACK_LINE(833)
	Float tmp212 = (tmp210 * tmp211);		HX_STACK_VAR(tmp212,"tmp212");
	HX_STACK_LINE(833)
	Float tmp213 = this->m31;		HX_STACK_VAR(tmp213,"tmp213");
	HX_STACK_LINE(833)
	Float tmp214 = p_matrix->m12;		HX_STACK_VAR(tmp214,"tmp214");
	HX_STACK_LINE(833)
	Float tmp215 = (tmp213 * tmp214);		HX_STACK_VAR(tmp215,"tmp215");
	HX_STACK_LINE(833)
	Float tmp216 = (tmp212 + tmp215);		HX_STACK_VAR(tmp216,"tmp216");
	HX_STACK_LINE(833)
	Float tmp217 = this->m32;		HX_STACK_VAR(tmp217,"tmp217");
	HX_STACK_LINE(833)
	Float tmp218 = p_matrix->m22;		HX_STACK_VAR(tmp218,"tmp218");
	HX_STACK_LINE(833)
	Float tmp219 = (tmp217 * tmp218);		HX_STACK_VAR(tmp219,"tmp219");
	HX_STACK_LINE(833)
	Float tmp220 = (tmp216 + tmp219);		HX_STACK_VAR(tmp220,"tmp220");
	HX_STACK_LINE(833)
	Float tmp221 = this->m33;		HX_STACK_VAR(tmp221,"tmp221");
	HX_STACK_LINE(833)
	Float tmp222 = p_matrix->m32;		HX_STACK_VAR(tmp222,"tmp222");
	HX_STACK_LINE(833)
	Float tmp223 = (tmp221 * tmp222);		HX_STACK_VAR(tmp223,"tmp223");
	HX_STACK_LINE(833)
	Float tmp224 = (tmp220 + tmp223);		HX_STACK_VAR(tmp224,"tmp224");
	HX_STACK_LINE(833)
	Float r32 = tmp224;		HX_STACK_VAR(r32,"r32");
	HX_STACK_LINE(834)
	Float tmp225 = this->m30;		HX_STACK_VAR(tmp225,"tmp225");
	HX_STACK_LINE(834)
	Float tmp226 = p_matrix->m03;		HX_STACK_VAR(tmp226,"tmp226");
	HX_STACK_LINE(834)
	Float tmp227 = (tmp225 * tmp226);		HX_STACK_VAR(tmp227,"tmp227");
	HX_STACK_LINE(834)
	Float tmp228 = this->m31;		HX_STACK_VAR(tmp228,"tmp228");
	HX_STACK_LINE(834)
	Float tmp229 = p_matrix->m13;		HX_STACK_VAR(tmp229,"tmp229");
	HX_STACK_LINE(834)
	Float tmp230 = (tmp228 * tmp229);		HX_STACK_VAR(tmp230,"tmp230");
	HX_STACK_LINE(834)
	Float tmp231 = (tmp227 + tmp230);		HX_STACK_VAR(tmp231,"tmp231");
	HX_STACK_LINE(834)
	Float tmp232 = this->m32;		HX_STACK_VAR(tmp232,"tmp232");
	HX_STACK_LINE(834)
	Float tmp233 = p_matrix->m23;		HX_STACK_VAR(tmp233,"tmp233");
	HX_STACK_LINE(834)
	Float tmp234 = (tmp232 * tmp233);		HX_STACK_VAR(tmp234,"tmp234");
	HX_STACK_LINE(834)
	Float tmp235 = (tmp231 + tmp234);		HX_STACK_VAR(tmp235,"tmp235");
	HX_STACK_LINE(834)
	Float tmp236 = this->m33;		HX_STACK_VAR(tmp236,"tmp236");
	HX_STACK_LINE(834)
	Float tmp237 = p_matrix->m33;		HX_STACK_VAR(tmp237,"tmp237");
	HX_STACK_LINE(834)
	Float tmp238 = (tmp236 * tmp237);		HX_STACK_VAR(tmp238,"tmp238");
	HX_STACK_LINE(834)
	Float tmp239 = (tmp235 + tmp238);		HX_STACK_VAR(tmp239,"tmp239");
	HX_STACK_LINE(834)
	Float r33 = tmp239;		HX_STACK_VAR(r33,"r33");
	HX_STACK_LINE(836)
	Float tmp240 = r00;		HX_STACK_VAR(tmp240,"tmp240");
	HX_STACK_LINE(836)
	Float tmp241 = r01;		HX_STACK_VAR(tmp241,"tmp241");
	HX_STACK_LINE(836)
	Float tmp242 = r02;		HX_STACK_VAR(tmp242,"tmp242");
	HX_STACK_LINE(836)
	Float tmp243 = r03;		HX_STACK_VAR(tmp243,"tmp243");
	HX_STACK_LINE(837)
	Float tmp244 = r10;		HX_STACK_VAR(tmp244,"tmp244");
	HX_STACK_LINE(837)
	Float tmp245 = r11;		HX_STACK_VAR(tmp245,"tmp245");
	HX_STACK_LINE(837)
	Float tmp246 = r12;		HX_STACK_VAR(tmp246,"tmp246");
	HX_STACK_LINE(837)
	Float tmp247 = r13;		HX_STACK_VAR(tmp247,"tmp247");
	HX_STACK_LINE(838)
	Float tmp248 = r20;		HX_STACK_VAR(tmp248,"tmp248");
	HX_STACK_LINE(838)
	Float tmp249 = r21;		HX_STACK_VAR(tmp249,"tmp249");
	HX_STACK_LINE(838)
	Float tmp250 = r22;		HX_STACK_VAR(tmp250,"tmp250");
	HX_STACK_LINE(838)
	Float tmp251 = r23;		HX_STACK_VAR(tmp251,"tmp251");
	HX_STACK_LINE(839)
	Float tmp252 = r30;		HX_STACK_VAR(tmp252,"tmp252");
	HX_STACK_LINE(839)
	Float tmp253 = r31;		HX_STACK_VAR(tmp253,"tmp253");
	HX_STACK_LINE(839)
	Float tmp254 = r32;		HX_STACK_VAR(tmp254,"tmp254");
	HX_STACK_LINE(839)
	Float tmp255 = r33;		HX_STACK_VAR(tmp255,"tmp255");
	HX_STACK_LINE(835)
	this->Set(tmp240,tmp241,tmp242,tmp243,tmp244,tmp245,tmp246,tmp247,tmp248,tmp249,tmp250,tmp251,tmp252,tmp253,tmp254,tmp255);
	HX_STACK_LINE(840)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,Multiply,return )

::haxor::math::Vector4 Matrix4_obj::Transform4x4( ::haxor::math::Vector4 p_point){
	HX_STACK_FRAME("haxor.math.Matrix4","Transform4x4",0x6b8009f9,"haxor.math.Matrix4.Transform4x4","haxor/math/Matrix4.hx",848,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_point,"p_point")
	HX_STACK_LINE(849)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(849)
	Float tmp1 = p_point->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(849)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(849)
	Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(849)
	Float tmp4 = p_point->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(849)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(849)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(849)
	Float tmp7 = this->m02;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(849)
	Float tmp8 = p_point->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(849)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(849)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(849)
	Float tmp11 = this->m03;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(849)
	Float tmp12 = p_point->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(849)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(849)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(849)
	Float vx = tmp14;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(850)
	Float tmp15 = this->m10;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(850)
	Float tmp16 = p_point->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(850)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(850)
	Float tmp18 = this->m11;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(850)
	Float tmp19 = p_point->y;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(850)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(850)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(850)
	Float tmp22 = this->m12;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(850)
	Float tmp23 = p_point->z;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(850)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(850)
	Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(850)
	Float tmp26 = this->m13;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(850)
	Float tmp27 = p_point->w;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(850)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(850)
	Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(850)
	Float vy = tmp29;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(851)
	Float tmp30 = this->m20;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(851)
	Float tmp31 = p_point->x;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(851)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(851)
	Float tmp33 = this->m21;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(851)
	Float tmp34 = p_point->y;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(851)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(851)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(851)
	Float tmp37 = this->m22;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(851)
	Float tmp38 = p_point->z;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(851)
	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(851)
	Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(851)
	Float tmp41 = this->m23;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(851)
	Float tmp42 = p_point->w;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(851)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(851)
	Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(851)
	Float vz = tmp44;		HX_STACK_VAR(vz,"vz");
	HX_STACK_LINE(852)
	Float tmp45 = this->m30;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(852)
	Float tmp46 = p_point->x;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(852)
	Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(852)
	Float tmp48 = this->m31;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(852)
	Float tmp49 = p_point->y;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(852)
	Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(852)
	Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(852)
	Float tmp52 = this->m32;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(852)
	Float tmp53 = p_point->z;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(852)
	Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(852)
	Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(852)
	Float tmp56 = this->m33;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(852)
	Float tmp57 = p_point->w;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(852)
	Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(852)
	Float tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(852)
	Float vw = tmp59;		HX_STACK_VAR(vw,"vw");
	HX_STACK_LINE(853)
	p_point->x = vx;
	HX_STACK_LINE(854)
	p_point->y = vy;
	HX_STACK_LINE(855)
	p_point->z = vz;
	HX_STACK_LINE(856)
	p_point->w = vw;
	HX_STACK_LINE(857)
	::haxor::math::Vector4 tmp60 = p_point;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(857)
	return tmp60;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,Transform4x4,return )

::haxor::math::Vector3 Matrix4_obj::Transform3x4( ::haxor::math::Vector3 p_point){
	HX_STACK_FRAME("haxor.math.Matrix4","Transform3x4",0x6b7f47b8,"haxor.math.Matrix4.Transform3x4","haxor/math/Matrix4.hx",865,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_point,"p_point")
	HX_STACK_LINE(866)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(866)
	Float tmp1 = p_point->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(866)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(866)
	Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(866)
	Float tmp4 = p_point->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(866)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(866)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(866)
	Float tmp7 = this->m02;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(866)
	Float tmp8 = p_point->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(866)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(866)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(866)
	Float tmp11 = this->m03;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(866)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(866)
	Float vx = tmp12;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(867)
	Float tmp13 = this->m10;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(867)
	Float tmp14 = p_point->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(867)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(867)
	Float tmp16 = this->m11;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(867)
	Float tmp17 = p_point->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(867)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(867)
	Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(867)
	Float tmp20 = this->m12;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(867)
	Float tmp21 = p_point->z;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(867)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(867)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(867)
	Float tmp24 = this->m13;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(867)
	Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(867)
	Float vy = tmp25;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(868)
	Float tmp26 = this->m20;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(868)
	Float tmp27 = p_point->x;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(868)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(868)
	Float tmp29 = this->m21;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(868)
	Float tmp30 = p_point->y;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(868)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(868)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(868)
	Float tmp33 = this->m22;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(868)
	Float tmp34 = p_point->z;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(868)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(868)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(868)
	Float tmp37 = this->m23;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(868)
	Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(868)
	Float vz = tmp38;		HX_STACK_VAR(vz,"vz");
	HX_STACK_LINE(869)
	p_point->x = vx;
	HX_STACK_LINE(870)
	p_point->y = vy;
	HX_STACK_LINE(871)
	p_point->z = vz;
	HX_STACK_LINE(872)
	::haxor::math::Vector3 tmp39 = p_point;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(872)
	return tmp39;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,Transform3x4,return )

::haxor::math::Vector3 Matrix4_obj::Transform3x3( ::haxor::math::Vector3 p_point){
	HX_STACK_FRAME("haxor.math.Matrix4","Transform3x3",0x6b7f47b7,"haxor.math.Matrix4.Transform3x3","haxor/math/Matrix4.hx",880,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_point,"p_point")
	HX_STACK_LINE(881)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(881)
	Float tmp1 = p_point->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(881)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(881)
	Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(881)
	Float tmp4 = p_point->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(881)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(881)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(881)
	Float tmp7 = this->m02;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(881)
	Float tmp8 = p_point->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(881)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(881)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(881)
	Float vx = tmp10;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(882)
	Float tmp11 = this->m10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(882)
	Float tmp12 = p_point->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(882)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(882)
	Float tmp14 = this->m11;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(882)
	Float tmp15 = p_point->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(882)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(882)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(882)
	Float tmp18 = this->m12;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(882)
	Float tmp19 = p_point->z;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(882)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(882)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(882)
	Float vy = tmp21;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(883)
	Float tmp22 = this->m20;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(883)
	Float tmp23 = p_point->x;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(883)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(883)
	Float tmp25 = this->m21;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(883)
	Float tmp26 = p_point->y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(883)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(883)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(883)
	Float tmp29 = this->m22;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(883)
	Float tmp30 = p_point->z;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(883)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(883)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(883)
	Float vz = tmp32;		HX_STACK_VAR(vz,"vz");
	HX_STACK_LINE(884)
	p_point->x = vx;
	HX_STACK_LINE(885)
	p_point->y = vy;
	HX_STACK_LINE(886)
	p_point->z = vz;
	HX_STACK_LINE(887)
	::haxor::math::Vector3 tmp33 = p_point;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(887)
	return tmp33;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,Transform3x3,return )

Void Matrix4_obj::Transform2x3( ::haxor::math::Vector2 p_point){
{
		HX_STACK_FRAME("haxor.math.Matrix4","Transform2x3",0x6b7e8576,"haxor.math.Matrix4.Transform2x3","haxor/math/Matrix4.hx",895,0xc9a22505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_point,"p_point")
		HX_STACK_LINE(896)
		Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(896)
		Float tmp1 = p_point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(896)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(896)
		Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(896)
		Float tmp4 = p_point->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(896)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(896)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(896)
		Float tmp7 = this->m03;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(896)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(896)
		Float vx = tmp8;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(897)
		Float tmp9 = this->m10;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(897)
		Float tmp10 = p_point->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(897)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(897)
		Float tmp12 = this->m11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(897)
		Float tmp13 = p_point->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(897)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(897)
		Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(897)
		Float tmp16 = this->m13;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(897)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(897)
		Float vy = tmp17;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(898)
		p_point->x = vx;
		HX_STACK_LINE(899)
		p_point->y = vy;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,Transform2x3,(void))

Void Matrix4_obj::Transform2x2( ::haxor::math::Vector2 p_point){
{
		HX_STACK_FRAME("haxor.math.Matrix4","Transform2x2",0x6b7e8575,"haxor.math.Matrix4.Transform2x2","haxor/math/Matrix4.hx",907,0xc9a22505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_point,"p_point")
		HX_STACK_LINE(908)
		Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(908)
		Float tmp1 = p_point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(908)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(908)
		Float tmp3 = this->m01;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(908)
		Float tmp4 = p_point->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(908)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(908)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(908)
		Float vx = tmp6;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(909)
		Float tmp7 = this->m10;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(909)
		Float tmp8 = p_point->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(909)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(909)
		Float tmp10 = this->m11;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(909)
		Float tmp11 = p_point->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(909)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(909)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(909)
		Float vy = tmp13;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(910)
		p_point->x = vx;
		HX_STACK_LINE(911)
		p_point->y = vy;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4_obj,Transform2x2,(void))

::haxor::math::Matrix4 Matrix4_obj::SetLookAt( ::haxor::math::Vector3 p_eye,::haxor::math::Vector3 p_at,::haxor::math::Vector3 p_up){
	HX_STACK_FRAME("haxor.math.Matrix4","SetLookAt",0x45f9a15f,"haxor.math.Matrix4.SetLookAt","haxor/math/Matrix4.hx",921,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_eye,"p_eye")
	HX_STACK_ARG(p_at,"p_at")
	HX_STACK_ARG(p_up,"p_up")
	HX_STACK_LINE(921)
	::haxor::math::Vector3 tmp = p_eye;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(921)
	::haxor::math::Vector3 tmp1 = p_at;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(921)
	::haxor::math::Vector3 tmp2 = p_up;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(921)
	::haxor::math::Matrix4 tmp3 = ::haxor::math::Matrix4_obj::LookAt(tmp,tmp1,tmp2,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(921)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix4_obj,SetLookAt,return )

::haxor::math::Matrix4 Matrix4_obj::SetFrustum( Float p_left,Float p_right,Float p_top,Float p_bottom,Float p_near,Float p_far){
	HX_STACK_FRAME("haxor.math.Matrix4","SetFrustum",0xa7dcc295,"haxor.math.Matrix4.SetFrustum","haxor/math/Matrix4.hx",933,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_left,"p_left")
	HX_STACK_ARG(p_right,"p_right")
	HX_STACK_ARG(p_top,"p_top")
	HX_STACK_ARG(p_bottom,"p_bottom")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_LINE(933)
	::haxor::math::Matrix4 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(933)
	{
		HX_STACK_LINE(933)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(933)
		::haxor::math::Matrix4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(933)
		if ((tmp1)){
			HX_STACK_LINE(933)
			tmp2 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(933)
			tmp2 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(933)
		::haxor::math::Matrix4 m = tmp2;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(933)
		Float tmp3 = (p_near * ((Float)2.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(933)
		Float n2 = tmp3;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(933)
		Float tmp4 = (p_right - p_left);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(933)
		Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(933)
		Float rml = tmp5;		HX_STACK_VAR(rml,"rml");
		HX_STACK_LINE(933)
		Float tmp6 = (p_top - p_bottom);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(933)
		Float tmp7 = (Float(((Float)1.0)) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(933)
		Float tmb = tmp7;		HX_STACK_VAR(tmb,"tmb");
		HX_STACK_LINE(933)
		Float tmp8 = (p_far - p_near);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(933)
		Float tmp9 = (Float(((Float)1.0)) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(933)
		Float fmn = tmp9;		HX_STACK_VAR(fmn,"fmn");
		HX_STACK_LINE(933)
		Float tmp10 = (n2 * rml);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(933)
		m->m00 = tmp10;
		HX_STACK_LINE(933)
		m->m01 = ((Float)0.0);
		HX_STACK_LINE(933)
		Float tmp11 = (p_right + p_left);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(933)
		Float tmp12 = rml;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(933)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(933)
		m->m02 = tmp13;
		HX_STACK_LINE(933)
		m->m03 = ((Float)0.0);
		HX_STACK_LINE(933)
		m->m10 = ((Float)0.0);
		HX_STACK_LINE(933)
		Float tmp14 = (n2 * tmb);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(933)
		m->m11 = tmp14;
		HX_STACK_LINE(933)
		Float tmp15 = (p_top + p_bottom);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(933)
		Float tmp16 = tmb;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(933)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(933)
		m->m12 = tmp17;
		HX_STACK_LINE(933)
		m->m13 = ((Float)0.0);
		HX_STACK_LINE(933)
		m->m20 = ((Float)0.0);
		HX_STACK_LINE(933)
		m->m21 = ((Float)0.0);
		HX_STACK_LINE(933)
		Float tmp18 = (p_near + p_far);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(933)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(933)
		Float tmp20 = fmn;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(933)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(933)
		m->m22 = tmp21;
		HX_STACK_LINE(933)
		Float tmp22 = n2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(933)
		Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(933)
		Float tmp24 = p_far;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(933)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(933)
		Float tmp26 = fmn;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(933)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(933)
		m->m23 = tmp27;
		HX_STACK_LINE(933)
		m->m30 = ((Float)0.0);
		HX_STACK_LINE(933)
		m->m31 = ((Float)0.0);
		HX_STACK_LINE(933)
		m->m32 = ((Float)-1.0);
		HX_STACK_LINE(933)
		m->m33 = (int)0;
		HX_STACK_LINE(933)
		tmp = m;
	}
	HX_STACK_LINE(933)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix4_obj,SetFrustum,return )

::haxor::math::Matrix4 Matrix4_obj::SetFrustumInverse( Float p_left,Float p_right,Float p_top,Float p_bottom,Float p_near,Float p_far){
	HX_STACK_FRAME("haxor.math.Matrix4","SetFrustumInverse",0xdbbe5d9b,"haxor.math.Matrix4.SetFrustumInverse","haxor/math/Matrix4.hx",945,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_left,"p_left")
	HX_STACK_ARG(p_right,"p_right")
	HX_STACK_ARG(p_top,"p_top")
	HX_STACK_ARG(p_bottom,"p_bottom")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_LINE(945)
	::haxor::math::Matrix4 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(945)
	{
		HX_STACK_LINE(945)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(945)
		::haxor::math::Matrix4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(945)
		if ((tmp1)){
			HX_STACK_LINE(945)
			tmp2 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(945)
			tmp2 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(945)
		::haxor::math::Matrix4 m = tmp2;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(945)
		Float tmp3 = (p_near * ((Float)2.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(945)
		Float n2 = tmp3;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(945)
		Float tmp4 = (p_right - p_left);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(945)
		Float rml = tmp4;		HX_STACK_VAR(rml,"rml");
		HX_STACK_LINE(945)
		Float tmp5 = (p_top - p_bottom);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(945)
		Float tmb = tmp5;		HX_STACK_VAR(tmb,"tmb");
		HX_STACK_LINE(945)
		Float tmp6 = (p_far - p_near);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(945)
		Float fmn = tmp6;		HX_STACK_VAR(fmn,"fmn");
		HX_STACK_LINE(945)
		Float tmp7 = (Float(rml) / Float(n2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(945)
		m->m00 = tmp7;
		HX_STACK_LINE(945)
		m->m01 = ((Float)0.0);
		HX_STACK_LINE(945)
		m->m02 = ((Float)0.0);
		HX_STACK_LINE(945)
		Float tmp8 = (p_right + p_left);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(945)
		Float tmp9 = n2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(945)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(945)
		m->m03 = tmp10;
		HX_STACK_LINE(945)
		m->m10 = ((Float)0.0);
		HX_STACK_LINE(945)
		Float tmp11 = (Float(tmb) / Float(n2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(945)
		m->m11 = tmp11;
		HX_STACK_LINE(945)
		m->m12 = ((Float)0.0);
		HX_STACK_LINE(945)
		Float tmp12 = (p_top + p_bottom);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(945)
		Float tmp13 = n2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(945)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(945)
		m->m13 = tmp14;
		HX_STACK_LINE(945)
		m->m20 = ((Float)0.0);
		HX_STACK_LINE(945)
		m->m21 = ((Float)0.0);
		HX_STACK_LINE(945)
		m->m22 = ((Float)0.0);
		HX_STACK_LINE(945)
		m->m23 = ((Float)-1.0);
		HX_STACK_LINE(945)
		m->m30 = ((Float)0.0);
		HX_STACK_LINE(945)
		m->m31 = ((Float)0.0);
		HX_STACK_LINE(945)
		Float tmp15 = fmn;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(945)
		Float tmp16 = n2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(945)
		Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(945)
		Float tmp18 = p_far;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(945)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(945)
		Float tmp20 = (Float(tmp15) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(945)
		m->m32 = tmp20;
		HX_STACK_LINE(945)
		Float tmp21 = (p_far + p_near);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(945)
		Float tmp22 = (n2 * p_far);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(945)
		Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(945)
		m->m33 = tmp23;
		HX_STACK_LINE(945)
		tmp = m;
	}
	HX_STACK_LINE(945)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix4_obj,SetFrustumInverse,return )

::haxor::math::Matrix4 Matrix4_obj::SetOrtho( Float p_left,Float p_right,Float p_top,Float p_bottom,Float p_near,Float p_far){
	HX_STACK_FRAME("haxor.math.Matrix4","SetOrtho",0xb47a4fab,"haxor.math.Matrix4.SetOrtho","haxor/math/Matrix4.hx",957,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_left,"p_left")
	HX_STACK_ARG(p_right,"p_right")
	HX_STACK_ARG(p_top,"p_top")
	HX_STACK_ARG(p_bottom,"p_bottom")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_LINE(957)
	Float tmp = p_left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(957)
	Float tmp1 = p_right;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(957)
	Float tmp2 = p_top;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(957)
	Float tmp3 = p_bottom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(957)
	Float tmp4 = p_near;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(957)
	Float tmp5 = p_far;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(957)
	::haxor::math::Matrix4 tmp6 = ::haxor::math::Matrix4_obj::Ortho(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(957)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix4_obj,SetOrtho,return )

::haxor::math::Matrix4 Matrix4_obj::SetOrthoInverse( Float p_left,Float p_right,Float p_top,Float p_bottom,Float p_near,Float p_far){
	HX_STACK_FRAME("haxor.math.Matrix4","SetOrthoInverse",0xfff23f45,"haxor.math.Matrix4.SetOrthoInverse","haxor/math/Matrix4.hx",963,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_left,"p_left")
	HX_STACK_ARG(p_right,"p_right")
	HX_STACK_ARG(p_top,"p_top")
	HX_STACK_ARG(p_bottom,"p_bottom")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_LINE(963)
	Float tmp = p_left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(963)
	Float tmp1 = p_right;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(963)
	Float tmp2 = p_top;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(963)
	Float tmp3 = p_bottom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(963)
	Float tmp4 = p_near;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(963)
	Float tmp5 = p_far;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(963)
	::haxor::math::Matrix4 tmp6 = ::haxor::math::Matrix4_obj::OrthoInverse(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(963)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix4_obj,SetOrthoInverse,return )

::haxor::math::Matrix4 Matrix4_obj::SetPerspective( Float p_fov,Float p_aspect,Float p_near,Float p_far){
	HX_STACK_FRAME("haxor.math.Matrix4","SetPerspective",0x981d762f,"haxor.math.Matrix4.SetPerspective","haxor/math/Matrix4.hx",973,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_fov,"p_fov")
	HX_STACK_ARG(p_aspect,"p_aspect")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_LINE(973)
	Float tmp = p_fov;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(973)
	Float tmp1 = p_aspect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(973)
	Float tmp2 = p_near;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(973)
	Float tmp3 = p_far;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(973)
	::haxor::math::Matrix4 tmp4 = ::haxor::math::Matrix4_obj::Perspective(tmp,tmp1,tmp2,tmp3,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(973)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix4_obj,SetPerspective,return )

::haxor::math::Matrix4 Matrix4_obj::SetPerspectiveInverse( Float p_fov,Float p_aspect,Float p_near,Float p_far){
	HX_STACK_FRAME("haxor.math.Matrix4","SetPerspectiveInverse",0x21a2b141,"haxor.math.Matrix4.SetPerspectiveInverse","haxor/math/Matrix4.hx",983,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_fov,"p_fov")
	HX_STACK_ARG(p_aspect,"p_aspect")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_LINE(983)
	Float tmp = p_fov;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(983)
	Float tmp1 = p_aspect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(983)
	Float tmp2 = p_near;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(983)
	Float tmp3 = p_far;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(983)
	::haxor::math::Matrix4 tmp4 = ::haxor::math::Matrix4_obj::PerspectiveInverse(tmp,tmp1,tmp2,tmp3,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(983)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix4_obj,SetPerspectiveInverse,return )

Array< Float > Matrix4_obj::ToArray( ){
	HX_STACK_FRAME("haxor.math.Matrix4","ToArray",0x263e5049,"haxor.math.Matrix4.ToArray","haxor/math/Matrix4.hx",989,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(989)
	Float tmp = this->m00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(989)
	Float tmp1 = this->m01;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(989)
	Float tmp2 = this->m02;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(989)
	Float tmp3 = this->m03;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(989)
	Float tmp4 = this->m10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(989)
	Float tmp5 = this->m11;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(989)
	Float tmp6 = this->m12;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(989)
	Float tmp7 = this->m13;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(989)
	Float tmp8 = this->m20;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(989)
	Float tmp9 = this->m21;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(989)
	Float tmp10 = this->m22;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(989)
	Float tmp11 = this->m23;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(989)
	Float tmp12 = this->m30;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(989)
	Float tmp13 = this->m31;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(989)
	Float tmp14 = this->m32;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(989)
	Float tmp15 = this->m33;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(989)
	Array< Float > tmp16 = Array_obj< Float >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(989)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,ToArray,return )

::String Matrix4_obj::ToString( hx::Null< bool >  __o_p_linear,hx::Null< int >  __o_p_places){
bool p_linear = __o_p_linear.Default(true);
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.Matrix4","ToString",0xa987a021,"haxor.math.Matrix4.ToString","haxor/math/Matrix4.hx",996,0xc9a22505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_linear,"p_linear")
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(997)
		Array< Float > tmp = this->ToArray();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(997)
		Array< Float > a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(998)
		Array< ::String > tmp1 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(998)
		Array< ::String > s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(999)
		{
			HX_STACK_LINE(999)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(999)
			int _g = a->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(999)
			while((true)){
				HX_STACK_LINE(999)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(999)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(999)
				if ((tmp3)){
					HX_STACK_LINE(999)
					break;
				}
				HX_STACK_LINE(999)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(999)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1001)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1001)
				{
					HX_STACK_LINE(1001)
					int tmp6 = p_places;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1001)
					Float tmp7 = ::Math_obj::pow((int)10,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1001)
					Float d = tmp7;		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1001)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1001)
					{
						HX_STACK_LINE(1001)
						Float tmp9 = a->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1001)
						Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1001)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1001)
						Float p_v = tmp11;		HX_STACK_VAR(p_v,"p_v");
						HX_STACK_LINE(1001)
						Float tmp12 = p_v;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1001)
						bool tmp13 = (p_v < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1001)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1001)
						if ((tmp13)){
							HX_STACK_LINE(1001)
							tmp14 = ((Float)-0.5);
						}
						else{
							HX_STACK_LINE(1001)
							tmp14 = ((Float)0.5);
						}
						HX_STACK_LINE(1001)
						Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1001)
						int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1001)
						tmp8 = ((Float)(tmp16));
					}
					HX_STACK_LINE(1001)
					Float tmp9 = d;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1001)
					tmp5 = (Float(tmp8) / Float(tmp9));
				}
				HX_STACK_LINE(1001)
				a[i] = tmp5;
				HX_STACK_LINE(1002)
				Float tmp6 = a->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1002)
				bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1002)
				::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1002)
				if ((tmp7)){
					HX_STACK_LINE(1002)
					Float tmp9 = a->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1002)
					tmp8 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp9);
				}
				else{
					HX_STACK_LINE(1002)
					Float tmp9 = a->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1002)
					tmp8 = (tmp9 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(1002)
				s->push(tmp8);
			}
		}
		HX_STACK_LINE(1004)
		bool tmp2 = p_linear;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1004)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1004)
		if ((tmp2)){
			HX_STACK_LINE(1004)
			tmp3 = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(1004)
			tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(1004)
		::String res = tmp3;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(1005)
		{
			HX_STACK_LINE(1005)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1005)
			while((true)){
				HX_STACK_LINE(1005)
				bool tmp4 = (_g < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1005)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1005)
				if ((tmp5)){
					HX_STACK_LINE(1005)
					break;
				}
				HX_STACK_LINE(1005)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1005)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1007)
				{
					HX_STACK_LINE(1007)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1007)
					while((true)){
						HX_STACK_LINE(1007)
						bool tmp7 = (_g1 < (int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1007)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1007)
						if ((tmp8)){
							HX_STACK_LINE(1007)
							break;
						}
						HX_STACK_LINE(1007)
						int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1007)
						int j = tmp9;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1007)
						Array< ::String > tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1007)
						int tmp11 = j;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1007)
						int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1007)
						int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1007)
						::String tmp14 = tmp10->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1007)
						bool tmp15 = (j < (int)3);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1007)
						::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1007)
						if ((tmp15)){
							HX_STACK_LINE(1007)
							tmp16 = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
						}
						else{
							HX_STACK_LINE(1007)
							tmp16 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(1007)
						::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1007)
						hx::AddEq(res,tmp17);
					}
				}
				HX_STACK_LINE(1008)
				bool tmp7 = (i == (int)3);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1008)
				::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1008)
				if ((tmp7)){
					HX_STACK_LINE(1008)
					tmp8 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(1008)
					bool tmp9 = p_linear;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1008)
					if ((tmp9)){
						HX_STACK_LINE(1008)
						tmp8 = HX_HCSTRING(" |","\x5c","\x1c","\x00","\x00");
					}
					else{
						HX_STACK_LINE(1008)
						tmp8 = HX_HCSTRING("\n","\x0a","\x00","\x00","\x00");
					}
				}
				HX_STACK_LINE(1008)
				hx::AddEq(res,tmp8);
			}
		}
		HX_STACK_LINE(1011)
		bool tmp4 = p_linear;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1011)
		if ((tmp4)){
			HX_STACK_LINE(1011)
			hx::AddEq(res,HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(1012)
		::String tmp5 = res;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1012)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,ToString,return )

::haxor::math::Matrix4 Matrix4_obj::temp;

::haxor::math::Matrix4 Matrix4_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_temp",0x641b91f2,"haxor.math.Matrix4.get_temp","haxor/math/Matrix4.hx",17,0xc9a22505)
	HX_STACK_LINE(17)
	::haxor::math::Matrix4 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(17)
		Array< ::Dynamic > tmp2 = _this->m_m4;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		int tmp3 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		int tmp4 = _this->m_m4->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		int tmp6 = _this->m_nq = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Matrix4 >();
	}
	HX_STACK_LINE(17)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_temp,return )

::haxor::math::Matrix4 Matrix4_obj::identity;

::haxor::math::Matrix4 Matrix4_obj::get_identity( ){
	HX_STACK_FRAME("haxor.math.Matrix4","get_identity",0xd344db1c,"haxor.math.Matrix4.get_identity","haxor/math/Matrix4.hx",23,0xc9a22505)
	HX_STACK_LINE(23)
	::haxor::math::Matrix4 tmp = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix4_obj,get_identity,return )

::haxor::math::Matrix4 Matrix4_obj::FromQuaternion( ::haxor::math::Quaternion p_quaternion,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","FromQuaternion",0x4363b45d,"haxor.math.Matrix4.FromQuaternion","haxor/math/Matrix4.hx",32,0xc9a22505)
	HX_STACK_ARG(p_quaternion,"p_quaternion")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(33)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	if ((tmp)){
		HX_STACK_LINE(33)
		tmp1 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(33)
		tmp1 = p_result;
	}
	HX_STACK_LINE(33)
	::haxor::math::Matrix4 m = tmp1;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(34)
	::haxor::math::Quaternion q = p_quaternion;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(35)
	Float tmp2 = (q->x * q->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	Float x2 = tmp2;		HX_STACK_VAR(x2,"x2");
	HX_STACK_LINE(36)
	Float tmp3 = (q->y * q->y);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	Float y2 = tmp3;		HX_STACK_VAR(y2,"y2");
	HX_STACK_LINE(37)
	Float tmp4 = (q->z * q->z);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	Float z2 = tmp4;		HX_STACK_VAR(z2,"z2");
	HX_STACK_LINE(38)
	Float tmp5 = (q->x * q->y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	Float xy = tmp5;		HX_STACK_VAR(xy,"xy");
	HX_STACK_LINE(39)
	Float tmp6 = (q->x * q->z);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	Float xz = tmp6;		HX_STACK_VAR(xz,"xz");
	HX_STACK_LINE(40)
	Float tmp7 = (q->y * q->z);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	Float yz = tmp7;		HX_STACK_VAR(yz,"yz");
	HX_STACK_LINE(41)
	Float tmp8 = (q->w * q->x);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(41)
	Float xw = tmp8;		HX_STACK_VAR(xw,"xw");
	HX_STACK_LINE(42)
	Float tmp9 = (q->w * q->y);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(42)
	Float yw = tmp9;		HX_STACK_VAR(yw,"yw");
	HX_STACK_LINE(43)
	Float tmp10 = (q->w * q->z);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	Float zw = tmp10;		HX_STACK_VAR(zw,"zw");
	HX_STACK_LINE(44)
	Float tmp11 = (y2 + z2);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	Float tmp12 = (((Float)2.0) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(44)
	Float tmp13 = (((Float)1.0) - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	m->m00 = tmp13;
	HX_STACK_LINE(44)
	Float tmp14 = (xy - zw);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	Float tmp15 = (((Float)2.0) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(44)
	m->m01 = tmp15;
	HX_STACK_LINE(44)
	Float tmp16 = (xz + yw);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(44)
	Float tmp17 = (((Float)2.0) * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(44)
	m->m02 = tmp17;
	HX_STACK_LINE(45)
	Float tmp18 = (xy + zw);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(45)
	Float tmp19 = (((Float)2.0) * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(45)
	m->m10 = tmp19;
	HX_STACK_LINE(45)
	Float tmp20 = (x2 + z2);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(45)
	Float tmp21 = (((Float)2.0) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(45)
	Float tmp22 = (((Float)1.0) - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(45)
	m->m11 = tmp22;
	HX_STACK_LINE(45)
	Float tmp23 = (yz - xw);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(45)
	Float tmp24 = (((Float)2.0) * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(45)
	m->m12 = tmp24;
	HX_STACK_LINE(46)
	Float tmp25 = (xz - yw);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(46)
	Float tmp26 = (((Float)2.0) * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(46)
	m->m20 = tmp26;
	HX_STACK_LINE(46)
	Float tmp27 = (yz + xw);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(46)
	Float tmp28 = (((Float)2.0) * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(46)
	m->m21 = tmp28;
	HX_STACK_LINE(46)
	Float tmp29 = (x2 + y2);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(46)
	Float tmp30 = (((Float)2.0) * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(46)
	Float tmp31 = (((Float)1.0) - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(46)
	m->m22 = tmp31;
	HX_STACK_LINE(47)
	Float tmp32 = m->m32 = ((Float)0.0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(47)
	Float tmp33 = m->m31 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(47)
	m->m30 = tmp33;
	HX_STACK_LINE(47)
	m->m33 = ((Float)1.0);
	HX_STACK_LINE(48)
	::haxor::math::Matrix4 tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(48)
	return tmp34;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,FromQuaternion,return )

::haxor::math::Matrix4 Matrix4_obj::FromArray( Array< Float > p_array,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","FromArray",0x5eb50eba,"haxor.math.Matrix4.FromArray","haxor/math/Matrix4.hx",56,0xc9a22505)
	HX_STACK_ARG(p_array,"p_array")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(56)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	if ((tmp)){
		HX_STACK_LINE(56)
		tmp1 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(56)
		tmp1 = p_result;
	}
	HX_STACK_LINE(56)
	::haxor::math::Matrix4 res = tmp1;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(56)
		int _g = p_array->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		while((true)){
			HX_STACK_LINE(56)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			if ((tmp3)){
				HX_STACK_LINE(56)
				break;
			}
			HX_STACK_LINE(56)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(56)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			Float tmp6 = p_array->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			res->SetIndex(tmp5,tmp6);
		}
	}
	HX_STACK_LINE(56)
	::haxor::math::Matrix4 tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,FromArray,return )

::haxor::math::Matrix4 Matrix4_obj::TRS( ::haxor::math::Vector3 p_position,::haxor::math::Quaternion p_rotation,::haxor::math::Vector3 p_scale,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","TRS",0xdf7bb1e0,"haxor.math.Matrix4.TRS","haxor/math/Matrix4.hx",66,0xc9a22505)
	HX_STACK_ARG(p_position,"p_position")
	HX_STACK_ARG(p_rotation,"p_rotation")
	HX_STACK_ARG(p_scale,"p_scale")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(67)
	bool tmp = (p_scale == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	if ((tmp)){
		HX_STACK_LINE(67)
		tmp1 = ((Float)1.0);
	}
	else{
		HX_STACK_LINE(67)
		tmp1 = p_scale->x;
	}
	HX_STACK_LINE(67)
	Float sx = tmp1;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(68)
	bool tmp2 = (p_scale == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	if ((tmp2)){
		HX_STACK_LINE(68)
		tmp3 = ((Float)1.0);
	}
	else{
		HX_STACK_LINE(68)
		tmp3 = p_scale->y;
	}
	HX_STACK_LINE(68)
	Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(69)
	bool tmp4 = (p_scale == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	if ((tmp4)){
		HX_STACK_LINE(69)
		tmp5 = ((Float)1.0);
	}
	else{
		HX_STACK_LINE(69)
		tmp5 = p_scale->z;
	}
	HX_STACK_LINE(69)
	Float sz = tmp5;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(70)
	Float px = p_position->x;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(71)
	Float py = p_position->y;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(72)
	Float pz = p_position->z;		HX_STACK_VAR(pz,"pz");
	HX_STACK_LINE(73)
	::haxor::math::Matrix4 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		::haxor::context::DataContext tmp7 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		::haxor::context::DataContext _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(73)
		Array< ::Dynamic > tmp8 = _this->m_m4;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		int tmp9 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		int tmp10 = _this->m_m4->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		int tmp11 = hx::Mod(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		int tmp12 = _this->m_nq = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(73)
		tmp6 = tmp8->__get(tmp12).StaticCast< ::haxor::math::Matrix4 >();
	}
	HX_STACK_LINE(73)
	::haxor::math::Matrix4 r = tmp6;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(74)
	::haxor::math::Quaternion tmp7 = p_rotation;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(74)
	::haxor::math::Matrix4 tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(74)
	::haxor::math::Matrix4_obj::FromQuaternion(tmp7,tmp8);
	HX_STACK_LINE(75)
	bool tmp9 = (p_result == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(75)
	::haxor::math::Matrix4 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(75)
	if ((tmp9)){
		HX_STACK_LINE(75)
		tmp10 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);
	}
	else{
		HX_STACK_LINE(75)
		tmp10 = p_result;
	}
	HX_STACK_LINE(75)
	::haxor::math::Matrix4 l = tmp10;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(76)
	Float tmp11 = (r->m00 * sx);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(76)
	l->m00 = tmp11;
	HX_STACK_LINE(76)
	Float tmp12 = (r->m01 * sy);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(76)
	l->m01 = tmp12;
	HX_STACK_LINE(76)
	Float tmp13 = (r->m02 * sz);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(76)
	l->m02 = tmp13;
	HX_STACK_LINE(76)
	l->m03 = px;
	HX_STACK_LINE(77)
	Float tmp14 = (r->m10 * sx);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(77)
	l->m10 = tmp14;
	HX_STACK_LINE(77)
	Float tmp15 = (r->m11 * sy);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	l->m11 = tmp15;
	HX_STACK_LINE(77)
	Float tmp16 = (r->m12 * sz);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(77)
	l->m12 = tmp16;
	HX_STACK_LINE(77)
	l->m13 = py;
	HX_STACK_LINE(78)
	Float tmp17 = (r->m20 * sx);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(78)
	l->m20 = tmp17;
	HX_STACK_LINE(78)
	Float tmp18 = (r->m21 * sy);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(78)
	l->m21 = tmp18;
	HX_STACK_LINE(78)
	Float tmp19 = (r->m22 * sz);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(78)
	l->m22 = tmp19;
	HX_STACK_LINE(78)
	l->m23 = pz;
	HX_STACK_LINE(79)
	Float tmp20 = l->m32 = ((Float)0.0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(79)
	Float tmp21 = l->m31 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(79)
	l->m30 = tmp21;
	HX_STACK_LINE(79)
	l->m33 = ((Float)1.0);
	HX_STACK_LINE(80)
	::haxor::math::Matrix4 tmp22 = l;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(80)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_obj,TRS,return )

::haxor::math::Matrix4 Matrix4_obj::Frustum( Float p_left,Float p_right,Float p_top,Float p_bottom,Float p_near,Float p_far,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","Frustum",0x04a4dd8d,"haxor.math.Matrix4.Frustum","haxor/math/Matrix4.hx",95,0xc9a22505)
	HX_STACK_ARG(p_left,"p_left")
	HX_STACK_ARG(p_right,"p_right")
	HX_STACK_ARG(p_top,"p_top")
	HX_STACK_ARG(p_bottom,"p_bottom")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(96)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	if ((tmp)){
		HX_STACK_LINE(96)
		tmp1 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(96)
		tmp1 = p_result;
	}
	HX_STACK_LINE(96)
	::haxor::math::Matrix4 m = tmp1;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(97)
	Float tmp2 = (p_near * ((Float)2.0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	Float n2 = tmp2;		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(98)
	Float tmp3 = (p_right - p_left);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	Float tmp4 = (Float(((Float)1.0)) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	Float rml = tmp4;		HX_STACK_VAR(rml,"rml");
	HX_STACK_LINE(99)
	Float tmp5 = (p_top - p_bottom);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	Float tmp6 = (Float(((Float)1.0)) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(99)
	Float tmb = tmp6;		HX_STACK_VAR(tmb,"tmb");
	HX_STACK_LINE(100)
	Float tmp7 = (p_far - p_near);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(100)
	Float tmp8 = (Float(((Float)1.0)) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(100)
	Float fmn = tmp8;		HX_STACK_VAR(fmn,"fmn");
	HX_STACK_LINE(101)
	Float tmp9 = (n2 * rml);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(101)
	m->m00 = tmp9;
	HX_STACK_LINE(101)
	m->m01 = ((Float)0.0);
	HX_STACK_LINE(101)
	Float tmp10 = (p_right + p_left);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(101)
	Float tmp11 = rml;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(101)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(101)
	m->m02 = tmp12;
	HX_STACK_LINE(101)
	m->m03 = ((Float)0.0);
	HX_STACK_LINE(102)
	m->m10 = ((Float)0.0);
	HX_STACK_LINE(102)
	Float tmp13 = (n2 * tmb);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(102)
	m->m11 = tmp13;
	HX_STACK_LINE(102)
	Float tmp14 = (p_top + p_bottom);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(102)
	Float tmp15 = tmb;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(102)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(102)
	m->m12 = tmp16;
	HX_STACK_LINE(102)
	m->m13 = ((Float)0.0);
	HX_STACK_LINE(103)
	m->m20 = ((Float)0.0);
	HX_STACK_LINE(103)
	m->m21 = ((Float)0.0);
	HX_STACK_LINE(103)
	Float tmp17 = (p_near + p_far);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(103)
	Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(103)
	Float tmp19 = fmn;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(103)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(103)
	m->m22 = tmp20;
	HX_STACK_LINE(103)
	Float tmp21 = n2;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(103)
	Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(103)
	Float tmp23 = p_far;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(103)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(103)
	Float tmp25 = fmn;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(103)
	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(103)
	m->m23 = tmp26;
	HX_STACK_LINE(104)
	m->m30 = ((Float)0.0);
	HX_STACK_LINE(104)
	m->m31 = ((Float)0.0);
	HX_STACK_LINE(104)
	m->m32 = ((Float)-1.0);
	HX_STACK_LINE(104)
	m->m33 = (int)0;
	HX_STACK_LINE(105)
	::haxor::math::Matrix4 tmp27 = m;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(105)
	return tmp27;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix4_obj,Frustum,return )

::haxor::math::Matrix4 Matrix4_obj::FrustumInverse( Float p_left,Float p_right,Float p_top,Float p_bottom,Float p_near,Float p_far,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","FrustumInverse",0xb06c11a3,"haxor.math.Matrix4.FrustumInverse","haxor/math/Matrix4.hx",119,0xc9a22505)
	HX_STACK_ARG(p_left,"p_left")
	HX_STACK_ARG(p_right,"p_right")
	HX_STACK_ARG(p_top,"p_top")
	HX_STACK_ARG(p_bottom,"p_bottom")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(120)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(120)
		tmp1 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(120)
		tmp1 = p_result;
	}
	HX_STACK_LINE(120)
	::haxor::math::Matrix4 m = tmp1;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(121)
	Float tmp2 = (p_near * ((Float)2.0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	Float n2 = tmp2;		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(122)
	Float tmp3 = (p_right - p_left);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(122)
	Float rml = tmp3;		HX_STACK_VAR(rml,"rml");
	HX_STACK_LINE(123)
	Float tmp4 = (p_top - p_bottom);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(123)
	Float tmb = tmp4;		HX_STACK_VAR(tmb,"tmb");
	HX_STACK_LINE(124)
	Float tmp5 = (p_far - p_near);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(124)
	Float fmn = tmp5;		HX_STACK_VAR(fmn,"fmn");
	HX_STACK_LINE(125)
	Float tmp6 = (Float(rml) / Float(n2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(125)
	m->m00 = tmp6;
	HX_STACK_LINE(125)
	m->m01 = ((Float)0.0);
	HX_STACK_LINE(125)
	m->m02 = ((Float)0.0);
	HX_STACK_LINE(125)
	Float tmp7 = (p_right + p_left);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(125)
	Float tmp8 = n2;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(125)
	Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(125)
	m->m03 = tmp9;
	HX_STACK_LINE(126)
	m->m10 = ((Float)0.0);
	HX_STACK_LINE(126)
	Float tmp10 = (Float(tmb) / Float(n2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(126)
	m->m11 = tmp10;
	HX_STACK_LINE(126)
	m->m12 = ((Float)0.0);
	HX_STACK_LINE(126)
	Float tmp11 = (p_top + p_bottom);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(126)
	Float tmp12 = n2;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(126)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(126)
	m->m13 = tmp13;
	HX_STACK_LINE(127)
	m->m20 = ((Float)0.0);
	HX_STACK_LINE(127)
	m->m21 = ((Float)0.0);
	HX_STACK_LINE(127)
	m->m22 = ((Float)0.0);
	HX_STACK_LINE(127)
	m->m23 = ((Float)-1.0);
	HX_STACK_LINE(128)
	m->m30 = ((Float)0.0);
	HX_STACK_LINE(128)
	m->m31 = ((Float)0.0);
	HX_STACK_LINE(128)
	Float tmp14 = fmn;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(128)
	Float tmp15 = n2;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(128)
	Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(128)
	Float tmp17 = p_far;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(128)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(128)
	Float tmp19 = (Float(tmp14) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(128)
	m->m32 = tmp19;
	HX_STACK_LINE(128)
	Float tmp20 = (p_far + p_near);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(128)
	Float tmp21 = (n2 * p_far);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(128)
	Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(128)
	m->m33 = tmp22;
	HX_STACK_LINE(129)
	::haxor::math::Matrix4 tmp23 = m;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(129)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix4_obj,FrustumInverse,return )

::haxor::math::Matrix4 Matrix4_obj::Ortho( Float p_left,Float p_right,Float p_top,Float p_bottom,Float p_near,Float p_far,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","Ortho",0xaf733ca3,"haxor.math.Matrix4.Ortho","haxor/math/Matrix4.hx",144,0xc9a22505)
	HX_STACK_ARG(p_left,"p_left")
	HX_STACK_ARG(p_right,"p_right")
	HX_STACK_ARG(p_top,"p_top")
	HX_STACK_ARG(p_bottom,"p_bottom")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(145)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	if ((tmp)){
		HX_STACK_LINE(145)
		tmp1 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(145)
		tmp1 = p_result;
	}
	HX_STACK_LINE(145)
	::haxor::math::Matrix4 m = tmp1;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(146)
	Float tmp2 = (p_near * ((Float)2.0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	Float n2 = tmp2;		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(147)
	Float tmp3 = (p_right - p_left);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	Float tmp4 = (Float(((Float)1.0)) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(147)
	Float rml = tmp4;		HX_STACK_VAR(rml,"rml");
	HX_STACK_LINE(148)
	Float tmp5 = (p_top - p_bottom);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(148)
	Float tmp6 = (Float(((Float)1.0)) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(148)
	Float tmb = tmp6;		HX_STACK_VAR(tmb,"tmb");
	HX_STACK_LINE(149)
	Float tmp7 = (p_far - p_near);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(149)
	Float tmp8 = (Float(((Float)1.0)) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(149)
	Float fmn = tmp8;		HX_STACK_VAR(fmn,"fmn");
	HX_STACK_LINE(150)
	Float tmp9 = (((Float)2.0) * rml);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(150)
	m->m00 = tmp9;
	HX_STACK_LINE(150)
	m->m01 = ((Float)0.0);
	HX_STACK_LINE(150)
	m->m02 = ((Float)0.0);
	HX_STACK_LINE(150)
	Float tmp10 = (p_right + p_left);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(150)
	Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(150)
	Float tmp12 = rml;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(150)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(150)
	m->m03 = tmp13;
	HX_STACK_LINE(151)
	m->m10 = ((Float)0.0);
	HX_STACK_LINE(151)
	Float tmp14 = (((Float)2.0) * tmb);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(151)
	m->m11 = tmp14;
	HX_STACK_LINE(151)
	m->m12 = ((Float)0.0);
	HX_STACK_LINE(151)
	Float tmp15 = (p_top + p_bottom);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(151)
	Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(151)
	Float tmp17 = tmb;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(151)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(151)
	m->m13 = tmp18;
	HX_STACK_LINE(152)
	m->m20 = ((Float)0.0);
	HX_STACK_LINE(152)
	m->m21 = ((Float)0.0);
	HX_STACK_LINE(152)
	Float tmp19 = ((Float)-2.);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(152)
	Float tmp20 = fmn;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(152)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(152)
	m->m22 = tmp21;
	HX_STACK_LINE(152)
	Float tmp22 = (p_far + p_near);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(152)
	Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(152)
	Float tmp24 = fmn;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(152)
	Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(152)
	m->m23 = tmp25;
	HX_STACK_LINE(153)
	m->m30 = ((Float)0.0);
	HX_STACK_LINE(153)
	m->m31 = ((Float)0.0);
	HX_STACK_LINE(153)
	m->m32 = ((Float)0.0);
	HX_STACK_LINE(153)
	m->m33 = ((Float)1.0);
	HX_STACK_LINE(154)
	::haxor::math::Matrix4 tmp26 = m;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(154)
	return tmp26;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix4_obj,Ortho,return )

::haxor::math::Matrix4 Matrix4_obj::OrthoInverse( Float p_left,Float p_right,Float p_top,Float p_bottom,Float p_near,Float p_far,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","OrthoInverse",0xbe0d614d,"haxor.math.Matrix4.OrthoInverse","haxor/math/Matrix4.hx",169,0xc9a22505)
	HX_STACK_ARG(p_left,"p_left")
	HX_STACK_ARG(p_right,"p_right")
	HX_STACK_ARG(p_top,"p_top")
	HX_STACK_ARG(p_bottom,"p_bottom")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(170)
	::haxor::math::Matrix4 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	{
		HX_STACK_LINE(170)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(170)
		Array< ::Dynamic > tmp2 = _this->m_m4;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		int tmp3 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		int tmp4 = _this->m_m4->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		int tmp6 = _this->m_nq = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Matrix4 >();
	}
	HX_STACK_LINE(170)
	Float tmp1 = p_left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	Float tmp2 = p_right;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	Float tmp3 = p_top;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	Float tmp4 = p_bottom;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(170)
	Float tmp5 = p_near;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(170)
	Float tmp6 = p_far;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(170)
	::haxor::math::Matrix4 tmp7 = tmp->SetOrtho(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(170)
	::haxor::math::Matrix4 m = tmp7;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(171)
	::haxor::math::Matrix4 tmp8 = m;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(171)
	::haxor::math::Matrix4 tmp9 = p_result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(171)
	::haxor::math::Matrix4 tmp10 = ::haxor::math::Matrix4_obj::GetInverseTransform(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(171)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix4_obj,OrthoInverse,return )

::haxor::math::Matrix4 Matrix4_obj::Perspective( Float p_fov,Float p_aspect,Float p_near,Float p_far,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","Perspective",0x2f5a6d27,"haxor.math.Matrix4.Perspective","haxor/math/Matrix4.hx",184,0xc9a22505)
	HX_STACK_ARG(p_fov,"p_fov")
	HX_STACK_ARG(p_aspect,"p_aspect")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(185)
	Float tmp = (p_fov * ((Float)0.5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	Float tmp1 = (tmp * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	Float tmp2 = ::Math_obj::tan(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	Float tmp3 = p_near;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(185)
	Float t = tmp4;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(186)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(186)
	Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(186)
	Float b = tmp6;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(187)
	Float tmp7 = (p_aspect * b);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(187)
	Float l = tmp7;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(188)
	Float tmp8 = (p_aspect * t);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(188)
	Float r = tmp8;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(189)
	::haxor::math::Matrix4 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		bool tmp10 = (p_result == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(189)
		::haxor::math::Matrix4 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(189)
		if ((tmp10)){
			HX_STACK_LINE(189)
			tmp11 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(189)
			tmp11 = p_result;
		}
		HX_STACK_LINE(189)
		::haxor::math::Matrix4 m = tmp11;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(189)
		Float tmp12 = (p_near * ((Float)2.0));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(189)
		Float n2 = tmp12;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(189)
		Float tmp13 = (r - l);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(189)
		Float tmp14 = (Float(((Float)1.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(189)
		Float rml = tmp14;		HX_STACK_VAR(rml,"rml");
		HX_STACK_LINE(189)
		Float tmp15 = (t - b);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(189)
		Float tmp16 = (Float(((Float)1.0)) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(189)
		Float tmb = tmp16;		HX_STACK_VAR(tmb,"tmb");
		HX_STACK_LINE(189)
		Float tmp17 = (p_far - p_near);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(189)
		Float tmp18 = (Float(((Float)1.0)) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(189)
		Float fmn = tmp18;		HX_STACK_VAR(fmn,"fmn");
		HX_STACK_LINE(189)
		Float tmp19 = (n2 * rml);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(189)
		m->m00 = tmp19;
		HX_STACK_LINE(189)
		m->m01 = ((Float)0.0);
		HX_STACK_LINE(189)
		Float tmp20 = (r + l);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(189)
		Float tmp21 = rml;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(189)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(189)
		m->m02 = tmp22;
		HX_STACK_LINE(189)
		m->m03 = ((Float)0.0);
		HX_STACK_LINE(189)
		m->m10 = ((Float)0.0);
		HX_STACK_LINE(189)
		Float tmp23 = (n2 * tmb);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(189)
		m->m11 = tmp23;
		HX_STACK_LINE(189)
		Float tmp24 = (t + b);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(189)
		Float tmp25 = tmb;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(189)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(189)
		m->m12 = tmp26;
		HX_STACK_LINE(189)
		m->m13 = ((Float)0.0);
		HX_STACK_LINE(189)
		m->m20 = ((Float)0.0);
		HX_STACK_LINE(189)
		m->m21 = ((Float)0.0);
		HX_STACK_LINE(189)
		Float tmp27 = (p_near + p_far);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(189)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(189)
		Float tmp29 = fmn;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(189)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(189)
		m->m22 = tmp30;
		HX_STACK_LINE(189)
		Float tmp31 = n2;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(189)
		Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(189)
		Float tmp33 = p_far;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(189)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(189)
		Float tmp35 = fmn;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(189)
		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(189)
		m->m23 = tmp36;
		HX_STACK_LINE(189)
		m->m30 = ((Float)0.0);
		HX_STACK_LINE(189)
		m->m31 = ((Float)0.0);
		HX_STACK_LINE(189)
		m->m32 = ((Float)-1.0);
		HX_STACK_LINE(189)
		m->m33 = (int)0;
		HX_STACK_LINE(189)
		tmp9 = m;
	}
	HX_STACK_LINE(189)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Matrix4_obj,Perspective,return )

::haxor::math::Matrix4 Matrix4_obj::PerspectiveInverse( Float p_fov,Float p_aspect,Float p_near,Float p_far,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","PerspectiveInverse",0x0c6f0949,"haxor.math.Matrix4.PerspectiveInverse","haxor/math/Matrix4.hx",201,0xc9a22505)
	HX_STACK_ARG(p_fov,"p_fov")
	HX_STACK_ARG(p_aspect,"p_aspect")
	HX_STACK_ARG(p_near,"p_near")
	HX_STACK_ARG(p_far,"p_far")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(202)
	Float tmp = (p_fov * ((Float)0.5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	Float tmp1 = (tmp * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	Float tmp2 = ::Math_obj::tan(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	Float tmp3 = p_near;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	Float t = tmp4;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(203)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(203)
	Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(203)
	Float b = tmp6;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(204)
	Float tmp7 = (p_aspect * b);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(204)
	Float l = tmp7;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(205)
	Float tmp8 = (p_aspect * t);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(205)
	Float r = tmp8;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(206)
	::haxor::math::Matrix4 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(206)
	{
		HX_STACK_LINE(206)
		bool tmp10 = (p_result == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(206)
		::haxor::math::Matrix4 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(206)
		if ((tmp10)){
			HX_STACK_LINE(206)
			tmp11 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(206)
			tmp11 = p_result;
		}
		HX_STACK_LINE(206)
		::haxor::math::Matrix4 m = tmp11;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(206)
		Float tmp12 = (p_near * ((Float)2.0));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(206)
		Float n2 = tmp12;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(206)
		Float tmp13 = (r - l);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(206)
		Float rml = tmp13;		HX_STACK_VAR(rml,"rml");
		HX_STACK_LINE(206)
		Float tmp14 = (t - b);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(206)
		Float tmb = tmp14;		HX_STACK_VAR(tmb,"tmb");
		HX_STACK_LINE(206)
		Float tmp15 = (p_far - p_near);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(206)
		Float fmn = tmp15;		HX_STACK_VAR(fmn,"fmn");
		HX_STACK_LINE(206)
		Float tmp16 = (Float(rml) / Float(n2));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(206)
		m->m00 = tmp16;
		HX_STACK_LINE(206)
		m->m01 = ((Float)0.0);
		HX_STACK_LINE(206)
		m->m02 = ((Float)0.0);
		HX_STACK_LINE(206)
		Float tmp17 = (r + l);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(206)
		Float tmp18 = n2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(206)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(206)
		m->m03 = tmp19;
		HX_STACK_LINE(206)
		m->m10 = ((Float)0.0);
		HX_STACK_LINE(206)
		Float tmp20 = (Float(tmb) / Float(n2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(206)
		m->m11 = tmp20;
		HX_STACK_LINE(206)
		m->m12 = ((Float)0.0);
		HX_STACK_LINE(206)
		Float tmp21 = (t + b);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(206)
		Float tmp22 = n2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(206)
		Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(206)
		m->m13 = tmp23;
		HX_STACK_LINE(206)
		m->m20 = ((Float)0.0);
		HX_STACK_LINE(206)
		m->m21 = ((Float)0.0);
		HX_STACK_LINE(206)
		m->m22 = ((Float)0.0);
		HX_STACK_LINE(206)
		m->m23 = ((Float)-1.0);
		HX_STACK_LINE(206)
		m->m30 = ((Float)0.0);
		HX_STACK_LINE(206)
		m->m31 = ((Float)0.0);
		HX_STACK_LINE(206)
		Float tmp24 = fmn;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(206)
		Float tmp25 = n2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(206)
		Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(206)
		Float tmp27 = p_far;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(206)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(206)
		Float tmp29 = (Float(tmp24) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(206)
		m->m32 = tmp29;
		HX_STACK_LINE(206)
		Float tmp30 = (p_far + p_near);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(206)
		Float tmp31 = (n2 * p_far);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(206)
		Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(206)
		m->m33 = tmp32;
		HX_STACK_LINE(206)
		tmp9 = m;
	}
	HX_STACK_LINE(206)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Matrix4_obj,PerspectiveInverse,return )

::haxor::math::Matrix4 Matrix4_obj::GetRotation( ::haxor::math::Matrix4 p_matrix4,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","GetRotation",0x9ce2879f,"haxor.math.Matrix4.GetRotation","haxor/math/Matrix4.hx",216,0xc9a22505)
	HX_STACK_ARG(p_matrix4,"p_matrix4")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(217)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	if ((tmp)){
		HX_STACK_LINE(217)
		tmp1 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(217)
		tmp1 = p_result;
	}
	HX_STACK_LINE(217)
	::haxor::math::Matrix4 m = tmp1;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(218)
	::haxor::math::Vector3 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(218)
		Array< ::Dynamic > tmp4 = _this->m_v3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(218)
		int tmp5 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(218)
		int tmp6 = _this->m_v3->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(218)
		int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(218)
		int tmp8 = _this->m_nv3 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(218)
		tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(218)
	::haxor::math::Vector3 tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(219)
	Float tmp4 = m->m00;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(219)
	Float tmp5 = m->m01;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(219)
	Float tmp6 = m->m02;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(219)
	::haxor::math::Vector3 tmp7 = tmp3->Set(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(219)
	tmp7->Normalize();
	HX_STACK_LINE(219)
	m->m00 = tmp3->x;
	HX_STACK_LINE(219)
	m->m01 = tmp3->y;
	HX_STACK_LINE(219)
	m->m02 = tmp3->z;
	HX_STACK_LINE(219)
	m->m03 = ((Float)0.0);
	HX_STACK_LINE(220)
	Float tmp8 = m->m10;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(220)
	Float tmp9 = m->m11;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(220)
	Float tmp10 = m->m12;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(220)
	::haxor::math::Vector3 tmp11 = tmp3->Set(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(220)
	tmp11->Normalize();
	HX_STACK_LINE(220)
	m->m10 = tmp3->x;
	HX_STACK_LINE(220)
	m->m11 = tmp3->y;
	HX_STACK_LINE(220)
	m->m12 = tmp3->z;
	HX_STACK_LINE(220)
	m->m13 = ((Float)0.0);
	HX_STACK_LINE(221)
	Float tmp12 = m->m20;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(221)
	Float tmp13 = m->m21;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(221)
	Float tmp14 = m->m22;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(221)
	::haxor::math::Vector3 tmp15 = tmp3->Set(tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(221)
	tmp15->Normalize();
	HX_STACK_LINE(221)
	m->m20 = tmp3->x;
	HX_STACK_LINE(221)
	m->m21 = tmp3->y;
	HX_STACK_LINE(221)
	m->m22 = tmp3->z;
	HX_STACK_LINE(221)
	m->m23 = ((Float)0.0);
	HX_STACK_LINE(222)
	Float tmp16 = m->m32 = ((Float)0.0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(222)
	Float tmp17 = m->m31 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(222)
	m->m30 = tmp17;
	HX_STACK_LINE(222)
	m->m33 = ((Float)1.0);
	HX_STACK_LINE(223)
	::haxor::math::Matrix4 tmp18 = m;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(223)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,GetRotation,return )

::haxor::math::Matrix4 Matrix4_obj::GetScale( ::haxor::math::Matrix4 p_matrix4,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","GetScale",0x49bead89,"haxor.math.Matrix4.GetScale","haxor/math/Matrix4.hx",233,0xc9a22505)
	HX_STACK_ARG(p_matrix4,"p_matrix4")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(234)
	::haxor::math::Matrix4 m = p_matrix4;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(235)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(235)
		tmp1 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(235)
		tmp1 = p_result;
	}
	HX_STACK_LINE(235)
	::haxor::math::Matrix4 res = tmp1;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(236)
	Float tmp2 = (m->m00 * m->m00);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	Float tmp3 = (m->m10 * m->m10);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(236)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(236)
	Float tmp5 = (m->m20 * m->m20);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(236)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(236)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(236)
	Float d0 = tmp7;		HX_STACK_VAR(d0,"d0");
	HX_STACK_LINE(237)
	Float tmp8 = (m->m01 * m->m01);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(237)
	Float tmp9 = (m->m11 * m->m11);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(237)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(237)
	Float tmp11 = (m->m21 * m->m21);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(237)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(237)
	Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(237)
	Float d1 = tmp13;		HX_STACK_VAR(d1,"d1");
	HX_STACK_LINE(238)
	Float tmp14 = (m->m02 * m->m02);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(238)
	Float tmp15 = (m->m12 * m->m12);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(238)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(238)
	Float tmp17 = (m->m22 * m->m22);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(238)
	Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(238)
	Float tmp19 = ::Math_obj::sqrt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(238)
	Float d2 = tmp19;		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(239)
	Float tmp20 = d0;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(239)
	Float tmp21 = d1;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(239)
	Float tmp22 = d2;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(239)
	::haxor::math::Matrix4 tmp23 = res->Set(tmp20,(int)0,(int)0,(int)0,(int)0,tmp21,(int)0,(int)0,(int)0,(int)0,tmp22,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(239)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,GetScale,return )

::haxor::math::Matrix4 Matrix4_obj::GetInverseTransform( ::haxor::math::Matrix4 p_matrix,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","GetInverseTransform",0xedd4defd,"haxor.math.Matrix4.GetInverseTransform","haxor/math/Matrix4.hx",249,0xc9a22505)
	HX_STACK_ARG(p_matrix,"p_matrix")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(250)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	if ((tmp)){
		HX_STACK_LINE(250)
		tmp1 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);
	}
	else{
		HX_STACK_LINE(250)
		tmp1 = p_result;
	}
	HX_STACK_LINE(250)
	::haxor::math::Matrix4 result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(251)
	::haxor::math::Matrix4 m = p_matrix;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(253)
	Float l0x = m->m00;		HX_STACK_VAR(l0x,"l0x");
	HX_STACK_LINE(253)
	Float l0y = m->m01;		HX_STACK_VAR(l0y,"l0y");
	HX_STACK_LINE(253)
	Float l0z = m->m02;		HX_STACK_VAR(l0z,"l0z");
	HX_STACK_LINE(253)
	Float l0w = m->m03;		HX_STACK_VAR(l0w,"l0w");
	HX_STACK_LINE(254)
	Float l1x = m->m10;		HX_STACK_VAR(l1x,"l1x");
	HX_STACK_LINE(254)
	Float l1y = m->m11;		HX_STACK_VAR(l1y,"l1y");
	HX_STACK_LINE(254)
	Float l1z = m->m12;		HX_STACK_VAR(l1z,"l1z");
	HX_STACK_LINE(254)
	Float l1w = m->m13;		HX_STACK_VAR(l1w,"l1w");
	HX_STACK_LINE(255)
	Float l2x = m->m20;		HX_STACK_VAR(l2x,"l2x");
	HX_STACK_LINE(255)
	Float l2y = m->m21;		HX_STACK_VAR(l2y,"l2y");
	HX_STACK_LINE(255)
	Float l2z = m->m22;		HX_STACK_VAR(l2z,"l2z");
	HX_STACK_LINE(255)
	Float l2w = m->m23;		HX_STACK_VAR(l2w,"l2w");
	HX_STACK_LINE(258)
	Float tmp2 = (l0x * l0x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	Float tmp3 = (l1x * l1x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(258)
	Float tmp5 = (l2x * l2x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(258)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(258)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(258)
	Float vl0 = tmp7;		HX_STACK_VAR(vl0,"vl0");
	HX_STACK_LINE(259)
	Float tmp8 = (l0y * l0y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(259)
	Float tmp9 = (l1y * l1y);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(259)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(259)
	Float tmp11 = (l2y * l2y);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(259)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(259)
	Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(259)
	Float vl1 = tmp13;		HX_STACK_VAR(vl1,"vl1");
	HX_STACK_LINE(260)
	Float tmp14 = (l0z * l0z);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(260)
	Float tmp15 = (l1z * l1z);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(260)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(260)
	Float tmp17 = (l2z * l2z);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(260)
	Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(260)
	Float tmp19 = ::Math_obj::sqrt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(260)
	Float vl2 = tmp19;		HX_STACK_VAR(vl2,"vl2");
	HX_STACK_LINE(262)
	bool tmp20 = (vl0 < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(262)
	Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(262)
	if ((tmp20)){
		HX_STACK_LINE(262)
		Float tmp22 = vl0;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(262)
		tmp21 = -(tmp22);
	}
	else{
		HX_STACK_LINE(262)
		tmp21 = vl0;
	}
	HX_STACK_LINE(262)
	bool tmp22 = (tmp21 <= ((Float)0.0001));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(262)
	Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(262)
	if ((tmp22)){
		HX_STACK_LINE(262)
		tmp23 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(262)
		tmp23 = (Float(((Float)1.0)) / Float(vl0));
	}
	HX_STACK_LINE(262)
	Float sx = tmp23;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(263)
	bool tmp24 = (vl1 < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(263)
	Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(263)
	if ((tmp24)){
		HX_STACK_LINE(263)
		Float tmp26 = vl1;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(263)
		tmp25 = -(tmp26);
	}
	else{
		HX_STACK_LINE(263)
		tmp25 = vl1;
	}
	HX_STACK_LINE(263)
	bool tmp26 = (tmp25 <= ((Float)0.0001));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(263)
	Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(263)
	if ((tmp26)){
		HX_STACK_LINE(263)
		tmp27 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(263)
		tmp27 = (Float(((Float)1.0)) / Float(vl1));
	}
	HX_STACK_LINE(263)
	Float sy = tmp27;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(264)
	bool tmp28 = (vl2 < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(264)
	Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(264)
	if ((tmp28)){
		HX_STACK_LINE(264)
		Float tmp30 = vl2;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(264)
		tmp29 = -(tmp30);
	}
	else{
		HX_STACK_LINE(264)
		tmp29 = vl2;
	}
	HX_STACK_LINE(264)
	bool tmp30 = (tmp29 <= ((Float)0.0001));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(264)
	Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(264)
	if ((tmp30)){
		HX_STACK_LINE(264)
		tmp31 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(264)
		tmp31 = (Float(((Float)1.0)) / Float(vl2));
	}
	HX_STACK_LINE(264)
	Float sz = tmp31;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(267)
	hx::MultEq(l0x,sx);
	HX_STACK_LINE(267)
	hx::MultEq(l0y,sy);
	HX_STACK_LINE(267)
	hx::MultEq(l0z,sz);
	HX_STACK_LINE(268)
	hx::MultEq(l1x,sx);
	HX_STACK_LINE(268)
	hx::MultEq(l1y,sy);
	HX_STACK_LINE(268)
	hx::MultEq(l1z,sz);
	HX_STACK_LINE(269)
	hx::MultEq(l2x,sx);
	HX_STACK_LINE(269)
	hx::MultEq(l2y,sy);
	HX_STACK_LINE(269)
	hx::MultEq(l2z,sz);
	HX_STACK_LINE(272)
	Float tmp32 = (sx * l0x);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(272)
	Float tmp33 = (sx * l1x);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(272)
	Float tmp34 = (sx * l2x);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(272)
	Float tmp35 = sx;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(272)
	Float tmp36 = l0x;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(272)
	Float tmp37 = l0w;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(272)
	Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(272)
	Float tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(272)
	Float tmp40 = l1x;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(272)
	Float tmp41 = l1w;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(272)
	Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(272)
	Float tmp43 = (tmp40 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(272)
	Float tmp44 = (tmp39 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(272)
	Float tmp45 = l2x;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(272)
	Float tmp46 = l2w;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(272)
	Float tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(272)
	Float tmp48 = (tmp45 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(272)
	Float tmp49 = (tmp44 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(272)
	Float tmp50 = (tmp35 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(273)
	Float tmp51 = (sy * l0y);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(273)
	Float tmp52 = (sy * l1y);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(273)
	Float tmp53 = (sy * l2y);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(273)
	Float tmp54 = sy;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(273)
	Float tmp55 = l0y;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(273)
	Float tmp56 = l0w;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(273)
	Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(273)
	Float tmp58 = (tmp55 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(273)
	Float tmp59 = l1y;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(273)
	Float tmp60 = l1w;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(273)
	Float tmp61 = -(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(273)
	Float tmp62 = (tmp59 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(273)
	Float tmp63 = (tmp58 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(273)
	Float tmp64 = l2y;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(273)
	Float tmp65 = l2w;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(273)
	Float tmp66 = -(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(273)
	Float tmp67 = (tmp64 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(273)
	Float tmp68 = (tmp63 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(273)
	Float tmp69 = (tmp54 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(274)
	Float tmp70 = (sz * l0z);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(274)
	Float tmp71 = (sz * l1z);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(274)
	Float tmp72 = (sz * l2z);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(274)
	Float tmp73 = sz;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(274)
	Float tmp74 = l0z;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(274)
	Float tmp75 = l0w;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(274)
	Float tmp76 = -(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(274)
	Float tmp77 = (tmp74 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(274)
	Float tmp78 = l1z;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(274)
	Float tmp79 = l1w;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(274)
	Float tmp80 = -(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(274)
	Float tmp81 = (tmp78 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(274)
	Float tmp82 = (tmp77 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(274)
	Float tmp83 = l2z;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(274)
	Float tmp84 = l2w;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(274)
	Float tmp85 = -(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(274)
	Float tmp86 = (tmp83 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(274)
	Float tmp87 = (tmp82 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(274)
	Float tmp88 = (tmp73 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(271)
	result->Set(tmp32,tmp33,tmp34,tmp50,tmp51,tmp52,tmp53,tmp69,tmp70,tmp71,tmp72,tmp88,(int)0,(int)0,(int)0,(int)1);
	HX_STACK_LINE(277)
	::haxor::math::Matrix4 tmp89 = result;		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(277)
	return tmp89;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,GetInverseTransform,return )

::haxor::math::Matrix4 Matrix4_obj::LookRotation( ::haxor::math::Vector3 p_forward,::haxor::math::Vector3 p_up,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","LookRotation",0x37a9c4b2,"haxor.math.Matrix4.LookRotation","haxor/math/Matrix4.hx",286,0xc9a22505)
	HX_STACK_ARG(p_forward,"p_forward")
	HX_STACK_ARG(p_up,"p_up")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(286)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	{
		HX_STACK_LINE(286)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(286)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(286)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(286)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(286)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(286)
	::haxor::math::Vector3 tmp1 = tmp->Set((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	::haxor::math::Vector3 tmp2 = p_forward;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	::haxor::math::Vector3 tmp3 = p_up;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	::haxor::math::Matrix4 tmp4 = p_result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(286)
	::haxor::math::Matrix4 tmp5 = ::haxor::math::Matrix4_obj::LookAt(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(286)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_obj,LookRotation,return )

::haxor::math::Matrix4 Matrix4_obj::LookAt( ::haxor::math::Vector3 p_eye,::haxor::math::Vector3 p_at,::haxor::math::Vector3 p_up,::haxor::math::Matrix4 p_result){
	HX_STACK_FRAME("haxor.math.Matrix4","LookAt",0xe4d00d67,"haxor.math.Matrix4.LookAt","haxor/math/Matrix4.hx",296,0xc9a22505)
	HX_STACK_ARG(p_eye,"p_eye")
	HX_STACK_ARG(p_at,"p_at")
	HX_STACK_ARG(p_up,"p_up")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(297)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	if ((tmp)){
		HX_STACK_LINE(297)
		tmp1 = ::haxor::math::Matrix4_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(297)
		tmp1 = p_result;
	}
	HX_STACK_LINE(297)
	p_result = tmp1;
	HX_STACK_LINE(298)
	bool tmp2 = (p_up == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(298)
	if ((tmp2)){
		HX_STACK_LINE(298)
		::haxor::math::Vector3 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(298)
			::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(298)
			Array< ::Dynamic > tmp6 = _this->m_v3;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(298)
			int tmp7 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(298)
			int tmp8 = _this->m_v3->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(298)
			int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(298)
			int tmp10 = _this->m_nv3 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(298)
			tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(298)
		tmp3 = tmp4->Set((int)0,(int)1,(int)0);
	}
	else{
		HX_STACK_LINE(298)
		tmp3 = p_up;
	}
	HX_STACK_LINE(298)
	p_up = tmp3;
	HX_STACK_LINE(299)
	::haxor::math::Vector3 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(299)
		::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(299)
		Array< ::Dynamic > tmp6 = _this->m_v3;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(299)
		int tmp7 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(299)
		int tmp8 = _this->m_v3->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(299)
		int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(299)
		int tmp10 = _this->m_nv3 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(299)
		tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(299)
	::haxor::math::Vector3 tmp5 = p_at;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(299)
	::haxor::math::Vector3 tmp6 = tmp4->Set3(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(299)
	::haxor::math::Vector3 tmp7 = p_eye;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(299)
	::haxor::math::Vector3 tmp8 = tmp6->Sub(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(299)
	::haxor::math::Vector3 tmp9 = tmp8->Normalize();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(299)
	::haxor::math::Vector3 f = tmp9;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(300)
	::haxor::math::Vector3 tmp10 = f;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(300)
	::haxor::math::Vector3 tmp11 = p_up;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(300)
	::haxor::math::Vector3 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		::haxor::context::DataContext tmp13 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(300)
		::haxor::context::DataContext _this = tmp13;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(300)
		Array< ::Dynamic > tmp14 = _this->m_v3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(300)
		int tmp15 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		int tmp16 = _this->m_v3->length;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(300)
		int tmp17 = hx::Mod(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(300)
		int tmp18 = _this->m_nv3 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(300)
		tmp12 = tmp14->__get(tmp18).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(300)
	::haxor::math::Vector3 tmp13 = ::haxor::math::Vector3_obj::Cross(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(300)
	::haxor::math::Vector3 tmp14 = tmp13->Normalize();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(300)
	::haxor::math::Vector3 s = tmp14;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(301)
	::haxor::math::Vector3 tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(301)
	::haxor::math::Vector3 tmp16 = f;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(301)
	::haxor::math::Vector3 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		::haxor::context::DataContext tmp18 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(301)
		::haxor::context::DataContext _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(301)
		Array< ::Dynamic > tmp19 = _this->m_v3;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(301)
		int tmp20 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(301)
		int tmp21 = _this->m_v3->length;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(301)
		int tmp22 = hx::Mod(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(301)
		int tmp23 = _this->m_nv3 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(301)
		tmp17 = tmp19->__get(tmp23).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(301)
	::haxor::math::Vector3 tmp18 = ::haxor::math::Vector3_obj::Cross(tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(301)
	::haxor::math::Vector3 u = tmp18;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(302)
	p_result->m00 = s->x;
	HX_STACK_LINE(303)
	p_result->m10 = s->y;
	HX_STACK_LINE(304)
	p_result->m20 = s->z;
	HX_STACK_LINE(305)
	p_result->m01 = u->x;
	HX_STACK_LINE(306)
	p_result->m11 = u->y;
	HX_STACK_LINE(307)
	p_result->m21 = u->z;
	HX_STACK_LINE(308)
	Float tmp19 = f->x;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(308)
	Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(308)
	p_result->m02 = tmp20;
	HX_STACK_LINE(309)
	Float tmp21 = f->y;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(309)
	Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(309)
	p_result->m12 = tmp22;
	HX_STACK_LINE(310)
	Float tmp23 = f->z;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(310)
	Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(310)
	p_result->m22 = tmp24;
	HX_STACK_LINE(311)
	Float tmp25 = (s->x * p_eye->x);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(311)
	Float tmp26 = (s->y * p_eye->y);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(311)
	Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(311)
	Float tmp28 = (s->z * p_eye->z);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(311)
	Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(311)
	Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(311)
	p_result->m03 = tmp30;
	HX_STACK_LINE(312)
	Float tmp31 = (u->x * p_eye->x);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(312)
	Float tmp32 = (u->y * p_eye->y);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(312)
	Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(312)
	Float tmp34 = (u->z * p_eye->z);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(312)
	Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(312)
	Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(312)
	p_result->m13 = tmp36;
	HX_STACK_LINE(313)
	Float tmp37 = (f->x * p_eye->x);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(313)
	Float tmp38 = (f->y * p_eye->y);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(313)
	Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(313)
	Float tmp40 = (f->z * p_eye->z);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(313)
	Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(313)
	p_result->m23 = tmp41;
	HX_STACK_LINE(314)
	Float tmp42 = p_result->m32 = ((Float)0.0);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(314)
	Float tmp43 = p_result->m31 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(314)
	p_result->m30 = tmp43;
	HX_STACK_LINE(314)
	p_result->m33 = ((Float)1.0);
	HX_STACK_LINE(315)
	::haxor::math::Matrix4 tmp44 = p_result;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(315)
	return tmp44;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_obj,LookAt,return )

::haxor::math::Matrix4 Matrix4_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.math.Matrix4","Parse",0x379bb59e,"haxor.math.Matrix4.Parse","haxor/math/Matrix4.hx",1021,0xc9a22505)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(1022)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1022)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1022)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(1023)
		::haxor::math::Matrix4 tmp2 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1023)
		::haxor::math::Matrix4 res = tmp2;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(1024)
		{
			HX_STACK_LINE(1024)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1024)
			int _g = tk->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1024)
			while((true)){
				HX_STACK_LINE(1024)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1024)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1024)
				if ((tmp4)){
					HX_STACK_LINE(1024)
					break;
				}
				HX_STACK_LINE(1024)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1024)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1026)
				::String tmp6 = tk->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1026)
				::String tmp7 = ::StringTools_obj::trim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1026)
				Float tmp8 = ::Std_obj::parseFloat(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1026)
				Float n = tmp8;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(1028)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1028)
				Float tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1028)
				res->SetIndex(tmp9,tmp10);
			}
		}
		HX_STACK_LINE(1030)
		::haxor::math::Matrix4 tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1030)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_obj,Parse,return )


Matrix4_obj::Matrix4_obj()
{
}

void Matrix4_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix4);
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(translation,"translation");
	HX_MARK_MEMBER_NAME(inverseTransform,"inverseTransform");
	HX_MARK_MEMBER_NAME(transposed,"transposed");
	HX_MARK_MEMBER_NAME(m00,"m00");
	HX_MARK_MEMBER_NAME(m01,"m01");
	HX_MARK_MEMBER_NAME(m02,"m02");
	HX_MARK_MEMBER_NAME(m03,"m03");
	HX_MARK_MEMBER_NAME(m10,"m10");
	HX_MARK_MEMBER_NAME(m11,"m11");
	HX_MARK_MEMBER_NAME(m12,"m12");
	HX_MARK_MEMBER_NAME(m13,"m13");
	HX_MARK_MEMBER_NAME(m20,"m20");
	HX_MARK_MEMBER_NAME(m21,"m21");
	HX_MARK_MEMBER_NAME(m22,"m22");
	HX_MARK_MEMBER_NAME(m23,"m23");
	HX_MARK_MEMBER_NAME(m30,"m30");
	HX_MARK_MEMBER_NAME(m31,"m31");
	HX_MARK_MEMBER_NAME(m32,"m32");
	HX_MARK_MEMBER_NAME(m33,"m33");
	HX_MARK_END_CLASS();
}

void Matrix4_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(translation,"translation");
	HX_VISIT_MEMBER_NAME(inverseTransform,"inverseTransform");
	HX_VISIT_MEMBER_NAME(transposed,"transposed");
	HX_VISIT_MEMBER_NAME(m00,"m00");
	HX_VISIT_MEMBER_NAME(m01,"m01");
	HX_VISIT_MEMBER_NAME(m02,"m02");
	HX_VISIT_MEMBER_NAME(m03,"m03");
	HX_VISIT_MEMBER_NAME(m10,"m10");
	HX_VISIT_MEMBER_NAME(m11,"m11");
	HX_VISIT_MEMBER_NAME(m12,"m12");
	HX_VISIT_MEMBER_NAME(m13,"m13");
	HX_VISIT_MEMBER_NAME(m20,"m20");
	HX_VISIT_MEMBER_NAME(m21,"m21");
	HX_VISIT_MEMBER_NAME(m22,"m22");
	HX_VISIT_MEMBER_NAME(m23,"m23");
	HX_VISIT_MEMBER_NAME(m30,"m30");
	HX_VISIT_MEMBER_NAME(m31,"m31");
	HX_VISIT_MEMBER_NAME(m32,"m32");
	HX_VISIT_MEMBER_NAME(m33,"m33");
}

Dynamic Matrix4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m00") ) { return m00; }
		if (HX_FIELD_EQ(inName,"m01") ) { return m01; }
		if (HX_FIELD_EQ(inName,"m02") ) { return m02; }
		if (HX_FIELD_EQ(inName,"m03") ) { return m03; }
		if (HX_FIELD_EQ(inName,"m10") ) { return m10; }
		if (HX_FIELD_EQ(inName,"m11") ) { return m11; }
		if (HX_FIELD_EQ(inName,"m12") ) { return m12; }
		if (HX_FIELD_EQ(inName,"m13") ) { return m13; }
		if (HX_FIELD_EQ(inName,"m20") ) { return m20; }
		if (HX_FIELD_EQ(inName,"m21") ) { return m21; }
		if (HX_FIELD_EQ(inName,"m22") ) { return m22; }
		if (HX_FIELD_EQ(inName,"m23") ) { return m23; }
		if (HX_FIELD_EQ(inName,"m30") ) { return m30; }
		if (HX_FIELD_EQ(inName,"m31") ) { return m31; }
		if (HX_FIELD_EQ(inName,"m32") ) { return m32; }
		if (HX_FIELD_EQ(inName,"m33") ) { return m33; }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { if (inCallProp == hx::paccAlways) return get_clone(); }
		if (HX_FIELD_EQ(inName,"trace") ) { if (inCallProp == hx::paccAlways) return get_trace(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return inCallProp == hx::paccAlways ? get_scale() : scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Rotate") ) { return Rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"SetTRS") ) { return SetTRS_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GetLine") ) { return GetLine_dyn(); }
		if (HX_FIELD_EQ(inName,"SetLine") ) { return SetLine_dyn(); }
		if (HX_FIELD_EQ(inName,"SwapCol") ) { return SwapCol_dyn(); }
		if (HX_FIELD_EQ(inName,"SwapRow") ) { return SwapRow_dyn(); }
		if (HX_FIELD_EQ(inName,"ToArray") ) { return ToArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return inCallProp == hx::paccAlways ? get_rotation() : rotation; }
		if (HX_FIELD_EQ(inName,"GetIndex") ) { return GetIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"SetIndex") ) { return SetIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"SetOrtho") ) { return SetOrtho_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_clone") ) { return get_clone_dyn(); }
		if (HX_FIELD_EQ(inName,"get_trace") ) { return get_trace_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"GetColumn") ) { return GetColumn_dyn(); }
		if (HX_FIELD_EQ(inName,"SetColumn") ) { return SetColumn_dyn(); }
		if (HX_FIELD_EQ(inName,"SetRowCol") ) { return SetRowCol_dyn(); }
		if (HX_FIELD_EQ(inName,"GetRowCol") ) { return GetRowCol_dyn(); }
		if (HX_FIELD_EQ(inName,"Transpose") ) { return Transpose_dyn(); }
		if (HX_FIELD_EQ(inName,"SetLookAt") ) { return SetLookAt_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quaternion") ) { if (inCallProp == hx::paccAlways) return get_quaternion(); }
		if (HX_FIELD_EQ(inName,"transposed") ) { return inCallProp == hx::paccAlways ? get_transposed() : transposed; }
		if (HX_FIELD_EQ(inName,"ToRowMajor") ) { return ToRowMajor_dyn(); }
		if (HX_FIELD_EQ(inName,"diagonalLR") ) { if (inCallProp == hx::paccAlways) return get_diagonalLR(); }
		if (HX_FIELD_EQ(inName,"SetMatrix4") ) { return SetMatrix4_dyn(); }
		if (HX_FIELD_EQ(inName,"ToRotation") ) { return ToRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFrustum") ) { return SetFrustum_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translation") ) { return inCallProp == hx::paccAlways ? get_translation() : translation; }
		if (HX_FIELD_EQ(inName,"SetIdentity") ) { return SetIdentity_dyn(); }
		if (HX_FIELD_EQ(inName,"Multiply3x4") ) { return Multiply3x4_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"Transform4x4") ) { return Transform4x4_dyn(); }
		if (HX_FIELD_EQ(inName,"Transform3x4") ) { return Transform3x4_dyn(); }
		if (HX_FIELD_EQ(inName,"Transform3x3") ) { return Transform3x3_dyn(); }
		if (HX_FIELD_EQ(inName,"Transform2x3") ) { return Transform2x3_dyn(); }
		if (HX_FIELD_EQ(inName,"Transform2x2") ) { return Transform2x2_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ToColumnMajor") ) { return ToColumnMajor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_quaternion") ) { return get_quaternion_dyn(); }
		if (HX_FIELD_EQ(inName,"set_quaternion") ) { return set_quaternion_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transposed") ) { return get_transposed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diagonalLR") ) { return get_diagonalLR_dyn(); }
		if (HX_FIELD_EQ(inName,"set_diagonalLR") ) { return set_diagonalLR_dyn(); }
		if (HX_FIELD_EQ(inName,"SetPerspective") ) { return SetPerspective_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_translation") ) { return get_translation_dyn(); }
		if (HX_FIELD_EQ(inName,"SetOrthoInverse") ) { return SetOrthoInverse_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"inverseTransform") ) { return inCallProp == hx::paccAlways ? get_inverseTransform() : inverseTransform; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MultiplyTransform") ) { return MultiplyTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFrustumInverse") ) { return SetFrustumInverse_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"ToInverseTransform") ) { return ToInverseTransform_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_inverseTransform") ) { return get_inverseTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"SetPerspectiveInverse") ) { return SetPerspectiveInverse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix4_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TRS") ) { outValue = TRS_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = inCallProp == hx::paccAlways ? get_temp() : temp; return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Ortho") ) { outValue = Ortho_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LookAt") ) { outValue = LookAt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Frustum") ) { outValue = Frustum_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { outValue = get_temp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = inCallProp == hx::paccAlways ? get_identity() : identity; return true; }
		if (HX_FIELD_EQ(inName,"GetScale") ) { outValue = GetScale_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FromArray") ) { outValue = FromArray_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Perspective") ) { outValue = Perspective_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetRotation") ) { outValue = GetRotation_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_identity") ) { outValue = get_identity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"OrthoInverse") ) { outValue = OrthoInverse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LookRotation") ) { outValue = LookRotation_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"FromQuaternion") ) { outValue = FromQuaternion_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FrustumInverse") ) { outValue = FrustumInverse_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PerspectiveInverse") ) { outValue = PerspectiveInverse_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"GetInverseTransform") ) { outValue = GetInverseTransform_dyn(); return true;  }
	}
	return false;
}

Dynamic Matrix4_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m00") ) { m00=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m01") ) { m01=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m02") ) { m02=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m03") ) { m03=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m10") ) { m10=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m11") ) { m11=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m12") ) { m12=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m13") ) { m13=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m20") ) { m20=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m21") ) { m21=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m22") ) { m22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m23") ) { m23=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m30") ) { m30=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m31") ) { m31=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m32") ) { m32=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m33") ) { m33=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quaternion") ) { if (inCallProp == hx::paccAlways) return set_quaternion(inValue); }
		if (HX_FIELD_EQ(inName,"transposed") ) { transposed=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diagonalLR") ) { if (inCallProp == hx::paccAlways) return set_diagonalLR(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translation") ) { translation=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"inverseTransform") ) { inverseTransform=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix4_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< ::haxor::math::Matrix4 >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { identity=ioValue.Cast< ::haxor::math::Matrix4 >(); return true; }
	}
	return false;
}

void Matrix4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("quaternion","\x1e","\x0d","\xca","\x1b"));
	outFields->push(HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("translation","\xf1","\x30","\xa2","\x8a"));
	outFields->push(HX_HCSTRING("inverseTransform","\x9c","\xcb","\xa5","\xe7"));
	outFields->push(HX_HCSTRING("transposed","\xcb","\x19","\x37","\x5d"));
	outFields->push(HX_HCSTRING("m00","\xad","\xdf","\x52","\x00"));
	outFields->push(HX_HCSTRING("m01","\xae","\xdf","\x52","\x00"));
	outFields->push(HX_HCSTRING("m02","\xaf","\xdf","\x52","\x00"));
	outFields->push(HX_HCSTRING("m03","\xb0","\xdf","\x52","\x00"));
	outFields->push(HX_HCSTRING("m10","\x8c","\xe0","\x52","\x00"));
	outFields->push(HX_HCSTRING("m11","\x8d","\xe0","\x52","\x00"));
	outFields->push(HX_HCSTRING("m12","\x8e","\xe0","\x52","\x00"));
	outFields->push(HX_HCSTRING("m13","\x8f","\xe0","\x52","\x00"));
	outFields->push(HX_HCSTRING("m20","\x6b","\xe1","\x52","\x00"));
	outFields->push(HX_HCSTRING("m21","\x6c","\xe1","\x52","\x00"));
	outFields->push(HX_HCSTRING("m22","\x6d","\xe1","\x52","\x00"));
	outFields->push(HX_HCSTRING("m23","\x6e","\xe1","\x52","\x00"));
	outFields->push(HX_HCSTRING("m30","\x4a","\xe2","\x52","\x00"));
	outFields->push(HX_HCSTRING("m31","\x4b","\xe2","\x52","\x00"));
	outFields->push(HX_HCSTRING("m32","\x4c","\xe2","\x52","\x00"));
	outFields->push(HX_HCSTRING("m33","\x4d","\xe2","\x52","\x00"));
	outFields->push(HX_HCSTRING("diagonalLR","\xbb","\xae","\x7b","\x01"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Matrix4_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Matrix4_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Matrix4_obj,translation),HX_HCSTRING("translation","\xf1","\x30","\xa2","\x8a")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Matrix4_obj,inverseTransform),HX_HCSTRING("inverseTransform","\x9c","\xcb","\xa5","\xe7")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Matrix4_obj,transposed),HX_HCSTRING("transposed","\xcb","\x19","\x37","\x5d")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m00),HX_HCSTRING("m00","\xad","\xdf","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m01),HX_HCSTRING("m01","\xae","\xdf","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m02),HX_HCSTRING("m02","\xaf","\xdf","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m03),HX_HCSTRING("m03","\xb0","\xdf","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m10),HX_HCSTRING("m10","\x8c","\xe0","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m11),HX_HCSTRING("m11","\x8d","\xe0","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m12),HX_HCSTRING("m12","\x8e","\xe0","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m13),HX_HCSTRING("m13","\x8f","\xe0","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m20),HX_HCSTRING("m20","\x6b","\xe1","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m21),HX_HCSTRING("m21","\x6c","\xe1","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m22),HX_HCSTRING("m22","\x6d","\xe1","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m23),HX_HCSTRING("m23","\x6e","\xe1","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m30),HX_HCSTRING("m30","\x4a","\xe2","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m31),HX_HCSTRING("m31","\x4b","\xe2","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m32),HX_HCSTRING("m32","\x4c","\xe2","\x52","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix4_obj,m33),HX_HCSTRING("m33","\x4d","\xe2","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(void *) &Matrix4_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(void *) &Matrix4_obj::identity,HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_clone","\xb4","\x6f","\x0c","\x8c"),
	HX_HCSTRING("get_quaternion","\x67","\x95","\xbf","\x91"),
	HX_HCSTRING("set_quaternion","\xdb","\x7d","\xdf","\xb1"),
	HX_HCSTRING("get_trace","\xdc","\xea","\xc8","\x59"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("translation","\xf1","\x30","\xa2","\x8a"),
	HX_HCSTRING("get_translation","\x88","\xe8","\x83","\x4b"),
	HX_HCSTRING("inverseTransform","\x9c","\xcb","\xa5","\xe7"),
	HX_HCSTRING("get_inverseTransform","\xa5","\x30","\x10","\x06"),
	HX_HCSTRING("transposed","\xcb","\x19","\x37","\x5d"),
	HX_HCSTRING("get_transposed","\x14","\xa2","\x2c","\xd3"),
	HX_HCSTRING("ToRowMajor","\x7a","\x05","\xd4","\x13"),
	HX_HCSTRING("ToColumnMajor","\xa8","\xa4","\xbe","\xe7"),
	HX_HCSTRING("m00","\xad","\xdf","\x52","\x00"),
	HX_HCSTRING("m01","\xae","\xdf","\x52","\x00"),
	HX_HCSTRING("m02","\xaf","\xdf","\x52","\x00"),
	HX_HCSTRING("m03","\xb0","\xdf","\x52","\x00"),
	HX_HCSTRING("m10","\x8c","\xe0","\x52","\x00"),
	HX_HCSTRING("m11","\x8d","\xe0","\x52","\x00"),
	HX_HCSTRING("m12","\x8e","\xe0","\x52","\x00"),
	HX_HCSTRING("m13","\x8f","\xe0","\x52","\x00"),
	HX_HCSTRING("m20","\x6b","\xe1","\x52","\x00"),
	HX_HCSTRING("m21","\x6c","\xe1","\x52","\x00"),
	HX_HCSTRING("m22","\x6d","\xe1","\x52","\x00"),
	HX_HCSTRING("m23","\x6e","\xe1","\x52","\x00"),
	HX_HCSTRING("m30","\x4a","\xe2","\x52","\x00"),
	HX_HCSTRING("m31","\x4b","\xe2","\x52","\x00"),
	HX_HCSTRING("m32","\x4c","\xe2","\x52","\x00"),
	HX_HCSTRING("m33","\x4d","\xe2","\x52","\x00"),
	HX_HCSTRING("GetLine","\x8a","\xef","\x86","\xe7"),
	HX_HCSTRING("SetLine","\x96","\x80","\x88","\xda"),
	HX_HCSTRING("GetColumn","\xec","\xb7","\xb4","\xe4"),
	HX_HCSTRING("SetColumn","\xf8","\xa3","\x05","\xc8"),
	HX_HCSTRING("get_diagonalLR","\x04","\x37","\x71","\x77"),
	HX_HCSTRING("set_diagonalLR","\x78","\x1f","\x91","\x97"),
	HX_HCSTRING("SetIdentity","\xe0","\xa6","\xc2","\xcd"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("SetMatrix4","\x71","\x6b","\xf7","\xdc"),
	HX_HCSTRING("GetIndex","\xbc","\x66","\x9d","\xf7"),
	HX_HCSTRING("SetIndex","\x30","\xc0","\xfa","\xa5"),
	HX_HCSTRING("SetRowCol","\x68","\x77","\x7f","\xce"),
	HX_HCSTRING("GetRowCol","\x5c","\x8b","\x2e","\xeb"),
	HX_HCSTRING("SwapCol","\x4d","\xd3","\x06","\x34"),
	HX_HCSTRING("SwapRow","\x27","\x35","\x12","\x34"),
	HX_HCSTRING("Transpose","\x59","\x30","\x02","\xee"),
	HX_HCSTRING("ToRotation","\xf9","\xd5","\x53","\x71"),
	HX_HCSTRING("Rotate","\x7b","\xba","\xb4","\xff"),
	HX_HCSTRING("SetTRS","\xd3","\x4e","\x04","\xa4"),
	HX_HCSTRING("ToInverseTransform","\x57","\x17","\x23","\xd2"),
	HX_HCSTRING("MultiplyTransform","\x88","\x86","\x2b","\x05"),
	HX_HCSTRING("Multiply3x4","\xeb","\xbf","\x51","\xe3"),
	HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74"),
	HX_HCSTRING("Transform4x4","\x24","\x28","\x84","\x06"),
	HX_HCSTRING("Transform3x4","\xe3","\x65","\x83","\x06"),
	HX_HCSTRING("Transform3x3","\xe2","\x65","\x83","\x06"),
	HX_HCSTRING("Transform2x3","\xa1","\xa3","\x82","\x06"),
	HX_HCSTRING("Transform2x2","\xa0","\xa3","\x82","\x06"),
	HX_HCSTRING("SetLookAt","\x54","\xca","\x2f","\x63"),
	HX_HCSTRING("SetFrustum","\x00","\x70","\x0a","\x1a"),
	HX_HCSTRING("SetFrustumInverse","\x90","\x03","\x66","\xb8"),
	HX_HCSTRING("SetOrtho","\x56","\x3c","\x13","\x1d"),
	HX_HCSTRING("SetOrthoInverse","\xfa","\x0d","\x41","\x10"),
	HX_HCSTRING("SetPerspective","\x1a","\xb5","\x05","\x13"),
	HX_HCSTRING("SetPerspectiveInverse","\xb6","\xf5","\xac","\x0c"),
	HX_HCSTRING("ToArray","\xfe","\xe1","\x64","\xbf"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix4_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix4_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(Matrix4_obj::identity,"identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix4_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix4_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(Matrix4_obj::identity,"identity");
};

#endif

hx::Class Matrix4_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c"),
	HX_HCSTRING("get_temp","\x9d","\x7e","\xb4","\xcc"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("get_identity","\x47","\xf9","\x48","\x6e"),
	HX_HCSTRING("FromQuaternion","\x48","\xf3","\x4b","\xbe"),
	HX_HCSTRING("FromArray","\xaf","\x37","\xeb","\x7b"),
	HX_HCSTRING("TRS","\x15","\x05","\x40","\x00"),
	HX_HCSTRING("Frustum","\x42","\x6f","\xcb","\x9d"),
	HX_HCSTRING("FrustumInverse","\x8e","\x50","\x54","\x2b"),
	HX_HCSTRING("Ortho","\x18","\x87","\x5a","\xc8"),
	HX_HCSTRING("OrthoInverse","\x78","\x7f","\x11","\x59"),
	HX_HCSTRING("Perspective","\x5c","\x7d","\x24","\xa5"),
	HX_HCSTRING("PerspectiveInverse","\xb4","\x99","\x78","\x42"),
	HX_HCSTRING("GetRotation","\xd4","\x97","\xac","\x12"),
	HX_HCSTRING("GetScale","\x34","\x9a","\x57","\xb2"),
	HX_HCSTRING("GetInverseTransform","\x32","\xac","\x29","\x00"),
	HX_HCSTRING("LookRotation","\xdd","\xe2","\xad","\xd2"),
	HX_HCSTRING("LookAt","\x52","\xe9","\x49","\x96"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void Matrix4_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.Matrix4","\xb9","\x0b","\xd1","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix4_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix4_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix4_obj >;
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
