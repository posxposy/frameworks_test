#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_physics_Collider
#include <haxor/component/physics/Collider.h>
#endif
#ifndef INCLUDED_haxor_component_physics_SphereCollider
#include <haxor/component/physics/SphereCollider.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_core_ColliderType
#include <haxor/core/ColliderType.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace component{
namespace physics{

Void SphereCollider_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.physics.SphereCollider","new",0xce3e3bf7,"haxor.component.physics.SphereCollider.new","haxor/component/physics/SphereCollider.hx",19,0x678c16b6)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(19)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	super::__construct(tmp);
}
;
	return null();
}

//SphereCollider_obj::~SphereCollider_obj() { }

Dynamic SphereCollider_obj::__CreateEmpty() { return  new SphereCollider_obj; }
hx::ObjectPtr< SphereCollider_obj > SphereCollider_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< SphereCollider_obj > _result_ = new SphereCollider_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic SphereCollider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SphereCollider_obj > _result_ = new SphereCollider_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::math::Vector3 SphereCollider_obj::get_center( ){
	HX_STACK_FRAME("haxor.component.physics.SphereCollider","get_center",0xec2cdae7,"haxor.component.physics.SphereCollider.get_center","haxor/component/physics/SphereCollider.hx",26,0x678c16b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(26)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp1 = this->m_center;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp3 = this->m_center;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp5 = this->m_center;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	Float tmp6 = tmp5->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp7 = tmp->Set(tmp2,tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(SphereCollider_obj,get_center,return )

::haxor::math::Vector3 SphereCollider_obj::set_center( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.physics.SphereCollider","set_center",0xefaa795b,"haxor.component.physics.SphereCollider.set_center","haxor/component/physics/SphereCollider.hx",27,0x678c16b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(27)
	::haxor::math::Vector3 tmp = this->m_center;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	Float tmp2 = v->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	Float tmp3 = v->z;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	tmp->Set(tmp1,tmp2,tmp3);
	HX_STACK_LINE(27)
	this->Refresh();
	HX_STACK_LINE(27)
	::haxor::math::Vector3 tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(SphereCollider_obj,set_center,return )

Float SphereCollider_obj::get_radius( ){
	HX_STACK_FRAME("haxor.component.physics.SphereCollider","get_radius",0x97488564,"haxor.component.physics.SphereCollider.get_radius","haxor/component/physics/SphereCollider.hx",34,0x678c16b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	Float tmp = this->m_radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SphereCollider_obj,get_radius,return )

Float SphereCollider_obj::set_radius( Float v){
	HX_STACK_FRAME("haxor.component.physics.SphereCollider","set_radius",0x9ac623d8,"haxor.component.physics.SphereCollider.set_radius","haxor/component/physics/SphereCollider.hx",35,0x678c16b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(35)
	this->m_radius = v;
	HX_STACK_LINE(35)
	this->Refresh();
	HX_STACK_LINE(35)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(SphereCollider_obj,set_radius,return )

Void SphereCollider_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.physics.SphereCollider","OnBuild",0xfaf72486,"haxor.component.physics.SphereCollider.OnBuild","haxor/component/physics/SphereCollider.hx",42,0x678c16b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		this->m_type = ::haxor::core::ColliderType_obj::Sphere;
		HX_STACK_LINE(44)
		this->super::OnBuild();
		HX_STACK_LINE(45)
		::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		this->m_center = tmp;
		HX_STACK_LINE(46)
		this->m_radius = ((Float)1.0);
		HX_STACK_LINE(47)
		this->Refresh();
	}
return null();
}


Void SphereCollider_obj::GenerateSphere( ){
{
		HX_STACK_FRAME("haxor.component.physics.SphereCollider","GenerateSphere",0xbf170a0b,"haxor.component.physics.SphereCollider.GenerateSphere","haxor/component/physics/SphereCollider.hx",54,0x678c16b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::haxor::math::Vector4 tmp = this->m_sphere;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::haxor::math::Vector4 res = tmp;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(56)
		::haxor::core::Entity tmp1 = this->m_entity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::haxor::math::Matrix4 tmp2 = tmp1->m_transform->get_WorldMatrix();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		::haxor::math::Matrix4 wm = tmp2;		HX_STACK_VAR(wm,"wm");
		HX_STACK_LINE(57)
		::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			Array< ::Dynamic > tmp5 = _this->m_v3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			int tmp6 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			int tmp7 = _this->m_v3->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(57)
			int tmp9 = _this->m_nv3 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(57)
			tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(57)
		::haxor::math::Vector3 tmp4 = this->m_center;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		::haxor::math::Vector3 tmp5 = tmp3->Set3(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		::haxor::math::Vector3 c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Float tmp6 = (wm->m00 * c->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			Float tmp7 = (wm->m01 * c->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			Float tmp9 = (wm->m02 * c->z);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(58)
			Float tmp11 = wm->m03;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(58)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(58)
			Float vx = tmp12;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(58)
			Float tmp13 = (wm->m10 * c->x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(58)
			Float tmp14 = (wm->m11 * c->y);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(58)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(58)
			Float tmp16 = (wm->m12 * c->z);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(58)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(58)
			Float tmp18 = wm->m13;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(58)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(58)
			Float vy = tmp19;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(58)
			Float tmp20 = (wm->m20 * c->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(58)
			Float tmp21 = (wm->m21 * c->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(58)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(58)
			Float tmp23 = (wm->m22 * c->z);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(58)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(58)
			Float tmp25 = wm->m23;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(58)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(58)
			Float vz = tmp26;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(58)
			c->x = vx;
			HX_STACK_LINE(58)
			c->y = vy;
			HX_STACK_LINE(58)
			c->z = vz;
			HX_STACK_LINE(58)
			c;
		}
		HX_STACK_LINE(59)
		::haxor::math::Vector3 tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		res->Set3(tmp6);
		HX_STACK_LINE(60)
		::haxor::math::Matrix4 tmp7 = wm;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		::haxor::math::Matrix4 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::haxor::context::DataContext tmp9 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			::haxor::context::DataContext _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(60)
			Array< ::Dynamic > tmp10 = _this->m_m4;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			int tmp11 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			int tmp12 = _this->m_m4->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			int tmp13 = hx::Mod(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			int tmp14 = _this->m_nq = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			tmp8 = tmp10->__get(tmp14).StaticCast< ::haxor::math::Matrix4 >();
		}
		HX_STACK_LINE(60)
		::haxor::math::Matrix4 tmp9 = ::haxor::math::Matrix4_obj::GetScale(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		wm = tmp9;
		HX_STACK_LINE(61)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Float tmp11 = wm->m11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			Float tmp12 = wm->m22;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			Float tmp13 = ::Math_obj::max(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			Float b = tmp13;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(61)
			Float tmp14 = wm->m00;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(61)
			Float tmp15 = b;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(61)
			tmp10 = ::Math_obj::max(tmp14,tmp15);
		}
		HX_STACK_LINE(61)
		Float tmp11 = this->m_radius;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		res->w = tmp12;
	}
return null();
}


Void SphereCollider_obj::GenerateAABB( ){
{
		HX_STACK_FRAME("haxor.component.physics.SphereCollider","GenerateAABB",0x8c123dfe,"haxor.component.physics.SphereCollider.GenerateAABB","haxor/component/physics/SphereCollider.hx",69,0x678c16b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::haxor::math::AABB3 tmp = this->m_aabb;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::haxor::math::AABB3 b = tmp;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(71)
		::haxor::core::Entity tmp1 = this->m_entity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		::haxor::math::Matrix4 tmp2 = tmp1->m_transform->get_WorldMatrix();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		::haxor::math::Matrix4 wm = tmp2;		HX_STACK_VAR(wm,"wm");
		HX_STACK_LINE(72)
		Float tmp3 = this->get_radius();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		Float tmp4 = (tmp3 * ((Float)0.5773507));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		Float r = tmp4;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(73)
		::haxor::math::Vector3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(73)
			::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			Array< ::Dynamic > tmp7 = _this->m_v3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			int tmp8 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			int tmp9 = _this->m_v3->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(73)
			int tmp11 = _this->m_nv3 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(73)
			tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(73)
		Float tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		Float tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		Float tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		::haxor::math::Vector3 tmp9 = tmp5->Set(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		::haxor::math::Vector3 c = tmp9;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			Float tmp10 = (wm->m00 * c->x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			Float tmp11 = (wm->m01 * c->y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(74)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			Float tmp13 = (wm->m02 * c->z);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(74)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(74)
			Float vx = tmp14;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(74)
			Float tmp15 = (wm->m10 * c->x);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(74)
			Float tmp16 = (wm->m11 * c->y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(74)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			Float tmp18 = (wm->m12 * c->z);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(74)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(74)
			Float vy = tmp19;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(74)
			Float tmp20 = (wm->m20 * c->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(74)
			Float tmp21 = (wm->m21 * c->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(74)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(74)
			Float tmp23 = (wm->m22 * c->z);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(74)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(74)
			Float vz = tmp24;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(74)
			c->x = vx;
			HX_STACK_LINE(74)
			c->y = vy;
			HX_STACK_LINE(74)
			c->z = vz;
			HX_STACK_LINE(74)
			c;
		}
		HX_STACK_LINE(75)
		Float tmp10 = (c->x * c->x);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(75)
		Float tmp11 = (c->y * c->y);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(75)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(75)
		Float tmp13 = (c->z * c->z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(75)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(75)
		Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(75)
		Float tmp16 = (tmp15 * ((Float)0.5));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(75)
		r = tmp16;
		HX_STACK_LINE(76)
		::haxor::math::Vector3 tmp17 = this->m_center;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(76)
		c->Set3(tmp17);
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			Float tmp18 = (wm->m00 * c->x);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(77)
			Float tmp19 = (wm->m01 * c->y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(77)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(77)
			Float tmp21 = (wm->m02 * c->z);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(77)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(77)
			Float tmp23 = wm->m03;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(77)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(77)
			Float vx = tmp24;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(77)
			Float tmp25 = (wm->m10 * c->x);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(77)
			Float tmp26 = (wm->m11 * c->y);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(77)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(77)
			Float tmp28 = (wm->m12 * c->z);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(77)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(77)
			Float tmp30 = wm->m13;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(77)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(77)
			Float vy = tmp31;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(77)
			Float tmp32 = (wm->m20 * c->x);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(77)
			Float tmp33 = (wm->m21 * c->y);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(77)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(77)
			Float tmp35 = (wm->m22 * c->z);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(77)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(77)
			Float tmp37 = wm->m23;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(77)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(77)
			Float vz = tmp38;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(77)
			c->x = vx;
			HX_STACK_LINE(77)
			c->y = vy;
			HX_STACK_LINE(77)
			c->z = vz;
			HX_STACK_LINE(77)
			c;
		}
		HX_STACK_LINE(78)
		Float tmp18 = r;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(78)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(78)
		Float tmp20 = c->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(78)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(78)
		Float tmp22 = (r + c->x);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(78)
		Float tmp23 = r;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(78)
		Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(78)
		Float tmp25 = c->y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(78)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(78)
		Float tmp27 = (r + c->y);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(78)
		Float tmp28 = r;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(78)
		Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(78)
		Float tmp30 = c->z;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(78)
		Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(78)
		Float tmp32 = (r + c->z);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(78)
		b->Set(tmp21,tmp22,tmp26,tmp27,tmp31,tmp32);
	}
return null();
}



SphereCollider_obj::SphereCollider_obj()
{
}

void SphereCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SphereCollider);
	HX_MARK_MEMBER_NAME(m_center,"m_center");
	HX_MARK_MEMBER_NAME(m_radius,"m_radius");
	::haxor::component::physics::Collider_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SphereCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_center,"m_center");
	HX_VISIT_MEMBER_NAME(m_radius,"m_radius");
	::haxor::component::physics::Collider_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SphereCollider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return get_center(); }
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return get_radius(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_center") ) { return m_center; }
		if (HX_FIELD_EQ(inName,"m_radius") ) { return m_radius; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_center") ) { return get_center_dyn(); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return set_center_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GenerateAABB") ) { return GenerateAABB_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GenerateSphere") ) { return GenerateSphere_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SphereCollider_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return set_center(inValue); }
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return set_radius(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_center") ) { m_center=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_radius") ) { m_radius=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SphereCollider_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SphereCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("m_center","\xa7","\xce","\xcc","\xce"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	outFields->push(HX_HCSTRING("m_radius","\x24","\x79","\xe8","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(SphereCollider_obj,m_center),HX_HCSTRING("m_center","\xa7","\xce","\xcc","\xce")},
	{hx::fsFloat,(int)offsetof(SphereCollider_obj,m_radius),HX_HCSTRING("m_radius","\x24","\x79","\xe8","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_center","\x9e","\x95","\x62","\xf6"),
	HX_HCSTRING("set_center","\x12","\x34","\xe0","\xf9"),
	HX_HCSTRING("m_center","\xa7","\xce","\xcc","\xce"),
	HX_HCSTRING("get_radius","\x1b","\x40","\x7e","\xa1"),
	HX_HCSTRING("set_radius","\x8f","\xde","\xfb","\xa4"),
	HX_HCSTRING("m_radius","\x24","\x79","\xe8","\x79"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("GenerateSphere","\x42","\xec","\x05","\x6e"),
	HX_HCSTRING("GenerateAABB","\x75","\x54","\x35","\xdb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SphereCollider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SphereCollider_obj::__mClass,"__mClass");
};

#endif

hx::Class SphereCollider_obj::__mClass;

void SphereCollider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.physics.SphereCollider","\x85","\x74","\x6d","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SphereCollider_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SphereCollider_obj >;
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
} // end namespace component
} // end namespace physics
