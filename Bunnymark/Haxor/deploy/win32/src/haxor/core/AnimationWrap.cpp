#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_AnimationWrap
#include <haxor/core/AnimationWrap.h>
#endif
namespace haxor{
namespace core{

Void AnimationWrap_obj::__construct()
{
	return null();
}

//AnimationWrap_obj::~AnimationWrap_obj() { }

Dynamic AnimationWrap_obj::__CreateEmpty() { return  new AnimationWrap_obj; }
hx::ObjectPtr< AnimationWrap_obj > AnimationWrap_obj::__new()
{  hx::ObjectPtr< AnimationWrap_obj > _result_ = new AnimationWrap_obj();
	_result_->__construct();
	return _result_;}

Dynamic AnimationWrap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationWrap_obj > _result_ = new AnimationWrap_obj();
	_result_->__construct();
	return _result_;}

int AnimationWrap_obj::Clamp;

int AnimationWrap_obj::Loop;

int AnimationWrap_obj::Oscilate;


AnimationWrap_obj::AnimationWrap_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &AnimationWrap_obj::Clamp,HX_HCSTRING("Clamp","\xdb","\xe2","\x85","\xdb")},
	{hx::fsInt,(void *) &AnimationWrap_obj::Loop,HX_HCSTRING("Loop","\x84","\xd2","\x90","\x32")},
	{hx::fsInt,(void *) &AnimationWrap_obj::Oscilate,HX_HCSTRING("Oscilate","\x10","\x3d","\xca","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationWrap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationWrap_obj::Clamp,"Clamp");
	HX_MARK_MEMBER_NAME(AnimationWrap_obj::Loop,"Loop");
	HX_MARK_MEMBER_NAME(AnimationWrap_obj::Oscilate,"Oscilate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationWrap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationWrap_obj::Clamp,"Clamp");
	HX_VISIT_MEMBER_NAME(AnimationWrap_obj::Loop,"Loop");
	HX_VISIT_MEMBER_NAME(AnimationWrap_obj::Oscilate,"Oscilate");
};

#endif

hx::Class AnimationWrap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Clamp","\xdb","\xe2","\x85","\xdb"),
	HX_HCSTRING("Loop","\x84","\xd2","\x90","\x32"),
	HX_HCSTRING("Oscilate","\x10","\x3d","\xca","\xa6"),
	String(null()) };

void AnimationWrap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.AnimationWrap","\x2b","\x96","\x9e","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AnimationWrap_obj >;
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

void AnimationWrap_obj::__boot()
{
	Clamp= (int)0;
	Loop= (int)1;
	Oscilate= (int)2;
}

} // end namespace haxor
} // end namespace core
