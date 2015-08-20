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
#ifndef INCLUDED_haxor_component_physics_RigidBody
#include <haxor/component/physics/RigidBody.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_PhysicsContext
#include <haxor/context/PhysicsContext.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_ForceMode
#include <haxor/core/ForceMode.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_physics_Physics
#include <haxor/physics/Physics.h>
#endif
namespace haxor{
namespace component{
namespace physics{

Void RigidBody_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.physics.RigidBody","new",0x843b1bbb,"haxor.component.physics.RigidBody.new","haxor/component/physics/RigidBody.hx",21,0x9a85c9d8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(21)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	super::__construct(tmp);
}
;
	return null();
}

//RigidBody_obj::~RigidBody_obj() { }

Dynamic RigidBody_obj::__CreateEmpty() { return  new RigidBody_obj; }
hx::ObjectPtr< RigidBody_obj > RigidBody_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< RigidBody_obj > _result_ = new RigidBody_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic RigidBody_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RigidBody_obj > _result_ = new RigidBody_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::math::Vector3 RigidBody_obj::get_velocity( ){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","get_velocity",0x46e7a76b,"haxor.component.physics.RigidBody.get_velocity","haxor/component/physics/RigidBody.hx",28,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(28)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(28)
	::haxor::math::Vector3 tmp1 = this->m_velocity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	::haxor::math::Vector3 tmp3 = this->m_velocity;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	::haxor::math::Vector3 tmp5 = this->m_velocity;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	Float tmp6 = tmp5->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	::haxor::math::Vector3 tmp7 = tmp->Set(tmp2,tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(RigidBody_obj,get_velocity,return )

::haxor::math::Vector3 RigidBody_obj::set_velocity( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","set_velocity",0x5be0cadf,"haxor.component.physics.RigidBody.set_velocity","haxor/component/physics/RigidBody.hx",30,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(31)
	Float tmp = (v->x * v->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = (v->y * v->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	Float tmp3 = (v->z * v->z);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	this->m_speed = tmp5;
	HX_STACK_LINE(32)
	Float tmp6 = this->m_speed;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	bool tmp7 = (tmp6 <= ((Float)0.0));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	if ((tmp7)){
		HX_STACK_LINE(32)
		tmp8 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(32)
		Float tmp9 = this->m_speed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(32)
		tmp8 = (Float(((Float)1.0)) / Float(tmp9));
	}
	HX_STACK_LINE(32)
	Float ispd = tmp8;		HX_STACK_VAR(ispd,"ispd");
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp9 = this->m_velocity;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(33)
	::haxor::math::Vector3 tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	tmp9->Set3(tmp10);
	HX_STACK_LINE(34)
	::haxor::math::Vector3 tmp11 = this->m_direction;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(34)
	::haxor::math::Vector3 tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(34)
	::haxor::math::Vector3 tmp13 = tmp11->Set3(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(34)
	Float tmp14 = ispd;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(34)
	tmp13->Scale(tmp14);
	HX_STACK_LINE(35)
	::haxor::math::Vector3 tmp15 = v;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(35)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(RigidBody_obj,set_velocity,return )

::haxor::math::Vector3 RigidBody_obj::get_angularVelocity( ){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","get_angularVelocity",0xe121df91,"haxor.component.physics.RigidBody.get_angularVelocity","haxor/component/physics/RigidBody.hx",46,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(46)
	::haxor::math::Vector3 tmp1 = this->m_angularVelocity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	::haxor::math::Vector3 tmp3 = this->m_angularVelocity;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	::haxor::math::Vector3 tmp5 = this->m_angularVelocity;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	Float tmp6 = tmp5->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	::haxor::math::Vector3 tmp7 = tmp->Set(tmp2,tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(RigidBody_obj,get_angularVelocity,return )

::haxor::math::Vector3 RigidBody_obj::set_angularVelocity( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","set_angularVelocity",0x1dbed29d,"haxor.component.physics.RigidBody.set_angularVelocity","haxor/component/physics/RigidBody.hx",48,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(49)
	Float tmp = (v->x * v->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	Float tmp1 = (v->y * v->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	Float tmp3 = (v->z * v->z);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	this->m_angularSpeed = tmp5;
	HX_STACK_LINE(50)
	Float tmp6 = this->m_angularSpeed;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(50)
	bool tmp7 = (tmp6 <= ((Float)0.0));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	if ((tmp7)){
		HX_STACK_LINE(50)
		tmp8 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(50)
		Float tmp9 = this->m_angularSpeed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		tmp8 = (Float(((Float)1.0)) / Float(tmp9));
	}
	HX_STACK_LINE(50)
	Float ispd = tmp8;		HX_STACK_VAR(ispd,"ispd");
	HX_STACK_LINE(51)
	::haxor::math::Vector3 tmp9 = this->m_angularVelocity;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(51)
	::haxor::math::Vector3 tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(51)
	tmp9->Set3(tmp10);
	HX_STACK_LINE(52)
	::haxor::math::Vector3 tmp11 = this->m_angularDirection;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(52)
	::haxor::math::Vector3 tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(52)
	::haxor::math::Vector3 tmp13 = tmp11->Set3(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(52)
	Float tmp14 = ispd;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(52)
	tmp13->Scale(tmp14);
	HX_STACK_LINE(53)
	::haxor::math::Vector3 tmp15 = v;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(53)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(RigidBody_obj,set_angularVelocity,return )

Float RigidBody_obj::get_drag( ){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","get_drag",0xdf6d9242,"haxor.component.physics.RigidBody.get_drag","haxor/component/physics/RigidBody.hx",69,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	Float tmp = this->m_drag;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(RigidBody_obj,get_drag,return )

Float RigidBody_obj::set_drag( Float v){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","set_drag",0x8dcaebb6,"haxor.component.physics.RigidBody.set_drag","haxor/component/physics/RigidBody.hx",71,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(72)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	Float tmp1 = ::Math_obj::max((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	this->m_drag = tmp1;
	HX_STACK_LINE(73)
	Float tmp2 = this->m_drag;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RigidBody_obj,set_drag,return )

Float RigidBody_obj::get_angularDrag( ){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","get_angularDrag",0xcf933f68,"haxor.component.physics.RigidBody.get_angularDrag","haxor/component/physics/RigidBody.hx",82,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	Float tmp = this->m_angularDrag;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(RigidBody_obj,get_angularDrag,return )

Float RigidBody_obj::set_angularDrag( Float v){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","set_angularDrag",0xcb5ebc74,"haxor.component.physics.RigidBody.set_angularDrag","haxor/component/physics/RigidBody.hx",84,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(85)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	Float tmp1 = ::Math_obj::max((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	this->m_angularDrag = tmp1;
	HX_STACK_LINE(86)
	Float tmp2 = this->m_angularDrag;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RigidBody_obj,set_angularDrag,return )

Float RigidBody_obj::get_mass( ){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","get_mass",0xe553a742,"haxor.component.physics.RigidBody.get_mass","haxor/component/physics/RigidBody.hx",95,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	Float tmp = this->m_mass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(RigidBody_obj,get_mass,return )

Float RigidBody_obj::set_mass( Float v){
	HX_STACK_FRAME("haxor.component.physics.RigidBody","set_mass",0x93b100b6,"haxor.component.physics.RigidBody.set_mass","haxor/component/physics/RigidBody.hx",97,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(98)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	Float tmp1 = ::Math_obj::max((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	this->m_mass = tmp1;
	HX_STACK_LINE(99)
	Float tmp2 = this->m_mass;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	bool tmp3 = (tmp2 <= ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	if ((tmp3)){
		HX_STACK_LINE(99)
		tmp4 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(99)
		Float tmp5 = this->m_mass;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		tmp4 = (Float(((Float)1.0)) / Float(tmp5));
	}
	HX_STACK_LINE(99)
	this->m_imass = tmp4;
	HX_STACK_LINE(100)
	Float tmp5 = this->m_mass;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(100)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(RigidBody_obj,set_mass,return )

Void RigidBody_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.physics.RigidBody","OnBuild",0x94d9364a,"haxor.component.physics.RigidBody.OnBuild","haxor/component/physics/RigidBody.hx",129,0x9a85c9d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		this->m_velocity = tmp;
		HX_STACK_LINE(132)
		::haxor::math::Vector3 tmp1 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		this->m_dragForce = tmp1;
		HX_STACK_LINE(133)
		::haxor::math::Vector3 tmp2 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		this->m_direction = tmp2;
		HX_STACK_LINE(134)
		this->m_speed = ((Float)0.0);
		HX_STACK_LINE(136)
		::haxor::math::Quaternion tmp3 = ::haxor::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		this->m_avq = tmp3;
		HX_STACK_LINE(137)
		::haxor::math::Vector3 tmp4 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		this->m_angularVelocity = tmp4;
		HX_STACK_LINE(138)
		::haxor::math::Vector3 tmp5 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		this->m_dragTorque = tmp5;
		HX_STACK_LINE(139)
		::haxor::math::Vector3 tmp6 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		this->m_angularDirection = tmp6;
		HX_STACK_LINE(140)
		this->m_angularSpeed = ((Float)0.0);
		HX_STACK_LINE(142)
		::haxor::math::Vector3 tmp7 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		this->m_accel = tmp7;
		HX_STACK_LINE(143)
		::haxor::math::Vector3 tmp8 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		this->m_torque = tmp8;
		HX_STACK_LINE(145)
		this->m_hasForce = false;
		HX_STACK_LINE(146)
		this->m_hasTorque = false;
		HX_STACK_LINE(148)
		this->kinematic = false;
		HX_STACK_LINE(150)
		this->set_mass(((Float)1.0));
		HX_STACK_LINE(151)
		this->set_drag(((Float)0.0));
		HX_STACK_LINE(152)
		this->set_angularDrag(((Float)0.0));
		HX_STACK_LINE(155)
		this->gravity = true;
		HX_STACK_LINE(157)
		::haxor::math::Vector3 tmp9 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		this->centerOfMass = tmp9;
		HX_STACK_LINE(159)
		::haxor::context::PhysicsContext tmp10 = ::haxor::context::EngineContext_obj::physics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(159)
		tmp10->CreateRigidBody(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void RigidBody_obj::AddTorque( ::haxor::math::Vector3 p_torque,hx::Null< int >  __o_p_mode){
int p_mode = __o_p_mode.Default(-1);
	HX_STACK_FRAME("haxor.component.physics.RigidBody","AddTorque",0x6d9a8d46,"haxor.component.physics.RigidBody.AddTorque","haxor/component/physics/RigidBody.hx",168,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_torque,"p_torque")
	HX_STACK_ARG(p_mode,"p_mode")
{
		HX_STACK_LINE(169)
		bool tmp = (p_mode < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		if ((tmp)){
			HX_STACK_LINE(169)
			tmp1 = ::haxor::core::ForceMode_obj::Force;
		}
		else{
			HX_STACK_LINE(169)
			tmp1 = p_mode;
		}
		HX_STACK_LINE(169)
		int m = tmp1;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(170)
		Float mdt = ((Float)1.0);		HX_STACK_VAR(mdt,"mdt");
		HX_STACK_LINE(171)
		Float dt = ((Float)1.0);		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(172)
		int tmp2 = p_mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		int tmp3 = ::haxor::core::ForceMode_obj::Velocity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		::haxor::math::Vector3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		if ((tmp4)){
			HX_STACK_LINE(172)
			tmp5 = this->get_angularVelocity();
		}
		else{
			HX_STACK_LINE(172)
			tmp5 = this->m_torque;
		}
		HX_STACK_LINE(172)
		::haxor::math::Vector3 v = tmp5;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(173)
		int tmp6 = m;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		switch( (int)(tmp6)){
			case (int)3: {
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(176)
				Float tmp7 = this->m_imass;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(176)
				mdt = tmp7;
			}
			;break;
			case (int)0: {
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(178)
				Float tmp7 = this->m_imass;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				mdt = tmp7;
			}
			;break;
		}
		HX_STACK_LINE(180)
		Float tmp7 = (p_torque->x * mdt);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		hx::AddEq(v->x,tmp7);
		HX_STACK_LINE(181)
		Float tmp8 = (p_torque->y * mdt);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		hx::AddEq(v->y,tmp8);
		HX_STACK_LINE(182)
		Float tmp9 = (p_torque->z * mdt);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(182)
		hx::AddEq(v->z,tmp9);
		HX_STACK_LINE(183)
		int tmp10 = p_mode;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(183)
		int tmp11 = ::haxor::core::ForceMode_obj::Velocity;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(183)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(183)
		this->m_hasTorque = tmp12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RigidBody_obj,AddTorque,(void))

Void RigidBody_obj::AddForce( ::haxor::math::Vector3 p_force,hx::Null< int >  __o_p_mode){
int p_mode = __o_p_mode.Default(-1);
	HX_STACK_FRAME("haxor.component.physics.RigidBody","AddForce",0x74e63eef,"haxor.component.physics.RigidBody.AddForce","haxor/component/physics/RigidBody.hx",192,0x9a85c9d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_force,"p_force")
	HX_STACK_ARG(p_mode,"p_mode")
{
		HX_STACK_LINE(193)
		bool tmp = (p_mode < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		if ((tmp)){
			HX_STACK_LINE(193)
			tmp1 = ::haxor::core::ForceMode_obj::Force;
		}
		else{
			HX_STACK_LINE(193)
			tmp1 = p_mode;
		}
		HX_STACK_LINE(193)
		int m = tmp1;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(194)
		Float mdt = ((Float)1.0);		HX_STACK_VAR(mdt,"mdt");
		HX_STACK_LINE(195)
		Float tmp2 = ::haxor::core::Time_obj::get_fixedDelta();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		Float dt = tmp2;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(196)
		int tmp3 = p_mode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		int tmp4 = ::haxor::core::ForceMode_obj::Velocity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		::haxor::math::Vector3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		if ((tmp5)){
			HX_STACK_LINE(196)
			tmp6 = this->get_velocity();
		}
		else{
			HX_STACK_LINE(196)
			tmp6 = this->m_accel;
		}
		HX_STACK_LINE(196)
		::haxor::math::Vector3 v = tmp6;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(197)
		int tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		switch( (int)(tmp7)){
			case (int)3: {
				HX_STACK_LINE(199)
				mdt = dt;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(200)
				Float tmp8 = this->m_imass;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(200)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(200)
				Float tmp11 = dt;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(200)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(200)
				mdt = tmp12;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(201)
				Float tmp8 = (dt * dt);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(201)
				mdt = tmp8;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(202)
				Float tmp8 = this->m_imass;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(202)
				Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(202)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(202)
				mdt = tmp10;
			}
			;break;
		}
		HX_STACK_LINE(204)
		Float tmp8 = (p_force->x * mdt);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		hx::AddEq(v->x,tmp8);
		HX_STACK_LINE(205)
		Float tmp9 = (p_force->y * mdt);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(205)
		hx::AddEq(v->y,tmp9);
		HX_STACK_LINE(206)
		Float tmp10 = (p_force->z * mdt);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(206)
		hx::AddEq(v->z,tmp10);
		HX_STACK_LINE(208)
		int tmp11 = p_mode;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(208)
		int tmp12 = ::haxor::core::ForceMode_obj::Velocity;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(208)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(208)
		if ((tmp13)){
			HX_STACK_LINE(208)
			::haxor::math::Vector3 tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(208)
			this->set_velocity(tmp14);
		}
		HX_STACK_LINE(210)
		int tmp14 = p_mode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(210)
		int tmp15 = ::haxor::core::ForceMode_obj::Velocity;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(210)
		bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(210)
		this->m_hasForce = tmp16;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RigidBody_obj,AddForce,(void))

Void RigidBody_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.component.physics.RigidBody","OnDestroy",0x1b168716,"haxor.component.physics.RigidBody.OnDestroy","haxor/component/physics/RigidBody.hx",214,0x9a85c9d8)
		HX_STACK_THIS(this)
	}
return null();
}


Void RigidBody_obj::ComputeForces( ){
{
		HX_STACK_FRAME("haxor.component.physics.RigidBody","ComputeForces",0xb310a5fa,"haxor.component.physics.RigidBody.ComputeForces","haxor/component/physics/RigidBody.hx",220,0x9a85c9d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		bool tmp = this->gravity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		if ((tmp)){
			HX_STACK_LINE(221)
			::haxor::math::Vector3 tmp1 = ::haxor::physics::Physics_obj::gravity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(221)
			int tmp2 = ::haxor::core::ForceMode_obj::Velocity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(221)
			this->AddForce(tmp1,tmp2);
		}
		HX_STACK_LINE(223)
		Float tmp1 = this->get_drag();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		bool tmp2 = (tmp1 > ((Float)0.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		if ((tmp2)){
			HX_STACK_LINE(224)
			Float tmp3 = this->m_speed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			bool tmp4 = (tmp3 > ((Float)0.0));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			if ((tmp4)){
				HX_STACK_LINE(226)
				::haxor::math::Vector3 tmp5 = this->m_velocity;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(226)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(226)
				Float tmp8 = this->get_drag();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				::haxor::math::Vector3 tmp10 = this->m_dragForce;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				tmp10->x = tmp9;
				HX_STACK_LINE(227)
				::haxor::math::Vector3 tmp11 = this->m_velocity;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(227)
				Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(227)
				Float tmp14 = this->get_drag();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(227)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(227)
				::haxor::math::Vector3 tmp16 = this->m_dragForce;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(227)
				tmp16->y = tmp15;
				HX_STACK_LINE(228)
				::haxor::math::Vector3 tmp17 = this->m_velocity;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(228)
				Float tmp18 = tmp17->z;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(228)
				Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(228)
				Float tmp20 = this->get_drag();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(228)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(228)
				::haxor::math::Vector3 tmp22 = this->m_dragForce;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(228)
				tmp22->z = tmp21;
				HX_STACK_LINE(229)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					::haxor::math::Vector3 tmp24 = this->m_dragForce;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(229)
					Float p_a = tmp24->x;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(229)
					bool tmp25 = (p_a < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(229)
					if ((tmp25)){
						HX_STACK_LINE(229)
						Float tmp26 = p_a;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(229)
						tmp23 = -(tmp26);
					}
					else{
						HX_STACK_LINE(229)
						tmp23 = p_a;
					}
				}
				HX_STACK_LINE(229)
				bool tmp24 = (tmp23 >= ((Float)0.0001));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(229)
				if ((tmp24)){
					HX_STACK_LINE(229)
					::haxor::math::Vector3 tmp25 = this->m_dragForce;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(229)
					::haxor::math::Vector3 tmp26 = this->m_accel;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(229)
					hx::AddEq(tmp26->x,tmp25->x);
					HX_STACK_LINE(229)
					this->m_hasForce = true;
				}
				HX_STACK_LINE(230)
				Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					::haxor::math::Vector3 tmp26 = this->m_dragForce;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(230)
					Float p_a = tmp26->y;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(230)
					bool tmp27 = (p_a < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(230)
					if ((tmp27)){
						HX_STACK_LINE(230)
						Float tmp28 = p_a;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(230)
						tmp25 = -(tmp28);
					}
					else{
						HX_STACK_LINE(230)
						tmp25 = p_a;
					}
				}
				HX_STACK_LINE(230)
				bool tmp26 = (tmp25 >= ((Float)0.0001));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(230)
				if ((tmp26)){
					HX_STACK_LINE(230)
					::haxor::math::Vector3 tmp27 = this->m_dragForce;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(230)
					::haxor::math::Vector3 tmp28 = this->m_accel;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(230)
					hx::AddEq(tmp28->y,tmp27->y);
					HX_STACK_LINE(230)
					this->m_hasForce = true;
				}
				HX_STACK_LINE(231)
				Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					::haxor::math::Vector3 tmp28 = this->m_dragForce;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(231)
					Float p_a = tmp28->z;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(231)
					bool tmp29 = (p_a < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(231)
					if ((tmp29)){
						HX_STACK_LINE(231)
						Float tmp30 = p_a;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(231)
						tmp27 = -(tmp30);
					}
					else{
						HX_STACK_LINE(231)
						tmp27 = p_a;
					}
				}
				HX_STACK_LINE(231)
				bool tmp28 = (tmp27 >= ((Float)0.0001));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(231)
				if ((tmp28)){
					HX_STACK_LINE(231)
					::haxor::math::Vector3 tmp29 = this->m_dragForce;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(231)
					::haxor::math::Vector3 tmp30 = this->m_accel;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(231)
					hx::AddEq(tmp30->z,tmp29->z);
					HX_STACK_LINE(231)
					this->m_hasForce = true;
				}
			}
		}
		HX_STACK_LINE(234)
		Float tmp3 = this->get_angularDrag();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		bool tmp4 = (tmp3 > ((Float)0.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		if ((tmp4)){
			HX_STACK_LINE(235)
			Float tmp5 = this->m_angularSpeed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			bool tmp6 = (tmp5 > ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			if ((tmp6)){
				HX_STACK_LINE(237)
				::haxor::math::Vector3 tmp7 = this->m_angularVelocity;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(237)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				Float tmp10 = this->get_angularDrag();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(237)
				::haxor::math::Vector3 tmp12 = this->m_dragTorque;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(237)
				tmp12->x = tmp11;
				HX_STACK_LINE(238)
				::haxor::math::Vector3 tmp13 = this->m_angularVelocity;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(238)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(238)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(238)
				Float tmp16 = this->get_angularDrag();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(238)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(238)
				::haxor::math::Vector3 tmp18 = this->m_dragTorque;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(238)
				tmp18->y = tmp17;
				HX_STACK_LINE(239)
				::haxor::math::Vector3 tmp19 = this->m_angularVelocity;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(239)
				Float tmp20 = tmp19->z;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(239)
				Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(239)
				Float tmp22 = this->get_angularDrag();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(239)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(239)
				::haxor::math::Vector3 tmp24 = this->m_dragTorque;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(239)
				tmp24->z = tmp23;
				HX_STACK_LINE(240)
				Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::haxor::math::Vector3 tmp26 = this->m_dragTorque;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(240)
					Float p_a = tmp26->x;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(240)
					bool tmp27 = (p_a < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(240)
					if ((tmp27)){
						HX_STACK_LINE(240)
						Float tmp28 = p_a;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(240)
						tmp25 = -(tmp28);
					}
					else{
						HX_STACK_LINE(240)
						tmp25 = p_a;
					}
				}
				HX_STACK_LINE(240)
				bool tmp26 = (tmp25 >= ((Float)0.0001));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(240)
				if ((tmp26)){
					HX_STACK_LINE(240)
					::haxor::math::Vector3 tmp27 = this->m_dragTorque;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(240)
					::haxor::math::Vector3 tmp28 = this->m_torque;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(240)
					hx::AddEq(tmp28->x,tmp27->x);
					HX_STACK_LINE(240)
					this->m_hasTorque = true;
				}
				HX_STACK_LINE(241)
				Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::haxor::math::Vector3 tmp28 = this->m_dragTorque;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(241)
					Float p_a = tmp28->y;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(241)
					bool tmp29 = (p_a < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(241)
					if ((tmp29)){
						HX_STACK_LINE(241)
						Float tmp30 = p_a;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(241)
						tmp27 = -(tmp30);
					}
					else{
						HX_STACK_LINE(241)
						tmp27 = p_a;
					}
				}
				HX_STACK_LINE(241)
				bool tmp28 = (tmp27 >= ((Float)0.0001));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(241)
				if ((tmp28)){
					HX_STACK_LINE(241)
					::haxor::math::Vector3 tmp29 = this->m_dragTorque;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(241)
					::haxor::math::Vector3 tmp30 = this->m_torque;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(241)
					hx::AddEq(tmp30->y,tmp29->y);
					HX_STACK_LINE(241)
					this->m_hasTorque = true;
				}
				HX_STACK_LINE(242)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					::haxor::math::Vector3 tmp30 = this->m_dragTorque;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(242)
					Float p_a = tmp30->z;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(242)
					bool tmp31 = (p_a < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(242)
					if ((tmp31)){
						HX_STACK_LINE(242)
						Float tmp32 = p_a;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(242)
						tmp29 = -(tmp32);
					}
					else{
						HX_STACK_LINE(242)
						tmp29 = p_a;
					}
				}
				HX_STACK_LINE(242)
				bool tmp30 = (tmp29 >= ((Float)0.0001));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(242)
				if ((tmp30)){
					HX_STACK_LINE(242)
					::haxor::math::Vector3 tmp31 = this->m_dragTorque;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(242)
					::haxor::math::Vector3 tmp32 = this->m_torque;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(242)
					hx::AddEq(tmp32->z,tmp31->z);
					HX_STACK_LINE(242)
					this->m_hasTorque = true;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RigidBody_obj,ComputeForces,(void))

Void RigidBody_obj::IntegrateVelocity( Float p_dt){
{
		HX_STACK_FRAME("haxor.component.physics.RigidBody","IntegrateVelocity",0x55a99a29,"haxor.component.physics.RigidBody.IntegrateVelocity","haxor/component/physics/RigidBody.hx",247,0x9a85c9d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_dt,"p_dt")
		HX_STACK_LINE(248)
		bool tmp = this->kinematic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		if ((tmp)){
			HX_STACK_LINE(248)
			return null();
		}
		HX_STACK_LINE(250)
		Float dt = p_dt;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(252)
		bool tmp1 = this->m_hasForce;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		if ((tmp1)){
			HX_STACK_LINE(254)
			::haxor::math::Vector3 tmp2 = this->get_velocity();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(254)
			::haxor::math::Vector3 v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(255)
			::haxor::math::Vector3 tmp3 = this->m_accel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(255)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(255)
			Float tmp5 = dt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(255)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(255)
			hx::AddEq(v->x,tmp6);
			HX_STACK_LINE(256)
			::haxor::math::Vector3 tmp7 = this->m_accel;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(256)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(256)
			hx::AddEq(v->y,tmp10);
			HX_STACK_LINE(257)
			::haxor::math::Vector3 tmp11 = this->m_accel;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(257)
			Float tmp12 = tmp11->z;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(257)
			Float tmp13 = dt;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(257)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(257)
			hx::AddEq(v->z,tmp14);
			HX_STACK_LINE(258)
			::haxor::math::Vector3 tmp15 = v;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(258)
			this->set_velocity(tmp15);
		}
		HX_STACK_LINE(261)
		bool tmp2 = this->m_hasForce;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		if ((tmp3)){
			HX_STACK_LINE(262)
			Float tmp4 = this->m_speed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			bool tmp5 = (tmp4 <= ((Float)0.14));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			if ((tmp5)){
			}
		}
		HX_STACK_LINE(267)
		bool tmp4 = this->m_hasTorque;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		if ((tmp4)){
			HX_STACK_LINE(269)
			::haxor::math::Vector3 tmp5 = this->get_angularVelocity();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(269)
			::haxor::math::Vector3 v = tmp5;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(270)
			::haxor::math::Vector3 tmp6 = this->m_torque;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(270)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(270)
			Float tmp8 = dt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(270)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(270)
			hx::AddEq(v->x,tmp9);
			HX_STACK_LINE(271)
			::haxor::math::Vector3 tmp10 = this->m_torque;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(271)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(271)
			Float tmp12 = dt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(271)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(271)
			hx::AddEq(v->y,tmp13);
			HX_STACK_LINE(272)
			::haxor::math::Vector3 tmp14 = this->m_torque;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(272)
			Float tmp15 = tmp14->z;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(272)
			Float tmp16 = dt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(272)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(272)
			hx::AddEq(v->z,tmp17);
			HX_STACK_LINE(273)
			::haxor::math::Vector3 tmp18 = v;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(273)
			this->set_angularVelocity(tmp18);
		}
		HX_STACK_LINE(276)
		bool tmp5 = this->m_hasTorque;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(276)
		if ((tmp6)){
			HX_STACK_LINE(277)
			Float tmp7 = this->m_angularSpeed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(277)
			Float tmp8 = ((Float)0.0024434609527920616);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(277)
			if ((tmp9)){
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RigidBody_obj,IntegrateVelocity,(void))

Void RigidBody_obj::IntegratePosition( Float p_dt){
{
		HX_STACK_FRAME("haxor.component.physics.RigidBody","IntegratePosition",0x01a638b5,"haxor.component.physics.RigidBody.IntegratePosition","haxor/component/physics/RigidBody.hx",285,0x9a85c9d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_dt,"p_dt")
		HX_STACK_LINE(286)
		bool integrate_position = true;		HX_STACK_VAR(integrate_position,"integrate_position");
		HX_STACK_LINE(287)
		Float dt = p_dt;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(289)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			::haxor::math::Vector3 tmp1 = this->m_velocity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			Float p_a = tmp1->x;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(289)
			bool tmp2 = (p_a < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			if ((tmp2)){
				HX_STACK_LINE(289)
				Float tmp3 = p_a;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(289)
				tmp = -(tmp3);
			}
			else{
				HX_STACK_LINE(289)
				tmp = p_a;
			}
		}
		HX_STACK_LINE(289)
		bool tmp1 = (tmp < ((Float)0.0001));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		if ((tmp1)){
			HX_STACK_LINE(290)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				::haxor::math::Vector3 tmp3 = this->m_velocity;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(290)
				Float p_a = tmp3->y;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(290)
				bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(290)
				if ((tmp4)){
					HX_STACK_LINE(290)
					Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(290)
					tmp2 = -(tmp5);
				}
				else{
					HX_STACK_LINE(290)
					tmp2 = p_a;
				}
			}
			HX_STACK_LINE(290)
			bool tmp3 = (tmp2 < ((Float)0.0001));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			if ((tmp3)){
				HX_STACK_LINE(291)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					::haxor::math::Vector3 tmp5 = this->m_velocity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(291)
					Float p_a = tmp5->z;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(291)
					bool tmp6 = (p_a < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(291)
					if ((tmp6)){
						HX_STACK_LINE(291)
						Float tmp7 = p_a;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(291)
						tmp4 = -(tmp7);
					}
					else{
						HX_STACK_LINE(291)
						tmp4 = p_a;
					}
				}
				HX_STACK_LINE(291)
				bool tmp5 = (tmp4 < ((Float)0.0001));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(291)
				if ((tmp5)){
					HX_STACK_LINE(291)
					integrate_position = false;
				}
			}
		}
		HX_STACK_LINE(294)
		bool tmp2 = integrate_position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		if ((tmp2)){
			HX_STACK_LINE(296)
			::haxor::core::Entity tmp3 = this->m_entity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			::haxor::math::Vector3 tmp4 = tmp3->m_transform->get_localPosition();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			::haxor::math::Vector3 p = tmp4;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(297)
			::haxor::math::Vector3 tmp5 = this->m_velocity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			Float tmp7 = dt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			hx::AddEq(p->x,tmp8);
			HX_STACK_LINE(298)
			::haxor::math::Vector3 tmp9 = this->m_velocity;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(298)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(298)
			Float tmp11 = dt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(298)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(298)
			hx::AddEq(p->y,tmp12);
			HX_STACK_LINE(299)
			::haxor::math::Vector3 tmp13 = this->m_velocity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(299)
			Float tmp14 = tmp13->z;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(299)
			Float tmp15 = dt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(299)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(299)
			hx::AddEq(p->z,tmp16);
			HX_STACK_LINE(300)
			::haxor::core::Entity tmp17 = this->m_entity;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(300)
			::haxor::math::Vector3 tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(300)
			tmp17->m_transform->set_localPosition(tmp18);
		}
		HX_STACK_LINE(303)
		bool integrate_rotation = false;		HX_STACK_VAR(integrate_rotation,"integrate_rotation");
		HX_STACK_LINE(305)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			::haxor::math::Vector3 tmp4 = this->m_angularVelocity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			Float p_a = tmp4->x;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(305)
			bool tmp5 = (p_a < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			if ((tmp5)){
				HX_STACK_LINE(305)
				Float tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				tmp3 = -(tmp6);
			}
			else{
				HX_STACK_LINE(305)
				tmp3 = p_a;
			}
		}
		HX_STACK_LINE(305)
		bool tmp4 = (tmp3 < ((Float)0.0001));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(305)
		if ((tmp4)){
			HX_STACK_LINE(306)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				::haxor::math::Vector3 tmp6 = this->m_angularVelocity;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(306)
				Float p_a = tmp6->y;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(306)
				bool tmp7 = (p_a < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(306)
				if ((tmp7)){
					HX_STACK_LINE(306)
					Float tmp8 = p_a;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(306)
					tmp5 = -(tmp8);
				}
				else{
					HX_STACK_LINE(306)
					tmp5 = p_a;
				}
			}
			HX_STACK_LINE(306)
			bool tmp6 = (tmp5 < ((Float)0.0001));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(306)
			if ((tmp6)){
				HX_STACK_LINE(307)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					::haxor::math::Vector3 tmp8 = this->m_angularVelocity;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(307)
					Float p_a = tmp8->z;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(307)
					bool tmp9 = (p_a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(307)
					if ((tmp9)){
						HX_STACK_LINE(307)
						Float tmp10 = p_a;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(307)
						tmp7 = -(tmp10);
					}
					else{
						HX_STACK_LINE(307)
						tmp7 = p_a;
					}
				}
				HX_STACK_LINE(307)
				bool tmp8 = (tmp7 < ((Float)0.0001));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(307)
				if ((tmp8)){
					HX_STACK_LINE(307)
					integrate_rotation = false;
				}
			}
		}
		HX_STACK_LINE(310)
		bool tmp5 = integrate_rotation;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		if ((tmp5)){
			HX_STACK_LINE(312)
			::haxor::core::Entity tmp6 = this->m_entity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(312)
			::haxor::math::Quaternion tmp7 = tmp6->m_transform->get_localRotation();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(312)
			::haxor::math::Quaternion r = tmp7;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(313)
			::haxor::math::Quaternion tmp8 = this->m_avq;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(313)
			::haxor::math::Vector3 tmp9 = this->m_angularVelocity;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(313)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(313)
			::haxor::math::Vector3 tmp11 = this->m_angularVelocity;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(313)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(313)
			::haxor::math::Vector3 tmp13 = this->m_angularVelocity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(313)
			Float tmp14 = tmp13->z;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(313)
			tmp8->Set(tmp10,tmp12,tmp14,((Float)0.0));
			HX_STACK_LINE(314)
			::haxor::math::Quaternion tmp15 = this->m_avq;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(314)
			::haxor::math::Quaternion tmp16 = r;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(314)
			tmp15->Multiply(tmp16,false);
			HX_STACK_LINE(315)
			::haxor::math::Quaternion tmp17 = this->m_avq;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(315)
			tmp17->Scale(((Float)0.25));
			HX_STACK_LINE(316)
			::haxor::math::Quaternion tmp18 = this->m_avq;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(316)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(316)
			Float tmp20 = dt;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(316)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(316)
			hx::AddEq(r->x,tmp21);
			HX_STACK_LINE(317)
			::haxor::math::Quaternion tmp22 = this->m_avq;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(317)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(317)
			Float tmp24 = dt;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(317)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(317)
			hx::AddEq(r->y,tmp25);
			HX_STACK_LINE(318)
			::haxor::math::Quaternion tmp26 = this->m_avq;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(318)
			Float tmp27 = tmp26->z;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(318)
			Float tmp28 = dt;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(318)
			Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(318)
			hx::AddEq(r->z,tmp29);
			HX_STACK_LINE(319)
			::haxor::math::Quaternion tmp30 = this->m_avq;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(319)
			Float tmp31 = tmp30->w;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(319)
			Float tmp32 = dt;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(319)
			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(319)
			hx::AddEq(r->w,tmp33);
			HX_STACK_LINE(320)
			r->Normalize();
			HX_STACK_LINE(321)
			::haxor::core::Entity tmp34 = this->m_entity;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(321)
			::haxor::math::Quaternion tmp35 = r;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(321)
			tmp34->m_transform->set_localRotation(tmp35);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RigidBody_obj,IntegratePosition,(void))

Void RigidBody_obj::ResetForces( ){
{
		HX_STACK_FRAME("haxor.component.physics.RigidBody","ResetForces",0x7a48b592,"haxor.component.physics.RigidBody.ResetForces","haxor/component/physics/RigidBody.hx",329,0x9a85c9d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		::haxor::math::Vector3 tmp = this->m_accel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		tmp->x = (int)0;
		HX_STACK_LINE(331)
		::haxor::math::Vector3 tmp1 = this->m_accel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		tmp1->y = (int)0;
		HX_STACK_LINE(332)
		::haxor::math::Vector3 tmp2 = this->m_accel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		tmp2->z = (int)0;
		HX_STACK_LINE(333)
		this->m_hasForce = false;
		HX_STACK_LINE(334)
		::haxor::math::Vector3 tmp3 = this->m_torque;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		tmp3->x = (int)0;
		HX_STACK_LINE(335)
		::haxor::math::Vector3 tmp4 = this->m_torque;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		tmp4->y = (int)0;
		HX_STACK_LINE(336)
		::haxor::math::Vector3 tmp5 = this->m_torque;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(336)
		tmp5->z = (int)0;
		HX_STACK_LINE(337)
		this->m_hasTorque = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RigidBody_obj,ResetForces,(void))


RigidBody_obj::RigidBody_obj()
{
}

void RigidBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RigidBody);
	HX_MARK_MEMBER_NAME(m_velocity,"m_velocity");
	HX_MARK_MEMBER_NAME(m_direction,"m_direction");
	HX_MARK_MEMBER_NAME(m_dragForce,"m_dragForce");
	HX_MARK_MEMBER_NAME(m_speed,"m_speed");
	HX_MARK_MEMBER_NAME(m_angularVelocity,"m_angularVelocity");
	HX_MARK_MEMBER_NAME(m_angularDirection,"m_angularDirection");
	HX_MARK_MEMBER_NAME(m_dragTorque,"m_dragTorque");
	HX_MARK_MEMBER_NAME(m_angularSpeed,"m_angularSpeed");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(m_drag,"m_drag");
	HX_MARK_MEMBER_NAME(m_idrag,"m_idrag");
	HX_MARK_MEMBER_NAME(m_angularDrag,"m_angularDrag");
	HX_MARK_MEMBER_NAME(m_iangularDrag,"m_iangularDrag");
	HX_MARK_MEMBER_NAME(m_mass,"m_mass");
	HX_MARK_MEMBER_NAME(m_imass,"m_imass");
	HX_MARK_MEMBER_NAME(centerOfMass,"centerOfMass");
	HX_MARK_MEMBER_NAME(kinematic,"kinematic");
	HX_MARK_MEMBER_NAME(m_accel,"m_accel");
	HX_MARK_MEMBER_NAME(m_torque,"m_torque");
	HX_MARK_MEMBER_NAME(m_hasForce,"m_hasForce");
	HX_MARK_MEMBER_NAME(m_hasTorque,"m_hasTorque");
	HX_MARK_MEMBER_NAME(m_avq,"m_avq");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RigidBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_velocity,"m_velocity");
	HX_VISIT_MEMBER_NAME(m_direction,"m_direction");
	HX_VISIT_MEMBER_NAME(m_dragForce,"m_dragForce");
	HX_VISIT_MEMBER_NAME(m_speed,"m_speed");
	HX_VISIT_MEMBER_NAME(m_angularVelocity,"m_angularVelocity");
	HX_VISIT_MEMBER_NAME(m_angularDirection,"m_angularDirection");
	HX_VISIT_MEMBER_NAME(m_dragTorque,"m_dragTorque");
	HX_VISIT_MEMBER_NAME(m_angularSpeed,"m_angularSpeed");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(m_drag,"m_drag");
	HX_VISIT_MEMBER_NAME(m_idrag,"m_idrag");
	HX_VISIT_MEMBER_NAME(m_angularDrag,"m_angularDrag");
	HX_VISIT_MEMBER_NAME(m_iangularDrag,"m_iangularDrag");
	HX_VISIT_MEMBER_NAME(m_mass,"m_mass");
	HX_VISIT_MEMBER_NAME(m_imass,"m_imass");
	HX_VISIT_MEMBER_NAME(centerOfMass,"centerOfMass");
	HX_VISIT_MEMBER_NAME(kinematic,"kinematic");
	HX_VISIT_MEMBER_NAME(m_accel,"m_accel");
	HX_VISIT_MEMBER_NAME(m_torque,"m_torque");
	HX_VISIT_MEMBER_NAME(m_hasForce,"m_hasForce");
	HX_VISIT_MEMBER_NAME(m_hasTorque,"m_hasTorque");
	HX_VISIT_MEMBER_NAME(m_avq,"m_avq");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RigidBody_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { if (inCallProp == hx::paccAlways) return get_drag(); }
		if (HX_FIELD_EQ(inName,"mass") ) { if (inCallProp == hx::paccAlways) return get_mass(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_avq") ) { return m_avq; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_drag") ) { return m_drag; }
		if (HX_FIELD_EQ(inName,"m_mass") ) { return m_mass; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_speed") ) { return m_speed; }
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"m_idrag") ) { return m_idrag; }
		if (HX_FIELD_EQ(inName,"m_imass") ) { return m_imass; }
		if (HX_FIELD_EQ(inName,"m_accel") ) { return m_accel; }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { if (inCallProp == hx::paccAlways) return get_velocity(); }
		if (HX_FIELD_EQ(inName,"get_drag") ) { return get_drag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_drag") ) { return set_drag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mass") ) { return get_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mass") ) { return set_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"m_torque") ) { return m_torque; }
		if (HX_FIELD_EQ(inName,"AddForce") ) { return AddForce_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { return kinematic; }
		if (HX_FIELD_EQ(inName,"AddTorque") ) { return AddTorque_dyn(); }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_velocity") ) { return m_velocity; }
		if (HX_FIELD_EQ(inName,"m_hasForce") ) { return m_hasForce; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_direction") ) { return m_direction; }
		if (HX_FIELD_EQ(inName,"m_dragForce") ) { return m_dragForce; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { if (inCallProp == hx::paccAlways) return get_angularDrag(); }
		if (HX_FIELD_EQ(inName,"m_hasTorque") ) { return m_hasTorque; }
		if (HX_FIELD_EQ(inName,"ResetForces") ) { return ResetForces_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_velocity") ) { return get_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_velocity") ) { return set_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"m_dragTorque") ) { return m_dragTorque; }
		if (HX_FIELD_EQ(inName,"centerOfMass") ) { return centerOfMass; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_angularDrag") ) { return m_angularDrag; }
		if (HX_FIELD_EQ(inName,"ComputeForces") ) { return ComputeForces_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_angularSpeed") ) { return m_angularSpeed; }
		if (HX_FIELD_EQ(inName,"m_iangularDrag") ) { return m_iangularDrag; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { if (inCallProp == hx::paccAlways) return get_angularVelocity(); }
		if (HX_FIELD_EQ(inName,"get_angularDrag") ) { return get_angularDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angularDrag") ) { return set_angularDrag_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_angularVelocity") ) { return m_angularVelocity; }
		if (HX_FIELD_EQ(inName,"IntegrateVelocity") ) { return IntegrateVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"IntegratePosition") ) { return IntegratePosition_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_angularDirection") ) { return m_angularDirection; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_angularVelocity") ) { return get_angularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angularVelocity") ) { return set_angularVelocity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RigidBody_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { if (inCallProp == hx::paccAlways) return set_drag(inValue); }
		if (HX_FIELD_EQ(inName,"mass") ) { if (inCallProp == hx::paccAlways) return set_mass(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_avq") ) { m_avq=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_drag") ) { m_drag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_mass") ) { m_mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_speed") ) { m_speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_idrag") ) { m_idrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_imass") ) { m_imass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_accel") ) { m_accel=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { if (inCallProp == hx::paccAlways) return set_velocity(inValue); }
		if (HX_FIELD_EQ(inName,"m_torque") ) { m_torque=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { kinematic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_velocity") ) { m_velocity=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_hasForce") ) { m_hasForce=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_direction") ) { m_direction=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_dragForce") ) { m_dragForce=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { if (inCallProp == hx::paccAlways) return set_angularDrag(inValue); }
		if (HX_FIELD_EQ(inName,"m_hasTorque") ) { m_hasTorque=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_dragTorque") ) { m_dragTorque=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerOfMass") ) { centerOfMass=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_angularDrag") ) { m_angularDrag=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_angularSpeed") ) { m_angularSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_iangularDrag") ) { m_iangularDrag=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { if (inCallProp == hx::paccAlways) return set_angularVelocity(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_angularVelocity") ) { m_angularVelocity=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_angularDirection") ) { m_angularDirection=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RigidBody_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RigidBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("m_velocity","\x6f","\x03","\x49","\x46"));
	outFields->push(HX_HCSTRING("m_direction","\xad","\x88","\x96","\x4a"));
	outFields->push(HX_HCSTRING("m_dragForce","\xc5","\x47","\x40","\xa1"));
	outFields->push(HX_HCSTRING("m_speed","\xf5","\x6e","\xf4","\x31"));
	outFields->push(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"));
	outFields->push(HX_HCSTRING("m_angularVelocity","\x0d","\xcc","\xad","\x05"));
	outFields->push(HX_HCSTRING("m_angularDirection","\x4f","\x4a","\x61","\x03"));
	outFields->push(HX_HCSTRING("m_dragTorque","\xb0","\x3f","\x08","\x10"));
	outFields->push(HX_HCSTRING("m_angularSpeed","\x97","\x37","\xd1","\x61"));
	outFields->push(HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"));
	outFields->push(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"));
	outFields->push(HX_HCSTRING("m_drag","\x46","\x9c","\x67","\x8a"));
	outFields->push(HX_HCSTRING("m_idrag","\x4b","\xec","\x0d","\x68"));
	outFields->push(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"));
	outFields->push(HX_HCSTRING("m_angularDrag","\xe4","\x3d","\x18","\xb5"));
	outFields->push(HX_HCSTRING("m_iangularDrag","\x7f","\x28","\xd8","\x59"));
	outFields->push(HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("m_mass","\x46","\xb1","\x4d","\x90"));
	outFields->push(HX_HCSTRING("m_imass","\x4b","\x01","\xf4","\x6d"));
	outFields->push(HX_HCSTRING("centerOfMass","\x60","\xcd","\xe0","\x13"));
	outFields->push(HX_HCSTRING("kinematic","\x05","\x79","\xff","\xe3"));
	outFields->push(HX_HCSTRING("m_accel","\x56","\xb3","\x24","\xcc"));
	outFields->push(HX_HCSTRING("m_torque","\x9c","\x5f","\x82","\x5f"));
	outFields->push(HX_HCSTRING("m_hasForce","\x83","\xfd","\x37","\xb8"));
	outFields->push(HX_HCSTRING("m_hasTorque","\x32","\x90","\xcf","\x11"));
	outFields->push(HX_HCSTRING("m_avq","\xca","\x81","\xc2","\x01"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,m_velocity),HX_HCSTRING("m_velocity","\x6f","\x03","\x49","\x46")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,m_direction),HX_HCSTRING("m_direction","\xad","\x88","\x96","\x4a")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,m_dragForce),HX_HCSTRING("m_dragForce","\xc5","\x47","\x40","\xa1")},
	{hx::fsFloat,(int)offsetof(RigidBody_obj,m_speed),HX_HCSTRING("m_speed","\xf5","\x6e","\xf4","\x31")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,m_angularVelocity),HX_HCSTRING("m_angularVelocity","\x0d","\xcc","\xad","\x05")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,m_angularDirection),HX_HCSTRING("m_angularDirection","\x4f","\x4a","\x61","\x03")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,m_dragTorque),HX_HCSTRING("m_dragTorque","\xb0","\x3f","\x08","\x10")},
	{hx::fsFloat,(int)offsetof(RigidBody_obj,m_angularSpeed),HX_HCSTRING("m_angularSpeed","\x97","\x37","\xd1","\x61")},
	{hx::fsBool,(int)offsetof(RigidBody_obj,gravity),HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77")},
	{hx::fsFloat,(int)offsetof(RigidBody_obj,m_drag),HX_HCSTRING("m_drag","\x46","\x9c","\x67","\x8a")},
	{hx::fsFloat,(int)offsetof(RigidBody_obj,m_idrag),HX_HCSTRING("m_idrag","\x4b","\xec","\x0d","\x68")},
	{hx::fsFloat,(int)offsetof(RigidBody_obj,m_angularDrag),HX_HCSTRING("m_angularDrag","\xe4","\x3d","\x18","\xb5")},
	{hx::fsFloat,(int)offsetof(RigidBody_obj,m_iangularDrag),HX_HCSTRING("m_iangularDrag","\x7f","\x28","\xd8","\x59")},
	{hx::fsFloat,(int)offsetof(RigidBody_obj,m_mass),HX_HCSTRING("m_mass","\x46","\xb1","\x4d","\x90")},
	{hx::fsFloat,(int)offsetof(RigidBody_obj,m_imass),HX_HCSTRING("m_imass","\x4b","\x01","\xf4","\x6d")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,centerOfMass),HX_HCSTRING("centerOfMass","\x60","\xcd","\xe0","\x13")},
	{hx::fsBool,(int)offsetof(RigidBody_obj,kinematic),HX_HCSTRING("kinematic","\x05","\x79","\xff","\xe3")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,m_accel),HX_HCSTRING("m_accel","\x56","\xb3","\x24","\xcc")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(RigidBody_obj,m_torque),HX_HCSTRING("m_torque","\x9c","\x5f","\x82","\x5f")},
	{hx::fsBool,(int)offsetof(RigidBody_obj,m_hasForce),HX_HCSTRING("m_hasForce","\x83","\xfd","\x37","\xb8")},
	{hx::fsBool,(int)offsetof(RigidBody_obj,m_hasTorque),HX_HCSTRING("m_hasTorque","\x32","\x90","\xcf","\x11")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(RigidBody_obj,m_avq),HX_HCSTRING("m_avq","\xca","\x81","\xc2","\x01")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_velocity","\x26","\xb6","\x17","\xd4"),
	HX_HCSTRING("set_velocity","\x9a","\xd9","\x10","\xe9"),
	HX_HCSTRING("m_velocity","\x6f","\x03","\x49","\x46"),
	HX_HCSTRING("m_direction","\xad","\x88","\x96","\x4a"),
	HX_HCSTRING("m_dragForce","\xc5","\x47","\x40","\xa1"),
	HX_HCSTRING("m_speed","\xf5","\x6e","\xf4","\x31"),
	HX_HCSTRING("get_angularVelocity","\x36","\xee","\x08","\xe4"),
	HX_HCSTRING("set_angularVelocity","\x42","\xe1","\xa5","\x20"),
	HX_HCSTRING("m_angularVelocity","\x0d","\xcc","\xad","\x05"),
	HX_HCSTRING("m_angularDirection","\x4f","\x4a","\x61","\x03"),
	HX_HCSTRING("m_dragTorque","\xb0","\x3f","\x08","\x10"),
	HX_HCSTRING("m_angularSpeed","\x97","\x37","\xd1","\x61"),
	HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"),
	HX_HCSTRING("get_drag","\x7d","\xe7","\x2a","\xc2"),
	HX_HCSTRING("set_drag","\xf1","\x40","\x88","\x70"),
	HX_HCSTRING("m_drag","\x46","\x9c","\x67","\x8a"),
	HX_HCSTRING("m_idrag","\x4b","\xec","\x0d","\x68"),
	HX_HCSTRING("get_angularDrag","\x8d","\xd7","\xfa","\x5c"),
	HX_HCSTRING("set_angularDrag","\x99","\x54","\xc6","\x58"),
	HX_HCSTRING("m_angularDrag","\xe4","\x3d","\x18","\xb5"),
	HX_HCSTRING("m_iangularDrag","\x7f","\x28","\xd8","\x59"),
	HX_HCSTRING("get_mass","\x7d","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mass","\xf1","\x55","\x6e","\x76"),
	HX_HCSTRING("m_mass","\x46","\xb1","\x4d","\x90"),
	HX_HCSTRING("m_imass","\x4b","\x01","\xf4","\x6d"),
	HX_HCSTRING("centerOfMass","\x60","\xcd","\xe0","\x13"),
	HX_HCSTRING("kinematic","\x05","\x79","\xff","\xe3"),
	HX_HCSTRING("m_accel","\x56","\xb3","\x24","\xcc"),
	HX_HCSTRING("m_torque","\x9c","\x5f","\x82","\x5f"),
	HX_HCSTRING("m_hasForce","\x83","\xfd","\x37","\xb8"),
	HX_HCSTRING("m_hasTorque","\x32","\x90","\xcf","\x11"),
	HX_HCSTRING("m_avq","\xca","\x81","\xc2","\x01"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("AddTorque","\xab","\xcb","\x87","\xf0"),
	HX_HCSTRING("AddForce","\x2a","\x94","\xa3","\x57"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	HX_HCSTRING("ComputeForces","\xdf","\x7a","\xed","\xaf"),
	HX_HCSTRING("IntegrateVelocity","\x8e","\x45","\x43","\xbe"),
	HX_HCSTRING("IntegratePosition","\x1a","\xe4","\x3f","\x6a"),
	HX_HCSTRING("ResetForces","\x37","\x17","\xce","\x81"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RigidBody_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RigidBody_obj::__mClass,"__mClass");
};

#endif

hx::Class RigidBody_obj::__mClass;

void RigidBody_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.physics.RigidBody","\x49","\x22","\x86","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RigidBody_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RigidBody_obj >;
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
