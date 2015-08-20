#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_physics_PhysicsMaterial
#include <haxor/physics/PhysicsMaterial.h>
#endif
namespace haxor{
namespace physics{

Void PhysicsMaterial_obj::__construct()
{
HX_STACK_FRAME("haxor.physics.PhysicsMaterial","new",0xb0f44f0d,"haxor.physics.PhysicsMaterial.new","haxor/physics/PhysicsMaterial.hx",38,0x90d8e285)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	super::__construct(null());
	HX_STACK_LINE(40)
	this->bounce = ((Float)0.0);
	HX_STACK_LINE(41)
	this->friction = ((Float)0.0);
}
;
	return null();
}

//PhysicsMaterial_obj::~PhysicsMaterial_obj() { }

Dynamic PhysicsMaterial_obj::__CreateEmpty() { return  new PhysicsMaterial_obj; }
hx::ObjectPtr< PhysicsMaterial_obj > PhysicsMaterial_obj::__new()
{  hx::ObjectPtr< PhysicsMaterial_obj > _result_ = new PhysicsMaterial_obj();
	_result_->__construct();
	return _result_;}

Dynamic PhysicsMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsMaterial_obj > _result_ = new PhysicsMaterial_obj();
	_result_->__construct();
	return _result_;}

::haxor::physics::PhysicsMaterial PhysicsMaterial_obj::m_empty;

::haxor::physics::PhysicsMaterial PhysicsMaterial_obj::get_empty( ){
	HX_STACK_FRAME("haxor.physics.PhysicsMaterial","get_empty",0x4697d551,"haxor.physics.PhysicsMaterial.get_empty","haxor/physics/PhysicsMaterial.hx",17,0x90d8e285)
	HX_STACK_LINE(18)
	::haxor::physics::PhysicsMaterial tmp = ::haxor::physics::PhysicsMaterial_obj::m_empty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	if ((tmp1)){
		HX_STACK_LINE(18)
		::haxor::physics::PhysicsMaterial tmp2 = ::haxor::physics::PhysicsMaterial_obj::m_empty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		return tmp2;
	}
	HX_STACK_LINE(19)
	::haxor::physics::PhysicsMaterial tmp2 = ::haxor::physics::PhysicsMaterial_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	::haxor::physics::PhysicsMaterial_obj::m_empty = tmp2;
	HX_STACK_LINE(20)
	::haxor::physics::PhysicsMaterial tmp3 = ::haxor::physics::PhysicsMaterial_obj::m_empty;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	tmp3->set_name(HX_HCSTRING("$DefaultPhysicsMaterial","\x11","\x10","\xce","\x4d"));
	HX_STACK_LINE(21)
	::haxor::physics::PhysicsMaterial tmp4 = ::haxor::physics::PhysicsMaterial_obj::m_empty;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsMaterial_obj,get_empty,return )


PhysicsMaterial_obj::PhysicsMaterial_obj()
{
}

Dynamic PhysicsMaterial_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
	}
	return super::__Field(inName,inCallProp);
}

bool PhysicsMaterial_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { if (inCallProp == hx::paccAlways) { outValue = get_empty(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_empty") ) { outValue = m_empty; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { outValue = get_empty_dyn(); return true;  }
	}
	return false;
}

Dynamic PhysicsMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounce") ) { bounce=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PhysicsMaterial_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_empty") ) { m_empty=ioValue.Cast< ::haxor::physics::PhysicsMaterial >(); return true; }
	}
	return false;
}

void PhysicsMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66"));
	outFields->push(HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PhysicsMaterial_obj,bounce),HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66")},
	{hx::fsFloat,(int)offsetof(PhysicsMaterial_obj,friction),HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::physics::PhysicsMaterial*/ ,(void *) &PhysicsMaterial_obj::m_empty,HX_HCSTRING("m_empty","\xfb","\x11","\x65","\x20")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66"),
	HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsMaterial_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsMaterial_obj::m_empty,"m_empty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsMaterial_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsMaterial_obj::m_empty,"m_empty");
};

#endif

hx::Class PhysicsMaterial_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_empty","\xfb","\x11","\x65","\x20"),
	HX_HCSTRING("get_empty","\xe4","\x96","\x83","\xb3"),
	String(null()) };

void PhysicsMaterial_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.physics.PhysicsMaterial","\x9b","\xc4","\x6a","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PhysicsMaterial_obj::__GetStatic;
	__mClass->mSetStaticField = &PhysicsMaterial_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PhysicsMaterial_obj >;
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
