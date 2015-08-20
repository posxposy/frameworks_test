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
#ifndef INCLUDED_haxor_component_physics_BoxCollider
#include <haxor/component/physics/BoxCollider.h>
#endif
#ifndef INCLUDED_haxor_component_physics_Collider
#include <haxor/component/physics/Collider.h>
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

Void BoxCollider_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.physics.BoxCollider","new",0xf63f432d,"haxor.component.physics.BoxCollider.new","haxor/component/physics/BoxCollider.hx",19,0xa2600d66)
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

//BoxCollider_obj::~BoxCollider_obj() { }

Dynamic BoxCollider_obj::__CreateEmpty() { return  new BoxCollider_obj; }
hx::ObjectPtr< BoxCollider_obj > BoxCollider_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< BoxCollider_obj > _result_ = new BoxCollider_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic BoxCollider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoxCollider_obj > _result_ = new BoxCollider_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::math::Vector3 BoxCollider_obj::get_center( ){
	HX_STACK_FRAME("haxor.component.physics.BoxCollider","get_center",0xa80ec671,"haxor.component.physics.BoxCollider.get_center","haxor/component/physics/BoxCollider.hx",25,0xa2600d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(25)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(25)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(25)
	::haxor::math::Vector3 tmp1 = this->m_center;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::haxor::math::Vector3 tmp3 = this->m_center;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	::haxor::math::Vector3 tmp5 = this->m_center;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	Float tmp6 = tmp5->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	::haxor::math::Vector3 tmp7 = tmp->Set(tmp2,tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(25)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(BoxCollider_obj,get_center,return )

::haxor::math::Vector3 BoxCollider_obj::set_center( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.physics.BoxCollider","set_center",0xab8c64e5,"haxor.component.physics.BoxCollider.set_center","haxor/component/physics/BoxCollider.hx",26,0xa2600d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp = this->m_center;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	Float tmp2 = v->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	Float tmp3 = v->z;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	tmp->Set(tmp1,tmp2,tmp3);
	HX_STACK_LINE(26)
	this->Refresh();
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BoxCollider_obj,set_center,return )

::haxor::math::Vector3 BoxCollider_obj::get_size( ){
	HX_STACK_FRAME("haxor.component.physics.BoxCollider","get_size",0x288ea25d,"haxor.component.physics.BoxCollider.get_size","haxor/component/physics/BoxCollider.hx",33,0xa2600d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(33)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp1 = this->m_size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp3 = this->m_size;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp5 = this->m_size;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	Float tmp6 = tmp5->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp7 = tmp->Set(tmp2,tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(BoxCollider_obj,get_size,return )

::haxor::math::Vector3 BoxCollider_obj::set_size( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.physics.BoxCollider","set_size",0xd6ebfbd1,"haxor.component.physics.BoxCollider.set_size","haxor/component/physics/BoxCollider.hx",34,0xa2600d66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(34)
	::haxor::math::Vector3 tmp = this->m_size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Float tmp2 = v->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Float tmp3 = v->z;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	tmp->Set(tmp1,tmp2,tmp3);
	HX_STACK_LINE(34)
	this->Refresh();
	HX_STACK_LINE(34)
	::haxor::math::Vector3 tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BoxCollider_obj,set_size,return )

Void BoxCollider_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.physics.BoxCollider","OnBuild",0x9d2afebc,"haxor.component.physics.BoxCollider.OnBuild","haxor/component/physics/BoxCollider.hx",41,0xa2600d66)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->m_type = ::haxor::core::ColliderType_obj::Box;
		HX_STACK_LINE(43)
		this->super::OnBuild();
		HX_STACK_LINE(44)
		::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		this->m_center = tmp;
		HX_STACK_LINE(45)
		::haxor::math::Vector3 tmp1 = ::haxor::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		this->m_size = tmp1;
	}
return null();
}


Void BoxCollider_obj::GenerateSphere( ){
{
		HX_STACK_FRAME("haxor.component.physics.BoxCollider","GenerateSphere",0x1f168295,"haxor.component.physics.BoxCollider.GenerateSphere","haxor/component/physics/BoxCollider.hx",52,0xa2600d66)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::haxor::math::Vector4 tmp = this->m_sphere;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		::haxor::math::Vector4 v = tmp;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(54)
		::haxor::core::Entity tmp1 = this->m_entity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		::haxor::math::Matrix4 tmp2 = tmp1->m_transform->get_WorldMatrix();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		::haxor::math::Matrix4 wm = tmp2;		HX_STACK_VAR(wm,"wm");
		HX_STACK_LINE(55)
		::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(55)
			Array< ::Dynamic > tmp5 = _this->m_v3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			int tmp6 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			int tmp7 = _this->m_v3->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			int tmp9 = _this->m_nv3 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(55)
		::haxor::math::Vector3 tmp4 = this->m_center;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		::haxor::math::Vector3 tmp6 = this->m_center;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(55)
		::haxor::math::Vector3 tmp8 = this->m_center;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(55)
		Float tmp9 = tmp8->z;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		::haxor::math::Vector3 tmp10 = tmp3->Set(tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		::haxor::math::Vector3 c = tmp10;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			Float tmp11 = (wm->m00 * c->x);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(56)
			Float tmp12 = (wm->m01 * c->y);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(56)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(56)
			Float tmp14 = (wm->m02 * c->z);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(56)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(56)
			Float tmp16 = wm->m03;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(56)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(56)
			Float vx = tmp17;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(56)
			Float tmp18 = (wm->m10 * c->x);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(56)
			Float tmp19 = (wm->m11 * c->y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(56)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(56)
			Float tmp21 = (wm->m12 * c->z);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(56)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(56)
			Float tmp23 = wm->m13;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(56)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(56)
			Float vy = tmp24;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(56)
			Float tmp25 = (wm->m20 * c->x);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(56)
			Float tmp26 = (wm->m21 * c->y);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(56)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(56)
			Float tmp28 = (wm->m22 * c->z);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(56)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(56)
			Float tmp30 = wm->m23;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(56)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(56)
			Float vz = tmp31;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(56)
			c->x = vx;
			HX_STACK_LINE(56)
			c->y = vy;
			HX_STACK_LINE(56)
			c->z = vz;
			HX_STACK_LINE(56)
			c;
		}
		HX_STACK_LINE(57)
		v->x = c->x;
		HX_STACK_LINE(58)
		v->y = c->y;
		HX_STACK_LINE(59)
		v->z = c->z;
		HX_STACK_LINE(60)
		::haxor::math::Matrix4 tmp11 = wm;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(60)
		::haxor::math::Matrix4 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::haxor::math::Matrix4 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				::haxor::context::DataContext tmp14 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(60)
				::haxor::context::DataContext _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(60)
				Array< ::Dynamic > tmp15 = _this->m_m4;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				int tmp16 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				int tmp17 = _this->m_m4->length;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(60)
				int tmp18 = hx::Mod(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(60)
				int tmp19 = _this->m_nq = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(60)
				tmp13 = tmp15->__get(tmp19).StaticCast< ::haxor::math::Matrix4 >();
			}
			HX_STACK_LINE(60)
			::haxor::math::Matrix4 _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(60)
			tmp12 = _this->Set((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);
		}
		HX_STACK_LINE(60)
		::haxor::math::Matrix4 tmp13 = ::haxor::math::Matrix4_obj::GetScale(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(60)
		wm = tmp13;
		HX_STACK_LINE(61)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Float tmp15 = wm->m11;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(61)
			Float tmp16 = wm->m22;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(61)
			Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(61)
			Float b = tmp17;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(61)
			Float tmp18 = wm->m00;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(61)
			Float tmp19 = b;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(61)
			tmp14 = ::Math_obj::max(tmp18,tmp19);
		}
		HX_STACK_LINE(61)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::haxor::math::Vector3 tmp16 = this->m_size;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(61)
			::haxor::math::Vector3 _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(61)
			Float tmp17 = (_this->x * _this->x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(61)
			Float tmp18 = (_this->y * _this->y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(61)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(61)
			Float tmp20 = (_this->z * _this->z);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(61)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(61)
			tmp15 = ::Math_obj::sqrt(tmp21);
		}
		HX_STACK_LINE(61)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(61)
		v->w = tmp16;
	}
return null();
}


Void BoxCollider_obj::GenerateAABB( ){
{
		HX_STACK_FRAME("haxor.component.physics.BoxCollider","GenerateAABB",0x74eda008,"haxor.component.physics.BoxCollider.GenerateAABB","haxor/component/physics/BoxCollider.hx",68,0xa2600d66)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::haxor::math::AABB3 tmp = this->m_aabb;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::haxor::math::AABB3 b = tmp;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(70)
		::haxor::core::Entity tmp1 = this->m_entity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::haxor::math::Matrix4 tmp2 = tmp1->m_transform->get_WorldMatrix();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		::haxor::math::Matrix4 wm = tmp2;		HX_STACK_VAR(wm,"wm");
		HX_STACK_LINE(71)
		::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(71)
			Array< ::Dynamic > tmp5 = _this->m_v3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			int tmp6 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			int tmp7 = _this->m_v3->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			int tmp9 = _this->m_nv3 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(71)
			tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(71)
		::haxor::math::Vector3 tmp4 = this->m_center;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		::haxor::math::Vector3 tmp6 = this->m_center;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		::haxor::math::Vector3 tmp8 = this->m_center;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		Float tmp9 = tmp8->z;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		::haxor::math::Vector3 tmp10 = tmp3->Set(tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(71)
		::haxor::math::Vector3 c = tmp10;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(72)
		::haxor::math::Vector3 tmp11 = this->m_size;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(72)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(72)
		Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		Float hx = tmp13;		HX_STACK_VAR(hx,"hx");
		HX_STACK_LINE(73)
		::haxor::math::Vector3 tmp14 = this->m_size;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(73)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(73)
		Float tmp16 = (tmp15 * ((Float)0.5));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(73)
		Float hy = tmp16;		HX_STACK_VAR(hy,"hy");
		HX_STACK_LINE(74)
		::haxor::math::Vector3 tmp17 = this->m_size;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(74)
		Float tmp18 = tmp17->z;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(74)
		Float tmp19 = (tmp18 * ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(74)
		Float hz = tmp19;		HX_STACK_VAR(hz,"hz");
		HX_STACK_LINE(75)
		::haxor::math::Vector3 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			::haxor::context::DataContext tmp21 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(75)
			::haxor::context::DataContext _this = tmp21;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(75)
			Array< ::Dynamic > tmp22 = _this->m_v3;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(75)
			int tmp23 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(75)
			int tmp24 = _this->m_v3->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(75)
			int tmp25 = hx::Mod(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(75)
			int tmp26 = _this->m_nv3 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(75)
			tmp20 = tmp22->__get(tmp26).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(75)
		Float tmp21 = (hx * wm->m00);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(75)
		Float tmp22 = (hx * wm->m10);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(75)
		Float tmp23 = (hx * wm->m20);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(75)
		::haxor::math::Vector3 tmp24 = tmp20->Set(tmp21,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(75)
		::haxor::math::Vector3 vx = tmp24;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(76)
		::haxor::math::Vector3 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::haxor::context::DataContext tmp26 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(76)
			::haxor::context::DataContext _this = tmp26;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(76)
			Array< ::Dynamic > tmp27 = _this->m_v3;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(76)
			int tmp28 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(76)
			int tmp29 = _this->m_v3->length;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(76)
			int tmp30 = hx::Mod(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(76)
			int tmp31 = _this->m_nv3 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(76)
			tmp25 = tmp27->__get(tmp31).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(76)
		Float tmp26 = (hy * wm->m01);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(76)
		Float tmp27 = (hy * wm->m11);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(76)
		Float tmp28 = (hy * wm->m21);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(76)
		::haxor::math::Vector3 tmp29 = tmp25->Set(tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(76)
		::haxor::math::Vector3 vy = tmp29;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(77)
		::haxor::math::Vector3 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::haxor::context::DataContext tmp31 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(77)
			::haxor::context::DataContext _this = tmp31;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(77)
			Array< ::Dynamic > tmp32 = _this->m_v3;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(77)
			int tmp33 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(77)
			int tmp34 = _this->m_v3->length;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(77)
			int tmp35 = hx::Mod(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(77)
			int tmp36 = _this->m_nv3 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(77)
			tmp30 = tmp32->__get(tmp36).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(77)
		Float tmp31 = (hz * wm->m02);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(77)
		Float tmp32 = (hz * wm->m12);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(77)
		Float tmp33 = (hz * wm->m22);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(77)
		::haxor::math::Vector3 tmp34 = tmp30->Set(tmp31,tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(77)
		::haxor::math::Vector3 vz = tmp34;		HX_STACK_VAR(vz,"vz");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Float tmp35 = (wm->m00 * c->x);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(78)
			Float tmp36 = (wm->m01 * c->y);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(78)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(78)
			Float tmp38 = (wm->m02 * c->z);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(78)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(78)
			Float tmp40 = wm->m03;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(78)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(78)
			Float vx1 = tmp41;		HX_STACK_VAR(vx1,"vx1");
			HX_STACK_LINE(78)
			Float tmp42 = (wm->m10 * c->x);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(78)
			Float tmp43 = (wm->m11 * c->y);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(78)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(78)
			Float tmp45 = (wm->m12 * c->z);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(78)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(78)
			Float tmp47 = wm->m13;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(78)
			Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(78)
			Float vy1 = tmp48;		HX_STACK_VAR(vy1,"vy1");
			HX_STACK_LINE(78)
			Float tmp49 = (wm->m20 * c->x);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(78)
			Float tmp50 = (wm->m21 * c->y);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(78)
			Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(78)
			Float tmp52 = (wm->m22 * c->z);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(78)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(78)
			Float tmp54 = wm->m23;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(78)
			Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(78)
			Float vz1 = tmp55;		HX_STACK_VAR(vz1,"vz1");
			HX_STACK_LINE(78)
			c->x = vx1;
			HX_STACK_LINE(78)
			c->y = vy1;
			HX_STACK_LINE(78)
			c->z = vz1;
			HX_STACK_LINE(78)
			c;
		}
		HX_STACK_LINE(79)
		Float tmp35 = c->x;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(79)
		Float tmp36 = b->set_xMax(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(79)
		b->set_xMin(tmp36);
		HX_STACK_LINE(80)
		Float tmp37 = c->y;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(80)
		Float tmp38 = b->set_yMax(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(80)
		b->set_yMin(tmp38);
		HX_STACK_LINE(81)
		Float tmp39 = c->z;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(81)
		Float tmp40 = b->set_zMax(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(81)
		b->set_zMin(tmp40);
		HX_STACK_LINE(82)
		Float tmp41 = (c->x + vx->x);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(82)
		Float tmp42 = vy->x;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(82)
		Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(82)
		Float tmp44 = vz->x;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(82)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(82)
		Float tmp46 = (c->y + vx->y);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(82)
		Float tmp47 = vy->y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(82)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(82)
		Float tmp49 = vz->y;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(82)
		Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(82)
		Float tmp51 = (c->z + vx->z);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(82)
		Float tmp52 = vy->z;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(82)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(82)
		Float tmp54 = vz->z;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(82)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(82)
		b->Encapsulate3(tmp45,tmp50,tmp55);
		HX_STACK_LINE(83)
		Float tmp56 = (c->x - vx->x);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(83)
		Float tmp57 = vy->x;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(83)
		Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(83)
		Float tmp59 = vz->x;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(83)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(83)
		Float tmp61 = (c->y - vx->y);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(83)
		Float tmp62 = vy->y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(83)
		Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(83)
		Float tmp64 = vz->y;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(83)
		Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(83)
		Float tmp66 = (c->z - vx->z);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(83)
		Float tmp67 = vy->z;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(83)
		Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(83)
		Float tmp69 = vz->z;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(83)
		Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(83)
		b->Encapsulate3(tmp60,tmp65,tmp70);
		HX_STACK_LINE(84)
		Float tmp71 = (c->x + vx->x);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(84)
		Float tmp72 = vy->x;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(84)
		Float tmp73 = (tmp71 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(84)
		Float tmp74 = vz->x;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(84)
		Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(84)
		Float tmp76 = (c->y + vx->y);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(84)
		Float tmp77 = vy->y;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(84)
		Float tmp78 = (tmp76 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(84)
		Float tmp79 = vz->y;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(84)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(84)
		Float tmp81 = (c->z + vx->z);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(84)
		Float tmp82 = vy->z;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(84)
		Float tmp83 = (tmp81 - tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(84)
		Float tmp84 = vz->z;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(84)
		Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(84)
		b->Encapsulate3(tmp75,tmp80,tmp85);
		HX_STACK_LINE(85)
		Float tmp86 = (c->x - vx->x);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(85)
		Float tmp87 = vy->x;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(85)
		Float tmp88 = (tmp86 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(85)
		Float tmp89 = vz->x;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(85)
		Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(85)
		Float tmp91 = (c->y - vx->y);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(85)
		Float tmp92 = vy->y;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(85)
		Float tmp93 = (tmp91 - tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(85)
		Float tmp94 = vz->y;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(85)
		Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(85)
		Float tmp96 = (c->z - vx->z);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(85)
		Float tmp97 = vy->z;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(85)
		Float tmp98 = (tmp96 - tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(85)
		Float tmp99 = vz->z;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(85)
		Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(85)
		b->Encapsulate3(tmp90,tmp95,tmp100);
		HX_STACK_LINE(86)
		Float tmp101 = (c->x + vx->x);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(86)
		Float tmp102 = vy->x;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(86)
		Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(86)
		Float tmp104 = vz->x;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(86)
		Float tmp105 = (tmp103 - tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(86)
		Float tmp106 = (c->y + vx->y);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(86)
		Float tmp107 = vy->y;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(86)
		Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(86)
		Float tmp109 = vz->y;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(86)
		Float tmp110 = (tmp108 - tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(86)
		Float tmp111 = (c->z + vx->z);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(86)
		Float tmp112 = vy->z;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(86)
		Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(86)
		Float tmp114 = vz->z;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(86)
		Float tmp115 = (tmp113 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(86)
		b->Encapsulate3(tmp105,tmp110,tmp115);
		HX_STACK_LINE(87)
		Float tmp116 = (c->x - vx->x);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(87)
		Float tmp117 = vy->x;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(87)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(87)
		Float tmp119 = vz->x;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(87)
		Float tmp120 = (tmp118 - tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(87)
		Float tmp121 = (c->y - vx->y);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(87)
		Float tmp122 = vy->y;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(87)
		Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(87)
		Float tmp124 = vz->y;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(87)
		Float tmp125 = (tmp123 - tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(87)
		Float tmp126 = (c->z - vx->z);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(87)
		Float tmp127 = vy->z;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(87)
		Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(87)
		Float tmp129 = vz->z;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(87)
		Float tmp130 = (tmp128 - tmp129);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(87)
		b->Encapsulate3(tmp120,tmp125,tmp130);
		HX_STACK_LINE(88)
		Float tmp131 = (c->x + vx->x);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(88)
		Float tmp132 = vy->x;		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(88)
		Float tmp133 = (tmp131 - tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(88)
		Float tmp134 = vz->x;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(88)
		Float tmp135 = (tmp133 - tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(88)
		Float tmp136 = (c->y + vx->y);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(88)
		Float tmp137 = vy->y;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(88)
		Float tmp138 = (tmp136 - tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(88)
		Float tmp139 = vz->y;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(88)
		Float tmp140 = (tmp138 - tmp139);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(88)
		Float tmp141 = (c->z + vx->z);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(88)
		Float tmp142 = vy->z;		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(88)
		Float tmp143 = (tmp141 - tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(88)
		Float tmp144 = vz->z;		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(88)
		Float tmp145 = (tmp143 - tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(88)
		b->Encapsulate3(tmp135,tmp140,tmp145);
		HX_STACK_LINE(89)
		Float tmp146 = (c->x - vx->x);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(89)
		Float tmp147 = vy->x;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(89)
		Float tmp148 = (tmp146 - tmp147);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(89)
		Float tmp149 = vz->x;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(89)
		Float tmp150 = (tmp148 - tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(89)
		Float tmp151 = (c->y - vx->y);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(89)
		Float tmp152 = vy->y;		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(89)
		Float tmp153 = (tmp151 - tmp152);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(89)
		Float tmp154 = vz->y;		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(89)
		Float tmp155 = (tmp153 - tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(89)
		Float tmp156 = (c->z - vx->z);		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(89)
		Float tmp157 = vy->z;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(89)
		Float tmp158 = (tmp156 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(89)
		Float tmp159 = vz->z;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(89)
		Float tmp160 = (tmp158 - tmp159);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(89)
		b->Encapsulate3(tmp150,tmp155,tmp160);
	}
return null();
}



BoxCollider_obj::BoxCollider_obj()
{
}

void BoxCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoxCollider);
	HX_MARK_MEMBER_NAME(m_center,"m_center");
	HX_MARK_MEMBER_NAME(m_size,"m_size");
	::haxor::component::physics::Collider_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BoxCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_center,"m_center");
	HX_VISIT_MEMBER_NAME(m_size,"m_size");
	::haxor::component::physics::Collider_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BoxCollider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return get_center(); }
		if (HX_FIELD_EQ(inName,"m_size") ) { return m_size; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_center") ) { return m_center; }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_center") ) { return get_center_dyn(); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return set_center_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GenerateAABB") ) { return GenerateAABB_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GenerateSphere") ) { return GenerateSphere_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoxCollider_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return set_center(inValue); }
		if (HX_FIELD_EQ(inName,"m_size") ) { m_size=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_center") ) { m_center=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BoxCollider_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BoxCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("m_center","\xa7","\xce","\xcc","\xce"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("m_size","\x13","\x11","\x4b","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(BoxCollider_obj,m_center),HX_HCSTRING("m_center","\xa7","\xce","\xcc","\xce")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(BoxCollider_obj,m_size),HX_HCSTRING("m_size","\x13","\x11","\x4b","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_center","\x9e","\x95","\x62","\xf6"),
	HX_HCSTRING("set_center","\x12","\x34","\xe0","\xf9"),
	HX_HCSTRING("m_center","\xa7","\xce","\xcc","\xce"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("m_size","\x13","\x11","\x4b","\x94"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("GenerateSphere","\x42","\xec","\x05","\x6e"),
	HX_HCSTRING("GenerateAABB","\x75","\x54","\x35","\xdb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoxCollider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoxCollider_obj::__mClass,"__mClass");
};

#endif

hx::Class BoxCollider_obj::__mClass;

void BoxCollider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.physics.BoxCollider","\xbb","\x28","\xe1","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BoxCollider_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BoxCollider_obj >;
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
