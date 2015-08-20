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
#ifndef INCLUDED_haxor_component_physics_RigidBody
#include <haxor/component/physics/RigidBody.h>
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
#ifndef INCLUDED_haxor_context_PhysicsContext
#include <haxor/context/PhysicsContext.h>
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
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_ds_IUSetItem
#include <haxor/ds/IUSetItem.h>
#endif
#ifndef INCLUDED_haxor_ds_USet
#include <haxor/ds/USet.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_physics_Collision
#include <haxor/physics/Collision.h>
#endif
#ifndef INCLUDED_haxor_physics_CollisionSolver
#include <haxor/physics/CollisionSolver.h>
#endif
#ifndef INCLUDED_haxor_physics_PhysicsMaterial
#include <haxor/physics/PhysicsMaterial.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_BroadPhase
#include <haxor/physics/broadphase/BroadPhase.h>
#endif
namespace haxor{
namespace physics{

Void CollisionSolver_obj::__construct()
{
HX_STACK_FRAME("haxor.physics.CollisionSolver","new",0xd66d4424,"haxor.physics.CollisionSolver.new","haxor/physics/CollisionSolver.hx",42,0x478b5d4e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	this->iterations = (int)3;
}
;
	return null();
}

//CollisionSolver_obj::~CollisionSolver_obj() { }

Dynamic CollisionSolver_obj::__CreateEmpty() { return  new CollisionSolver_obj; }
hx::ObjectPtr< CollisionSolver_obj > CollisionSolver_obj::__new()
{  hx::ObjectPtr< CollisionSolver_obj > _result_ = new CollisionSolver_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollisionSolver_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionSolver_obj > _result_ = new CollisionSolver_obj();
	_result_->__construct();
	return _result_;}

Void CollisionSolver_obj::Step( ){
{
		HX_STACK_FRAME("haxor.physics.CollisionSolver","Step",0xb760eb28,"haxor.physics.CollisionSolver.Step","haxor/physics/CollisionSolver.hx",50,0x478b5d4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::haxor::physics::broadphase::BroadPhase tmp = this->broadphase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::haxor::ds::USet l = tmp->pairs;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(52)
		::haxor::physics::Collision c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			int tmp1 = this->iterations;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			while((true)){
				HX_STACK_LINE(54)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(54)
				if ((tmp3)){
					HX_STACK_LINE(54)
					break;
				}
				HX_STACK_LINE(54)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(55)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(55)
				int tmp5 = l->get_length();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(55)
				while((true)){
					HX_STACK_LINE(55)
					bool tmp6 = (_g3 < _g2);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(55)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					if ((tmp7)){
						HX_STACK_LINE(55)
						break;
					}
					HX_STACK_LINE(55)
					int tmp8 = (_g3)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(55)
					int j = tmp8;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(57)
					int tmp9 = j;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					::haxor::physics::Collision tmp10 = l->Get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(57)
					c = tmp10;
					HX_STACK_LINE(58)
					::haxor::physics::Collision tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(58)
					this->Solve(tmp11);
					HX_STACK_LINE(59)
					::haxor::physics::Collision tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(59)
					this->Apply(tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionSolver_obj,Step,(void))

Void CollisionSolver_obj::Solve( ::haxor::physics::Collision c){
{
		HX_STACK_FRAME("haxor.physics.CollisionSolver","Solve",0xba241c23,"haxor.physics.CollisionSolver.Solve","haxor/physics/CollisionSolver.hx",69,0x478b5d4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(70)
		::haxor::component::physics::Collider ca = c->from;		HX_STACK_VAR(ca,"ca");
		HX_STACK_LINE(71)
		::haxor::component::physics::Collider cb = c->to;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(72)
		::haxor::core::ColliderType tmp = ca->get_type();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		::haxor::core::ColliderType ta = tmp;		HX_STACK_VAR(ta,"ta");
		HX_STACK_LINE(73)
		::haxor::core::ColliderType tmp1 = cb->get_type();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		::haxor::core::ColliderType tb = tmp1;		HX_STACK_VAR(tb,"tb");
		HX_STACK_LINE(74)
		bool tmp2 = (ta == ::haxor::core::ColliderType_obj::Box);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(74)
			bool tmp3 = (tb == ::haxor::core::ColliderType_obj::Box);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			if ((tmp3)){
				HX_STACK_LINE(74)
				::haxor::component::physics::BoxCollider tmp4 = ((::haxor::component::physics::BoxCollider)(ca));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				::haxor::component::physics::BoxCollider tmp5 = ((::haxor::component::physics::BoxCollider)(cb));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				::haxor::physics::Collision tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				this->SolveBoxBox(tmp4,tmp5,tmp6);
				HX_STACK_LINE(74)
				return null();
			}
		}
		HX_STACK_LINE(75)
		bool tmp3 = (ta == ::haxor::core::ColliderType_obj::Sphere);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		if ((tmp3)){
			HX_STACK_LINE(75)
			bool tmp4 = (tb == ::haxor::core::ColliderType_obj::Box);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			if ((tmp4)){
				HX_STACK_LINE(75)
				::haxor::component::physics::SphereCollider tmp5 = ((::haxor::component::physics::SphereCollider)(ca));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(75)
				::haxor::component::physics::BoxCollider tmp6 = ((::haxor::component::physics::BoxCollider)(cb));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(75)
				::haxor::physics::Collision tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				this->SolveSphereBox(tmp5,tmp6,tmp7);
				HX_STACK_LINE(75)
				return null();
			}
		}
		HX_STACK_LINE(76)
		bool tmp4 = (ta == ::haxor::core::ColliderType_obj::Box);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		if ((tmp4)){
			HX_STACK_LINE(76)
			bool tmp5 = (tb == ::haxor::core::ColliderType_obj::Sphere);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			if ((tmp5)){
				HX_STACK_LINE(76)
				::haxor::component::physics::SphereCollider tmp6 = ((::haxor::component::physics::SphereCollider)(cb));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				::haxor::component::physics::BoxCollider tmp7 = ((::haxor::component::physics::BoxCollider)(ca));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				::haxor::physics::Collision tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				this->SolveSphereBox(tmp6,tmp7,tmp8);
				HX_STACK_LINE(76)
				return null();
			}
		}
		HX_STACK_LINE(77)
		bool tmp5 = (ta == ::haxor::core::ColliderType_obj::Sphere);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		if ((tmp5)){
			HX_STACK_LINE(77)
			bool tmp6 = (tb == ::haxor::core::ColliderType_obj::Sphere);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			if ((tmp6)){
				HX_STACK_LINE(77)
				::haxor::component::physics::SphereCollider tmp7 = ((::haxor::component::physics::SphereCollider)(ca));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				::haxor::component::physics::SphereCollider tmp8 = ((::haxor::component::physics::SphereCollider)(cb));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(77)
				::haxor::physics::Collision tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(77)
				this->SolveSphereSphere(tmp7,tmp8,tmp9);
				HX_STACK_LINE(77)
				return null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionSolver_obj,Solve,(void))

Void CollisionSolver_obj::Apply( ::haxor::physics::Collision c){
{
		HX_STACK_FRAME("haxor.physics.CollisionSolver","Apply",0x5d99e212,"haxor.physics.CollisionSolver.Apply","haxor/physics/CollisionSolver.hx",85,0x478b5d4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(86)
		::haxor::component::physics::Collider ca = c->from;		HX_STACK_VAR(ca,"ca");
		HX_STACK_LINE(87)
		::haxor::component::physics::Collider cb = c->to;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(89)
		::haxor::context::PhysicsContext tmp = ::haxor::context::EngineContext_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		Array< ::Dynamic > tmp1 = tmp->crb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		int tmp2 = ca->__cid;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		::haxor::component::physics::RigidBody tmp3 = tmp1->__get(tmp2).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		::haxor::component::physics::RigidBody ra = tmp3;		HX_STACK_VAR(ra,"ra");
		HX_STACK_LINE(90)
		::haxor::context::PhysicsContext tmp4 = ::haxor::context::EngineContext_obj::physics;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		Array< ::Dynamic > tmp5 = tmp4->crb;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		int tmp6 = cb->__cid;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(90)
		::haxor::component::physics::RigidBody tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(90)
		::haxor::component::physics::RigidBody rb = tmp7;		HX_STACK_VAR(rb,"rb");
		HX_STACK_LINE(92)
		bool tmp8 = (ra == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(92)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(92)
		if ((tmp8)){
			HX_STACK_LINE(92)
			tmp9 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(92)
			tmp9 = ra->get_mass();
		}
		HX_STACK_LINE(92)
		Float ma = tmp9;		HX_STACK_VAR(ma,"ma");
		HX_STACK_LINE(93)
		bool tmp10 = (rb == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		if ((tmp10)){
			HX_STACK_LINE(93)
			tmp11 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(93)
			tmp11 = rb->get_mass();
		}
		HX_STACK_LINE(93)
		Float mb = tmp11;		HX_STACK_VAR(mb,"mb");
		HX_STACK_LINE(94)
		Float tmp12 = (ma + mb);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(94)
		bool tmp13 = (tmp12 <= ((Float)0.0));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(94)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(94)
		if ((tmp13)){
			HX_STACK_LINE(94)
			tmp14 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(94)
			Float tmp15 = (ma + mb);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(94)
			tmp14 = (Float(((Float)1.0)) / Float(tmp15));
		}
		HX_STACK_LINE(94)
		Float sum = tmp14;		HX_STACK_VAR(sum,"sum");
		HX_STACK_LINE(95)
		bool tmp15 = (ra == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(95)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(95)
		if ((tmp15)){
			HX_STACK_LINE(95)
			tmp16 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(95)
			tmp16 = (ma * sum);
		}
		HX_STACK_LINE(95)
		Float ar = tmp16;		HX_STACK_VAR(ar,"ar");
		HX_STACK_LINE(96)
		bool tmp17 = (rb == null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(96)
		Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(96)
		if ((tmp17)){
			HX_STACK_LINE(96)
			tmp18 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(96)
			tmp18 = (mb * sum);
		}
		HX_STACK_LINE(96)
		Float br = tmp18;		HX_STACK_VAR(br,"br");
		HX_STACK_LINE(98)
		bool tmp19 = (ra != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(98)
		if ((tmp19)){
			HX_STACK_LINE(98)
			::haxor::component::physics::RigidBody tmp20 = ra;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(98)
			::haxor::physics::Collision tmp21 = c;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(98)
			Float tmp22 = ar;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(98)
			this->Resolve(tmp20,tmp21,tmp22);
		}
		HX_STACK_LINE(98)
		c->Invert();
		HX_STACK_LINE(99)
		bool tmp20 = (rb != null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(99)
		if ((tmp20)){
			HX_STACK_LINE(99)
			::haxor::component::physics::RigidBody tmp21 = rb;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(99)
			::haxor::physics::Collision tmp22 = c;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(99)
			Float tmp23 = br;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(99)
			this->Resolve(tmp21,tmp22,tmp23);
		}
		HX_STACK_LINE(99)
		c->Invert();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionSolver_obj,Apply,(void))

Void CollisionSolver_obj::Resolve( ::haxor::component::physics::RigidBody rb,::haxor::physics::Collision c,Float ratio){
{
		HX_STACK_FRAME("haxor.physics.CollisionSolver","Resolve",0x7a89e090,"haxor.physics.CollisionSolver.Resolve","haxor/physics/CollisionSolver.hx",109,0x478b5d4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rb,"rb")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(ratio,"ratio")
		HX_STACK_LINE(110)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::haxor::math::Vector3 p_a = c->normal;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(110)
			::haxor::math::Vector3 tmp1 = rb->get_velocity();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			::haxor::math::Vector3 p_b = tmp1;		HX_STACK_VAR(p_b,"p_b");
			HX_STACK_LINE(110)
			Float tmp2 = (p_a->x * p_b->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			Float tmp3 = (p_a->y * p_b->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			Float tmp5 = (p_a->z * p_b->z);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			tmp = (tmp4 + tmp5);
		}
		HX_STACK_LINE(110)
		Float rv = tmp;		HX_STACK_VAR(rv,"rv");
		HX_STACK_LINE(111)
		c->speed = rv;
		HX_STACK_LINE(113)
		::haxor::component::physics::Collider ca = c->from;		HX_STACK_VAR(ca,"ca");
		HX_STACK_LINE(114)
		::haxor::component::physics::Collider cb = c->to;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(116)
		bool tmp1 = ca->trigger;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		if ((tmp2)){
			HX_STACK_LINE(116)
			tmp3 = cb->trigger;
		}
		else{
			HX_STACK_LINE(116)
			tmp3 = true;
		}
		HX_STACK_LINE(116)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		bool need_impulse = tmp4;		HX_STACK_VAR(need_impulse,"need_impulse");
		HX_STACK_LINE(118)
		bool tmp5 = rb->kinematic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		if ((tmp6)){
			HX_STACK_LINE(119)
			bool tmp7 = need_impulse;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			if ((tmp7)){
				HX_STACK_LINE(120)
				bool tmp8 = (c->depth < ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				if ((tmp8)){
					HX_STACK_LINE(124)
					::haxor::physics::PhysicsMaterial m0 = ca->material;		HX_STACK_VAR(m0,"m0");
					HX_STACK_LINE(124)
					bool tmp9 = (m0 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(124)
					::haxor::physics::PhysicsMaterial tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(124)
					if ((tmp9)){
						HX_STACK_LINE(124)
						tmp10 = ::haxor::physics::PhysicsMaterial_obj::get_empty();
					}
					else{
						HX_STACK_LINE(124)
						tmp10 = m0;
					}
					HX_STACK_LINE(124)
					m0 = tmp10;
					HX_STACK_LINE(125)
					::haxor::physics::PhysicsMaterial m1 = cb->material;		HX_STACK_VAR(m1,"m1");
					HX_STACK_LINE(125)
					bool tmp11 = (m1 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(125)
					::haxor::physics::PhysicsMaterial tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(125)
					if ((tmp11)){
						HX_STACK_LINE(125)
						tmp12 = ::haxor::physics::PhysicsMaterial_obj::get_empty();
					}
					else{
						HX_STACK_LINE(125)
						tmp12 = m1;
					}
					HX_STACK_LINE(125)
					m1 = tmp12;
					HX_STACK_LINE(126)
					Float tmp13 = (m0->bounce + m1->bounce);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(126)
					Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(126)
					Float bf = tmp14;		HX_STACK_VAR(bf,"bf");
					HX_STACK_LINE(127)
					Float restitution = bf;		HX_STACK_VAR(restitution,"restitution");
					HX_STACK_LINE(129)
					bool tmp15 = (rv < ((Float)0.0));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(129)
					if ((tmp15)){
						HX_STACK_LINE(131)
						Float tmp16 = (((Float)1.0) + restitution);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(131)
						Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(131)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(131)
						{
							HX_STACK_LINE(131)
							::haxor::math::Vector3 tmp19 = rb->get_velocity();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(131)
							::haxor::math::Vector3 p_a = tmp19;		HX_STACK_VAR(p_a,"p_a");
							HX_STACK_LINE(131)
							::haxor::math::Vector3 p_b = c->normal;		HX_STACK_VAR(p_b,"p_b");
							HX_STACK_LINE(131)
							Float tmp20 = (p_a->x * p_b->x);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(131)
							Float tmp21 = (p_a->y * p_b->y);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(131)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(131)
							Float tmp23 = (p_a->z * p_b->z);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(131)
							tmp18 = (tmp22 + tmp23);
						}
						HX_STACK_LINE(131)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(131)
						Float impulse_v = tmp19;		HX_STACK_VAR(impulse_v,"impulse_v");
						HX_STACK_LINE(133)
						::haxor::math::Vector3 tmp20 = rb->get_velocity();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(133)
						::haxor::math::Vector3 v = tmp20;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(134)
						Float tmp21 = c->normal->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(134)
						Float tmp22 = impulse_v;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(134)
						Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(134)
						hx::AddEq(v->x,tmp23);
						HX_STACK_LINE(135)
						Float tmp24 = c->normal->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(135)
						Float tmp25 = impulse_v;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(135)
						Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(135)
						hx::AddEq(v->y,tmp26);
						HX_STACK_LINE(136)
						Float tmp27 = c->normal->z;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(136)
						Float tmp28 = impulse_v;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(136)
						Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(136)
						hx::AddEq(v->z,tmp29);
						HX_STACK_LINE(137)
						::haxor::math::Vector3 tmp30 = v;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(137)
						rb->set_velocity(tmp30);
						HX_STACK_LINE(140)
						Float tmp31 = c->depth;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(140)
						Float tmp32 = ((Float)-0.9);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(140)
						Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(140)
						Float tmp34 = ::haxor::core::Time_obj::get_fixedDelta();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(140)
						Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(140)
						Float correction = tmp35;		HX_STACK_VAR(correction,"correction");
						HX_STACK_LINE(141)
						::haxor::component::Transform tmp36 = rb->m_entity->m_transform;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(141)
						::haxor::math::Vector3 tmp37 = tmp36->get_localPosition();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(141)
						::haxor::math::Vector3 cm = tmp37;		HX_STACK_VAR(cm,"cm");
						HX_STACK_LINE(142)
						Float tmp38 = c->normal->x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(142)
						Float tmp39 = correction;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(142)
						Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(142)
						hx::AddEq(cm->x,tmp40);
						HX_STACK_LINE(143)
						Float tmp41 = c->normal->y;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(143)
						Float tmp42 = correction;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(143)
						Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(143)
						hx::AddEq(cm->y,tmp43);
						HX_STACK_LINE(144)
						Float tmp44 = c->normal->z;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(144)
						Float tmp45 = correction;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(144)
						Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(144)
						hx::AddEq(cm->z,tmp46);
						HX_STACK_LINE(145)
						::haxor::component::Transform tmp47 = rb->m_entity->m_transform;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(145)
						::haxor::math::Vector3 tmp48 = cm;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(145)
						tmp47->set_localPosition(tmp48);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CollisionSolver_obj,Resolve,(void))

Void CollisionSolver_obj::SolveBoxBox( ::haxor::component::physics::BoxCollider ca,::haxor::component::physics::BoxCollider cb,::haxor::physics::Collision c){
{
		HX_STACK_FRAME("haxor.physics.CollisionSolver","SolveBoxBox",0x921c9d43,"haxor.physics.CollisionSolver.SolveBoxBox","haxor/physics/CollisionSolver.hx",157,0x478b5d4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ca,"ca")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(c,"c")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CollisionSolver_obj,SolveBoxBox,(void))

Void CollisionSolver_obj::SolveSphereSphere( ::haxor::component::physics::SphereCollider ca,::haxor::component::physics::SphereCollider cb,::haxor::physics::Collision c){
{
		HX_STACK_FRAME("haxor.physics.CollisionSolver","SolveSphereSphere",0xd307aabd,"haxor.physics.CollisionSolver.SolveSphereSphere","haxor/physics/CollisionSolver.hx",166,0x478b5d4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ca,"ca")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(167)
		::haxor::component::Transform tmp = ca->m_entity->m_transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		::haxor::math::Matrix4 tmp1 = tmp->get_WorldMatrix();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		::haxor::math::Matrix4 wma = tmp1;		HX_STACK_VAR(wma,"wma");
		HX_STACK_LINE(168)
		::haxor::component::Transform tmp2 = cb->m_entity->m_transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		::haxor::math::Matrix4 tmp3 = tmp2->get_WorldMatrix();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		::haxor::math::Matrix4 wmb = tmp3;		HX_STACK_VAR(wmb,"wmb");
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(169)
			Array< ::Dynamic > tmp6 = _this->m_v3;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			int tmp7 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			int tmp8 = _this->m_v3->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(169)
			int tmp10 = _this->m_nv3 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp5 = ca->m_center;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp6 = tmp4->Set3(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		::haxor::math::Vector3 c0 = tmp6;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			Float tmp7 = (wma->m00 * c0->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			Float tmp8 = (wma->m01 * c0->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(169)
			Float tmp10 = (wma->m02 * c0->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(169)
			Float tmp12 = wma->m03;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(169)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(169)
			Float vx = tmp13;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(169)
			Float tmp14 = (wma->m10 * c0->x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(169)
			Float tmp15 = (wma->m11 * c0->y);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(169)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(169)
			Float tmp17 = (wma->m12 * c0->z);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(169)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(169)
			Float tmp19 = wma->m13;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(169)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(169)
			Float vy = tmp20;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(169)
			Float tmp21 = (wma->m20 * c0->x);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(169)
			Float tmp22 = (wma->m21 * c0->y);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(169)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(169)
			Float tmp24 = (wma->m22 * c0->z);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(169)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(169)
			Float tmp26 = wma->m23;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(169)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(169)
			Float vz = tmp27;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(169)
			c0->x = vx;
			HX_STACK_LINE(169)
			c0->y = vy;
			HX_STACK_LINE(169)
			c0->z = vz;
			HX_STACK_LINE(169)
			c0;
		}
		HX_STACK_LINE(170)
		::haxor::math::Vector3 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			::haxor::context::DataContext tmp8 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			::haxor::context::DataContext _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(170)
			Array< ::Dynamic > tmp9 = _this->m_v3;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			int tmp10 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			int tmp11 = _this->m_v3->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(170)
			int tmp12 = hx::Mod(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(170)
			int tmp13 = _this->m_nv3 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(170)
			tmp7 = tmp9->__get(tmp13).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(170)
		Float tmp8 = ca->get_radius();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		::haxor::math::Vector3 tmp9 = tmp7->Set((int)0,(int)0,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		::haxor::math::Vector3 rv0 = tmp9;		HX_STACK_VAR(rv0,"rv0");
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			Float tmp10 = (wma->m00 * rv0->x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			Float tmp11 = (wma->m01 * rv0->y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(170)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(170)
			Float tmp13 = (wma->m02 * rv0->z);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(170)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(170)
			Float vx = tmp14;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(170)
			Float tmp15 = (wma->m10 * rv0->x);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(170)
			Float tmp16 = (wma->m11 * rv0->y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(170)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(170)
			Float tmp18 = (wma->m12 * rv0->z);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(170)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(170)
			Float vy = tmp19;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(170)
			Float tmp20 = (wma->m20 * rv0->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(170)
			Float tmp21 = (wma->m21 * rv0->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(170)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(170)
			Float tmp23 = (wma->m22 * rv0->z);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(170)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(170)
			Float vz = tmp24;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(170)
			rv0->x = vx;
			HX_STACK_LINE(170)
			rv0->y = vy;
			HX_STACK_LINE(170)
			rv0->z = vz;
			HX_STACK_LINE(170)
			rv0;
		}
		HX_STACK_LINE(171)
		Float tmp10 = (rv0->x * rv0->x);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(171)
		Float tmp11 = (rv0->y * rv0->y);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(171)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(171)
		Float tmp13 = (rv0->z * rv0->z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(171)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(171)
		Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(171)
		Float r0 = tmp15;		HX_STACK_VAR(r0,"r0");
		HX_STACK_LINE(172)
		::haxor::math::Vector3 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::haxor::context::DataContext tmp17 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(172)
			::haxor::context::DataContext _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(172)
			Array< ::Dynamic > tmp18 = _this->m_v3;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(172)
			int tmp19 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(172)
			int tmp20 = _this->m_v3->length;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(172)
			int tmp21 = hx::Mod(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(172)
			int tmp22 = _this->m_nv3 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(172)
			tmp16 = tmp18->__get(tmp22).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(172)
		::haxor::math::Vector3 tmp17 = cb->m_center;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(172)
		::haxor::math::Vector3 tmp18 = tmp16->Set3(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(172)
		::haxor::math::Vector3 c1 = tmp18;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			Float tmp19 = (wmb->m00 * c1->x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(172)
			Float tmp20 = (wmb->m01 * c1->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(172)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(172)
			Float tmp22 = (wmb->m02 * c1->z);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(172)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(172)
			Float tmp24 = wmb->m03;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(172)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(172)
			Float vx = tmp25;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(172)
			Float tmp26 = (wmb->m10 * c1->x);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(172)
			Float tmp27 = (wmb->m11 * c1->y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(172)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(172)
			Float tmp29 = (wmb->m12 * c1->z);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(172)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(172)
			Float tmp31 = wmb->m13;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(172)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(172)
			Float vy = tmp32;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(172)
			Float tmp33 = (wmb->m20 * c1->x);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(172)
			Float tmp34 = (wmb->m21 * c1->y);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(172)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(172)
			Float tmp36 = (wmb->m22 * c1->z);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(172)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(172)
			Float tmp38 = wmb->m23;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(172)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(172)
			Float vz = tmp39;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(172)
			c1->x = vx;
			HX_STACK_LINE(172)
			c1->y = vy;
			HX_STACK_LINE(172)
			c1->z = vz;
			HX_STACK_LINE(172)
			c1;
		}
		HX_STACK_LINE(173)
		::haxor::math::Vector3 tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			::haxor::context::DataContext tmp20 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(173)
			::haxor::context::DataContext _this = tmp20;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(173)
			Array< ::Dynamic > tmp21 = _this->m_v3;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(173)
			int tmp22 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(173)
			int tmp23 = _this->m_v3->length;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(173)
			int tmp24 = hx::Mod(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(173)
			int tmp25 = _this->m_nv3 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(173)
			tmp19 = tmp21->__get(tmp25).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(173)
		Float tmp20 = cb->get_radius();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(173)
		::haxor::math::Vector3 tmp21 = tmp19->Set((int)0,(int)0,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(173)
		::haxor::math::Vector3 rv1 = tmp21;		HX_STACK_VAR(rv1,"rv1");
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			Float tmp22 = (wmb->m00 * rv1->x);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(173)
			Float tmp23 = (wmb->m01 * rv1->y);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(173)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(173)
			Float tmp25 = (wmb->m02 * rv1->z);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(173)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(173)
			Float vx = tmp26;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(173)
			Float tmp27 = (wmb->m10 * rv1->x);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(173)
			Float tmp28 = (wmb->m11 * rv1->y);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(173)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(173)
			Float tmp30 = (wmb->m12 * rv1->z);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(173)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(173)
			Float vy = tmp31;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(173)
			Float tmp32 = (wmb->m20 * rv1->x);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(173)
			Float tmp33 = (wmb->m21 * rv1->y);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(173)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(173)
			Float tmp35 = (wmb->m22 * rv1->z);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(173)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(173)
			Float vz = tmp36;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(173)
			rv1->x = vx;
			HX_STACK_LINE(173)
			rv1->y = vy;
			HX_STACK_LINE(173)
			rv1->z = vz;
			HX_STACK_LINE(173)
			rv1;
		}
		HX_STACK_LINE(174)
		Float tmp22 = (rv1->x * rv1->x);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(174)
		Float tmp23 = (rv1->y * rv1->y);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(174)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(174)
		Float tmp25 = (rv1->z * rv1->z);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(174)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(174)
		Float tmp27 = ::Math_obj::sqrt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(174)
		Float r1 = tmp27;		HX_STACK_VAR(r1,"r1");
		HX_STACK_LINE(176)
		::haxor::math::Vector3 tmp28 = c0;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(176)
		::haxor::math::Vector3 tmp29 = c1;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(176)
		Float tmp30 = ::haxor::math::Vector3_obj::Distance(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(176)
		Float tmp31 = (tmp30 * ((Float)2.0));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(176)
		Float d = tmp31;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(178)
		Float tmp32 = d;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(178)
		Float tmp33 = (r0 + r1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(178)
		Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(178)
		c->depth = tmp34;
		HX_STACK_LINE(180)
		bool tmp35 = (c->depth < ((Float)0.0));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(180)
		if ((tmp35)){
			HX_STACK_LINE(182)
			Float tmp36 = (c0->x - c1->x);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(182)
			c->normal->x = tmp36;
			HX_STACK_LINE(183)
			Float tmp37 = (c0->y - c1->y);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(183)
			c->normal->y = tmp37;
			HX_STACK_LINE(184)
			Float tmp38 = (c0->z - c1->z);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(184)
			c->normal->z = tmp38;
			HX_STACK_LINE(185)
			c->normal->Normalize();
			HX_STACK_LINE(186)
			::haxor::math::Vector3 tmp39 = c0;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(186)
			c->point->Set3(tmp39);
			HX_STACK_LINE(187)
			::haxor::math::Vector3 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(187)
			{
				HX_STACK_LINE(187)
				::haxor::context::DataContext tmp41 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(187)
				::haxor::context::DataContext _this = tmp41;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(187)
				Array< ::Dynamic > tmp42 = _this->m_v3;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(187)
				int tmp43 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(187)
				int tmp44 = _this->m_v3->length;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(187)
				int tmp45 = hx::Mod(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(187)
				int tmp46 = _this->m_nv3 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(187)
				tmp40 = tmp42->__get(tmp46).StaticCast< ::haxor::math::Vector3 >();
			}
			HX_STACK_LINE(187)
			::haxor::math::Vector3 tmp41 = c->normal;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(187)
			::haxor::math::Vector3 tmp42 = tmp40->Set3(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(187)
			::haxor::math::Vector3 n = tmp42;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(188)
			Float tmp43 = (r0 + c->depth);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(188)
			Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(188)
			Float tmp45 = (tmp44 * ((Float)0.5));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(188)
			n->Scale(tmp45);
			HX_STACK_LINE(189)
			::haxor::math::Vector3 tmp46 = n;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(189)
			c->point->Add(tmp46);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CollisionSolver_obj,SolveSphereSphere,(void))

Void CollisionSolver_obj::SolveSphereBox( ::haxor::component::physics::SphereCollider ca,::haxor::component::physics::BoxCollider cb,::haxor::physics::Collision c){
{
		HX_STACK_FRAME("haxor.physics.CollisionSolver","SolveSphereBox",0xe864945b,"haxor.physics.CollisionSolver.SolveSphereBox","haxor/physics/CollisionSolver.hx",200,0x478b5d4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ca,"ca")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(201)
		::haxor::component::Transform tmp = ca->m_entity->m_transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		::haxor::math::Matrix4 tmp1 = tmp->get_WorldMatrix();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		::haxor::math::Matrix4 wma = tmp1;		HX_STACK_VAR(wma,"wma");
		HX_STACK_LINE(202)
		::haxor::component::Transform tmp2 = cb->m_entity->m_transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		::haxor::math::Matrix4 tmp3 = tmp2->get_WorldMatrix();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		::haxor::math::Matrix4 wmb = tmp3;		HX_STACK_VAR(wmb,"wmb");
		HX_STACK_LINE(203)
		::haxor::component::Transform tmp4 = cb->m_entity->m_transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		::haxor::math::Matrix4 tmp5 = tmp4->get_WorldMatrixInverse();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		::haxor::math::Matrix4 wmib = tmp5;		HX_STACK_VAR(wmib,"wmib");
		HX_STACK_LINE(205)
		::haxor::math::Vector3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			::haxor::context::DataContext tmp7 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(205)
			::haxor::context::DataContext _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(205)
			Array< ::Dynamic > tmp8 = _this->m_v3;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			int tmp9 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			int tmp10 = _this->m_v3->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(205)
			int tmp11 = hx::Mod(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(205)
			int tmp12 = _this->m_nv3 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(205)
			tmp6 = tmp8->__get(tmp12).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(205)
		::haxor::math::Vector3 tmp7 = ca->m_center;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(205)
		::haxor::math::Vector3 tmp8 = tmp6->Set3(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(205)
		::haxor::math::Vector3 c0 = tmp8;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			Float tmp9 = (wma->m00 * c0->x);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			Float tmp10 = (wma->m01 * c0->y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(206)
			Float tmp12 = (wma->m02 * c0->z);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			Float tmp14 = wma->m03;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			Float vx = tmp15;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(206)
			Float tmp16 = (wma->m10 * c0->x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(206)
			Float tmp17 = (wma->m11 * c0->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(206)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(206)
			Float tmp19 = (wma->m12 * c0->z);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(206)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(206)
			Float tmp21 = wma->m13;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(206)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(206)
			Float vy = tmp22;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(206)
			Float tmp23 = (wma->m20 * c0->x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(206)
			Float tmp24 = (wma->m21 * c0->y);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(206)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(206)
			Float tmp26 = (wma->m22 * c0->z);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(206)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(206)
			Float tmp28 = wma->m23;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(206)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(206)
			Float vz = tmp29;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(206)
			c0->x = vx;
			HX_STACK_LINE(206)
			c0->y = vy;
			HX_STACK_LINE(206)
			c0->z = vz;
			HX_STACK_LINE(206)
			c0;
		}
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			Float tmp9 = (wmib->m00 * c0->x);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(207)
			Float tmp10 = (wmib->m01 * c0->y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(207)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(207)
			Float tmp12 = (wmib->m02 * c0->z);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(207)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(207)
			Float tmp14 = wmib->m03;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(207)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(207)
			Float vx = tmp15;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(207)
			Float tmp16 = (wmib->m10 * c0->x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(207)
			Float tmp17 = (wmib->m11 * c0->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(207)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(207)
			Float tmp19 = (wmib->m12 * c0->z);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(207)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(207)
			Float tmp21 = wmib->m13;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(207)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(207)
			Float vy = tmp22;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(207)
			Float tmp23 = (wmib->m20 * c0->x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(207)
			Float tmp24 = (wmib->m21 * c0->y);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(207)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(207)
			Float tmp26 = (wmib->m22 * c0->z);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(207)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(207)
			Float tmp28 = wmib->m23;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(207)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(207)
			Float vz = tmp29;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(207)
			c0->x = vx;
			HX_STACK_LINE(207)
			c0->y = vy;
			HX_STACK_LINE(207)
			c0->z = vz;
			HX_STACK_LINE(207)
			c0;
		}
		HX_STACK_LINE(209)
		::haxor::math::Vector3 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			::haxor::context::DataContext tmp10 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(209)
			::haxor::context::DataContext _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(209)
			Array< ::Dynamic > tmp11 = _this->m_v3;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(209)
			int tmp12 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(209)
			int tmp13 = _this->m_v3->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(209)
			int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(209)
			int tmp15 = _this->m_nv3 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(209)
			tmp9 = tmp11->__get(tmp15).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(209)
		Float tmp10 = ca->get_radius();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(209)
		::haxor::math::Vector3 tmp11 = tmp9->Set((int)0,(int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(209)
		::haxor::math::Vector3 rv0 = tmp11;		HX_STACK_VAR(rv0,"rv0");
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			Float tmp12 = (wma->m00 * rv0->x);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(210)
			Float tmp13 = (wma->m01 * rv0->y);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(210)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(210)
			Float tmp15 = (wma->m02 * rv0->z);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(210)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(210)
			Float vx = tmp16;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(210)
			Float tmp17 = (wma->m10 * rv0->x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(210)
			Float tmp18 = (wma->m11 * rv0->y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(210)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(210)
			Float tmp20 = (wma->m12 * rv0->z);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(210)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(210)
			Float vy = tmp21;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(210)
			Float tmp22 = (wma->m20 * rv0->x);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(210)
			Float tmp23 = (wma->m21 * rv0->y);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(210)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(210)
			Float tmp25 = (wma->m22 * rv0->z);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(210)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(210)
			Float vz = tmp26;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(210)
			rv0->x = vx;
			HX_STACK_LINE(210)
			rv0->y = vy;
			HX_STACK_LINE(210)
			rv0->z = vz;
			HX_STACK_LINE(210)
			rv0;
		}
		HX_STACK_LINE(213)
		::haxor::math::Vector3 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			::haxor::context::DataContext tmp13 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			::haxor::context::DataContext _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(213)
			Array< ::Dynamic > tmp14 = _this->m_v3;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			int tmp15 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(213)
			int tmp16 = _this->m_v3->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(213)
			int tmp17 = hx::Mod(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			int tmp18 = _this->m_nv3 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			tmp12 = tmp14->__get(tmp18).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(213)
		::haxor::math::Vector3 tmp13 = cb->m_center;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(213)
		::haxor::math::Vector3 tmp14 = tmp12->Set3(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(213)
		::haxor::math::Vector3 c1 = tmp14;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(214)
		::haxor::math::Vector3 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			::haxor::context::DataContext tmp16 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(214)
			::haxor::context::DataContext _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(214)
			Array< ::Dynamic > tmp17 = _this->m_v3;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(214)
			int tmp18 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(214)
			int tmp19 = _this->m_v3->length;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(214)
			int tmp20 = hx::Mod(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(214)
			int tmp21 = _this->m_nv3 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(214)
			tmp15 = tmp17->__get(tmp21).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(214)
		::haxor::math::Vector3 tmp16 = cb->get_size();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(214)
		::haxor::math::Vector3 tmp17 = tmp15->Set3(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(214)
		::haxor::math::Vector3 s1 = tmp17;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(216)
		Float tmp18 = (s1->x * ((Float)0.5));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(216)
		Float hx = tmp18;		HX_STACK_VAR(hx,"hx");
		HX_STACK_LINE(218)
		Float tmp19 = (c1->x - hx);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(218)
		Float xmin0 = tmp19;		HX_STACK_VAR(xmin0,"xmin0");
		HX_STACK_LINE(219)
		Float tmp20 = (c0->x + rv0->x);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(219)
		Float xmax1 = tmp20;		HX_STACK_VAR(xmax1,"xmax1");
		HX_STACK_LINE(221)
		Float tmp21 = (c0->x - rv0->x);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(221)
		Float xmin1 = tmp21;		HX_STACK_VAR(xmin1,"xmin1");
		HX_STACK_LINE(222)
		Float tmp22 = (c1->x + hx);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(222)
		Float xmax0 = tmp22;		HX_STACK_VAR(xmax0,"xmax0");
		HX_STACK_LINE(224)
		Float tmp23 = (s1->y * ((Float)0.5));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(224)
		Float hy = tmp23;		HX_STACK_VAR(hy,"hy");
		HX_STACK_LINE(226)
		Float tmp24 = (c1->y - hy);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(226)
		Float ymin0 = tmp24;		HX_STACK_VAR(ymin0,"ymin0");
		HX_STACK_LINE(227)
		Float tmp25 = (c0->y + rv0->y);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(227)
		Float ymax1 = tmp25;		HX_STACK_VAR(ymax1,"ymax1");
		HX_STACK_LINE(229)
		Float tmp26 = (c0->y - rv0->y);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(229)
		Float ymin1 = tmp26;		HX_STACK_VAR(ymin1,"ymin1");
		HX_STACK_LINE(230)
		Float tmp27 = (c1->y + hy);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(230)
		Float ymax0 = tmp27;		HX_STACK_VAR(ymax0,"ymax0");
		HX_STACK_LINE(232)
		Float tmp28 = (s1->z * ((Float)0.5));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(232)
		Float hz = tmp28;		HX_STACK_VAR(hz,"hz");
		HX_STACK_LINE(234)
		Float tmp29 = (c1->z - hz);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(234)
		Float zmin0 = tmp29;		HX_STACK_VAR(zmin0,"zmin0");
		HX_STACK_LINE(235)
		Float tmp30 = (c0->z + rv0->z);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(235)
		Float zmax1 = tmp30;		HX_STACK_VAR(zmax1,"zmax1");
		HX_STACK_LINE(237)
		Float tmp31 = (c0->z - rv0->z);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(237)
		Float zmin1 = tmp31;		HX_STACK_VAR(zmin1,"zmin1");
		HX_STACK_LINE(238)
		Float tmp32 = (c1->z + hz);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(238)
		Float zmax0 = tmp32;		HX_STACK_VAR(zmax0,"zmax0");
		HX_STACK_LINE(241)
		::haxor::math::Vector3 tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			::haxor::context::DataContext tmp34 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(241)
			::haxor::context::DataContext _this = tmp34;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(241)
			Array< ::Dynamic > tmp35 = _this->m_v3;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(241)
			int tmp36 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(241)
			int tmp37 = _this->m_v3->length;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(241)
			int tmp38 = hx::Mod(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(241)
			int tmp39 = _this->m_nv3 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(241)
			tmp33 = tmp35->__get(tmp39).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(241)
		::haxor::math::Vector3 cp = tmp33;		HX_STACK_VAR(cp,"cp");
		HX_STACK_LINE(242)
		Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			Float tmp35 = xmax0;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(242)
			Float tmp36 = c0->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(242)
			Float tmp37 = ::Math_obj::min(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(242)
			Float b = tmp37;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(242)
			Float tmp38 = xmin0;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(242)
			Float tmp39 = b;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(242)
			tmp34 = ::Math_obj::max(tmp38,tmp39);
		}
		HX_STACK_LINE(242)
		cp->x = tmp34;
		HX_STACK_LINE(243)
		Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(243)
		{
			HX_STACK_LINE(243)
			Float tmp36 = ymax0;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(243)
			Float tmp37 = c0->y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(243)
			Float tmp38 = ::Math_obj::min(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(243)
			Float b = tmp38;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(243)
			Float tmp39 = ymin0;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(243)
			Float tmp40 = b;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(243)
			tmp35 = ::Math_obj::max(tmp39,tmp40);
		}
		HX_STACK_LINE(243)
		cp->y = tmp35;
		HX_STACK_LINE(244)
		Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			Float tmp37 = zmax0;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(244)
			Float tmp38 = c0->z;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(244)
			Float tmp39 = ::Math_obj::min(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(244)
			Float b = tmp39;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(244)
			Float tmp40 = zmin0;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(244)
			Float tmp41 = b;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(244)
			tmp36 = ::Math_obj::max(tmp40,tmp41);
		}
		HX_STACK_LINE(244)
		cp->z = tmp36;
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			Float tmp37 = (wmb->m00 * cp->x);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(246)
			Float tmp38 = (wmb->m01 * cp->y);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(246)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(246)
			Float tmp40 = (wmb->m02 * cp->z);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(246)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(246)
			Float tmp42 = wmb->m03;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(246)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(246)
			Float vx = tmp43;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(246)
			Float tmp44 = (wmb->m10 * cp->x);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(246)
			Float tmp45 = (wmb->m11 * cp->y);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(246)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(246)
			Float tmp47 = (wmb->m12 * cp->z);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(246)
			Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(246)
			Float tmp49 = wmb->m13;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(246)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(246)
			Float vy = tmp50;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(246)
			Float tmp51 = (wmb->m20 * cp->x);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(246)
			Float tmp52 = (wmb->m21 * cp->y);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(246)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(246)
			Float tmp54 = (wmb->m22 * cp->z);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(246)
			Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(246)
			Float tmp56 = wmb->m23;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(246)
			Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(246)
			Float vz = tmp57;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(246)
			cp->x = vx;
			HX_STACK_LINE(246)
			cp->y = vy;
			HX_STACK_LINE(246)
			cp->z = vz;
			HX_STACK_LINE(246)
			cp;
		}
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			Float tmp37 = (wmb->m00 * c0->x);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(247)
			Float tmp38 = (wmb->m01 * c0->y);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(247)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(247)
			Float tmp40 = (wmb->m02 * c0->z);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(247)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(247)
			Float tmp42 = wmb->m03;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(247)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(247)
			Float vx = tmp43;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(247)
			Float tmp44 = (wmb->m10 * c0->x);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(247)
			Float tmp45 = (wmb->m11 * c0->y);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(247)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(247)
			Float tmp47 = (wmb->m12 * c0->z);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(247)
			Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(247)
			Float tmp49 = wmb->m13;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(247)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(247)
			Float vy = tmp50;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(247)
			Float tmp51 = (wmb->m20 * c0->x);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(247)
			Float tmp52 = (wmb->m21 * c0->y);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(247)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(247)
			Float tmp54 = (wmb->m22 * c0->z);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(247)
			Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(247)
			Float tmp56 = wmb->m23;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(247)
			Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(247)
			Float vz = tmp57;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(247)
			c0->x = vx;
			HX_STACK_LINE(247)
			c0->y = vy;
			HX_STACK_LINE(247)
			c0->z = vz;
			HX_STACK_LINE(247)
			c0;
		}
		HX_STACK_LINE(249)
		Float tmp37 = (rv0->x * rv0->x);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(249)
		Float tmp38 = (rv0->y * rv0->y);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(249)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(249)
		Float tmp40 = (rv0->z * rv0->z);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(249)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(249)
		Float tmp42 = ::Math_obj::sqrt(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(249)
		Float tmp43 = (tmp42 * ((Float)0.5));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(249)
		Float r = tmp43;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(250)
		::haxor::math::Vector3 tmp44 = cp;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(250)
		::haxor::math::Vector3 tmp45 = c0;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(250)
		Float tmp46 = ::haxor::math::Vector3_obj::Distance(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(250)
		Float d = tmp46;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(252)
		Float tmp47 = (d - r);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(252)
		c->depth = tmp47;
		HX_STACK_LINE(253)
		bool tmp48 = (c->depth < ((Float)0.0));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(253)
		if ((tmp48)){
			HX_STACK_LINE(255)
			::haxor::math::Vector3 tmp49 = cp;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(255)
			c->point->Set3(tmp49);
			HX_STACK_LINE(256)
			Float tmp50 = (c0->x - cp->x);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(256)
			c->normal->x = tmp50;
			HX_STACK_LINE(257)
			Float tmp51 = (c0->y - cp->y);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(257)
			c->normal->y = tmp51;
			HX_STACK_LINE(258)
			Float tmp52 = (c0->z - cp->z);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(258)
			c->normal->z = tmp52;
			HX_STACK_LINE(259)
			c->normal->Normalize();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CollisionSolver_obj,SolveSphereBox,(void))


CollisionSolver_obj::CollisionSolver_obj()
{
}

void CollisionSolver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionSolver);
	HX_MARK_MEMBER_NAME(broadphase,"broadphase");
	HX_MARK_MEMBER_NAME(iterations,"iterations");
	HX_MARK_END_CLASS();
}

void CollisionSolver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadphase,"broadphase");
	HX_VISIT_MEMBER_NAME(iterations,"iterations");
}

Dynamic CollisionSolver_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Step") ) { return Step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Solve") ) { return Solve_dyn(); }
		if (HX_FIELD_EQ(inName,"Apply") ) { return Apply_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Resolve") ) { return Resolve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { return broadphase; }
		if (HX_FIELD_EQ(inName,"iterations") ) { return iterations; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SolveBoxBox") ) { return SolveBoxBox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SolveSphereBox") ) { return SolveSphereBox_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SolveSphereSphere") ) { return SolveSphereSphere_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionSolver_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { broadphase=inValue.Cast< ::haxor::physics::broadphase::BroadPhase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iterations") ) { iterations=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CollisionSolver_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CollisionSolver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("broadphase","\xb9","\x5d","\x1d","\xd8"));
	outFields->push(HX_HCSTRING("iterations","\x36","\xf3","\x39","\x62"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::physics::broadphase::BroadPhase*/ ,(int)offsetof(CollisionSolver_obj,broadphase),HX_HCSTRING("broadphase","\xb9","\x5d","\x1d","\xd8")},
	{hx::fsInt,(int)offsetof(CollisionSolver_obj,iterations),HX_HCSTRING("iterations","\x36","\xf3","\x39","\x62")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("broadphase","\xb9","\x5d","\x1d","\xd8"),
	HX_HCSTRING("iterations","\x36","\xf3","\x39","\x62"),
	HX_HCSTRING("Step","\x6c","\x13","\x35","\x37"),
	HX_HCSTRING("Solve","\x5f","\x2f","\xf3","\x13"),
	HX_HCSTRING("Apply","\x4e","\xf5","\x68","\xb7"),
	HX_HCSTRING("Resolve","\xcc","\x3a","\xb1","\x34"),
	HX_HCSTRING("SolveBoxBox","\x7f","\xc5","\x03","\x88"),
	HX_HCSTRING("SolveSphereSphere","\xf9","\xa7","\xc4","\xc9"),
	HX_HCSTRING("SolveSphereBox","\x9f","\x39","\x0f","\xf5"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionSolver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionSolver_obj::__mClass,"__mClass");
};

#endif

hx::Class CollisionSolver_obj::__mClass;

void CollisionSolver_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.physics.CollisionSolver","\x32","\xa2","\x2f","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CollisionSolver_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CollisionSolver_obj >;
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
} // end namespace physics
