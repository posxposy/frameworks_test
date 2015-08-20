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
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace math{

Void Quaternion_obj::__construct(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w)
{
HX_STACK_FRAME("haxor.math.Quaternion","new",0x5b4754ea,"haxor.math.Quaternion.new","haxor/math/Quaternion.hx",333,0x6b269d66)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_x,"p_x")
HX_STACK_ARG(__o_p_y,"p_y")
HX_STACK_ARG(__o_p_z,"p_z")
HX_STACK_ARG(__o_p_w,"p_w")
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
Float p_w = __o_p_w.Default(((Float)1.0));
{
	HX_STACK_LINE(334)
	this->x = p_x;
	HX_STACK_LINE(334)
	this->y = p_y;
	HX_STACK_LINE(334)
	this->z = p_z;
	HX_STACK_LINE(334)
	this->w = p_w;
}
;
	return null();
}

//Quaternion_obj::~Quaternion_obj() { }

Dynamic Quaternion_obj::__CreateEmpty() { return  new Quaternion_obj; }
hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w)
{  hx::ObjectPtr< Quaternion_obj > _result_ = new Quaternion_obj();
	_result_->__construct(__o_p_x,__o_p_y,__o_p_z,__o_p_w);
	return _result_;}

Dynamic Quaternion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quaternion_obj > _result_ = new Quaternion_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::haxor::math::Matrix4 Quaternion_obj::get_matrix( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_matrix",0xbdc626c0,"haxor.math.Quaternion.get_matrix","haxor/math/Quaternion.hx",271,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(271)
	::haxor::math::Matrix4 tmp = ::haxor::math::Matrix4_obj::FromQuaternion(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_matrix,return )

::haxor::math::Matrix4 Quaternion_obj::set_matrix( ::haxor::math::Matrix4 v){
	HX_STACK_FRAME("haxor.math.Quaternion","set_matrix",0xc143c534,"haxor.math.Quaternion.set_matrix","haxor/math/Quaternion.hx",272,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(272)
	::haxor::math::Matrix4 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	::haxor::math::Quaternion_obj::FromMatrix4(tmp,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(272)
	::haxor::math::Matrix4 tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_matrix,return )

::haxor::math::Vector3 Quaternion_obj::get_euler( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_euler",0xc7cabdca,"haxor.math.Quaternion.get_euler","haxor/math/Quaternion.hx",278,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	::haxor::math::Vector3 tmp = ::haxor::math::Quaternion_obj::ToEuler(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_euler,return )

::haxor::math::Vector3 Quaternion_obj::set_euler( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.Quaternion","set_euler",0xab1ba9d6,"haxor.math.Quaternion.set_euler","haxor/math/Quaternion.hx",279,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(279)
	::haxor::math::Vector3 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	::haxor::math::Quaternion_obj::FromEuler(tmp,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(279)
	::haxor::math::Vector3 tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_euler,return )

::haxor::math::Quaternion Quaternion_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_clone",0x9b0cf7be,"haxor.math.Quaternion.get_clone","haxor/math/Quaternion.hx",285,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(285)
	::haxor::math::Quaternion tmp4 = ::haxor::math::Quaternion_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(285)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_clone,return )

::haxor::math::Vector4 Quaternion_obj::get_xyzw( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_xyzw",0x2c7658bd,"haxor.math.Quaternion.get_xyzw","haxor/math/Quaternion.hx",291,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(291)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(291)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(291)
	::haxor::math::Vector4 tmp4 = ::haxor::math::Vector4_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(291)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_xyzw,return )

Float Quaternion_obj::get_length( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_length",0xa1058565,"haxor.math.Quaternion.get_length","haxor/math/Quaternion.hx",297,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(297)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(297)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(297)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(297)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(297)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(297)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(297)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(297)
	Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(297)
	Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(297)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(297)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(297)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(297)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_length,return )

::haxor::math::Quaternion Quaternion_obj::get_normalized( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_normalized",0x11090036,"haxor.math.Quaternion.get_normalized","haxor/math/Quaternion.hx",303,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(303)
	::haxor::math::Quaternion tmp4 = ::haxor::math::Quaternion_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(303)
	::haxor::math::Quaternion tmp5 = tmp4->Normalize();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(303)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_normalized,return )

::haxor::math::Quaternion Quaternion_obj::Set( hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w){
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
Float p_w = __o_p_w.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.math.Quaternion","Set",0x5b32d80c,"haxor.math.Quaternion.Set","haxor/math/Quaternion.hx",345,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_z,"p_z")
	HX_STACK_ARG(p_w,"p_w")
{
		HX_STACK_LINE(345)
		this->x = p_x;
		HX_STACK_LINE(345)
		this->y = p_y;
		HX_STACK_LINE(345)
		this->z = p_z;
		HX_STACK_LINE(345)
		this->w = p_w;
		HX_STACK_LINE(345)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,Set,return )

::haxor::math::Quaternion Quaternion_obj::SetQuaternion( ::haxor::math::Quaternion p_q){
	HX_STACK_FRAME("haxor.math.Quaternion","SetQuaternion",0xd518f04a,"haxor.math.Quaternion.SetQuaternion","haxor/math/Quaternion.hx",352,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_q,"p_q")
	HX_STACK_LINE(352)
	this->x = p_q->x;
	HX_STACK_LINE(352)
	this->y = p_q->y;
	HX_STACK_LINE(352)
	this->z = p_q->z;
	HX_STACK_LINE(352)
	this->w = p_q->w;
	HX_STACK_LINE(352)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,SetQuaternion,return )

::haxor::math::Quaternion Quaternion_obj::Normalize( ){
	HX_STACK_FRAME("haxor.math.Quaternion","Normalize",0x5c749f77,"haxor.math.Quaternion.Normalize","haxor/math/Quaternion.hx",359,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(360)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(360)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(360)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(360)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(360)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(360)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(360)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(360)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(360)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(360)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(360)
	Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(360)
	Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(360)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(360)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(360)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(360)
	Float l = tmp15;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(361)
	bool tmp16 = (l <= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(361)
	if ((tmp16)){
		HX_STACK_LINE(363)
		Float tmp17 = this->z = ((Float)0.0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(363)
		Float tmp18 = this->y = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(363)
		this->x = tmp18;
		HX_STACK_LINE(363)
		this->w = ((Float)1.0);
		HX_STACK_LINE(364)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(366)
	Float tmp17 = (Float(((Float)1.0)) / Float(l));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(366)
	Float tmp18 = l = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(366)
	hx::MultEq(this->x,tmp18);
	HX_STACK_LINE(367)
	hx::MultEq(this->y,l);
	HX_STACK_LINE(368)
	hx::MultEq(this->z,l);
	HX_STACK_LINE(369)
	hx::MultEq(this->w,l);
	HX_STACK_LINE(370)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,Normalize,return )

::haxor::math::Quaternion Quaternion_obj::get_conjugate( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_conjugate",0xd3d35ef9,"haxor.math.Quaternion.get_conjugate","haxor/math/Quaternion.hx",377,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(377)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(377)
	Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(377)
	Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(377)
	Float tmp6 = this->w;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(377)
	::haxor::math::Quaternion tmp7 = ::haxor::math::Quaternion_obj::__new(tmp1,tmp3,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(377)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_conjugate,return )

::haxor::math::Quaternion Quaternion_obj::get_inverse( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_inverse",0xfa25ca51,"haxor.math.Quaternion.get_inverse","haxor/math/Quaternion.hx",383,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(383)
	::haxor::math::Quaternion tmp = ::haxor::math::Quaternion_obj::Inverse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(383)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_inverse,return )

::haxor::math::Quaternion Quaternion_obj::Invert( ){
	HX_STACK_FRAME("haxor.math.Quaternion","Invert",0x2ebbc8ec,"haxor.math.Quaternion.Invert","haxor/math/Quaternion.hx",389,0x6b269d66)
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
	Float tmp6 = this->w;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(389)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(389)
	this->w = tmp7;
	HX_STACK_LINE(389)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,Invert,return )

::haxor::math::Quaternion Quaternion_obj::Scale( Float p_v){
	HX_STACK_FRAME("haxor.math.Quaternion","Scale",0xae417974,"haxor.math.Quaternion.Scale","haxor/math/Quaternion.hx",396,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(396)
	hx::MultEq(this->x,p_v);
	HX_STACK_LINE(396)
	hx::MultEq(this->y,p_v);
	HX_STACK_LINE(396)
	hx::MultEq(this->z,p_v);
	HX_STACK_LINE(396)
	hx::MultEq(this->w,p_v);
	HX_STACK_LINE(396)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,Scale,return )

::haxor::math::Quaternion Quaternion_obj::Multiply( ::haxor::math::Quaternion p_v,hx::Null< bool >  __o_p_normalize){
bool p_normalize = __o_p_normalize.Default(false);
	HX_STACK_FRAME("haxor.math.Quaternion","Multiply",0xd14c657a,"haxor.math.Quaternion.Multiply","haxor/math/Quaternion.hx",405,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_ARG(p_normalize,"p_normalize")
{
		HX_STACK_LINE(406)
		Float tmp = this->w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		Float tmp1 = p_v->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(406)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(406)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(406)
		Float tmp4 = p_v->w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(406)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(406)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(406)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(406)
		Float tmp8 = p_v->z;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(406)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(406)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(406)
		Float tmp11 = this->z;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(406)
		Float tmp12 = p_v->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(406)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(406)
		Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(406)
		Float vx = tmp14;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(407)
		Float tmp15 = this->w;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(407)
		Float tmp16 = p_v->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(407)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(407)
		Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(407)
		Float tmp19 = p_v->w;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(407)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(407)
		Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(407)
		Float tmp22 = this->z;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(407)
		Float tmp23 = p_v->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(407)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(407)
		Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(407)
		Float tmp26 = this->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(407)
		Float tmp27 = p_v->z;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(407)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(407)
		Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(407)
		Float vy = tmp29;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(408)
		Float tmp30 = this->w;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(408)
		Float tmp31 = p_v->z;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(408)
		Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(408)
		Float tmp33 = this->z;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(408)
		Float tmp34 = p_v->w;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(408)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(408)
		Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(408)
		Float tmp37 = this->x;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(408)
		Float tmp38 = p_v->y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(408)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(408)
		Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(408)
		Float tmp41 = this->y;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(408)
		Float tmp42 = p_v->x;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(408)
		Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(408)
		Float tmp44 = (tmp40 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(408)
		Float vz = tmp44;		HX_STACK_VAR(vz,"vz");
		HX_STACK_LINE(409)
		Float tmp45 = this->w;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(409)
		Float tmp46 = p_v->w;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(409)
		Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(409)
		Float tmp48 = this->x;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(409)
		Float tmp49 = p_v->x;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(409)
		Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(409)
		Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(409)
		Float tmp52 = this->y;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(409)
		Float tmp53 = p_v->y;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(409)
		Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(409)
		Float tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(409)
		Float tmp56 = this->z;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(409)
		Float tmp57 = p_v->z;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(409)
		Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(409)
		Float tmp59 = (tmp55 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(409)
		Float vw = tmp59;		HX_STACK_VAR(vw,"vw");
		HX_STACK_LINE(410)
		this->x = vx;
		HX_STACK_LINE(410)
		this->y = vy;
		HX_STACK_LINE(410)
		this->z = vz;
		HX_STACK_LINE(410)
		this->w = vw;
		HX_STACK_LINE(411)
		bool tmp60 = p_normalize;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(411)
		::haxor::math::Quaternion tmp61;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(411)
		if ((tmp60)){
			HX_STACK_LINE(411)
			tmp61 = this->Normalize();
		}
		else{
			HX_STACK_LINE(411)
			tmp61 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(411)
		return tmp61;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,Multiply,return )

::haxor::math::Vector3 Quaternion_obj::Transform( ::haxor::math::Vector3 p_v){
	HX_STACK_FRAME("haxor.math.Quaternion","Transform",0xf6669556,"haxor.math.Quaternion.Transform","haxor/math/Quaternion.hx",420,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(421)
	Float tmp = (p_v->x * p_v->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	Float tmp1 = (p_v->y * p_v->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(421)
	Float tmp3 = (p_v->z * p_v->z);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(421)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(421)
	Float l = tmp5;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(422)
	bool tmp6 = (l <= ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(422)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(422)
	if ((tmp6)){
		HX_STACK_LINE(422)
		tmp7 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(422)
		tmp7 = (Float(((Float)1.0)) / Float(l));
	}
	HX_STACK_LINE(422)
	Float nl = tmp7;		HX_STACK_VAR(nl,"nl");
	HX_STACK_LINE(423)
	hx::MultEq(p_v->x,nl);
	HX_STACK_LINE(424)
	hx::MultEq(p_v->y,nl);
	HX_STACK_LINE(425)
	hx::MultEq(p_v->z,nl);
	HX_STACK_LINE(426)
	::haxor::math::Quaternion tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(426)
	{
		HX_STACK_LINE(426)
		::haxor::context::DataContext tmp9 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		::haxor::context::DataContext _this = tmp9;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(426)
		Array< ::Dynamic > tmp10 = _this->m_q;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(426)
		int tmp11 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(426)
		int tmp12 = _this->m_q->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(426)
		int tmp13 = hx::Mod(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(426)
		int tmp14 = _this->m_nq = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(426)
		tmp8 = tmp10->__get(tmp14).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(426)
	Float tmp9 = p_v->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(426)
	Float tmp10 = p_v->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(426)
	Float tmp11 = p_v->z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(426)
	::haxor::math::Quaternion tmp12 = tmp8->Set(tmp9,tmp10,tmp11,(int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(426)
	::haxor::math::Quaternion qv = tmp12;		HX_STACK_VAR(qv,"qv");
	HX_STACK_LINE(427)
	::haxor::math::Quaternion tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(427)
	{
		HX_STACK_LINE(427)
		::haxor::context::DataContext tmp14 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(427)
		::haxor::context::DataContext _this = tmp14;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(427)
		Array< ::Dynamic > tmp15 = _this->m_q;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(427)
		int tmp16 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(427)
		int tmp17 = _this->m_q->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(427)
		int tmp18 = hx::Mod(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(427)
		int tmp19 = _this->m_nq = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(427)
		tmp13 = tmp15->__get(tmp19).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(427)
	::haxor::math::Quaternion tmp14 = tmp13->SetQuaternion(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(427)
	::haxor::math::Quaternion a = tmp14;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(428)
	::haxor::math::Quaternion tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(428)
	{
		HX_STACK_LINE(428)
		::haxor::context::DataContext tmp16 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(428)
		::haxor::context::DataContext _this = tmp16;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(428)
		Array< ::Dynamic > tmp17 = _this->m_q;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(428)
		int tmp18 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(428)
		int tmp19 = _this->m_q->length;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(428)
		int tmp20 = hx::Mod(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(428)
		int tmp21 = _this->m_nq = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(428)
		tmp15 = tmp17->__get(tmp21).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(428)
	Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(428)
	Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(428)
	Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(428)
	Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(428)
	Float tmp20 = this->z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(428)
	Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(428)
	Float tmp22 = this->w;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(428)
	::haxor::math::Quaternion tmp23 = tmp15->Set(tmp17,tmp19,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(428)
	::haxor::math::Quaternion c = tmp23;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(429)
	::haxor::math::Quaternion tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(429)
	::haxor::math::Quaternion tmp25 = qv->Multiply(tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(429)
	a->Multiply(tmp25,null());
	HX_STACK_LINE(430)
	Float tmp26 = (a->x * l);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(430)
	p_v->x = tmp26;
	HX_STACK_LINE(431)
	Float tmp27 = (a->y * l);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(431)
	p_v->y = tmp27;
	HX_STACK_LINE(432)
	Float tmp28 = (a->z * l);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(432)
	p_v->z = tmp28;
	HX_STACK_LINE(433)
	::haxor::math::Vector3 tmp29 = p_v;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(433)
	return tmp29;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,Transform,return )

::haxor::math::Quaternion Quaternion_obj::Delta( ::haxor::math::Quaternion p_q){
	HX_STACK_FRAME("haxor.math.Quaternion","Delta",0x0c9992e2,"haxor.math.Quaternion.Delta","haxor/math/Quaternion.hx",441,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_q,"p_q")
	HX_STACK_LINE(441)
	::haxor::math::Quaternion tmp = p_q;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	{
		HX_STACK_LINE(441)
		::haxor::context::DataContext tmp2 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		::haxor::context::DataContext _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(441)
		Array< ::Dynamic > tmp3 = _this->m_q;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		int tmp4 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		int tmp5 = _this->m_q->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(441)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(441)
		int tmp7 = _this->m_nq = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(441)
		tmp1 = tmp3->__get(tmp7).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(441)
	::haxor::math::Quaternion tmp2 = ::haxor::math::Quaternion_obj::DeltaRotation(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(441)
	::haxor::math::Quaternion tmp3 = this->SetQuaternion(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(441)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,Delta,return )

::haxor::math::Quaternion Quaternion_obj::SetAxisAngle( ::haxor::math::Vector3 p_axis,Float p_angle){
	HX_STACK_FRAME("haxor.math.Quaternion","SetAxisAngle",0xa588d5c6,"haxor.math.Quaternion.SetAxisAngle","haxor/math/Quaternion.hx",450,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_axis,"p_axis")
	HX_STACK_ARG(p_angle,"p_angle")
	HX_STACK_LINE(451)
	Float tmp = (p_angle * ((Float)0.5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(451)
	Float tmp1 = (tmp * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(451)
	p_angle = tmp1;
	HX_STACK_LINE(452)
	Float tmp2 = (p_axis->x * p_axis->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(452)
	Float tmp3 = (p_axis->y * p_axis->y);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(452)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(452)
	Float tmp5 = (p_axis->z * p_axis->z);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(452)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(452)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(452)
	Float l = tmp7;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(453)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(453)
	{
		HX_STACK_LINE(453)
		Float tmp9 = (l - ((Float)1.0));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(453)
		Float p_a = tmp9;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(453)
		bool tmp10 = (p_a < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(453)
		if ((tmp10)){
			HX_STACK_LINE(453)
			Float tmp11 = p_a;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(453)
			tmp8 = -(tmp11);
		}
		else{
			HX_STACK_LINE(453)
			tmp8 = p_a;
		}
	}
	HX_STACK_LINE(453)
	bool tmp9 = (tmp8 > ((Float)0.0001));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(453)
	if ((tmp9)){
		HX_STACK_LINE(453)
		p_axis->Normalize();
	}
	HX_STACK_LINE(454)
	Float tmp10 = p_angle;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(454)
	Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(454)
	Float s = tmp11;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(455)
	Float tmp12 = (p_axis->x * s);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(455)
	Float tmp13 = (p_axis->y * s);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(455)
	Float tmp14 = (p_axis->z * s);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(455)
	Float tmp15 = p_angle;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(455)
	Float tmp16 = ::Math_obj::cos(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(455)
	::haxor::math::Quaternion tmp17 = this->Set(tmp12,tmp13,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(455)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,SetAxisAngle,return )

Array< Float > Quaternion_obj::ToArray( ){
	HX_STACK_FRAME("haxor.math.Quaternion","ToArray",0x69b67388,"haxor.math.Quaternion.ToArray","haxor/math/Quaternion.hx",462,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(462)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(462)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(462)
	Array< Float > tmp4 = Array_obj< Float >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(462)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,ToArray,return )

::String Quaternion_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.Quaternion","ToString",0x6f2e5402,"haxor.math.Quaternion.ToString","haxor/math/Quaternion.hx",468,0x6b269d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(468)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int tmp1 = p_places;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(468)
			Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(468)
			Float d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(468)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(468)
				Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(468)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(468)
				Float p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(468)
				Float tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(468)
				bool tmp8 = (p_v < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(468)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(468)
				if ((tmp8)){
					HX_STACK_LINE(468)
					tmp9 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(468)
					tmp9 = ((Float)0.5);
				}
				HX_STACK_LINE(468)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(468)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(468)
				tmp3 = ((Float)(tmp11));
			}
			HX_STACK_LINE(468)
			Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(468)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		HX_STACK_LINE(468)
		::String tmp1 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(468)
		::String tmp2 = (tmp1 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(468)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int tmp4 = p_places;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(468)
			Float tmp5 = ::Math_obj::pow((int)10,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(468)
			Float d = tmp5;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(468)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(468)
				Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(468)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(468)
				Float p_v = tmp9;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(468)
				Float tmp10 = p_v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(468)
				bool tmp11 = (p_v < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(468)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(468)
				if ((tmp11)){
					HX_STACK_LINE(468)
					tmp12 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(468)
					tmp12 = ((Float)0.5);
				}
				HX_STACK_LINE(468)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(468)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(468)
				tmp6 = ((Float)(tmp14));
			}
			HX_STACK_LINE(468)
			Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(468)
			tmp3 = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(468)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(468)
		::String tmp5 = (tmp4 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(468)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int tmp7 = p_places;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(468)
			Float tmp8 = ::Math_obj::pow((int)10,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(468)
			Float d = tmp8;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(468)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(468)
				Float tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(468)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(468)
				Float p_v = tmp12;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(468)
				Float tmp13 = p_v;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(468)
				bool tmp14 = (p_v < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(468)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(468)
				if ((tmp14)){
					HX_STACK_LINE(468)
					tmp15 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(468)
					tmp15 = ((Float)0.5);
				}
				HX_STACK_LINE(468)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(468)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(468)
				tmp9 = ((Float)(tmp17));
			}
			HX_STACK_LINE(468)
			Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(468)
			tmp6 = (Float(tmp9) / Float(tmp10));
		}
		HX_STACK_LINE(468)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(468)
		::String tmp8 = (tmp7 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(468)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int tmp10 = p_places;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(468)
			Float tmp11 = ::Math_obj::pow((int)10,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(468)
			Float d = tmp11;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(468)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				Float tmp13 = this->w;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(468)
				Float tmp14 = d;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(468)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(468)
				Float p_v = tmp15;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(468)
				Float tmp16 = p_v;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(468)
				bool tmp17 = (p_v < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(468)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(468)
				if ((tmp17)){
					HX_STACK_LINE(468)
					tmp18 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(468)
					tmp18 = ((Float)0.5);
				}
				HX_STACK_LINE(468)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(468)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(468)
				tmp12 = ((Float)(tmp20));
			}
			HX_STACK_LINE(468)
			Float tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(468)
			tmp9 = (Float(tmp12) / Float(tmp13));
		}
		HX_STACK_LINE(468)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(468)
		::String tmp11 = (tmp10 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(468)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,ToString,return )

::haxor::math::Quaternion Quaternion_obj::temp;

::haxor::math::Quaternion Quaternion_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_temp",0x29c245d3,"haxor.math.Quaternion.get_temp","haxor/math/Quaternion.hx",16,0x6b269d66)
	HX_STACK_LINE(16)
	::haxor::math::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16)
		Array< ::Dynamic > tmp2 = _this->m_q;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		int tmp3 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		int tmp4 = _this->m_q->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		int tmp6 = _this->m_nq = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(16)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_temp,return )

::haxor::math::Quaternion Quaternion_obj::identity;

::haxor::math::Quaternion Quaternion_obj::get_identity( ){
	HX_STACK_FRAME("haxor.math.Quaternion","get_identity",0xaae9937d,"haxor.math.Quaternion.get_identity","haxor/math/Quaternion.hx",22,0x6b269d66)
	HX_STACK_LINE(22)
	::haxor::math::Quaternion tmp = ::haxor::math::Quaternion_obj::__new((int)0,(int)0,(int)0,((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_identity,return )

::haxor::math::Quaternion Quaternion_obj::FromEuler( ::haxor::math::Vector3 p_euler,::haxor::math::Quaternion p_result){
	HX_STACK_FRAME("haxor.math.Quaternion","FromEuler",0xda7d2b89,"haxor.math.Quaternion.FromEuler","haxor/math/Quaternion.hx",31,0x6b269d66)
	HX_STACK_ARG(p_euler,"p_euler")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(32)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(32)
		tmp1 = ::haxor::math::Quaternion_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(32)
		tmp1 = p_result;
	}
	HX_STACK_LINE(32)
	::haxor::math::Quaternion r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(33)
		Array< ::Dynamic > tmp4 = _this->m_v3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		int tmp5 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		int tmp6 = _this->m_v3->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		int tmp8 = _this->m_nv3 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(33)
	::haxor::math::Vector3 c = tmp2;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(34)
	::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(34)
		Array< ::Dynamic > tmp5 = _this->m_v3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		int tmp6 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		int tmp7 = _this->m_v3->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		int tmp9 = _this->m_nv3 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(34)
	::haxor::math::Vector3 s = tmp3;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(35)
	Float tmp4 = ((Float)0.0087266462599716477);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	Float k = tmp4;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(36)
	::haxor::math::Vector3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(36)
		Array< ::Dynamic > tmp7 = _this->m_v3;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		int tmp8 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		int tmp9 = _this->m_v3->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		int tmp11 = _this->m_nv3 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(36)
	Float tmp6 = (p_euler->x * k);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	Float tmp7 = (p_euler->y * k);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	Float tmp8 = (p_euler->z * k);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(36)
	::haxor::math::Vector3 tmp9 = tmp5->Set(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(36)
	::haxor::math::Vector3 e = tmp9;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(37)
	Float tmp10 = e->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(37)
	Float tmp11 = ::Math_obj::cos(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(37)
	Float tmp12 = e->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(37)
	Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(37)
	Float tmp14 = e->z;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(37)
	Float tmp15 = ::Math_obj::cos(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(37)
	c->Set(tmp11,tmp13,tmp15);
	HX_STACK_LINE(38)
	Float tmp16 = e->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(38)
	Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(38)
	Float tmp18 = e->y;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(38)
	Float tmp19 = ::Math_obj::sin(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(38)
	Float tmp20 = e->z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(38)
	Float tmp21 = ::Math_obj::sin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(38)
	s->Set(tmp17,tmp19,tmp21);
	HX_STACK_LINE(39)
	Float tmp22 = (s->x * c->y);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(39)
	Float tmp23 = c->z;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(39)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(39)
	Float tmp25 = (c->x * s->y);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(39)
	Float tmp26 = s->z;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(39)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(39)
	Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(39)
	r->x = tmp28;
	HX_STACK_LINE(40)
	Float tmp29 = (c->x * s->y);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(40)
	Float tmp30 = c->z;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(40)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(40)
	Float tmp32 = (s->x * c->y);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(40)
	Float tmp33 = s->z;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(40)
	Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(40)
	Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(40)
	r->y = tmp35;
	HX_STACK_LINE(41)
	Float tmp36 = (c->x * c->y);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(41)
	Float tmp37 = s->z;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(41)
	Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(41)
	Float tmp39 = (s->x * s->y);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(41)
	Float tmp40 = c->z;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(41)
	Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(41)
	Float tmp42 = (tmp38 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(41)
	r->z = tmp42;
	HX_STACK_LINE(42)
	Float tmp43 = (c->x * c->y);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(42)
	Float tmp44 = c->z;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(42)
	Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(42)
	Float tmp46 = (s->x * s->y);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(42)
	Float tmp47 = s->z;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(42)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(42)
	Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(42)
	r->w = tmp49;
	HX_STACK_LINE(43)
	::haxor::math::Quaternion tmp50 = r;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(43)
	return tmp50;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,FromEuler,return )

::haxor::math::Vector3 Quaternion_obj::ToEuler( ::haxor::math::Quaternion p_quaternion,::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Quaternion","ToEuler",0xb947df58,"haxor.math.Quaternion.ToEuler","haxor/math/Quaternion.hx",55,0x6b269d66)
	HX_STACK_ARG(p_quaternion,"p_quaternion")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(56)
	::haxor::math::Quaternion q = p_quaternion;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(57)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	if ((tmp)){
		HX_STACK_LINE(57)
		tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
	}
	else{
		HX_STACK_LINE(57)
		tmp1 = p_result;
	}
	HX_STACK_LINE(57)
	::haxor::math::Vector3 r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(58)
	Float tmp2 = (q->x * q->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	Float tmp3 = (q->z * q->w);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	Float test = tmp4;		HX_STACK_VAR(test,"test");
	HX_STACK_LINE(59)
	bool tmp5 = (test > ((Float)0.499));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	if ((tmp5)){
		HX_STACK_LINE(61)
		Float tmp6 = q->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		Float tmp7 = q->w;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		Float tmp8 = ::Math_obj::atan2(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		Float tmp9 = ((int)2 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		Float tmp10 = (tmp9 * ((Float)57.295779513082320876798154814105));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		r->y = tmp10;
		HX_STACK_LINE(62)
		Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(62)
		Float tmp13 = (tmp12 * ((Float)57.295779513082320876798154814105));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(62)
		r->z = tmp13;
		HX_STACK_LINE(63)
		r->x = (int)0;
		HX_STACK_LINE(64)
		::haxor::math::Vector3 tmp14 = r;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(64)
		return tmp14;
	}
	HX_STACK_LINE(66)
	bool tmp6 = (test < ((Float)-0.499));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	if ((tmp6)){
		HX_STACK_LINE(68)
		Float tmp7 = ((Float)-2.);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		Float tmp8 = q->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		Float tmp9 = q->w;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		Float tmp10 = ::Math_obj::atan2(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(68)
		r->y = tmp11;
		HX_STACK_LINE(69)
		Float tmp12 = ::Math_obj::PI;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		Float tmp15 = (tmp14 * ((Float)57.295779513082320876798154814105));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(69)
		r->z = tmp15;
		HX_STACK_LINE(70)
		r->x = (int)0;
		HX_STACK_LINE(71)
		::haxor::math::Vector3 tmp16 = r;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(71)
		return tmp16;
	}
	HX_STACK_LINE(74)
	Float tmp7 = (q->x * q->x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(74)
	Float sqx = tmp7;		HX_STACK_VAR(sqx,"sqx");
	HX_STACK_LINE(75)
	Float tmp8 = (q->y * q->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(75)
	Float sqy = tmp8;		HX_STACK_VAR(sqy,"sqy");
	HX_STACK_LINE(76)
	Float tmp9 = (q->z * q->z);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(76)
	Float sqz = tmp9;		HX_STACK_VAR(sqz,"sqz");
	HX_STACK_LINE(77)
	Float tmp10 = (((Float)2.0) * q->y);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(77)
	Float tmp11 = q->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(77)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(77)
	Float tmp13 = (((Float)2.0) * q->x);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(77)
	Float tmp14 = q->z;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(77)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(77)
	Float tmp17 = (((Float)2.0) * sqy);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(77)
	Float tmp18 = (((Float)1.0) - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(77)
	Float tmp19 = (((Float)2.0) * sqz);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(77)
	Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(77)
	Float tmp21 = ::Math_obj::atan2(tmp16,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(77)
	Float tmp22 = (tmp21 * ((Float)57.295779513082320876798154814105));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(77)
	r->y = tmp22;
	HX_STACK_LINE(78)
	Float tmp23 = (((Float)2.0) * test);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(78)
	Float tmp24 = ::Math_obj::asin(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(78)
	Float tmp25 = (tmp24 * ((Float)57.295779513082320876798154814105));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(78)
	r->z = tmp25;
	HX_STACK_LINE(79)
	Float tmp26 = (((Float)2.0) * q->x);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(79)
	Float tmp27 = q->w;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(79)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(79)
	Float tmp29 = (((Float)2.0) * q->y);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(79)
	Float tmp30 = q->z;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(79)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(79)
	Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(79)
	Float tmp33 = (((Float)2.0) * sqx);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(79)
	Float tmp34 = (((Float)1.0) - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(79)
	Float tmp35 = (((Float)2.0) * sqz);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(79)
	Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(79)
	Float tmp37 = ::Math_obj::atan2(tmp32,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(79)
	Float tmp38 = (tmp37 * ((Float)57.295779513082320876798154814105));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(79)
	r->x = tmp38;
	HX_STACK_LINE(80)
	::haxor::math::Vector3 tmp39 = r;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(80)
	return tmp39;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,ToEuler,return )

::haxor::math::Quaternion Quaternion_obj::FromMatrix4( ::haxor::math::Matrix4 p_matrix,::haxor::math::Quaternion p_result){
	HX_STACK_FRAME("haxor.math.Quaternion","FromMatrix4",0x46145cf3,"haxor.math.Quaternion.FromMatrix4","haxor/math/Quaternion.hx",90,0x6b269d66)
	HX_STACK_ARG(p_matrix,"p_matrix")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(91)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	if ((tmp)){
		HX_STACK_LINE(91)
		tmp1 = ::haxor::math::Quaternion_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(91)
		tmp1 = p_result;
	}
	HX_STACK_LINE(91)
	::haxor::math::Quaternion r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(92)
	::haxor::math::Matrix4 v = p_matrix;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(93)
	Float tmp2 = (v->m00 - v->m11);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	Float tmp3 = v->m22;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	Float fourXSquaredMinus1 = tmp4;		HX_STACK_VAR(fourXSquaredMinus1,"fourXSquaredMinus1");
	HX_STACK_LINE(94)
	Float tmp5 = (v->m11 - v->m00);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	Float tmp6 = v->m22;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(94)
	Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(94)
	Float fourYSquaredMinus1 = tmp7;		HX_STACK_VAR(fourYSquaredMinus1,"fourYSquaredMinus1");
	HX_STACK_LINE(95)
	Float tmp8 = (v->m22 - v->m00);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(95)
	Float tmp9 = v->m11;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(95)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(95)
	Float fourZSquaredMinus1 = tmp10;		HX_STACK_VAR(fourZSquaredMinus1,"fourZSquaredMinus1");
	HX_STACK_LINE(96)
	Float tmp11 = (v->m00 + v->m11);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(96)
	Float tmp12 = v->m22;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(96)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(96)
	Float fourWSquaredMinus1 = tmp13;		HX_STACK_VAR(fourWSquaredMinus1,"fourWSquaredMinus1");
	HX_STACK_LINE(97)
	int biggestIndex = (int)0;		HX_STACK_VAR(biggestIndex,"biggestIndex");
	HX_STACK_LINE(98)
	Float fourBiggestSquaredMinus1 = fourWSquaredMinus1;		HX_STACK_VAR(fourBiggestSquaredMinus1,"fourBiggestSquaredMinus1");
	HX_STACK_LINE(99)
	bool tmp14 = (fourXSquaredMinus1 > fourBiggestSquaredMinus1);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(99)
	if ((tmp14)){
		HX_STACK_LINE(99)
		fourBiggestSquaredMinus1 = fourXSquaredMinus1;
		HX_STACK_LINE(99)
		biggestIndex = (int)1;
	}
	HX_STACK_LINE(100)
	bool tmp15 = (fourYSquaredMinus1 > fourBiggestSquaredMinus1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(100)
	if ((tmp15)){
		HX_STACK_LINE(100)
		fourBiggestSquaredMinus1 = fourYSquaredMinus1;
		HX_STACK_LINE(100)
		biggestIndex = (int)2;
	}
	HX_STACK_LINE(101)
	bool tmp16 = (fourZSquaredMinus1 > fourBiggestSquaredMinus1);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(101)
	if ((tmp16)){
		HX_STACK_LINE(101)
		fourBiggestSquaredMinus1 = fourZSquaredMinus1;
		HX_STACK_LINE(101)
		biggestIndex = (int)3;
	}
	HX_STACK_LINE(102)
	Float tmp17 = (fourBiggestSquaredMinus1 + ((Float)1.0));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(102)
	Float tmp18 = ::Math_obj::sqrt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(102)
	Float tmp19 = (tmp18 * ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(102)
	Float biggestVal = tmp19;		HX_STACK_VAR(biggestVal,"biggestVal");
	HX_STACK_LINE(103)
	Float tmp20 = (Float(((Float)0.25)) / Float(biggestVal));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(103)
	Float mult = tmp20;		HX_STACK_VAR(mult,"mult");
	HX_STACK_LINE(104)
	int tmp21 = biggestIndex;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(104)
	switch( (int)(tmp21)){
		case (int)0: {
			HX_STACK_LINE(106)
			r->w = biggestVal;
			HX_STACK_LINE(106)
			Float tmp22 = (v->m21 - v->m12);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(106)
			Float tmp23 = mult;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(106)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(106)
			r->x = tmp24;
			HX_STACK_LINE(106)
			Float tmp25 = (v->m02 - v->m20);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(106)
			Float tmp26 = mult;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(106)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(106)
			r->y = tmp27;
			HX_STACK_LINE(106)
			Float tmp28 = (v->m10 - v->m01);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(106)
			Float tmp29 = mult;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(106)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(106)
			r->z = tmp30;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(107)
			Float tmp22 = (v->m21 - v->m12);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(107)
			Float tmp23 = mult;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(107)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(107)
			r->w = tmp24;
			HX_STACK_LINE(107)
			r->x = biggestVal;
			HX_STACK_LINE(107)
			Float tmp25 = (v->m10 + v->m01);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(107)
			Float tmp26 = mult;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(107)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(107)
			r->y = tmp27;
			HX_STACK_LINE(107)
			Float tmp28 = (v->m02 + v->m20);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(107)
			Float tmp29 = mult;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(107)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(107)
			r->z = tmp30;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(108)
			Float tmp22 = (v->m02 - v->m20);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(108)
			Float tmp23 = mult;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(108)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(108)
			r->w = tmp24;
			HX_STACK_LINE(108)
			Float tmp25 = (v->m10 + v->m01);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(108)
			Float tmp26 = mult;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(108)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(108)
			r->x = tmp27;
			HX_STACK_LINE(108)
			r->y = biggestVal;
			HX_STACK_LINE(108)
			Float tmp28 = (v->m21 + v->m12);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(108)
			Float tmp29 = mult;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(108)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(108)
			r->z = tmp30;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(109)
			Float tmp22 = (v->m10 - v->m01);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(109)
			Float tmp23 = mult;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(109)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(109)
			r->w = tmp24;
			HX_STACK_LINE(109)
			Float tmp25 = (v->m02 + v->m20);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(109)
			Float tmp26 = mult;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(109)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(109)
			r->x = tmp27;
			HX_STACK_LINE(109)
			Float tmp28 = (v->m21 + v->m12);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(109)
			Float tmp29 = mult;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(109)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(109)
			r->y = tmp30;
			HX_STACK_LINE(109)
			r->z = biggestVal;
		}
		;break;
	}
	HX_STACK_LINE(111)
	::haxor::math::Quaternion tmp22 = r;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(111)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,FromMatrix4,return )

Float Quaternion_obj::Dot( ::haxor::math::Quaternion p_a,::haxor::math::Quaternion p_b){
	HX_STACK_FRAME("haxor.math.Quaternion","Dot",0x5b277ef3,"haxor.math.Quaternion.Dot","haxor/math/Quaternion.hx",120,0x6b269d66)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_LINE(120)
	Float tmp = (p_a->x * p_b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Float tmp1 = (p_a->y * p_b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	Float tmp3 = (p_a->z * p_b->z);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	Float tmp5 = (p_a->w * p_b->w);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(120)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,Dot,return )

::haxor::math::Quaternion Quaternion_obj::DeltaRotation( ::haxor::math::Quaternion p_a,::haxor::math::Quaternion p_b,::haxor::math::Quaternion p_result){
	HX_STACK_FRAME("haxor.math.Quaternion","DeltaRotation",0x96d23e40,"haxor.math.Quaternion.DeltaRotation","haxor/math/Quaternion.hx",129,0x6b269d66)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(130)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	if ((tmp)){
		HX_STACK_LINE(130)
		tmp1 = ::haxor::math::Quaternion_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(130)
		tmp1 = p_result;
	}
	HX_STACK_LINE(130)
	::haxor::math::Quaternion r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(131)
	::haxor::math::Quaternion tmp2 = p_a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	::haxor::math::Quaternion tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	::haxor::math::Quaternion_obj::Inverse(tmp2,tmp3);
	HX_STACK_LINE(132)
	::haxor::math::Quaternion tmp4 = p_b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(132)
	r->Multiply(tmp4,null());
	HX_STACK_LINE(133)
	::haxor::math::Quaternion tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(133)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,DeltaRotation,return )

::haxor::math::Quaternion Quaternion_obj::Inverse( ::haxor::math::Quaternion p_q,::haxor::math::Quaternion p_result){
	HX_STACK_FRAME("haxor.math.Quaternion","Inverse",0xb594051a,"haxor.math.Quaternion.Inverse","haxor/math/Quaternion.hx",142,0x6b269d66)
	HX_STACK_ARG(p_q,"p_q")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(143)
	Float tmp = (p_q->x * p_q->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	Float tmp1 = (p_q->y * p_q->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	Float tmp3 = (p_q->z * p_q->z);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	Float tmp5 = (p_q->w * p_q->w);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(143)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(143)
	Float d = tmp6;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(144)
	bool tmp7 = (d <= ((Float)0.0));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(144)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(144)
	if ((tmp7)){
		HX_STACK_LINE(144)
		tmp8 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(144)
		tmp8 = (Float(((Float)1.0)) / Float(d));
	}
	HX_STACK_LINE(144)
	d = tmp8;
	HX_STACK_LINE(145)
	bool tmp9 = (p_result == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(145)
	::haxor::math::Quaternion tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(145)
	if ((tmp9)){
		HX_STACK_LINE(145)
		tmp10 = ::haxor::math::Quaternion_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(145)
		tmp10 = p_result;
	}
	HX_STACK_LINE(145)
	::haxor::math::Quaternion r = tmp10;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(146)
	Float tmp11 = p_q->x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(146)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(146)
	Float tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(146)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(146)
	Float tmp15 = p_q->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(146)
	Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(146)
	Float tmp17 = d;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(146)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(146)
	Float tmp19 = p_q->z;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(146)
	Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(146)
	Float tmp21 = d;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(146)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(146)
	Float tmp23 = (p_q->w * d);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(146)
	::haxor::math::Quaternion tmp24 = r->Set(tmp14,tmp18,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(146)
	return tmp24;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,Inverse,return )

::haxor::math::Quaternion Quaternion_obj::Lerp( ::haxor::math::Quaternion p_a,::haxor::math::Quaternion p_b,Float p_ratio,::haxor::math::Quaternion p_result){
	HX_STACK_FRAME("haxor.math.Quaternion","Lerp",0x6ca9b2cd,"haxor.math.Quaternion.Lerp","haxor/math/Quaternion.hx",157,0x6b269d66)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(158)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	if ((tmp)){
		HX_STACK_LINE(158)
		tmp1 = ::haxor::math::Quaternion_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(158)
		tmp1 = p_result;
	}
	HX_STACK_LINE(158)
	::haxor::math::Quaternion c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(159)
	::haxor::math::Quaternion tmp2 = ::haxor::math::Quaternion_obj::__new(p_a->x,p_a->y,p_a->z,p_a->w);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	::haxor::math::Quaternion ca = tmp2;		HX_STACK_VAR(ca,"ca");
	HX_STACK_LINE(160)
	Float tmp3 = (p_a->x * p_b->x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	Float tmp4 = (p_a->y * p_b->y);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	Float tmp6 = (p_a->z * p_b->z);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(160)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(160)
	Float tmp8 = (p_a->w * p_b->w);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(160)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(160)
	Float dot = tmp9;		HX_STACK_VAR(dot,"dot");
	HX_STACK_LINE(161)
	bool tmp10 = (dot < ((Float)0.0));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(161)
	if ((tmp10)){
		HX_STACK_LINE(163)
		Float tmp11 = ca->w;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(163)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(163)
		ca->w = tmp12;
		HX_STACK_LINE(164)
		Float tmp13 = ca->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(164)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(164)
		ca->x = tmp14;
		HX_STACK_LINE(165)
		Float tmp15 = ca->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(165)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(165)
		ca->y = tmp16;
		HX_STACK_LINE(166)
		Float tmp17 = ca->z;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(166)
		Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(166)
		ca->z = tmp18;
	}
	HX_STACK_LINE(168)
	Float tmp11 = ca->x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(168)
	Float tmp12 = (p_b->x - ca->x);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(168)
	Float tmp13 = p_ratio;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(168)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(168)
	Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(168)
	c->x = tmp15;
	HX_STACK_LINE(169)
	Float tmp16 = ca->y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(169)
	Float tmp17 = (p_b->y - ca->y);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(169)
	Float tmp18 = p_ratio;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(169)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(169)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(169)
	c->y = tmp20;
	HX_STACK_LINE(170)
	Float tmp21 = ca->z;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(170)
	Float tmp22 = (p_b->z - ca->z);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(170)
	Float tmp23 = p_ratio;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(170)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(170)
	Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(170)
	c->z = tmp25;
	HX_STACK_LINE(171)
	Float tmp26 = ca->w;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(171)
	Float tmp27 = (p_b->w - ca->w);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(171)
	Float tmp28 = p_ratio;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(171)
	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(171)
	Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(171)
	c->w = tmp30;
	HX_STACK_LINE(172)
	c->Normalize();
	HX_STACK_LINE(173)
	::haxor::math::Quaternion tmp31 = c;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(173)
	return tmp31;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,Lerp,return )

::haxor::math::Quaternion Quaternion_obj::Slerp( ::haxor::math::Quaternion p_a,::haxor::math::Quaternion p_b,Float p_ratio){
	HX_STACK_FRAME("haxor.math.Quaternion","Slerp",0xb4377354,"haxor.math.Quaternion.Slerp","haxor/math/Quaternion.hx",184,0x6b269d66)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_LINE(196)
	::haxor::math::Quaternion tmp = ::haxor::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	::haxor::math::Quaternion qm = tmp;		HX_STACK_VAR(qm,"qm");
	HX_STACK_LINE(197)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		::haxor::context::DataContext tmp2 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		::haxor::context::DataContext _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(197)
		Array< ::Dynamic > tmp3 = _this->m_q;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		int tmp4 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		int tmp5 = _this->m_q->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		int tmp7 = _this->m_nq = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		tmp1 = tmp3->__get(tmp7).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(197)
	::haxor::math::Quaternion tmp2 = p_b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	::haxor::math::Quaternion tmp3 = tmp1->SetQuaternion(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	::haxor::math::Quaternion z = tmp3;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(198)
	Float tmp4 = (p_a->x * p_b->x);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(198)
	Float tmp5 = (p_a->y * p_b->y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(198)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(198)
	Float tmp7 = (p_a->z * p_b->z);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(198)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(198)
	Float tmp9 = (p_a->w * p_b->w);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(198)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(198)
	Float cosTheta = tmp10;		HX_STACK_VAR(cosTheta,"cosTheta");
	HX_STACK_LINE(201)
	bool tmp11 = (cosTheta < ((Float)0.0));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(201)
	if ((tmp11)){
		HX_STACK_LINE(203)
		z->Invert();
		HX_STACK_LINE(204)
		Float tmp12 = cosTheta;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(204)
		Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(204)
		cosTheta = tmp13;
	}
	HX_STACK_LINE(208)
	Float tmp12 = cosTheta;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(208)
	Float tmp13 = ((Float)0.9999);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(208)
	bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(208)
	if ((tmp14)){
		HX_STACK_LINE(212)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			Float p_a1 = p_a->x;		HX_STACK_VAR(p_a1,"p_a1");
			HX_STACK_LINE(212)
			Float tmp16 = p_a1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(212)
			Float tmp17 = (z->x - p_a1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(212)
			Float tmp18 = p_ratio;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(212)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(212)
			tmp15 = (tmp16 + tmp19);
		}
		HX_STACK_LINE(213)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float p_a1 = p_a->y;		HX_STACK_VAR(p_a1,"p_a1");
			HX_STACK_LINE(213)
			Float tmp17 = p_a1;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			Float tmp18 = (z->y - p_a1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			Float tmp19 = p_ratio;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(213)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(213)
			tmp16 = (tmp17 + tmp20);
		}
		HX_STACK_LINE(214)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Float p_a1 = p_a->z;		HX_STACK_VAR(p_a1,"p_a1");
			HX_STACK_LINE(214)
			Float tmp18 = p_a1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(214)
			Float tmp19 = (z->z - p_a1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(214)
			Float tmp20 = p_ratio;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(214)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(214)
			tmp17 = (tmp18 + tmp21);
		}
		HX_STACK_LINE(215)
		Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			Float p_a1 = p_a->w;		HX_STACK_VAR(p_a1,"p_a1");
			HX_STACK_LINE(215)
			Float tmp19 = p_a1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(215)
			Float tmp20 = (z->w - p_a1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(215)
			Float tmp21 = p_ratio;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(215)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(215)
			tmp18 = (tmp19 + tmp22);
		}
		HX_STACK_LINE(211)
		qm->Set(tmp15,tmp16,tmp17,tmp18);
	}
	else{
		HX_STACK_LINE(220)
		Float tmp15 = cosTheta;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(220)
		Float tmp16 = ::Math_obj::acos(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(220)
		Float angle = tmp16;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(221)
		Float tmp17 = angle;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(221)
		Float tmp18 = ::Math_obj::sin(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(221)
		Float tmp19 = (Float(((Float)1.0)) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(221)
		Float s = tmp19;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(222)
		Float tmp20 = (((Float)1.0) - p_ratio);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(222)
		Float tmp21 = angle;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(222)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(222)
		Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(222)
		Float s0 = tmp23;		HX_STACK_VAR(s0,"s0");
		HX_STACK_LINE(223)
		Float tmp24 = (p_ratio * angle);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(223)
		Float tmp25 = ::Math_obj::sin(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(223)
		Float s1 = tmp25;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(224)
		Float tmp26 = (s0 * p_a->x);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(224)
		Float tmp27 = (s1 * z->x);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(224)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(224)
		Float tmp29 = s;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(224)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(224)
		qm->x = tmp30;
		HX_STACK_LINE(225)
		Float tmp31 = (s0 * p_a->y);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(225)
		Float tmp32 = (s1 * z->y);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(225)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(225)
		Float tmp34 = s;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(225)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(225)
		qm->y = tmp35;
		HX_STACK_LINE(226)
		Float tmp36 = (s0 * p_a->z);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(226)
		Float tmp37 = (s1 * z->z);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(226)
		Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(226)
		Float tmp39 = s;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(226)
		Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(226)
		qm->z = tmp40;
		HX_STACK_LINE(227)
		Float tmp41 = (s0 * p_a->w);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(227)
		Float tmp42 = (s1 * z->w);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(227)
		Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(227)
		Float tmp44 = s;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(227)
		Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(227)
		qm->w = tmp45;
	}
	HX_STACK_LINE(229)
	::haxor::math::Quaternion tmp15 = qm;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(229)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,Slerp,return )

::haxor::math::Quaternion Quaternion_obj::FromAxisAngle( ::haxor::math::Vector3 p_axis,Float p_angle){
	HX_STACK_FRAME("haxor.math.Quaternion","FromAxisAngle",0x08461192,"haxor.math.Quaternion.FromAxisAngle","haxor/math/Quaternion.hx",239,0x6b269d66)
	HX_STACK_ARG(p_axis,"p_axis")
	HX_STACK_ARG(p_angle,"p_angle")
	HX_STACK_LINE(240)
	Float tmp = (p_angle * ((Float)0.5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	Float tmp1 = (tmp * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	p_angle = tmp1;
	HX_STACK_LINE(241)
	Float tmp2 = (p_axis->x * p_axis->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	Float tmp3 = (p_axis->y * p_axis->y);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(241)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(241)
	Float tmp5 = (p_axis->z * p_axis->z);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(241)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(241)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(241)
	Float l = tmp7;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(242)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		Float tmp9 = (l - ((Float)1.0));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(242)
		Float p_a = tmp9;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(242)
		bool tmp10 = (p_a < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		if ((tmp10)){
			HX_STACK_LINE(242)
			Float tmp11 = p_a;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(242)
			tmp8 = -(tmp11);
		}
		else{
			HX_STACK_LINE(242)
			tmp8 = p_a;
		}
	}
	HX_STACK_LINE(242)
	bool tmp9 = (tmp8 > ((Float)0.0001));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(242)
	if ((tmp9)){
		HX_STACK_LINE(242)
		p_axis->Normalize();
	}
	HX_STACK_LINE(243)
	Float tmp10 = p_angle;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(243)
	Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(243)
	Float s = tmp11;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(244)
	Float tmp12 = (p_axis->x * s);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(244)
	Float tmp13 = (p_axis->y * s);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(244)
	Float tmp14 = (p_axis->z * s);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(244)
	Float tmp15 = p_angle;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(244)
	Float tmp16 = ::Math_obj::cos(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(244)
	::haxor::math::Quaternion tmp17 = ::haxor::math::Quaternion_obj::__new(tmp12,tmp13,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(244)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,FromAxisAngle,return )

::haxor::math::Quaternion Quaternion_obj::LookAt( ::haxor::math::Vector3 p_eye,::haxor::math::Vector3 p_at,::haxor::math::Vector3 p_up,::haxor::math::Quaternion p_result){
	HX_STACK_FRAME("haxor.math.Quaternion","LookAt",0xf0985708,"haxor.math.Quaternion.LookAt","haxor/math/Quaternion.hx",255,0x6b269d66)
	HX_STACK_ARG(p_eye,"p_eye")
	HX_STACK_ARG(p_at,"p_at")
	HX_STACK_ARG(p_up,"p_up")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(256)
	::haxor::math::Vector3 tmp = p_eye;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	::haxor::math::Vector3 tmp1 = p_at;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	::haxor::math::Vector3 tmp2 = p_up;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	::haxor::math::Matrix4 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(256)
		::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(256)
		Array< ::Dynamic > tmp5 = _this->m_m4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(256)
		int tmp6 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(256)
		int tmp7 = _this->m_m4->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(256)
		int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(256)
		int tmp9 = _this->m_nq = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(256)
		tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Matrix4 >();
	}
	HX_STACK_LINE(256)
	::haxor::math::Matrix4 tmp4 = ::haxor::math::Matrix4_obj::LookAt(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(256)
	::haxor::math::Quaternion tmp5 = p_result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(256)
	::haxor::math::Quaternion tmp6 = ::haxor::math::Quaternion_obj::FromMatrix4(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(256)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,LookAt,return )

::haxor::math::Quaternion Quaternion_obj::LookRotation( ::haxor::math::Vector3 p_forward,::haxor::math::Vector3 p_up){
	HX_STACK_FRAME("haxor.math.Quaternion","LookRotation",0x0f4e7d13,"haxor.math.Quaternion.LookRotation","haxor/math/Quaternion.hx",265,0x6b269d66)
	HX_STACK_ARG(p_forward,"p_forward")
	HX_STACK_ARG(p_up,"p_up")
	HX_STACK_LINE(265)
	::haxor::math::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		::haxor::math::Matrix4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			::haxor::math::Matrix4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(265)
				::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				Array< ::Dynamic > tmp4 = _this->m_m4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(265)
				int tmp5 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(265)
				int tmp6 = _this->m_m4->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(265)
				int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(265)
				int tmp8 = _this->m_nq = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(265)
				tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Matrix4 >();
			}
			HX_STACK_LINE(265)
			::haxor::math::Matrix4 p_result = tmp2;		HX_STACK_VAR(p_result,"p_result");
			HX_STACK_LINE(265)
			::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(265)
				::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				Array< ::Dynamic > tmp5 = _this->m_v3;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(265)
				int tmp6 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(265)
				int tmp7 = _this->m_v3->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(265)
				int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(265)
				int tmp9 = _this->m_nv3 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(265)
				tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector3 >();
			}
			HX_STACK_LINE(265)
			::haxor::math::Vector3 tmp4 = tmp3->Set((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			::haxor::math::Vector3 tmp5 = p_forward;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			::haxor::math::Vector3 tmp6 = p_up;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			::haxor::math::Matrix4 tmp7 = p_result;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(265)
			tmp1 = ::haxor::math::Matrix4_obj::LookAt(tmp4,tmp5,tmp6,tmp7);
		}
		HX_STACK_LINE(265)
		::haxor::math::Matrix4 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(265)
		::haxor::math::Matrix4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			::haxor::context::DataContext _this1 = tmp3;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(265)
			Array< ::Dynamic > tmp4 = _this1->m_m4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			int tmp5 = (_this1->m_nm4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			int tmp6 = _this1->m_m4->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(265)
			int tmp8 = _this1->m_nq = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(265)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Matrix4 >();
		}
		HX_STACK_LINE(265)
		::haxor::math::Matrix4 tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		::haxor::math::Matrix4 tmp4 = tmp2->SetMatrix4(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		::haxor::math::Matrix4 tmp5 = tmp4->ToRotation();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		tmp = ::haxor::math::Quaternion_obj::FromMatrix4(tmp5,null());
	}
	HX_STACK_LINE(265)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,LookRotation,return )

::haxor::math::Quaternion Quaternion_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.math.Quaternion","Parse",0xf2c83b1d,"haxor.math.Quaternion.Parse","haxor/math/Quaternion.hx",476,0x6b269d66)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(477)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(477)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(477)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(478)
		::haxor::math::Quaternion tmp2 = ::haxor::math::Quaternion_obj::__new((int)0,(int)0,(int)0,((Float)1.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(479)
		::String tmp3 = tk->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(479)
		::String tmp4 = ::StringTools_obj::trim(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(479)
		Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(480)
		::String tmp6 = tk->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(480)
		::String tmp7 = ::StringTools_obj::trim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(480)
		Float tmp8 = ::Std_obj::parseFloat(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(481)
		::String tmp9 = tk->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(481)
		::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(481)
		Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(482)
		::String tmp12 = tk->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(482)
		::String tmp13 = ::StringTools_obj::trim(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(482)
		Float tmp14 = ::Std_obj::parseFloat(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(478)
		::haxor::math::Quaternion tmp15 = tmp2->Set(tmp5,tmp8,tmp11,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(478)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,Parse,return )


Quaternion_obj::Quaternion_obj()
{
}

void Quaternion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quaternion);
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(xyzw,"xyzw");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(conjugate,"conjugate");
	HX_MARK_MEMBER_NAME(inverse,"inverse");
	HX_MARK_END_CLASS();
}

void Quaternion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(xyzw,"xyzw");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(conjugate,"conjugate");
	HX_VISIT_MEMBER_NAME(inverse,"inverse");
}

Dynamic Quaternion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xyzw") ) { return inCallProp == hx::paccAlways ? get_xyzw() : xyzw; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"euler") ) { if (inCallProp == hx::paccAlways) return get_euler(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return inCallProp == hx::paccAlways ? get_clone() : clone; }
		if (HX_FIELD_EQ(inName,"Scale") ) { return Scale_dyn(); }
		if (HX_FIELD_EQ(inName,"Delta") ) { return Delta_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"Invert") ) { return Invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return inCallProp == hx::paccAlways ? get_inverse() : inverse; }
		if (HX_FIELD_EQ(inName,"ToArray") ) { return ToArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_xyzw") ) { return get_xyzw_dyn(); }
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_euler") ) { return get_euler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_euler") ) { return set_euler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clone") ) { return get_clone_dyn(); }
		if (HX_FIELD_EQ(inName,"Normalize") ) { return Normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"conjugate") ) { return inCallProp == hx::paccAlways ? get_conjugate() : conjugate; }
		if (HX_FIELD_EQ(inName,"Transform") ) { return Transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"normalized") ) { return inCallProp == hx::paccAlways ? get_normalized() : normalized; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_inverse") ) { return get_inverse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SetAxisAngle") ) { return SetAxisAngle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SetQuaternion") ) { return SetQuaternion_dyn(); }
		if (HX_FIELD_EQ(inName,"get_conjugate") ) { return get_conjugate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_normalized") ) { return get_normalized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Quaternion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Dot") ) { outValue = Dot_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = inCallProp == hx::paccAlways ? get_temp() : temp; return true; }
		if (HX_FIELD_EQ(inName,"Lerp") ) { outValue = Lerp_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Slerp") ) { outValue = Slerp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LookAt") ) { outValue = LookAt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ToEuler") ) { outValue = ToEuler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Inverse") ) { outValue = Inverse_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { outValue = get_temp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = inCallProp == hx::paccAlways ? get_identity() : identity; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FromEuler") ) { outValue = FromEuler_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FromMatrix4") ) { outValue = FromMatrix4_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_identity") ) { outValue = get_identity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LookRotation") ) { outValue = LookRotation_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DeltaRotation") ) { outValue = DeltaRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FromAxisAngle") ) { outValue = FromAxisAngle_dyn(); return true;  }
	}
	return false;
}

Dynamic Quaternion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xyzw") ) { xyzw=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"euler") ) { if (inCallProp == hx::paccAlways) return set_euler(inValue); }
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { inverse=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"conjugate") ) { conjugate=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Quaternion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< ::haxor::math::Quaternion >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { identity=ioValue.Cast< ::haxor::math::Quaternion >(); return true; }
	}
	return false;
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("euler","\x69","\xd9","\x20","\x75"));
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("xyzw","\xfe","\xd5","\xad","\x4f"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("conjugate","\x18","\x36","\x89","\x42"));
	outFields->push(HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(Quaternion_obj,clone),HX_HCSTRING("clone","\x5d","\x13","\x63","\x48")},
	{hx::fsObject /*::haxor::math::Vector4*/ ,(int)offsetof(Quaternion_obj,xyzw),HX_HCSTRING("xyzw","\xfe","\xd5","\xad","\x4f")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(Quaternion_obj,normalized),HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(Quaternion_obj,conjugate),HX_HCSTRING("conjugate","\x18","\x36","\x89","\x42")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(Quaternion_obj,inverse),HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(void *) &Quaternion_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(void *) &Quaternion_obj::identity,HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_euler","\xc0","\x35","\xca","\xb8"),
	HX_HCSTRING("set_euler","\xcc","\x21","\x1b","\x9c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_clone","\xb4","\x6f","\x0c","\x8c"),
	HX_HCSTRING("xyzw","\xfe","\xd5","\xad","\x4f"),
	HX_HCSTRING("get_xyzw","\x87","\x91","\x68","\xcf"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"),
	HX_HCSTRING("get_normalized","\x80","\xec","\x64","\xf7"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("SetQuaternion","\x40","\x9b","\x32","\x05"),
	HX_HCSTRING("Normalize","\x6d","\x17","\x74","\x4d"),
	HX_HCSTRING("conjugate","\x18","\x36","\x89","\x42"),
	HX_HCSTRING("get_conjugate","\xef","\x09","\xed","\x03"),
	HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d"),
	HX_HCSTRING("get_inverse","\xc7","\xab","\xeb","\xc3"),
	HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4"),
	HX_HCSTRING("Scale","\x6a","\x3e","\xfc","\x0b"),
	HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74"),
	HX_HCSTRING("Transform","\x4c","\x0d","\x66","\xe7"),
	HX_HCSTRING("Delta","\xd8","\x57","\x54","\x6a"),
	HX_HCSTRING("SetAxisAngle","\x90","\x3b","\xe8","\x68"),
	HX_HCSTRING("ToArray","\xfe","\xe1","\x64","\xbf"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Quaternion_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(Quaternion_obj::identity,"identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::identity,"identity");
};

#endif

hx::Class Quaternion_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c"),
	HX_HCSTRING("get_temp","\x9d","\x7e","\xb4","\xcc"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("get_identity","\x47","\xf9","\x48","\x6e"),
	HX_HCSTRING("FromEuler","\x7f","\xa3","\x7c","\xcb"),
	HX_HCSTRING("ToEuler","\xce","\x4d","\xf6","\x0e"),
	HX_HCSTRING("FromMatrix4","\x69","\x3e","\xda","\x0f"),
	HX_HCSTRING("Dot","\x69","\xfa","\x33","\x00"),
	HX_HCSTRING("DeltaRotation","\x36","\xe9","\xeb","\xc6"),
	HX_HCSTRING("Inverse","\x90","\x73","\x42","\x0b"),
	HX_HCSTRING("Lerp","\x97","\x3e","\x89","\x32"),
	HX_HCSTRING("Slerp","\x4a","\x38","\xf2","\x11"),
	HX_HCSTRING("FromAxisAngle","\x88","\xbc","\x5f","\x38"),
	HX_HCSTRING("LookAt","\x52","\xe9","\x49","\x96"),
	HX_HCSTRING("LookRotation","\xdd","\xe2","\xad","\xd2"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void Quaternion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.Quaternion","\xf8","\x57","\xb4","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quaternion_obj::__GetStatic;
	__mClass->mSetStaticField = &Quaternion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Quaternion_obj >;
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
