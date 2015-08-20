#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_light_Light
#include <haxor/component/light/Light.h>
#endif
#ifndef INCLUDED_haxor_component_light_PointLight
#include <haxor/component/light/PointLight.h>
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
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
namespace haxor{
namespace component{
namespace light{

Void PointLight_obj::__construct()
{
HX_STACK_FRAME("haxor.component.light.PointLight","new",0x7217a30d,"haxor.component.light.PointLight.new","haxor/component/light/PointLight.hx",46,0x6f327660)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(47)
	super::__construct();
	HX_STACK_LINE(48)
	this->atten = ((Float)1.0);
	HX_STACK_LINE(49)
	this->radius = ((Float)1.0);
}
;
	return null();
}

//PointLight_obj::~PointLight_obj() { }

Dynamic PointLight_obj::__CreateEmpty() { return  new PointLight_obj; }
hx::ObjectPtr< PointLight_obj > PointLight_obj::__new()
{  hx::ObjectPtr< PointLight_obj > _result_ = new PointLight_obj();
	_result_->__construct();
	return _result_;}

Dynamic PointLight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PointLight_obj > _result_ = new PointLight_obj();
	_result_->__construct();
	return _result_;}

::haxor::component::light::PointLight PointLight_obj::Create( ::haxor::math::Color p_color,Float p_intensity,Float p_atten,Float p_radius){
	HX_STACK_FRAME("haxor.component.light.PointLight","Create",0xbbe9328f,"haxor.component.light.PointLight.Create","haxor/component/light/PointLight.hx",21,0x6f327660)
	HX_STACK_ARG(p_color,"p_color")
	HX_STACK_ARG(p_intensity,"p_intensity")
	HX_STACK_ARG(p_atten,"p_atten")
	HX_STACK_ARG(p_radius,"p_radius")
	HX_STACK_LINE(22)
	::haxor::core::Entity tmp = ::haxor::core::Entity_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::haxor::core::Entity e = tmp;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(23)
	e->set_name(HX_HCSTRING("PointLight","\x86","\xae","\x6b","\x4b"));
	HX_STACK_LINE(24)
	Dynamic tmp1 = e->AddComponent(hx::ClassOf< ::haxor::component::light::PointLight >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::haxor::component::light::PointLight l = tmp1;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(25)
	l->color = p_color;
	HX_STACK_LINE(26)
	l->intensity = p_intensity;
	HX_STACK_LINE(27)
	l->atten = p_atten;
	HX_STACK_LINE(28)
	l->radius = p_radius;
	HX_STACK_LINE(29)
	::haxor::component::light::PointLight tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PointLight_obj,Create,return )


PointLight_obj::PointLight_obj()
{
}

Dynamic PointLight_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"atten") ) { return atten; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
	}
	return super::__Field(inName,inCallProp);
}

bool PointLight_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Create") ) { outValue = Create_dyn(); return true;  }
	}
	return false;
}

Dynamic PointLight_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"atten") ) { atten=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PointLight_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PointLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("atten","\xca","\x62","\xe3","\x26"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PointLight_obj,atten),HX_HCSTRING("atten","\xca","\x62","\xe3","\x26")},
	{hx::fsFloat,(int)offsetof(PointLight_obj,radius),HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("atten","\xca","\x62","\xe3","\x26"),
	HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PointLight_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PointLight_obj::__mClass,"__mClass");
};

#endif

hx::Class PointLight_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Create","\x1c","\xdb","\xa3","\xb0"),
	String(null()) };

void PointLight_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.light.PointLight","\x9b","\x18","\x54","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PointLight_obj::__GetStatic;
	__mClass->mSetStaticField = &PointLight_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PointLight_obj >;
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
} // end namespace light
