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
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_PhysicsContext
#include <haxor/context/PhysicsContext.h>
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
#ifndef INCLUDED_haxor_ds_IUSetItem
#include <haxor/ds/IUSetItem.h>
#endif
#ifndef INCLUDED_haxor_ds_PairTable
#include <haxor/ds/PairTable.h>
#endif
#ifndef INCLUDED_haxor_ds_USet
#include <haxor/ds/USet.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_physics_Collision
#include <haxor/physics/Collision.h>
#endif
#ifndef INCLUDED_haxor_physics_Physics
#include <haxor/physics/Physics.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_BroadPhase
#include <haxor/physics/broadphase/BroadPhase.h>
#endif
namespace haxor{
namespace physics{
namespace broadphase{

Void BroadPhase_obj::__construct()
{
HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","new",0xd77298ad,"haxor.physics.broadphase.BroadPhase.new","haxor/physics/broadphase/BroadPhase.hx",38,0xfe120dc4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	::haxor::ds::USet tmp = ::haxor::ds::USet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->pairs = tmp;
	HX_STACK_LINE(41)
	::haxor::ds::PairTable tmp1 = ::haxor::ds::PairTable_obj::__new((int)800,null(),true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	this->m_table = tmp1;
	HX_STACK_LINE(42)
	::haxor::ds::PairTable tmp2 = this->m_table;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	Dynamic tmp3 = this->InitCollisions_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	tmp2->Iterate(tmp3);
}
;
	return null();
}

//BroadPhase_obj::~BroadPhase_obj() { }

Dynamic BroadPhase_obj::__CreateEmpty() { return  new BroadPhase_obj; }
hx::ObjectPtr< BroadPhase_obj > BroadPhase_obj::__new()
{  hx::ObjectPtr< BroadPhase_obj > _result_ = new BroadPhase_obj();
	_result_->__construct();
	return _result_;}

Dynamic BroadPhase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BroadPhase_obj > _result_ = new BroadPhase_obj();
	_result_->__construct();
	return _result_;}

Void BroadPhase_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","Initialize",0xe962c0c3,"haxor.physics.broadphase.BroadPhase.Initialize","haxor/physics/broadphase/BroadPhase.hx",48,0xfe120dc4)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BroadPhase_obj,Initialize,(void))

Void BroadPhase_obj::Step( ){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","Step",0x9b058e7f,"haxor.physics.broadphase.BroadPhase.Step","haxor/physics/broadphase/BroadPhase.hx",53,0xfe120dc4)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BroadPhase_obj,Step,(void))

Void BroadPhase_obj::Update( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","Update",0x10cd9ffc,"haxor.physics.broadphase.BroadPhase.Update","haxor/physics/broadphase/BroadPhase.hx",60,0xfe120dc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BroadPhase_obj,Update,(void))

Void BroadPhase_obj::Add( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","Add",0xd750724e,"haxor.physics.broadphase.BroadPhase.Add","haxor/physics/broadphase/BroadPhase.hx",66,0xfe120dc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BroadPhase_obj,Add,(void))

Void BroadPhase_obj::Remove( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","Remove",0x8e50b637,"haxor.physics.broadphase.BroadPhase.Remove","haxor/physics/broadphase/BroadPhase.hx",72,0xfe120dc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BroadPhase_obj,Remove,(void))

Void BroadPhase_obj::Query( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","Query",0xe3b33075,"haxor.physics.broadphase.BroadPhase.Query","haxor/physics/broadphase/BroadPhase.hx",77,0xfe120dc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BroadPhase_obj,Query,(void))

Void BroadPhase_obj::Clear( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","Clear",0xce2416fa,"haxor.physics.broadphase.BroadPhase.Clear","haxor/physics/broadphase/BroadPhase.hx",83,0xfe120dc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(84)
		int cid = c->__cid;		HX_STACK_VAR(cid,"cid");
		HX_STACK_LINE(85)
		::haxor::physics::Collision col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				bool tmp = (_g < cid);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(86)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(86)
				if ((tmp1)){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(86)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(86)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(88)
				::haxor::ds::PairTable tmp3 = this->m_table;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(88)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(88)
				int tmp5 = cid;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				::haxor::physics::Collision tmp6 = tmp3->Get(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				col = tmp6;
				HX_STACK_LINE(89)
				::haxor::ds::USet tmp7 = this->pairs;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				::haxor::physics::Collision tmp8 = col;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(89)
				tmp7->Remove(tmp8);
			}
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int tmp = (cid + (int)1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			int _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(91)
			::haxor::ds::PairTable tmp1 = this->m_table;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			int tmp2 = tmp1->get_rows();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			while((true)){
				HX_STACK_LINE(91)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(91)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				if ((tmp4)){
					HX_STACK_LINE(91)
					break;
				}
				HX_STACK_LINE(91)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(93)
				::haxor::ds::PairTable tmp6 = this->m_table;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				int tmp7 = cid;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				::haxor::physics::Collision tmp9 = tmp6->Get(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				col = tmp9;
				HX_STACK_LINE(94)
				::haxor::ds::USet tmp10 = this->pairs;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(94)
				::haxor::physics::Collision tmp11 = col;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				tmp10->Remove(tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BroadPhase_obj,Clear,(void))

Void BroadPhase_obj::OnFetch( ::haxor::component::physics::Collider a,::haxor::component::physics::Collider b){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","OnFetch",0x99864d48,"haxor.physics.broadphase.BroadPhase.OnFetch","haxor/physics/broadphase/BroadPhase.hx",103,0xfe120dc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(104)
		bool tmp = (a->__cid > b->__cid);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		if ((tmp)){
			HX_STACK_LINE(104)
			tmp1 = a->__cid;
		}
		else{
			HX_STACK_LINE(104)
			tmp1 = b->__cid;
		}
		HX_STACK_LINE(104)
		int ia = tmp1;		HX_STACK_VAR(ia,"ia");
		HX_STACK_LINE(105)
		bool tmp2 = (a->__cid < b->__cid);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		if ((tmp2)){
			HX_STACK_LINE(105)
			tmp3 = a->__cid;
		}
		else{
			HX_STACK_LINE(105)
			tmp3 = b->__cid;
		}
		HX_STACK_LINE(105)
		int ib = tmp3;		HX_STACK_VAR(ib,"ib");
		HX_STACK_LINE(106)
		bool tmp4 = (ia == ib);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		if ((tmp4)){
			HX_STACK_LINE(106)
			return null();
		}
		HX_STACK_LINE(108)
		::haxor::context::PhysicsContext tmp5 = ::haxor::context::EngineContext_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		Array< ::Dynamic > tmp6 = tmp5->crb;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		int tmp7 = ia;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		::haxor::component::physics::RigidBody tmp8 = tmp6->__get(tmp7).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(108)
		::haxor::component::physics::RigidBody ra = tmp8;		HX_STACK_VAR(ra,"ra");
		HX_STACK_LINE(109)
		::haxor::context::PhysicsContext tmp9 = ::haxor::context::EngineContext_obj::physics;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(109)
		Array< ::Dynamic > tmp10 = tmp9->crb;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(109)
		int tmp11 = ib;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(109)
		::haxor::component::physics::RigidBody tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::component::physics::RigidBody >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(109)
		::haxor::component::physics::RigidBody rb = tmp12;		HX_STACK_VAR(rb,"rb");
		HX_STACK_LINE(111)
		bool tmp13 = (ra == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(111)
		if ((tmp13)){
			HX_STACK_LINE(111)
			bool tmp14 = (rb == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(111)
			if ((tmp14)){
				HX_STACK_LINE(111)
				return null();
			}
		}
		HX_STACK_LINE(113)
		bool tmp14 = (ra != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(113)
		if ((tmp14)){
			HX_STACK_LINE(113)
			bool tmp15 = ra->get_enabled();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(113)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(113)
			if ((tmp16)){
				HX_STACK_LINE(113)
				return null();
			}
		}
		HX_STACK_LINE(114)
		bool tmp15 = (rb != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(114)
		if ((tmp15)){
			HX_STACK_LINE(114)
			bool tmp16 = rb->get_enabled();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(114)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(114)
			if ((tmp17)){
				HX_STACK_LINE(114)
				return null();
			}
		}
		HX_STACK_LINE(116)
		bool tmp16 = (ia > ib);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(116)
		::haxor::component::physics::Collider tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(116)
		if ((tmp16)){
			HX_STACK_LINE(116)
			tmp17 = a;
		}
		else{
			HX_STACK_LINE(116)
			tmp17 = b;
		}
		HX_STACK_LINE(116)
		::haxor::component::physics::Collider ca = tmp17;		HX_STACK_VAR(ca,"ca");
		HX_STACK_LINE(117)
		bool tmp18 = ca->get_enabled();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(117)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(117)
		if ((tmp19)){
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(119)
		bool tmp20 = (ia < ib);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(119)
		::haxor::component::physics::Collider tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(119)
		if ((tmp20)){
			HX_STACK_LINE(119)
			tmp21 = a;
		}
		else{
			HX_STACK_LINE(119)
			tmp21 = b;
		}
		HX_STACK_LINE(119)
		::haxor::component::physics::Collider cb = tmp21;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(120)
		bool tmp22 = cb->get_enabled();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(120)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(120)
		if ((tmp23)){
			HX_STACK_LINE(120)
			return null();
		}
		HX_STACK_LINE(122)
		int tmp24 = ca->m_entity->m_layer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(122)
		int tmp25 = cb->m_entity->m_layer;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(122)
		bool tmp26 = ::haxor::physics::Physics_obj::CanInteract(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(122)
		bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(122)
		if ((tmp27)){
			HX_STACK_LINE(122)
			return null();
		}
		HX_STACK_LINE(124)
		::haxor::ds::PairTable tmp28 = this->m_table;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(124)
		int tmp29 = ia;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(124)
		int tmp30 = ib;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(124)
		::haxor::physics::Collision tmp31 = tmp28->Get(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(124)
		::haxor::physics::Collision col = tmp31;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(125)
		col->Reset();
		HX_STACK_LINE(126)
		col->from = ca;
		HX_STACK_LINE(127)
		col->to = cb;
		HX_STACK_LINE(128)
		::haxor::ds::USet tmp32 = this->pairs;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(128)
		::haxor::physics::Collision tmp33 = col;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(128)
		tmp32->Add(tmp33);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BroadPhase_obj,OnFetch,(void))

Void BroadPhase_obj::InitCollisions( int p_x,int p_y,::haxor::physics::Collision p_v){
{
		HX_STACK_FRAME("haxor.physics.broadphase.BroadPhase","InitCollisions",0x7d1333e4,"haxor.physics.broadphase.BroadPhase.InitCollisions","haxor/physics/broadphase/BroadPhase.hx",138,0xfe120dc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(139)
		::haxor::ds::PairTable tmp = this->m_table;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		int tmp1 = p_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		int tmp2 = p_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		::haxor::physics::Collision tmp3 = ::haxor::physics::Collision_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		tmp->Set(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BroadPhase_obj,InitCollisions,(void))


BroadPhase_obj::BroadPhase_obj()
{
}

void BroadPhase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BroadPhase);
	HX_MARK_MEMBER_NAME(pairs,"pairs");
	HX_MARK_MEMBER_NAME(m_table,"m_table");
	HX_MARK_END_CLASS();
}

void BroadPhase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pairs,"pairs");
	HX_VISIT_MEMBER_NAME(m_table,"m_table");
}

Dynamic BroadPhase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Step") ) { return Step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pairs") ) { return pairs; }
		if (HX_FIELD_EQ(inName,"Query") ) { return Query_dyn(); }
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_table") ) { return m_table; }
		if (HX_FIELD_EQ(inName,"OnFetch") ) { return OnFetch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"InitCollisions") ) { return InitCollisions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BroadPhase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pairs") ) { pairs=inValue.Cast< ::haxor::ds::USet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_table") ) { m_table=inValue.Cast< ::haxor::ds::PairTable >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BroadPhase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BroadPhase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd"));
	outFields->push(HX_HCSTRING("m_table","\x7c","\x8f","\x6e","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::ds::USet*/ ,(int)offsetof(BroadPhase_obj,pairs),HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd")},
	{hx::fsObject /*::haxor::ds::PairTable*/ ,(int)offsetof(BroadPhase_obj,m_table),HX_HCSTRING("m_table","\x7c","\x8f","\x6e","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd"),
	HX_HCSTRING("m_table","\x7c","\x8f","\x6e","\xbb"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Step","\x6c","\x13","\x35","\x37"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Query","\xe8","\xfa","\x17","\xf1"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("OnFetch","\x7b","\xda","\x88","\x61"),
	HX_HCSTRING("InitCollisions","\x11","\x03","\x39","\xc7"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BroadPhase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BroadPhase_obj::__mClass,"__mClass");
};

#endif

hx::Class BroadPhase_obj::__mClass;

void BroadPhase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.physics.broadphase.BroadPhase","\x3b","\xbe","\x5b","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BroadPhase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BroadPhase_obj >;
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
} // end namespace broadphase
