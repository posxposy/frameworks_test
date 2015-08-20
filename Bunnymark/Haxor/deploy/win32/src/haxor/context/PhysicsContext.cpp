#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_physics_Collider
#include <haxor/component/physics/Collider.h>
#endif
#ifndef INCLUDED_haxor_component_physics_RigidBody
#include <haxor/component/physics/RigidBody.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_PhysicsContext
#include <haxor/context/PhysicsContext.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IFixedUpdateable
#include <haxor/core/IFixedUpdateable.h>
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
#ifndef INCLUDED_haxor_physics_CollisionSolver
#include <haxor/physics/CollisionSolver.h>
#endif
#ifndef INCLUDED_haxor_physics_Physics
#include <haxor/physics/Physics.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_BroadPhase
#include <haxor/physics/broadphase/BroadPhase.h>
#endif
namespace haxor{
namespace context{

Void PhysicsContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.PhysicsContext","new",0xd8a4dec5,"haxor.context.PhysicsContext.new","haxor/context/PhysicsContext.hx",74,0x82743509)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(75)
	::haxor::context::UID tmp = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	this->rid = tmp;
	HX_STACK_LINE(76)
	::haxor::context::UID tmp1 = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	this->cid = tmp1;
	HX_STACK_LINE(77)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	this->colliders = tmp2;
	HX_STACK_LINE(80)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	this->rigidbodies = tmp3;
	HX_STACK_LINE(82)
	Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	this->rbc = tmp4;
	HX_STACK_LINE(83)
	Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	this->crb = tmp5;
	HX_STACK_LINE(85)
	Array< bool > tmp6 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	this->collider_dirty = tmp6;
}
;
	return null();
}

//PhysicsContext_obj::~PhysicsContext_obj() { }

Dynamic PhysicsContext_obj::__CreateEmpty() { return  new PhysicsContext_obj; }
hx::ObjectPtr< PhysicsContext_obj > PhysicsContext_obj::__new()
{  hx::ObjectPtr< PhysicsContext_obj > _result_ = new PhysicsContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic PhysicsContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsContext_obj > _result_ = new PhysicsContext_obj();
	_result_->__construct();
	return _result_;}

Void PhysicsContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.PhysicsContext","Initialize",0x7a5fedab,"haxor.context.PhysicsContext.Initialize","haxor/context/PhysicsContext.hx",96,0x82743509)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->accum_dt = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsContext_obj,Initialize,(void))

