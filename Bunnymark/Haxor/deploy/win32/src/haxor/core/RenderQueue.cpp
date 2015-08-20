#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_RenderQueue
#include <haxor/core/RenderQueue.h>
#endif
namespace haxor{
namespace core{

Void RenderQueue_obj::__construct()
{
	return null();
}

//RenderQueue_obj::~RenderQueue_obj() { }

Dynamic RenderQueue_obj::__CreateEmpty() { return  new RenderQueue_obj; }
hx::ObjectPtr< RenderQueue_obj > RenderQueue_obj::__new()
{  hx::ObjectPtr< RenderQueue_obj > _result_ = new RenderQueue_obj();
	_result_->__construct();
	return _result_;}

Dynamic RenderQueue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderQueue_obj > _result_ = new RenderQueue_obj();
	_result_->__construct();
	return _result_;}

int RenderQueue_obj::Background;

int RenderQueue_obj::Opaque;

int RenderQueue_obj::Transparent;

int RenderQueue_obj::Overlay;

int RenderQueue_obj::Interface;


RenderQueue_obj::RenderQueue_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &RenderQueue_obj::Background,HX_HCSTRING("Background","\x0e","\x98","\xce","\x1c")},
	{hx::fsInt,(void *) &RenderQueue_obj::Opaque,HX_HCSTRING("Opaque","\x01","\x51","\x86","\x53")},
	{hx::fsInt,(void *) &RenderQueue_obj::Transparent,HX_HCSTRING("Transparent","\x32","\xc3","\xec","\x06")},
	{hx::fsInt,(void *) &RenderQueue_obj::Overlay,HX_HCSTRING("Overlay","\x70","\x6b","\x61","\x76")},
	{hx::fsInt,(void *) &RenderQueue_obj::Interface,HX_HCSTRING("Interface","\x99","\x11","\xad","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderQueue_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderQueue_obj::Background,"Background");
	HX_MARK_MEMBER_NAME(RenderQueue_obj::Opaque,"Opaque");
	HX_MARK_MEMBER_NAME(RenderQueue_obj::Transparent,"Transparent");
	HX_MARK_MEMBER_NAME(RenderQueue_obj::Overlay,"Overlay");
	HX_MARK_MEMBER_NAME(RenderQueue_obj::Interface,"Interface");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderQueue_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderQueue_obj::Background,"Background");
	HX_VISIT_MEMBER_NAME(RenderQueue_obj::Opaque,"Opaque");
	HX_VISIT_MEMBER_NAME(RenderQueue_obj::Transparent,"Transparent");
	HX_VISIT_MEMBER_NAME(RenderQueue_obj::Overlay,"Overlay");
	HX_VISIT_MEMBER_NAME(RenderQueue_obj::Interface,"Interface");
};

#endif

hx::Class RenderQueue_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Background","\x0e","\x98","\xce","\x1c"),
	HX_HCSTRING("Opaque","\x01","\x51","\x86","\x53"),
	HX_HCSTRING("Transparent","\x32","\xc3","\xec","\x06"),
	HX_HCSTRING("Overlay","\x70","\x6b","\x61","\x76"),
	HX_HCSTRING("Interface","\x99","\x11","\xad","\xdb"),
	String(null()) };

void RenderQueue_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.RenderQueue","\x58","\xf0","\xf7","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RenderQueue_obj >;
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

void RenderQueue_obj::__boot()
{
	Background= (int)0;
	Opaque= (int)1000;
	Transparent= (int)2000;
	Overlay= (int)3000;
	Interface= (int)4000;
}

} // end namespace haxor
} // end namespace core
