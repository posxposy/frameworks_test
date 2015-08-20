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
#ifndef INCLUDED_haxor_ds_SAP
#include <haxor/ds/SAP.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_BroadPhase
#include <haxor/physics/broadphase/BroadPhase.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_SAPBroadPhase
#include <haxor/physics/broadphase/SAPBroadPhase.h>
#endif
namespace haxor{
namespace physics{
namespace broadphase{

Void SAPBroadPhase_obj::__construct()
{
HX_STACK_FRAME("haxor.physics.broadphase.SAPBroadPhase","new",0x29d23e6b,"haxor.physics.broadphase.SAPBroadPhase.new","haxor/physics/broadphase/SAPBroadPhase.hx",16,0x257b77a4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

//SAPBroadPhase_obj::~SAPBroadPhase_obj() { }

Dynamic SAPBroadPhase_obj::__CreateEmpty() { return  new SAPBroadPhase_obj; }
hx::ObjectPtr< SAPBroadPhase_obj > SAPBroadPhase_obj::__new()
{  hx::ObjectPtr< SAPBroadPhase_obj > _result_ = new SAPBroadPhase_obj();
	_result_->__construct();
	return _result_;}

Dynamic SAPBroadPhase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SAPBroadPhase_obj > _result_ = new SAPBroadPhase_obj();
	_result_->__construct();
	return _result_;}

Void SAPBroadPhase_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.physics.broadphase.SAPBroadPhase","Initialize",0x27e26ec5,"haxor.physics.broadphase.SAPBroadPhase.Initialize","haxor/physics/broadphase/SAPBroadPhase.hx",28,0x257b77a4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::haxor::ds::SAP tmp = ::haxor::ds::SAP_obj::__new(((Float)0.0),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		this->sap = tmp;
	}
return null();
}


Void SAPBroadPhase_obj::Update( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.SAPBroadPhase","Update",0xd199a4fe,"haxor.physics.broadphase.SAPBroadPhase.Update","haxor/physics/broadphase/SAPBroadPhase.hx",37,0x257b77a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(38)
		bool tmp = c->m_aabb_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(38)
			c->GenerateAABB();
			HX_STACK_LINE(38)
			c->m_aabb_dirty = false;
		}
		HX_STACK_LINE(39)
		::haxor::math::AABB3 bb = c->m_aabb;		HX_STACK_VAR(bb,"bb");
		HX_STACK_LINE(40)
		::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::haxor::context::DataContext tmp2 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			::haxor::context::DataContext _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(40)
			Array< ::Dynamic > tmp3 = _this->m_v3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			int tmp4 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			int tmp5 = _this->m_v3->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			int tmp7 = _this->m_nv3 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			tmp1 = tmp3->__get(tmp7).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(40)
		Float tmp2 = bb->m_xMin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		Float tmp3 = bb->m_yMin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		Float tmp4 = bb->m_zMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::haxor::math::Vector3 tmp5 = tmp1->Set(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		::haxor::math::Vector3 vmin = tmp5;		HX_STACK_VAR(vmin,"vmin");
		HX_STACK_LINE(41)
		::haxor::math::Vector3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::haxor::context::DataContext tmp7 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			::haxor::context::DataContext _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(41)
			Array< ::Dynamic > tmp8 = _this->m_v3;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			int tmp9 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			int tmp10 = _this->m_v3->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(41)
			int tmp11 = hx::Mod(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(41)
			int tmp12 = _this->m_nv3 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(41)
			tmp6 = tmp8->__get(tmp12).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(41)
		Float tmp7 = bb->m_xMax;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		Float tmp8 = bb->m_yMax;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		Float tmp9 = bb->m_zMax;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		::haxor::math::Vector3 tmp10 = tmp6->Set(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		::haxor::math::Vector3 vmax = tmp10;		HX_STACK_VAR(vmax,"vmax");
		HX_STACK_LINE(42)
		::haxor::ds::SAP tmp11 = this->sap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		int tmp12 = c->__cid;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		::haxor::component::physics::Collider tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(42)
		::haxor::math::Vector3 tmp14 = vmin;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(42)
		::haxor::math::Vector3 tmp15 = vmax;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(42)
		tmp11->Update(tmp12,tmp13,tmp14,tmp15);
	}
return null();
}


Void SAPBroadPhase_obj::Add( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.SAPBroadPhase","Add",0x29b0180c,"haxor.physics.broadphase.SAPBroadPhase.Add","haxor/physics/broadphase/SAPBroadPhase.hx",50,0x257b77a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(51)
		::haxor::ds::SAP tmp = this->sap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		int tmp1 = c->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		tmp->Create(tmp1);
	}
return null();
}


Void SAPBroadPhase_obj::Remove( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.SAPBroadPhase","Remove",0x4f1cbb39,"haxor.physics.broadphase.SAPBroadPhase.Remove","haxor/physics/broadphase/SAPBroadPhase.hx",59,0x257b77a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(60)
		::haxor::ds::SAP tmp = this->sap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		int tmp1 = c->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		tmp->Remove(tmp1);
	}
return null();
}


Void SAPBroadPhase_obj::Query( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.physics.broadphase.SAPBroadPhase","Query",0x499641b3,"haxor.physics.broadphase.SAPBroadPhase.Query","haxor/physics/broadphase/SAPBroadPhase.hx",68,0x257b77a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(69)
		::haxor::ds::SAP tmp = this->sap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		int tmp1 = c->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		Dynamic tmp2 = this->OnSAPFetch_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		tmp->Query(tmp1,tmp2);
	}
return null();
}


Void SAPBroadPhase_obj::OnSAPFetch( Dynamic a,Dynamic b){
{
		HX_STACK_FRAME("haxor.physics.broadphase.SAPBroadPhase","OnSAPFetch",0xe72ede6c,"haxor.physics.broadphase.SAPBroadPhase.OnSAPFetch","haxor/physics/broadphase/SAPBroadPhase.hx",77,0x257b77a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(78)
		::haxor::component::physics::Collider tmp = ((::haxor::component::physics::Collider)(a));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		::haxor::component::physics::Collider tmp1 = ((::haxor::component::physics::Collider)(b));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		this->OnFetch(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SAPBroadPhase_obj,OnSAPFetch,(void))


SAPBroadPhase_obj::SAPBroadPhase_obj()
{
}

void SAPBroadPhase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SAPBroadPhase);
	HX_MARK_MEMBER_NAME(sap,"sap");
	::haxor::physics::broadphase::BroadPhase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SAPBroadPhase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sap,"sap");
	::haxor::physics::broadphase::BroadPhase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SAPBroadPhase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sap") ) { return sap; }
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Query") ) { return Query_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"OnSAPFetch") ) { return OnSAPFetch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SAPBroadPhase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sap") ) { sap=inValue.Cast< ::haxor::ds::SAP >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SAPBroadPhase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SAPBroadPhase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sap","\x22","\x98","\x57","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::ds::SAP*/ ,(int)offsetof(SAPBroadPhase_obj,sap),HX_HCSTRING("sap","\x22","\x98","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sap","\x22","\x98","\x57","\x00"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Query","\xe8","\xfa","\x17","\xf1"),
	HX_HCSTRING("OnSAPFetch","\x17","\xa5","\xb8","\xa2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SAPBroadPhase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SAPBroadPhase_obj::__mClass,"__mClass");
};

#endif

hx::Class SAPBroadPhase_obj::__mClass;

void SAPBroadPhase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.physics.broadphase.SAPBroadPhase","\xf9","\x2c","\xca","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SAPBroadPhase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SAPBroadPhase_obj >;
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