Void PhysicsContext_obj::CreateCollider( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.context.PhysicsContext","CreateCollider",0x0639e42b,"haxor.context.PhysicsContext.CreateCollider","haxor/context/PhysicsContext.hx",104,0x82743509)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(105)
		Array< ::Dynamic > tmp = this->colliders;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		::haxor::component::physics::Collider tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		tmp->push(tmp1);
		HX_STACK_LINE(106)
		::haxor::context::UID tmp2 = this->cid;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		int tmp3 = tmp2->get_next();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		int nid = tmp3;		HX_STACK_VAR(nid,"nid");
		HX_STACK_LINE(107)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::haxor::context::UID tmp5 = this->cid;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			::haxor::context::UID _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(107)
			int tmp6 = _this->m_cache->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			bool tmp7 = (tmp6 <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			if ((tmp7)){
				HX_STACK_LINE(107)
				tmp4 = (_this->m_id)++;
			}
			else{
				HX_STACK_LINE(107)
				tmp4 = _this->m_cache->shift();
			}
		}
		HX_STACK_LINE(107)
		c->__cid = tmp4;
		HX_STACK_LINE(109)
		bool tmp5 = (nid >= c->__cid);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		if ((tmp5)){
			HX_STACK_LINE(111)
			Array< ::Dynamic > tmp6 = this->crb;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			tmp6->push(null());
			HX_STACK_LINE(112)
			Array< bool > tmp7 = this->collider_dirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			tmp7->push(true);
		}
		else{
			HX_STACK_LINE(116)
			Array< bool > tmp6 = this->collider_dirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			int tmp7 = c->__cid;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			tmp6[tmp7] = true;
		}
		HX_STACK_LINE(118)
		Array< ::Dynamic > tmp6 = this->crb;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		int tmp7 = c->__cid;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		Dynamic tmp8 = c->m_entity->GetComponent(hx::ClassOf< ::haxor::component::physics::RigidBody >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		tmp6[tmp7] = tmp8;
		HX_STACK_LINE(119)
		::haxor::physics::broadphase::BroadPhase tmp9 = ::haxor::physics::Physics_obj::get_broadphase();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(119)
		::haxor::component::physics::Collider tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		tmp9->Add(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsContext_obj,CreateCollider,(void))

Void PhysicsContext_obj::OnColliderUpdate( ::haxor::component::physics::Collider c,bool h){
{
		HX_STACK_FRAME("haxor.context.PhysicsContext","OnColliderUpdate",0xb04e3877,"haxor.context.PhysicsContext.OnColliderUpdate","haxor/context/PhysicsContext.hx",127,0x82743509)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(128)
		Array< bool > tmp = this->collider_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		int tmp1 = c->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		tmp[tmp1] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsContext_obj,OnColliderUpdate,(void))

Void PhysicsContext_obj::CreateRigidBody( ::haxor::component::physics::RigidBody r){
{
		HX_STACK_FRAME("haxor.context.PhysicsContext","CreateRigidBody",0x76f43816,"haxor.context.PhysicsContext.CreateRigidBody","haxor/context/PhysicsContext.hx",138,0x82743509)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(139)
		Array< ::Dynamic > tmp = this->rigidbodies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		::haxor::component::physics::RigidBody tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		tmp->push(tmp1);
		HX_STACK_LINE(140)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::haxor::context::UID tmp3 = this->rid;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			::haxor::context::UID _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(140)
			int tmp4 = _this->m_cache->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			if ((tmp5)){
				HX_STACK_LINE(140)
				tmp2 = (_this->m_id)++;
			}
			else{
				HX_STACK_LINE(140)
				tmp2 = _this->m_cache->shift();
			}
		}
		HX_STACK_LINE(140)
		int nid = tmp2;		HX_STACK_VAR(nid,"nid");
		HX_STACK_LINE(141)
		r->__cid = nid;
		HX_STACK_LINE(143)
		int tmp3 = nid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		Array< ::Dynamic > tmp4 = this->rbc;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		bool tmp6 = (tmp3 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		if ((tmp6)){
			HX_STACK_LINE(145)
			Array< ::Dynamic > tmp7 = this->rbc;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(145)
			Array< ::Dynamic > tmp8 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(145)
			tmp7->push(tmp8);
		}
		else{
			HX_STACK_LINE(149)
			Array< ::Dynamic > tmp7 = this->rbc;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			int tmp8 = nid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			Array< ::Dynamic > tmp9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			tmp7[tmp8] = tmp9;
		}
		HX_STACK_LINE(153)
		Dynamic tmp7 = r->m_entity->GetComponents(hx::ClassOf< ::haxor::component::physics::Collider >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		Array< ::Dynamic > cl = ((Array< ::Dynamic >)(tmp7));		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(154)
			int _g = cl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(154)
			while((true)){
				HX_STACK_LINE(154)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(154)
				if ((tmp9)){
					HX_STACK_LINE(154)
					break;
				}
				HX_STACK_LINE(154)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(154)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(156)
				::haxor::component::physics::Collider tmp11 = cl->__get(i).StaticCast< ::haxor::component::physics::Collider >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(156)
				::haxor::component::physics::Collider c = tmp11;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(157)
				Array< ::Dynamic > tmp12 = this->rbc;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(157)
				int tmp13 = nid;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(157)
				Array< ::Dynamic > tmp14 = tmp12->__get(tmp13).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(157)
				::haxor::component::physics::Collider tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(157)
				tmp14->push(tmp15);
				HX_STACK_LINE(158)
				Array< ::Dynamic > tmp16 = this->crb;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(158)
				int tmp17 = c->__cid;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(158)
				::haxor::component::physics::RigidBody tmp18 = r;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(158)
				tmp16[tmp17] = tmp18;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsContext_obj,CreateRigidBody,(void))

Void PhysicsContext_obj::Step( ){
{
		HX_STACK_FRAME("haxor.context.PhysicsContext","Step",0xa5d09d67,"haxor.context.PhysicsContext.Step","haxor/context/PhysicsContext.hx",167,0x82743509)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		::haxor::context::Process tmp = ::haxor::context::EngineContext_obj::fixed_update;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		::haxor::context::Process up = tmp;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(169)
		::haxor::physics::broadphase::BroadPhase tmp1 = ::haxor::physics::Physics_obj::get_broadphase();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		::haxor::physics::broadphase::BroadPhase bp = tmp1;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(170)
		::haxor::physics::CollisionSolver tmp2 = ::haxor::physics::Physics_obj::m_solver;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		::haxor::physics::CollisionSolver cs = tmp2;		HX_STACK_VAR(cs,"cs");
		HX_STACK_LINE(171)
		int steps = (int)0;		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(173)
		cs->broadphase = bp;
		HX_STACK_LINE(175)
		Float tmp3 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		this->accum_dt = tmp3;
		HX_STACK_LINE(177)
		Float t0;		HX_STACK_VAR(t0,"t0");
		HX_STACK_LINE(179)
		while((true)){
			HX_STACK_LINE(179)
			Float tmp4 = this->accum_dt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			if ((tmp6)){
				HX_STACK_LINE(179)
				break;
			}
			HX_STACK_LINE(182)
			bool tmp7 = (steps >= (int)5);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			if ((tmp7)){
				HX_STACK_LINE(182)
				break;
			}
			HX_STACK_LINE(183)
			(steps)++;
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(186)
				int _g = up->m_length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(186)
				while((true)){
					HX_STACK_LINE(186)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(186)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(186)
					if ((tmp9)){
						HX_STACK_LINE(186)
						break;
					}
					HX_STACK_LINE(186)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(186)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(188)
					::haxor::core::IFixedUpdateable tmp11 = up->list->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(188)
					::haxor::core::Resource r = ((::haxor::core::Resource)(tmp11));		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(189)
					bool tmp12 = r->m_destroyed;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(189)
					if ((tmp12)){
						HX_STACK_LINE(189)
						continue;
					}
					HX_STACK_LINE(190)
					::haxor::core::IFixedUpdateable tmp13 = up->list->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(190)
					tmp13->OnFixedUpdate();
				}
			}
			HX_STACK_LINE(194)
			this->UpdateColliders();
			HX_STACK_LINE(196)
			Array< ::Dynamic > tmp8 = this->rigidbodies;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(196)
			Array< ::Dynamic > l = tmp8;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(198)
				int _g = l->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(198)
				while((true)){
					HX_STACK_LINE(198)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(198)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(198)
					if ((tmp10)){
						HX_STACK_LINE(198)
						break;
					}
					HX_STACK_LINE(198)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(198)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(200)
					::haxor::component::physics::RigidBody tmp12 = l->__get(i).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(200)
					bool tmp13 = tmp12->get_enabled();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(200)
					if ((tmp13)){
						HX_STACK_LINE(202)
						::haxor::component::physics::RigidBody tmp14 = l->__get(i).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(202)
						bool tmp15 = tmp14->kinematic;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(202)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(202)
						if ((tmp16)){
							HX_STACK_LINE(204)
							::haxor::component::physics::RigidBody tmp17 = l->__get(i).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(204)
							tmp17->ComputeForces();
							HX_STACK_LINE(205)
							::haxor::component::physics::RigidBody tmp18 = l->__get(i).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(205)
							Float tmp19 = ::haxor::core::Time_obj::get_fixedDelta();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(205)
							tmp18->IntegrateVelocity(tmp19);
						}
					}
				}
			}
			HX_STACK_LINE(210)
			{
				HX_STACK_LINE(210)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(210)
				int _g = cs->iterations;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(210)
				while((true)){
					HX_STACK_LINE(210)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(210)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(210)
					if ((tmp10)){
						HX_STACK_LINE(210)
						break;
					}
					HX_STACK_LINE(210)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(210)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(212)
					cs->Step();
				}
			}
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(215)
				int _g = l->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(215)
				while((true)){
					HX_STACK_LINE(215)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(215)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(215)
					if ((tmp10)){
						HX_STACK_LINE(215)
						break;
					}
					HX_STACK_LINE(215)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(215)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(217)
					::haxor::component::physics::RigidBody tmp12 = l->__get(i).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(217)
					bool tmp13 = tmp12->get_enabled();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(217)
					if ((tmp13)){
						HX_STACK_LINE(219)
						::haxor::component::physics::RigidBody tmp14 = l->__get(i).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(219)
						bool tmp15 = tmp14->kinematic;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(219)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(219)
						if ((tmp16)){
							HX_STACK_LINE(221)
							::haxor::component::physics::RigidBody tmp17 = l->__get(i).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(221)
							Float tmp18 = ::haxor::core::Time_obj::get_fixedDelta();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(221)
							tmp17->IntegratePosition(tmp18);
						}
					}
					HX_STACK_LINE(224)
					::haxor::component::physics::RigidBody tmp14 = l->__get(i).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(224)
					tmp14->ResetForces();
				}
			}
			HX_STACK_LINE(227)
			Float tmp9 = ::haxor::core::Time_obj::get_fixedDelta();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			hx::SubEq(this->accum_dt,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsContext_obj,Step,(void))

Void PhysicsContext_obj::UpdateColliders( ){
{
		HX_STACK_FRAME("haxor.context.PhysicsContext","UpdateColliders",0x1b03d93b,"haxor.context.PhysicsContext.UpdateColliders","haxor/context/PhysicsContext.hx",236,0x82743509)
		HX_STACK_THIS(this)
		HX_STACK_LINE(237)
		::haxor::physics::broadphase::BroadPhase tmp = ::haxor::physics::Physics_obj::get_broadphase();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		::haxor::physics::broadphase::BroadPhase bp = tmp;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(239)
		bp->Step();
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(242)
			Array< ::Dynamic > tmp1 = this->colliders;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(242)
			while((true)){
				HX_STACK_LINE(242)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(242)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(242)
				if ((tmp3)){
					HX_STACK_LINE(242)
					break;
				}
				HX_STACK_LINE(242)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(242)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(244)
				Array< ::Dynamic > tmp5 = this->colliders;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(244)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(244)
				::haxor::component::physics::Collider tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::component::physics::Collider >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(244)
				::haxor::component::physics::Collider c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(246)
				bool tmp8 = c->get_enabled();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(246)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(246)
				if ((tmp9)){
					HX_STACK_LINE(246)
					continue;
				}
				HX_STACK_LINE(248)
				Array< bool > tmp10 = this->collider_dirty;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				int tmp11 = c->__cid;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				bool tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(248)
				if ((tmp12)){
					HX_STACK_LINE(250)
					::haxor::component::physics::Collider tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(250)
					bp->Clear(tmp13);
					HX_STACK_LINE(251)
					::haxor::component::physics::Collider tmp14 = c;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(251)
					bp->Update(tmp14);
					HX_STACK_LINE(252)
					::haxor::component::physics::Collider tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(252)
					bp->Query(tmp15);
				}
				HX_STACK_LINE(254)
				Array< bool > tmp13 = this->collider_dirty;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(254)
				int tmp14 = c->__cid;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(254)
				tmp13[tmp14] = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsContext_obj,UpdateColliders,(void))

Void PhysicsContext_obj::DestroyCollider( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.context.PhysicsContext","DestroyCollider",0x3605ec13,"haxor.context.PhysicsContext.DestroyCollider","haxor/context/PhysicsContext.hx",264,0x82743509)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(265)
		Array< ::Dynamic > tmp = this->colliders;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		::haxor::component::physics::Collider tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		tmp->remove(tmp1);
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int v = c->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(266)
			::haxor::context::UID tmp2 = this->cid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(266)
			tmp2->m_cache->push(tmp3);
			HX_STACK_LINE(266)
			v;
		}
		HX_STACK_LINE(267)
		Array< ::Dynamic > tmp2 = this->crb;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		int tmp3 = c->__cid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		::haxor::component::physics::RigidBody tmp4 = tmp2->__get(tmp3).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		::haxor::component::physics::RigidBody rb = tmp4;		HX_STACK_VAR(rb,"rb");
		HX_STACK_LINE(268)
		Array< ::Dynamic > tmp5 = this->crb;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		int tmp6 = c->__cid;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(268)
		tmp5[tmp6] = null();
		HX_STACK_LINE(269)
		::haxor::physics::broadphase::BroadPhase tmp7 = ::haxor::physics::Physics_obj::get_broadphase();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(269)
		::haxor::component::physics::Collider tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(269)
		tmp7->Remove(tmp8);
		HX_STACK_LINE(270)
		bool tmp9 = (rb != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(270)
		if ((tmp9)){
			HX_STACK_LINE(272)
			Array< ::Dynamic > tmp10 = this->rbc;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(272)
			int tmp11 = rb->__cid;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(272)
			Array< ::Dynamic > tmp12 = tmp10->__get(tmp11).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(272)
			::haxor::component::physics::Collider tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(272)
			tmp12->remove(tmp13);
		}
		HX_STACK_LINE(274)
		::haxor::physics::broadphase::BroadPhase tmp10 = ::haxor::physics::Physics_obj::get_broadphase();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(274)
		::haxor::component::physics::Collider tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(274)
		tmp10->Remove(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsContext_obj,DestroyCollider,(void))

Void PhysicsContext_obj::DestroyRigidBody( ::haxor::component::physics::RigidBody r){
{
		HX_STACK_FRAME("haxor.context.PhysicsContext","DestroyRigidBody",0x19af1b2e,"haxor.context.PhysicsContext.DestroyRigidBody","haxor/context/PhysicsContext.hx",282,0x82743509)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(283)
		Array< ::Dynamic > tmp = this->rigidbodies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		::haxor::component::physics::RigidBody tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		tmp->remove(tmp1);
		HX_STACK_LINE(284)
		Array< ::Dynamic > tmp2 = this->rbc;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		int tmp3 = r->__cid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		Array< ::Dynamic > tmp4 = tmp2->__get(tmp3).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		Array< ::Dynamic > cl = tmp4;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(285)
			int _g = cl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(285)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(285)
				if ((tmp6)){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(285)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(285)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(287)
				::haxor::component::physics::Collider tmp8 = cl->__get(i).StaticCast< ::haxor::component::physics::Collider >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				::haxor::component::physics::Collider c = tmp8;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(288)
				Array< ::Dynamic > tmp9 = this->crb;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(288)
				int tmp10 = c->__cid;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				tmp9[tmp10] = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsContext_obj,DestroyRigidBody,(void))


PhysicsContext_obj::PhysicsContext_obj()
{
}

void PhysicsContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsContext);
	HX_MARK_MEMBER_NAME(rid,"rid");
	HX_MARK_MEMBER_NAME(cid,"cid");
	HX_MARK_MEMBER_NAME(colliders,"colliders");
	HX_MARK_MEMBER_NAME(rigidbodies,"rigidbodies");
	HX_MARK_MEMBER_NAME(rbc,"rbc");
	HX_MARK_MEMBER_NAME(crb,"crb");
	HX_MARK_MEMBER_NAME(collider_dirty,"collider_dirty");
	HX_MARK_MEMBER_NAME(accum_dt,"accum_dt");
	HX_MARK_END_CLASS();
}

void PhysicsContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rid,"rid");
	HX_VISIT_MEMBER_NAME(cid,"cid");
	HX_VISIT_MEMBER_NAME(colliders,"colliders");
	HX_VISIT_MEMBER_NAME(rigidbodies,"rigidbodies");
	HX_VISIT_MEMBER_NAME(rbc,"rbc");
	HX_VISIT_MEMBER_NAME(crb,"crb");
	HX_VISIT_MEMBER_NAME(collider_dirty,"collider_dirty");
	HX_VISIT_MEMBER_NAME(accum_dt,"accum_dt");
}

Dynamic PhysicsContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rid") ) { return rid; }
		if (HX_FIELD_EQ(inName,"cid") ) { return cid; }
		if (HX_FIELD_EQ(inName,"rbc") ) { return rbc; }
		if (HX_FIELD_EQ(inName,"crb") ) { return crb; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Step") ) { return Step_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"accum_dt") ) { return accum_dt; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colliders") ) { return colliders; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rigidbodies") ) { return rigidbodies; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collider_dirty") ) { return collider_dirty; }
		if (HX_FIELD_EQ(inName,"CreateCollider") ) { return CreateCollider_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CreateRigidBody") ) { return CreateRigidBody_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateColliders") ) { return UpdateColliders_dyn(); }
		if (HX_FIELD_EQ(inName,"DestroyCollider") ) { return DestroyCollider_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OnColliderUpdate") ) { return OnColliderUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"DestroyRigidBody") ) { return DestroyRigidBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rid") ) { rid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cid") ) { cid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rbc") ) { rbc=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"crb") ) { crb=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"accum_dt") ) { accum_dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colliders") ) { colliders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rigidbodies") ) { rigidbodies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collider_dirty") ) { collider_dirty=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PhysicsContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PhysicsContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rid","\xcd","\xdc","\x56","\x00"));
	outFields->push(HX_HCSTRING("cid","\xfe","\x7a","\x4b","\x00"));
	outFields->push(HX_HCSTRING("colliders","\xbf","\x6e","\x4d","\xd1"));
	outFields->push(HX_HCSTRING("rigidbodies","\x6b","\x7a","\xa8","\x2f"));
	outFields->push(HX_HCSTRING("rbc","\xb3","\xd6","\x56","\x00"));
	outFields->push(HX_HCSTRING("crb","\xd3","\x82","\x4b","\x00"));
	outFields->push(HX_HCSTRING("collider_dirty","\x87","\xd5","\x1a","\xd2"));
	outFields->push(HX_HCSTRING("accum_dt","\x76","\x71","\x75","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(PhysicsContext_obj,rid),HX_HCSTRING("rid","\xcd","\xdc","\x56","\x00")},
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(PhysicsContext_obj,cid),HX_HCSTRING("cid","\xfe","\x7a","\x4b","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PhysicsContext_obj,colliders),HX_HCSTRING("colliders","\xbf","\x6e","\x4d","\xd1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PhysicsContext_obj,rigidbodies),HX_HCSTRING("rigidbodies","\x6b","\x7a","\xa8","\x2f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PhysicsContext_obj,rbc),HX_HCSTRING("rbc","\xb3","\xd6","\x56","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PhysicsContext_obj,crb),HX_HCSTRING("crb","\xd3","\x82","\x4b","\x00")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(PhysicsContext_obj,collider_dirty),HX_HCSTRING("collider_dirty","\x87","\xd5","\x1a","\xd2")},
	{hx::fsFloat,(int)offsetof(PhysicsContext_obj,accum_dt),HX_HCSTRING("accum_dt","\x76","\x71","\x75","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rid","\xcd","\xdc","\x56","\x00"),
	HX_HCSTRING("cid","\xfe","\x7a","\x4b","\x00"),
	HX_HCSTRING("colliders","\xbf","\x6e","\x4d","\xd1"),
	HX_HCSTRING("rigidbodies","\x6b","\x7a","\xa8","\x2f"),
	HX_HCSTRING("rbc","\xb3","\xd6","\x56","\x00"),
	HX_HCSTRING("crb","\xd3","\x82","\x4b","\x00"),
	HX_HCSTRING("collider_dirty","\x87","\xd5","\x1a","\xd2"),
	HX_HCSTRING("accum_dt","\x76","\x71","\x75","\xfc"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("CreateCollider","\x70","\xf2","\x65","\xc6"),
	HX_HCSTRING("OnColliderUpdate","\xfc","\x21","\x4e","\xde"),
	HX_HCSTRING("CreateRigidBody","\x31","\xa6","\x54","\xdd"),
	HX_HCSTRING("Step","\x6c","\x13","\x35","\x37"),
	HX_HCSTRING("UpdateColliders","\x56","\x47","\x64","\x81"),
	HX_HCSTRING("DestroyCollider","\x2e","\x5a","\x66","\x9c"),
	HX_HCSTRING("DestroyRigidBody","\xb3","\x04","\xaf","\x47"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsContext_obj::__mClass,"__mClass");
};

#endif

hx::Class PhysicsContext_obj::__mClass;

void PhysicsContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.PhysicsContext","\x53","\x18","\x3b","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PhysicsContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PhysicsContext_obj >;
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
} // end namespace context
