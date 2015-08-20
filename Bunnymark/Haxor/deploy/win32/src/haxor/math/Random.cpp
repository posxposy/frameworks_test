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
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
#ifndef INCLUDED_haxor_io_UInt16Array
#include <haxor/io/UInt16Array.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
#ifndef INCLUDED_haxor_math_Random
#include <haxor/math/Random.h>
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

Void Random_obj::__construct()
{
	return null();
}

//Random_obj::~Random_obj() { }

Dynamic Random_obj::__CreateEmpty() { return  new Random_obj; }
hx::ObjectPtr< Random_obj > Random_obj::__new()
{  hx::ObjectPtr< Random_obj > _result_ = new Random_obj();
	_result_->__construct();
	return _result_;}

Dynamic Random_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Random_obj > _result_ = new Random_obj();
	_result_->__construct();
	return _result_;}

Float Random_obj::value;

Float Random_obj::get_value( ){
	HX_STACK_FRAME("haxor.math.Random","get_value",0x27f133f7,"haxor.math.Random.get_value","haxor/math/Random.hx",18,0x04916aa1)
	HX_STACK_LINE(18)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_value,return )

Float Random_obj::interval;

Float Random_obj::get_interval( ){
	HX_STACK_FRAME("haxor.math.Random","get_interval",0x383edc7f,"haxor.math.Random.get_interval","haxor/math/Random.hx",24,0x04916aa1)
	HX_STACK_LINE(24)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float tmp1 = (tmp - ((Float)0.499995));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	Float tmp2 = (tmp1 * ((Float)2.0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_interval,return )

::haxor::math::Quaternion Random_obj::rotation;

::haxor::math::Quaternion Random_obj::get_rotation( ){
	HX_STACK_FRAME("haxor.math.Random","get_rotation",0x1848a078,"haxor.math.Random.get_rotation","haxor/math/Random.hx",30,0x04916aa1)
	HX_STACK_LINE(30)
	::haxor::math::Quaternion tmp = ::haxor::math::Random_obj::GetRotation(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_rotation,return )

::haxor::math::Vector3 Random_obj::box;

::haxor::math::Vector3 Random_obj::get_box( ){
	HX_STACK_FRAME("haxor.math.Random","get_box",0x4d572511,"haxor.math.Random.get_box","haxor/math/Random.hx",36,0x04916aa1)
	HX_STACK_LINE(36)
	::haxor::math::Vector3 tmp = ::haxor::math::Random_obj::GetBox(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_box,return )

::haxor::math::Vector3 Random_obj::onBox;

::haxor::math::Vector3 Random_obj::get_onBox( ){
	HX_STACK_FRAME("haxor.math.Random","get_onBox",0x289b06b2,"haxor.math.Random.get_onBox","haxor/math/Random.hx",42,0x04916aa1)
	HX_STACK_LINE(42)
	::haxor::math::Vector3 tmp = ::haxor::math::Random_obj::GetOnBox(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_onBox,return )

::haxor::math::Vector2 Random_obj::square;

::haxor::math::Vector2 Random_obj::get_square( ){
	HX_STACK_FRAME("haxor.math.Random","get_square",0xd4574157,"haxor.math.Random.get_square","haxor/math/Random.hx",48,0x04916aa1)
	HX_STACK_LINE(48)
	::haxor::math::Vector2 tmp = ::haxor::math::Random_obj::GetSquare(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_square,return )

::haxor::math::Vector2 Random_obj::onSquare;

::haxor::math::Vector2 Random_obj::get_onSquare( ){
	HX_STACK_FRAME("haxor.math.Random","get_onSquare",0x48615a56,"haxor.math.Random.get_onSquare","haxor/math/Random.hx",54,0x04916aa1)
	HX_STACK_LINE(54)
	::haxor::math::Vector2 tmp = ::haxor::math::Random_obj::GetOnSquare(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_onSquare,return )

::haxor::math::Vector3 Random_obj::sphere;

::haxor::math::Vector3 Random_obj::get_sphere( ){
	HX_STACK_FRAME("haxor.math.Random","get_sphere",0x385befc7,"haxor.math.Random.get_sphere","haxor/math/Random.hx",60,0x04916aa1)
	HX_STACK_LINE(60)
	::haxor::math::Vector3 tmp = ::haxor::math::Random_obj::GetSphere(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_sphere,return )

::haxor::math::Vector3 Random_obj::onSphere;

::haxor::math::Vector3 Random_obj::get_onSphere( ){
	HX_STACK_FRAME("haxor.math.Random","get_onSphere",0xac6608c6,"haxor.math.Random.get_onSphere","haxor/math/Random.hx",66,0x04916aa1)
	HX_STACK_LINE(66)
	::haxor::math::Vector3 tmp = ::haxor::math::Random_obj::GetOnSphere(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_onSphere,return )

::haxor::math::Vector2 Random_obj::circle;

::haxor::math::Vector2 Random_obj::get_circle( ){
	HX_STACK_FRAME("haxor.math.Random","get_circle",0xd172b2ca,"haxor.math.Random.get_circle","haxor/math/Random.hx",72,0x04916aa1)
	HX_STACK_LINE(72)
	::haxor::math::Vector2 tmp = ::haxor::math::Random_obj::GetCircle(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_circle,return )

::haxor::math::Vector2 Random_obj::onCircle;

::haxor::math::Vector2 Random_obj::get_onCircle( ){
	HX_STACK_FRAME("haxor.math.Random","get_onCircle",0x457ccbc9,"haxor.math.Random.get_onCircle","haxor/math/Random.hx",78,0x04916aa1)
	HX_STACK_LINE(78)
	::haxor::math::Vector2 tmp = ::haxor::math::Random_obj::GetOnCircle(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get_onCircle,return )

int Random_obj::Length( int v){
	HX_STACK_FRAME("haxor.math.Random","Length",0xacc04d77,"haxor.math.Random.Length","haxor/math/Random.hx",83,0x04916aa1)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(83)
	int tmp = (v + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	int tmp3 = ((int)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,Length,return )

Float Random_obj::Range( Float p_min,Float p_max){
	HX_STACK_FRAME("haxor.math.Random","Range",0xd542ea4c,"haxor.math.Random.Range","haxor/math/Random.hx",91,0x04916aa1)
	HX_STACK_ARG(p_min,"p_min")
	HX_STACK_ARG(p_max,"p_max")
	HX_STACK_LINE(91)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		Float p_ratio = tmp1;		HX_STACK_VAR(p_ratio,"p_ratio");
		HX_STACK_LINE(91)
		Float tmp2 = p_min;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		Float tmp3 = (p_max - p_min);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		Float tmp4 = p_ratio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		tmp = (tmp2 + tmp5);
	}
	HX_STACK_LINE(91)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,Range,return )

int Random_obj::RangeInt( int p_min,int p_max){
	HX_STACK_FRAME("haxor.math.Random","RangeInt",0x3e5f5203,"haxor.math.Random.RangeInt","haxor/math/Random.hx",99,0x04916aa1)
	HX_STACK_ARG(p_min,"p_min")
	HX_STACK_ARG(p_max,"p_max")
	HX_STACK_LINE(99)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		Float p_ratio = tmp1;		HX_STACK_VAR(p_ratio,"p_ratio");
		HX_STACK_LINE(99)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			Float p_a = ((Float)(p_min));		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(99)
			Float tmp3 = p_a;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			int tmp4 = (p_max + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			Float tmp5 = ((Float)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			Float tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			Float tmp8 = p_ratio;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			tmp2 = (tmp3 + tmp9);
		}
		HX_STACK_LINE(99)
		tmp = ::Std_obj::_int(tmp2);
	}
	HX_STACK_LINE(99)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,RangeInt,return )

Dynamic Random_obj::Item( Dynamic p_list){
	HX_STACK_FRAME("haxor.math.Random","Item",0x82868764,"haxor.math.Random.Item","haxor/math/Random.hx",104,0x04916aa1)
	HX_STACK_ARG(p_list,"p_list")
	HX_STACK_LINE(104)
	Dynamic tmp = p_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	int tmp1 = p_list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	int tmp4 = ((int)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	Dynamic tmp5 = tmp->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,Item,return )

Void Random_obj::Shuffle( Dynamic p_list){
{
		HX_STACK_FRAME("haxor.math.Random","Shuffle",0xd8c60c48,"haxor.math.Random.Shuffle","haxor/math/Random.hx",111,0x04916aa1)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(112)
		int m = p_list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(113)
		Dynamic t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(114)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(116)
		while((true)){
			HX_STACK_LINE(116)
			bool tmp = (m > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(116)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			if ((tmp1)){
				HX_STACK_LINE(116)
				break;
			}
			HX_STACK_LINE(119)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			int tmp3 = (m)--;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			i = tmp5;
			HX_STACK_LINE(121)
			Dynamic tmp6 = p_list->__GetItem(m);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(121)
			t = tmp6;
			HX_STACK_LINE(122)
			Dynamic tmp7 = p_list->__GetItem(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			hx::IndexRef((p_list).mPtr,m) = tmp7;
			HX_STACK_LINE(123)
			Dynamic tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			hx::IndexRef((p_list).mPtr,i) = tmp8;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,Shuffle,(void))

::haxor::math::Quaternion Random_obj::GetRotation( ::haxor::math::Quaternion p_result){
	HX_STACK_FRAME("haxor.math.Random","GetRotation",0x09e599c3,"haxor.math.Random.GetRotation","haxor/math/Random.hx",133,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(134)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	if ((tmp)){
		HX_STACK_LINE(134)
		::haxor::math::Vector3 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			Array< ::Dynamic > tmp4 = _this->m_v3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			int tmp5 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			int tmp6 = _this->m_v3->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			int tmp8 = _this->m_nv3 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(134)
		::haxor::math::Vector3 tmp3 = ::haxor::math::Random_obj::GetSphere(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		Float tmp5 = (tmp4 - ((Float)0.499995));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		Float tmp6 = (tmp5 * ((Float)2.0));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		Float tmp7 = (tmp6 * ((Float)180.0));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		tmp1 = ::haxor::math::Quaternion_obj::FromAxisAngle(tmp3,tmp7);
	}
	else{
		HX_STACK_LINE(134)
		::haxor::math::Vector3 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			Array< ::Dynamic > tmp4 = _this->m_v3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			int tmp5 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			int tmp6 = _this->m_v3->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			int tmp8 = _this->m_nv3 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(134)
		::haxor::math::Vector3 tmp3 = ::haxor::math::Random_obj::GetSphere(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		Float tmp5 = (tmp4 - ((Float)0.499995));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		Float tmp6 = (tmp5 * ((Float)2.0));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		Float tmp7 = (tmp6 * ((Float)180.0));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		tmp1 = p_result->SetAxisAngle(tmp3,tmp7);
	}
	HX_STACK_LINE(134)
	::haxor::math::Quaternion r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(135)
	::haxor::math::Quaternion tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetRotation,return )

::haxor::math::Vector3 Random_obj::GetBox( ::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Random","GetBox",0xb0d2afa6,"haxor.math.Random.GetBox","haxor/math/Random.hx",144,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(145)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	if ((tmp)){
		HX_STACK_LINE(145)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		Float tmp3 = (tmp2 - ((Float)0.499995));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		Float tmp4 = (tmp3 * ((Float)2.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		Float tmp7 = (tmp6 - ((Float)0.499995));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(145)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(145)
		Float tmp11 = (tmp10 - ((Float)0.499995));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(145)
		Float tmp12 = (tmp11 * ((Float)2.0));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(145)
		Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(145)
		tmp1 = ::haxor::math::Vector3_obj::__new(tmp5,tmp9,tmp13);
	}
	else{
		HX_STACK_LINE(145)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		Float tmp3 = (tmp2 - ((Float)0.499995));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		Float tmp4 = (tmp3 * ((Float)2.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		Float tmp7 = (tmp6 - ((Float)0.499995));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(145)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(145)
		Float tmp11 = (tmp10 - ((Float)0.499995));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(145)
		Float tmp12 = (tmp11 * ((Float)2.0));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(145)
		Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(145)
		tmp1 = p_result->Set(tmp5,tmp9,tmp13);
	}
	HX_STACK_LINE(145)
	::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(146)
	::haxor::math::Vector3 tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetBox,return )

::haxor::math::Vector3 Random_obj::GetOnBox( ::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Random","GetOnBox",0x09fe2087,"haxor.math.Random.GetOnBox","haxor/math/Random.hx",155,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(156)
	::haxor::math::Vector3 tmp = p_result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	::haxor::math::Vector3 tmp1 = ::haxor::math::Random_obj::GetBox(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(157)
	Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	Float tmp3 = (tmp2 * (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	Float tmp4 = (tmp3 + ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	int i = ((int)(tmp4));		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(158)
	int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(158)
	switch( (int)(tmp5)){
		case (int)0: {
			HX_STACK_LINE(160)
			bool tmp6 = (p->x < ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			if ((tmp6)){
				HX_STACK_LINE(160)
				tmp7 = ((Float)-0.5);
			}
			else{
				HX_STACK_LINE(160)
				tmp7 = ((Float)0.5);
			}
			HX_STACK_LINE(160)
			p->x = tmp7;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(161)
			bool tmp6 = (p->y < ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			if ((tmp6)){
				HX_STACK_LINE(161)
				tmp7 = ((Float)-0.5);
			}
			else{
				HX_STACK_LINE(161)
				tmp7 = ((Float)0.5);
			}
			HX_STACK_LINE(161)
			p->y = tmp7;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(162)
			bool tmp6 = (p->z < ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			if ((tmp6)){
				HX_STACK_LINE(162)
				tmp7 = ((Float)-0.5);
			}
			else{
				HX_STACK_LINE(162)
				tmp7 = ((Float)0.5);
			}
			HX_STACK_LINE(162)
			p->z = tmp7;
		}
		;break;
	}
	HX_STACK_LINE(164)
	::haxor::math::Vector3 tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetOnBox,return )

::haxor::math::Vector2 Random_obj::GetSquare( ::haxor::math::Vector2 p_result){
	HX_STACK_FRAME("haxor.math.Random","GetSquare",0x29aac1e2,"haxor.math.Random.GetSquare","haxor/math/Random.hx",173,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(174)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	::haxor::math::Vector2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	if ((tmp)){
		HX_STACK_LINE(174)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		Float tmp3 = (tmp2 - ((Float)0.499995));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		Float tmp4 = (tmp3 * ((Float)2.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		Float tmp7 = (tmp6 - ((Float)0.499995));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		tmp1 = ::haxor::math::Vector2_obj::__new(tmp5,tmp9);
	}
	else{
		HX_STACK_LINE(174)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		Float tmp3 = (tmp2 - ((Float)0.499995));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		Float tmp4 = (tmp3 * ((Float)2.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		Float tmp7 = (tmp6 - ((Float)0.499995));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		tmp1 = p_result->Set(tmp5,tmp9);
	}
	HX_STACK_LINE(174)
	::haxor::math::Vector2 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(175)
	::haxor::math::Vector2 tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetSquare,return )

::haxor::math::Vector2 Random_obj::GetOnSquare( ::haxor::math::Vector2 p_result){
	HX_STACK_FRAME("haxor.math.Random","GetOnSquare",0x39fe53a1,"haxor.math.Random.GetOnSquare","haxor/math/Random.hx",184,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(185)
	::haxor::math::Vector2 tmp = p_result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	::haxor::math::Vector2 tmp1 = ::haxor::math::Random_obj::GetSquare(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	::haxor::math::Vector2 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(186)
	Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	Float tmp3 = (tmp2 * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(186)
	Float tmp4 = (tmp3 + ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	int i = ((int)(tmp4));		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(187)
	int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	switch( (int)(tmp5)){
		case (int)0: {
			HX_STACK_LINE(189)
			bool tmp6 = (p->x < ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(189)
			if ((tmp6)){
				HX_STACK_LINE(189)
				tmp7 = ((Float)-0.5);
			}
			else{
				HX_STACK_LINE(189)
				tmp7 = ((Float)0.5);
			}
			HX_STACK_LINE(189)
			p->x = tmp7;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(190)
			bool tmp6 = (p->y < ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			if ((tmp6)){
				HX_STACK_LINE(190)
				tmp7 = ((Float)-0.5);
			}
			else{
				HX_STACK_LINE(190)
				tmp7 = ((Float)0.5);
			}
			HX_STACK_LINE(190)
			p->y = tmp7;
		}
		;break;
	}
	HX_STACK_LINE(192)
	::haxor::math::Vector2 tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(192)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetOnSquare,return )

::haxor::math::Vector3 Random_obj::GetOnSphere( ::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Random","GetOnSphere",0x9e030211,"haxor.math.Random.GetOnSphere","haxor/math/Random.hx",201,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(202)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	if ((tmp)){
		HX_STACK_LINE(202)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		Float tmp3 = (tmp2 - ((Float)0.499995));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		Float tmp4 = (tmp3 * ((Float)2.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		Float tmp7 = (tmp6 - ((Float)0.499995));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(202)
		Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(202)
		Float tmp11 = (tmp10 - ((Float)0.499995));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(202)
		Float tmp12 = (tmp11 * ((Float)2.0));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(202)
		Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(202)
		tmp1 = ::haxor::math::Vector3_obj::__new(tmp5,tmp9,tmp13);
	}
	else{
		HX_STACK_LINE(202)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		Float tmp3 = (tmp2 - ((Float)0.499995));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		Float tmp4 = (tmp3 * ((Float)2.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		Float tmp7 = (tmp6 - ((Float)0.499995));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(202)
		Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(202)
		Float tmp11 = (tmp10 - ((Float)0.499995));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(202)
		Float tmp12 = (tmp11 * ((Float)2.0));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(202)
		Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(202)
		tmp1 = p_result->Set(tmp5,tmp9,tmp13);
	}
	HX_STACK_LINE(202)
	::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(203)
	::haxor::math::Vector3 tmp2 = p->Normalize();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetOnSphere,return )

::haxor::math::Vector3 Random_obj::GetSphere( ::haxor::math::Vector3 p_result){
	HX_STACK_FRAME("haxor.math.Random","GetSphere",0x8daf7052,"haxor.math.Random.GetSphere","haxor/math/Random.hx",212,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(213)
	::haxor::math::Vector3 tmp = p_result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	::haxor::math::Vector3 tmp1 = ::haxor::math::Random_obj::GetOnSphere(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(214)
	Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	::haxor::math::Vector3 tmp3 = p->Scale(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetSphere,return )

::haxor::math::Vector2 Random_obj::GetOnCircle( ::haxor::math::Vector2 p_result){
	HX_STACK_FRAME("haxor.math.Random","GetOnCircle",0x3719c514,"haxor.math.Random.GetOnCircle","haxor/math/Random.hx",223,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(224)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	::haxor::math::Vector2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	if ((tmp)){
		HX_STACK_LINE(224)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		Float tmp3 = (tmp2 - ((Float)0.499995));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		Float tmp4 = (tmp3 * ((Float)2.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(224)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(224)
		Float tmp7 = (tmp6 - ((Float)0.499995));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(224)
		Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(224)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(224)
		tmp1 = ::haxor::math::Vector2_obj::__new(tmp5,tmp9);
	}
	else{
		HX_STACK_LINE(224)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		Float tmp3 = (tmp2 - ((Float)0.499995));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		Float tmp4 = (tmp3 * ((Float)2.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(224)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(224)
		Float tmp7 = (tmp6 - ((Float)0.499995));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(224)
		Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(224)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(224)
		tmp1 = p_result->Set(tmp5,tmp9);
	}
	HX_STACK_LINE(224)
	::haxor::math::Vector2 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(225)
	::haxor::math::Vector2 tmp2 = p->Normalize();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetOnCircle,return )

::haxor::math::Vector2 Random_obj::GetCircle( ::haxor::math::Vector2 p_result){
	HX_STACK_FRAME("haxor.math.Random","GetCircle",0x26c63355,"haxor.math.Random.GetCircle","haxor/math/Random.hx",234,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(235)
	::haxor::math::Vector2 tmp = p_result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::haxor::math::Vector2 tmp1 = ::haxor::math::Random_obj::GetOnCircle(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	::haxor::math::Vector2 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(236)
	Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	::haxor::math::Vector2 tmp3 = p->Scale(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(236)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,GetCircle,return )

::haxor::math::Vector3 Random_obj::GetOnCone( ::haxor::math::Vector3 p_result,hx::Null< Float >  __o_p_height,hx::Null< Float >  __o_p_angle){
Float p_height = __o_p_height.Default(((Float)1.0));
Float p_angle = __o_p_angle.Default(((Float)45.0));
	HX_STACK_FRAME("haxor.math.Random","GetOnCone",0xb50783e7,"haxor.math.Random.GetOnCone","haxor/math/Random.hx",245,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_ARG(p_height,"p_height")
	HX_STACK_ARG(p_angle,"p_angle")
{
		HX_STACK_LINE(246)
		bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		if ((tmp)){
			HX_STACK_LINE(246)
			tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
		}
		else{
			HX_STACK_LINE(246)
			tmp1 = p_result->Set(null(),null(),null());
		}
		HX_STACK_LINE(246)
		::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(247)
		Float h = p_height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(248)
		Float tmp2 = (p_angle * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		Float tmp4 = ::Math_obj::tan(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		Float tan = tmp4;		HX_STACK_VAR(tan,"tan");
		HX_STACK_LINE(249)
		::haxor::math::Vector2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(249)
			::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(249)
			Array< ::Dynamic > tmp7 = _this->m_v2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			int tmp8 = (_this->m_nv2 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(249)
			int tmp9 = _this->m_v2->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(249)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(249)
			int tmp11 = _this->m_nv2 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(249)
			tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector2 >();
		}
		HX_STACK_LINE(249)
		::haxor::math::Vector2 tp = tmp5;		HX_STACK_VAR(tp,"tp");
		HX_STACK_LINE(250)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		bool tmp7 = (tmp6 > ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(250)
		if ((tmp7)){
			HX_STACK_LINE(252)
			::haxor::math::Vector2 tmp8 = tp;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			::haxor::math::Vector2 tmp9 = ::haxor::math::Random_obj::GetCircle(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			tp = tmp9;
		}
		else{
			HX_STACK_LINE(256)
			Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			Float tmp9 = p_height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(256)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(256)
			h = tmp10;
			HX_STACK_LINE(257)
			::haxor::math::Vector2 tmp11 = tp;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(257)
			::haxor::math::Vector2 tmp12 = ::haxor::math::Random_obj::GetOnCircle(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(257)
			tp = tmp12;
		}
		HX_STACK_LINE(259)
		Float tmp8 = (h * tan);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(259)
		tp->Scale(tmp8);
		HX_STACK_LINE(260)
		Float tmp9 = tp->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(260)
		Float tmp10 = tp->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(260)
		Float tmp11 = h;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(260)
		::haxor::math::Vector3 tmp12 = p->Set(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(260)
		return tmp12;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Random_obj,GetOnCone,return )

::haxor::math::Vector3 Random_obj::GetCone( ::haxor::math::Vector3 p_result,hx::Null< Float >  __o_p_height,hx::Null< Float >  __o_p_angle){
Float p_height = __o_p_height.Default(((Float)1.0));
Float p_angle = __o_p_angle.Default(((Float)45.0));
	HX_STACK_FRAME("haxor.math.Random","GetCone",0x08302fe8,"haxor.math.Random.GetCone","haxor/math/Random.hx",267,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_ARG(p_height,"p_height")
	HX_STACK_ARG(p_angle,"p_angle")
{
		HX_STACK_LINE(268)
		::haxor::math::Vector3 tmp = p_result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(268)
		Float tmp1 = p_height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		Float tmp2 = p_angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(268)
		::haxor::math::Vector3 tmp3 = ::haxor::math::Random_obj::GetOnCone(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		::haxor::math::Vector3 p = tmp3;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(269)
		Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		Float r = tmp4;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(270)
		hx::MultEq(p->x,r);
		HX_STACK_LINE(271)
		hx::MultEq(p->y,r);
		HX_STACK_LINE(272)
		::haxor::math::Vector3 tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Random_obj,GetCone,return )

::haxor::math::Vector3 Random_obj::GetOnCylinder( ::haxor::math::Vector3 p_result,hx::Null< Float >  __o_p_height,hx::Null< Float >  __o_p_radius){
Float p_height = __o_p_height.Default(((Float)1.0));
Float p_radius = __o_p_radius.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.math.Random","GetOnCylinder",0x2dd0f25a,"haxor.math.Random.GetOnCylinder","haxor/math/Random.hx",283,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_ARG(p_height,"p_height")
	HX_STACK_ARG(p_radius,"p_radius")
{
		HX_STACK_LINE(284)
		bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		if ((tmp)){
			HX_STACK_LINE(284)
			tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
		}
		else{
			HX_STACK_LINE(284)
			tmp1 = p_result->Set(null(),null(),null());
		}
		HX_STACK_LINE(284)
		::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(285)
		Float h = p_height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(286)
		::haxor::math::Vector2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(286)
			Array< ::Dynamic > tmp4 = _this->m_v2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			int tmp5 = (_this->m_nv2 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			int tmp6 = _this->m_v2->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(286)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(286)
			int tmp8 = _this->m_nv2 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(286)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector2 >();
		}
		HX_STACK_LINE(286)
		::haxor::math::Vector2 tp = tmp2;		HX_STACK_VAR(tp,"tp");
		HX_STACK_LINE(287)
		Float tmp3 = ::Math_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		bool tmp4 = (tmp3 > ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		if ((tmp4)){
			HX_STACK_LINE(289)
			Float tmp5 = ::Math_obj::random();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			bool tmp6 = (tmp5 < ((Float)0.5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			if ((tmp6)){
				HX_STACK_LINE(289)
				tmp7 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(289)
				tmp7 = p_height;
			}
			HX_STACK_LINE(289)
			h = tmp7;
			HX_STACK_LINE(290)
			::haxor::math::Vector2 tmp8 = tp;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			::haxor::math::Vector2 tmp9 = ::haxor::math::Random_obj::GetCircle(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(290)
			tp = tmp9;
		}
		else{
			HX_STACK_LINE(294)
			Float tmp5 = ::Math_obj::random();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			Float tmp6 = p_height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(294)
			h = tmp7;
			HX_STACK_LINE(295)
			::haxor::math::Vector2 tmp8 = tp;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(295)
			::haxor::math::Vector2 tmp9 = ::haxor::math::Random_obj::GetOnCircle(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(295)
			tp = tmp9;
		}
		HX_STACK_LINE(297)
		Float tmp5 = p_radius;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		tp->Scale(tmp5);
		HX_STACK_LINE(298)
		Float tmp6 = tp->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		Float tmp7 = tp->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(298)
		Float tmp8 = h;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		::haxor::math::Vector3 tmp9 = p->Set(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(298)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Random_obj,GetOnCylinder,return )

::haxor::math::Vector3 Random_obj::GetCylinder( ::haxor::math::Vector3 p_result,hx::Null< Float >  __o_p_height,hx::Null< Float >  __o_p_radius){
Float p_height = __o_p_height.Default(((Float)1.0));
Float p_radius = __o_p_radius.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.math.Random","GetCylinder",0xb42632db,"haxor.math.Random.GetCylinder","haxor/math/Random.hx",309,0x04916aa1)
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_ARG(p_height,"p_height")
	HX_STACK_ARG(p_radius,"p_radius")
{
		HX_STACK_LINE(310)
		bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		if ((tmp)){
			HX_STACK_LINE(310)
			tmp1 = ::haxor::math::Vector3_obj::__new(null(),null(),null());
		}
		else{
			HX_STACK_LINE(310)
			tmp1 = p_result->Set(null(),null(),null());
		}
		HX_STACK_LINE(310)
		::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(311)
		::haxor::math::Vector2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(311)
			Array< ::Dynamic > tmp4 = _this->m_v2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			int tmp5 = (_this->m_nv2 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(311)
			int tmp6 = _this->m_v2->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(311)
			int tmp8 = _this->m_nv2 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(311)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector2 >();
		}
		HX_STACK_LINE(311)
		::haxor::math::Vector2 tmp3 = ::haxor::math::Random_obj::GetCircle(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		Float tmp4 = p_radius;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		Float tmp5 = ::Math_obj::random();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(311)
		::haxor::math::Vector2 tmp7 = tmp3->Scale(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(311)
		::haxor::math::Vector2 tp = tmp7;		HX_STACK_VAR(tp,"tp");
		HX_STACK_LINE(312)
		Float tmp8 = tp->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(312)
		Float tmp9 = tp->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(312)
		Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(312)
		Float tmp11 = p_height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(312)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(312)
		::haxor::math::Vector3 tmp13 = p->Set(tmp8,tmp9,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(312)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Random_obj,GetCylinder,return )

::haxor::math::Vector4 Random_obj::GetMeshAttrib( ::haxor::graphics::mesh::Mesh p_mesh,::haxor::math::Vector4 p_result,::String __o_p_attrib){
::String p_attrib = __o_p_attrib.Default(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));
	HX_STACK_FRAME("haxor.math.Random","GetMeshAttrib",0x61599cdc,"haxor.math.Random.GetMeshAttrib","haxor/math/Random.hx",323,0x04916aa1)
	HX_STACK_ARG(p_mesh,"p_mesh")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_ARG(p_attrib,"p_attrib")
{
		HX_STACK_LINE(324)
		bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		::haxor::math::Vector4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		if ((tmp)){
			HX_STACK_LINE(324)
			tmp1 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(324)
			tmp1 = p_result;
		}
		HX_STACK_LINE(324)
		::haxor::math::Vector4 p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(325)
		::String tmp2 = p_attrib;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(325)
		::haxor::graphics::mesh::MeshAttrib tmp3 = p_mesh->GetAttribute(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(325)
		::haxor::graphics::mesh::MeshAttrib ma = tmp3;		HX_STACK_VAR(ma,"ma");
		HX_STACK_LINE(326)
		bool tmp4 = (ma == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		if ((tmp4)){
			HX_STACK_LINE(326)
			::haxor::math::Vector4 tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(326)
			return tmp5;
		}
		HX_STACK_LINE(327)
		::haxor::io::FloatArray f32 = ((::haxor::io::FloatArray)(ma->data));		HX_STACK_VAR(f32,"f32");
		HX_STACK_LINE(328)
		int tmp5 = ma->get_count();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		int tmp6 = ::haxor::math::Random_obj::Length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		int tmp7 = ma->offset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(328)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(328)
		int vp = tmp8;		HX_STACK_VAR(vp,"vp");
		HX_STACK_LINE(329)
		bool tmp9 = (ma->offset >= (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(329)
		if ((tmp9)){
			HX_STACK_LINE(329)
			int tmp10 = vp;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(329)
			Float tmp11 = f32->Get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(329)
			p->x = tmp11;
		}
		HX_STACK_LINE(330)
		bool tmp10 = (ma->offset >= (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(330)
		if ((tmp10)){
			HX_STACK_LINE(330)
			int tmp11 = (vp + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(330)
			Float tmp12 = f32->Get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(330)
			p->y = tmp12;
		}
		HX_STACK_LINE(331)
		bool tmp11 = (ma->offset >= (int)3);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(331)
		if ((tmp11)){
			HX_STACK_LINE(331)
			int tmp12 = (vp + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(331)
			Float tmp13 = f32->Get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(331)
			p->z = tmp13;
		}
		HX_STACK_LINE(332)
		bool tmp12 = (ma->offset >= (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(332)
		if ((tmp12)){
			HX_STACK_LINE(332)
			int tmp13 = (vp + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(332)
			Float tmp14 = f32->Get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(332)
			p->w = tmp14;
		}
		HX_STACK_LINE(333)
		::haxor::math::Vector4 tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(333)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Random_obj,GetMeshAttrib,return )

int Random_obj::GetMeshPrimitive( ::haxor::graphics::mesh::Mesh p_mesh,::haxor::math::Vector4 p_v0,::haxor::math::Vector4 p_v1,::haxor::math::Vector4 p_v2,::String __o_p_attrib){
::String p_attrib = __o_p_attrib.Default(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));
	HX_STACK_FRAME("haxor.math.Random","GetMeshPrimitive",0x17bc1a55,"haxor.math.Random.GetMeshPrimitive","haxor/math/Random.hx",346,0x04916aa1)
	HX_STACK_ARG(p_mesh,"p_mesh")
	HX_STACK_ARG(p_v0,"p_v0")
	HX_STACK_ARG(p_v1,"p_v1")
	HX_STACK_ARG(p_v2,"p_v2")
	HX_STACK_ARG(p_attrib,"p_attrib")
{
		HX_STACK_LINE(347)
		::String tmp = p_attrib;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		::haxor::graphics::mesh::MeshAttrib tmp1 = p_mesh->GetAttribute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		::haxor::graphics::mesh::MeshAttrib ma = tmp1;		HX_STACK_VAR(ma,"ma");
		HX_STACK_LINE(348)
		bool tmp2 = (ma == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(348)
		if ((tmp2)){
			HX_STACK_LINE(348)
			return (int)0;
		}
		HX_STACK_LINE(349)
		::haxor::io::FloatArray f32 = ((::haxor::io::FloatArray)(ma->data));		HX_STACK_VAR(f32,"f32");
		HX_STACK_LINE(350)
		::haxor::io::UInt16Array i16;		HX_STACK_VAR(i16,"i16");
		HX_STACK_LINE(351)
		int step = (int)3;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			int _g = p_mesh->primitive;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(352)
			int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(352)
			switch( (int)(tmp3)){
				case (int)0: {
					HX_STACK_LINE(354)
					step = (int)1;
				}
				;break;
				case (int)1: {
				}
				;break;
				case (int)3: {
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(357)
					step = (int)2;
				}
				;break;
			}
		}
		HX_STACK_LINE(360)
		::haxor::math::Vector4 p0 = p_v0;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(361)
		::haxor::math::Vector4 p1 = p_v1;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(362)
		::haxor::math::Vector4 p2 = p_v2;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(363)
		int i0 = (int)0;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(364)
		int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(365)
		int i2 = (int)0;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(366)
		int vp = (int)0;		HX_STACK_VAR(vp,"vp");
		HX_STACK_LINE(367)
		int off = ma->offset;		HX_STACK_VAR(off,"off");
		HX_STACK_LINE(369)
		bool tmp3 = p_mesh->m_indexed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(369)
		if ((tmp3)){
			HX_STACK_LINE(371)
			::haxor::io::UInt16Array tmp4 = p_mesh->get_topology();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			i16 = tmp4;
			HX_STACK_LINE(372)
			Float tmp5 = (Float(i16->m_length) / Float(step));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(372)
			int tmp6 = ((int)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(372)
			int tmp7 = ::haxor::math::Random_obj::Length(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(372)
			vp = tmp7;
			HX_STACK_LINE(373)
			bool tmp8 = (step >= (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(373)
			if ((tmp8)){
				HX_STACK_LINE(373)
				int tmp9 = vp;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(373)
				int tmp10 = i16->Get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(373)
				int tmp11 = off;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(373)
				int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(373)
				i0 = tmp12;
			}
			HX_STACK_LINE(374)
			bool tmp9 = (step >= (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(374)
			if ((tmp9)){
				HX_STACK_LINE(374)
				int tmp10 = (vp + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(374)
				int tmp11 = i16->Get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(374)
				int tmp12 = off;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(374)
				int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(374)
				i1 = tmp13;
			}
			HX_STACK_LINE(375)
			bool tmp10 = (step >= (int)3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(375)
			if ((tmp10)){
				HX_STACK_LINE(375)
				int tmp11 = (vp + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(375)
				int tmp12 = i16->Get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(375)
				int tmp13 = off;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(375)
				int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(375)
				i2 = tmp14;
			}
		}
		else{
			HX_STACK_LINE(379)
			bool tmp4 = (step >= (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(379)
			if ((tmp4)){
				HX_STACK_LINE(379)
				int tmp5 = ma->get_count();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(379)
				int tmp6 = ::haxor::math::Random_obj::Length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(379)
				int tmp7 = off;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(379)
				int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(379)
				i0 = tmp8;
			}
			HX_STACK_LINE(380)
			bool tmp5 = (step >= (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(380)
			if ((tmp5)){
				HX_STACK_LINE(380)
				int tmp6 = (i0 + off);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(380)
				i1 = tmp6;
			}
			HX_STACK_LINE(381)
			bool tmp6 = (step >= (int)3);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			if ((tmp6)){
				HX_STACK_LINE(381)
				int tmp7 = (i1 + off);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(381)
				i2 = tmp7;
			}
		}
		HX_STACK_LINE(383)
		bool tmp4 = (ma->offset >= (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(383)
		if ((tmp4)){
			HX_STACK_LINE(383)
			int tmp5 = i0;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(383)
			Float tmp6 = f32->Get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(383)
			p0->x = tmp6;
			HX_STACK_LINE(383)
			int tmp7 = i1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(383)
			Float tmp8 = f32->Get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(383)
			p1->x = tmp8;
			HX_STACK_LINE(383)
			int tmp9 = i2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(383)
			Float tmp10 = f32->Get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(383)
			p2->x = tmp10;
		}
		HX_STACK_LINE(384)
		bool tmp5 = (ma->offset >= (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(384)
		if ((tmp5)){
			HX_STACK_LINE(384)
			int tmp6 = (i0 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			Float tmp7 = f32->Get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(384)
			p0->y = tmp7;
			HX_STACK_LINE(384)
			int tmp8 = (i1 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(384)
			Float tmp9 = f32->Get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(384)
			p1->y = tmp9;
			HX_STACK_LINE(384)
			int tmp10 = (i2 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(384)
			Float tmp11 = f32->Get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(384)
			p2->y = tmp11;
		}
		HX_STACK_LINE(385)
		bool tmp6 = (ma->offset >= (int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(385)
		if ((tmp6)){
			HX_STACK_LINE(385)
			int tmp7 = (i0 + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(385)
			Float tmp8 = f32->Get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(385)
			p0->z = tmp8;
			HX_STACK_LINE(385)
			int tmp9 = (i1 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(385)
			Float tmp10 = f32->Get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(385)
			p1->z = tmp10;
			HX_STACK_LINE(385)
			int tmp11 = (i2 + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(385)
			Float tmp12 = f32->Get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(385)
			p2->z = tmp12;
		}
		HX_STACK_LINE(386)
		bool tmp7 = (ma->offset >= (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(386)
		if ((tmp7)){
			HX_STACK_LINE(386)
			int tmp8 = (i0 + (int)3);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(386)
			Float tmp9 = f32->Get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(386)
			p0->w = tmp9;
			HX_STACK_LINE(386)
			int tmp10 = (i1 + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(386)
			Float tmp11 = f32->Get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(386)
			p1->w = tmp11;
			HX_STACK_LINE(386)
			int tmp12 = (i2 + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(386)
			Float tmp13 = f32->Get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(386)
			p2->w = tmp13;
		}
		HX_STACK_LINE(388)
		int tmp8 = step;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(388)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Random_obj,GetMeshPrimitive,return )

::haxor::math::Vector4 Random_obj::GetAttribOnMesh( ::haxor::graphics::mesh::Mesh p_mesh,::haxor::math::Vector4 p_result,::String __o_p_attrib){
::String p_attrib = __o_p_attrib.Default(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));
	HX_STACK_FRAME("haxor.math.Random","GetAttribOnMesh",0xee78c49b,"haxor.math.Random.GetAttribOnMesh","haxor/math/Random.hx",399,0x04916aa1)
	HX_STACK_ARG(p_mesh,"p_mesh")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_ARG(p_attrib,"p_attrib")
{
		HX_STACK_LINE(400)
		bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(400)
		::haxor::math::Vector4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		if ((tmp)){
			HX_STACK_LINE(400)
			tmp1 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(400)
			tmp1 = p_result;
		}
		HX_STACK_LINE(400)
		::haxor::math::Vector4 p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(401)
		p->Set(null(),null(),null(),null());
		HX_STACK_LINE(403)
		::haxor::math::Vector4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		{
			HX_STACK_LINE(403)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(403)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(403)
			Array< ::Dynamic > tmp4 = _this->m_v4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(403)
			int tmp5 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(403)
			int tmp6 = _this->m_v4->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(403)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(403)
			int tmp8 = _this->m_nv4 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(403)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(403)
		::haxor::math::Vector4 p0 = tmp2;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(404)
		::haxor::math::Vector4 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(404)
			::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(404)
			Array< ::Dynamic > tmp5 = _this->m_v4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(404)
			int tmp6 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(404)
			int tmp7 = _this->m_v4->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(404)
			int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(404)
			int tmp9 = _this->m_nv4 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(404)
			tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(404)
		::haxor::math::Vector4 p1 = tmp3;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(405)
		::haxor::math::Vector4 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(405)
		{
			HX_STACK_LINE(405)
			::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(405)
			::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(405)
			Array< ::Dynamic > tmp6 = _this->m_v4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(405)
			int tmp7 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(405)
			int tmp8 = _this->m_v4->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(405)
			int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(405)
			int tmp10 = _this->m_nv4 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(405)
			tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(405)
		::haxor::math::Vector4 p2 = tmp4;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(407)
		::haxor::graphics::mesh::Mesh tmp5 = p_mesh;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(407)
		::haxor::math::Vector4 tmp6 = p0;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(407)
		::haxor::math::Vector4 tmp7 = p1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(407)
		::haxor::math::Vector4 tmp8 = p2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(407)
		::String tmp9 = p_attrib;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(407)
		int tmp10 = ::haxor::math::Random_obj::GetMeshPrimitive(tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(407)
		int step = tmp10;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(409)
		::haxor::math::Vector3 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(409)
		{
			HX_STACK_LINE(409)
			::haxor::context::DataContext tmp12 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(409)
			::haxor::context::DataContext _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(409)
			Array< ::Dynamic > tmp13 = _this->m_v3;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(409)
			int tmp14 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(409)
			int tmp15 = _this->m_v3->length;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(409)
			int tmp16 = hx::Mod(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(409)
			int tmp17 = _this->m_nv3 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(409)
			tmp11 = tmp13->__get(tmp17).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(409)
		::haxor::math::Vector3 tmp12 = tmp11->Set(null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(409)
		::haxor::math::Vector3 w = tmp12;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(410)
		Float sum = ((Float)0.0);		HX_STACK_VAR(sum,"sum");
		HX_STACK_LINE(411)
		bool tmp13 = (step >= (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(411)
		if ((tmp13)){
			HX_STACK_LINE(411)
			Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			w->x = tmp14;
			HX_STACK_LINE(411)
			hx::AddEq(sum,w->x);
		}
		HX_STACK_LINE(412)
		bool tmp14 = (step >= (int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(412)
		if ((tmp14)){
			HX_STACK_LINE(412)
			Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(412)
			w->y = tmp15;
			HX_STACK_LINE(412)
			hx::AddEq(sum,w->y);
		}
		HX_STACK_LINE(413)
		bool tmp15 = (step >= (int)3);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(413)
		if ((tmp15)){
			HX_STACK_LINE(413)
			Float tmp16 = ::Math_obj::random();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(413)
			w->z = tmp16;
			HX_STACK_LINE(413)
			hx::AddEq(sum,w->z);
		}
		HX_STACK_LINE(414)
		bool tmp16 = (sum <= ((Float)0.0));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(414)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(414)
		if ((tmp16)){
			HX_STACK_LINE(414)
			tmp17 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(414)
			tmp17 = (Float(((Float)1.0)) / Float(sum));
		}
		HX_STACK_LINE(414)
		w->Scale(tmp17);
		HX_STACK_LINE(416)
		Float tmp18 = (p0->x * w->x);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(416)
		Float tmp19 = (p1->x * w->y);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(416)
		Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(416)
		Float tmp21 = (p2->x * w->z);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(416)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(416)
		hx::AddEq(p->x,tmp22);
		HX_STACK_LINE(417)
		Float tmp23 = (p0->y * w->x);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(417)
		Float tmp24 = (p1->y * w->y);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(417)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(417)
		Float tmp26 = (p2->y * w->z);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(417)
		Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(417)
		hx::AddEq(p->y,tmp27);
		HX_STACK_LINE(418)
		Float tmp28 = (p0->z * w->x);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(418)
		Float tmp29 = (p1->z * w->y);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(418)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(418)
		Float tmp31 = (p2->z * w->z);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(418)
		Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(418)
		hx::AddEq(p->z,tmp32);
		HX_STACK_LINE(419)
		::haxor::math::Vector4 tmp33 = p;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(419)
		return tmp33;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Random_obj,GetAttribOnMesh,return )


Random_obj::Random_obj()
{
}

bool Random_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { outValue = inCallProp == hx::paccAlways ? get_box() : box; return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Item") ) { outValue = Item_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { outValue = inCallProp == hx::paccAlways ? get_value() : value; return true; }
		if (HX_FIELD_EQ(inName,"onBox") ) { outValue = inCallProp == hx::paccAlways ? get_onBox() : onBox; return true; }
		if (HX_FIELD_EQ(inName,"Range") ) { outValue = Range_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"square") ) { outValue = inCallProp == hx::paccAlways ? get_square() : square; return true; }
		if (HX_FIELD_EQ(inName,"sphere") ) { outValue = inCallProp == hx::paccAlways ? get_sphere() : sphere; return true; }
		if (HX_FIELD_EQ(inName,"circle") ) { outValue = inCallProp == hx::paccAlways ? get_circle() : circle; return true; }
		if (HX_FIELD_EQ(inName,"Length") ) { outValue = Length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetBox") ) { outValue = GetBox_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_box") ) { outValue = get_box_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Shuffle") ) { outValue = Shuffle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetCone") ) { outValue = GetCone_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interval") ) { outValue = inCallProp == hx::paccAlways ? get_interval() : interval; return true; }
		if (HX_FIELD_EQ(inName,"rotation") ) { outValue = inCallProp == hx::paccAlways ? get_rotation() : rotation; return true; }
		if (HX_FIELD_EQ(inName,"onSquare") ) { outValue = inCallProp == hx::paccAlways ? get_onSquare() : onSquare; return true; }
		if (HX_FIELD_EQ(inName,"onSphere") ) { outValue = inCallProp == hx::paccAlways ? get_onSphere() : onSphere; return true; }
		if (HX_FIELD_EQ(inName,"onCircle") ) { outValue = inCallProp == hx::paccAlways ? get_onCircle() : onCircle; return true; }
		if (HX_FIELD_EQ(inName,"RangeInt") ) { outValue = RangeInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetOnBox") ) { outValue = GetOnBox_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_onBox") ) { outValue = get_onBox_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetSquare") ) { outValue = GetSquare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetSphere") ) { outValue = GetSphere_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetCircle") ) { outValue = GetCircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetOnCone") ) { outValue = GetOnCone_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_square") ) { outValue = get_square_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_sphere") ) { outValue = get_sphere_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_circle") ) { outValue = get_circle_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"GetRotation") ) { outValue = GetRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetOnSquare") ) { outValue = GetOnSquare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetOnSphere") ) { outValue = GetOnSphere_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetOnCircle") ) { outValue = GetOnCircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetCylinder") ) { outValue = GetCylinder_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_interval") ) { outValue = get_interval_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { outValue = get_rotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_onSquare") ) { outValue = get_onSquare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_onSphere") ) { outValue = get_onSphere_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_onCircle") ) { outValue = get_onCircle_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GetOnCylinder") ) { outValue = GetOnCylinder_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetMeshAttrib") ) { outValue = GetMeshAttrib_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"GetAttribOnMesh") ) { outValue = GetAttribOnMesh_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetMeshPrimitive") ) { outValue = GetMeshPrimitive_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Random_obj::value,HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsFloat,(void *) &Random_obj::interval,HX_HCSTRING("interval","\x45","\x79","\x7c","\x28")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(void *) &Random_obj::rotation,HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Random_obj::box,HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Random_obj::onBox,HX_HCSTRING("onBox","\x2c","\x52","\x62","\x32")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Random_obj::square,HX_HCSTRING("square","\x9d","\x00","\xf2","\x58")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Random_obj::onSquare,HX_HCSTRING("onSquare","\x1c","\xf7","\x9e","\x38")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Random_obj::sphere,HX_HCSTRING("sphere","\x0d","\xaf","\xf6","\xbc")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Random_obj::onSphere,HX_HCSTRING("onSphere","\x8c","\xa5","\xa3","\x9c")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Random_obj::circle,HX_HCSTRING("circle","\x10","\x72","\x0d","\x56")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(void *) &Random_obj::onCircle,HX_HCSTRING("onCircle","\x8f","\x68","\xba","\x35")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Random_obj::value,"value");
	HX_MARK_MEMBER_NAME(Random_obj::interval,"interval");
	HX_MARK_MEMBER_NAME(Random_obj::rotation,"rotation");
	HX_MARK_MEMBER_NAME(Random_obj::box,"box");
	HX_MARK_MEMBER_NAME(Random_obj::onBox,"onBox");
	HX_MARK_MEMBER_NAME(Random_obj::square,"square");
	HX_MARK_MEMBER_NAME(Random_obj::onSquare,"onSquare");
	HX_MARK_MEMBER_NAME(Random_obj::sphere,"sphere");
	HX_MARK_MEMBER_NAME(Random_obj::onSphere,"onSphere");
	HX_MARK_MEMBER_NAME(Random_obj::circle,"circle");
	HX_MARK_MEMBER_NAME(Random_obj::onCircle,"onCircle");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Random_obj::value,"value");
	HX_VISIT_MEMBER_NAME(Random_obj::interval,"interval");
	HX_VISIT_MEMBER_NAME(Random_obj::rotation,"rotation");
	HX_VISIT_MEMBER_NAME(Random_obj::box,"box");
	HX_VISIT_MEMBER_NAME(Random_obj::onBox,"onBox");
	HX_VISIT_MEMBER_NAME(Random_obj::square,"square");
	HX_VISIT_MEMBER_NAME(Random_obj::onSquare,"onSquare");
	HX_VISIT_MEMBER_NAME(Random_obj::sphere,"sphere");
	HX_VISIT_MEMBER_NAME(Random_obj::onSphere,"onSphere");
	HX_VISIT_MEMBER_NAME(Random_obj::circle,"circle");
	HX_VISIT_MEMBER_NAME(Random_obj::onCircle,"onCircle");
};

#endif

hx::Class Random_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("interval","\x45","\x79","\x7c","\x28"),
	HX_HCSTRING("get_interval","\x4e","\x2d","\x96","\xdd"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("get_box","\xa2","\x86","\xbf","\x26"),
	HX_HCSTRING("onBox","\x2c","\x52","\x62","\x32"),
	HX_HCSTRING("get_onBox","\x83","\xae","\x0b","\x76"),
	HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),
	HX_HCSTRING("get_square","\x66","\x70","\x79","\x49"),
	HX_HCSTRING("onSquare","\x1c","\xf7","\x9e","\x38"),
	HX_HCSTRING("get_onSquare","\x25","\xab","\xb8","\xed"),
	HX_HCSTRING("sphere","\x0d","\xaf","\xf6","\xbc"),
	HX_HCSTRING("get_sphere","\xd6","\x1e","\x7e","\xad"),
	HX_HCSTRING("onSphere","\x8c","\xa5","\xa3","\x9c"),
	HX_HCSTRING("get_onSphere","\x95","\x59","\xbd","\x51"),
	HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),
	HX_HCSTRING("get_circle","\xd9","\xe1","\x94","\x46"),
	HX_HCSTRING("onCircle","\x8f","\x68","\xba","\x35"),
	HX_HCSTRING("get_onCircle","\x98","\x1c","\xd4","\xea"),
	HX_HCSTRING("Length","\x06","\x09","\x9c","\xd3"),
	HX_HCSTRING("Range","\x9d","\x15","\x4d","\x77"),
	HX_HCSTRING("RangeInt","\x52","\x4f","\x4c","\xa0"),
	HX_HCSTRING("Item","\x33","\xf1","\x98","\x30"),
	HX_HCSTRING("Shuffle","\xd9","\x6d","\x2e","\xb2"),
	HX_HCSTRING("GetRotation","\xd4","\x97","\xac","\x12"),
	HX_HCSTRING("GetBox","\x35","\x6b","\xae","\xd7"),
	HX_HCSTRING("GetOnBox","\xd6","\x1d","\xeb","\x6b"),
	HX_HCSTRING("GetSquare","\xb3","\x69","\x1b","\x77"),
	HX_HCSTRING("GetOnSquare","\xb2","\x51","\xc5","\x42"),
	HX_HCSTRING("GetOnSphere","\x22","\x00","\xca","\xa6"),
	HX_HCSTRING("GetSphere","\x23","\x18","\x20","\xdb"),
	HX_HCSTRING("GetOnCircle","\x25","\xc3","\xe0","\x3f"),
	HX_HCSTRING("GetCircle","\x26","\xdb","\x36","\x74"),
	HX_HCSTRING("GetOnCone","\xb8","\x2b","\x78","\x02"),
	HX_HCSTRING("GetCone","\x79","\x91","\x98","\xe1"),
	HX_HCSTRING("GetOnCylinder","\xab","\x56","\xe0","\x34"),
	HX_HCSTRING("GetCylinder","\xec","\x30","\xed","\xbc"),
	HX_HCSTRING("GetMeshAttrib","\x2d","\x01","\x69","\x68"),
	HX_HCSTRING("GetMeshPrimitive","\xa4","\x7e","\xed","\xf2"),
	HX_HCSTRING("GetAttribOnMesh","\x2c","\x9f","\x66","\x63"),
	String(null()) };

void Random_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.Random","\xdd","\x77","\x50","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Random_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Random_obj >;
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
