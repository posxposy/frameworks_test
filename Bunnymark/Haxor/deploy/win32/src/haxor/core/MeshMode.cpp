#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_MeshMode
#include <haxor/core/MeshMode.h>
#endif
namespace haxor{
namespace core{

Void MeshMode_obj::__construct()
{
	return null();
}

//MeshMode_obj::~MeshMode_obj() { }

Dynamic MeshMode_obj::__CreateEmpty() { return  new MeshMode_obj; }
hx::ObjectPtr< MeshMode_obj > MeshMode_obj::__new()
{  hx::ObjectPtr< MeshMode_obj > _result_ = new MeshMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic MeshMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshMode_obj > _result_ = new MeshMode_obj();
	_result_->__construct();
	return _result_;}

int MeshMode_obj::StaticDraw;

int MeshMode_obj::StreamDraw;

int MeshMode_obj::DynamicDraw;


MeshMode_obj::MeshMode_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MeshMode_obj::StaticDraw,HX_HCSTRING("StaticDraw","\xf2","\x27","\xcd","\x9a")},
	{hx::fsInt,(void *) &MeshMode_obj::StreamDraw,HX_HCSTRING("StreamDraw","\xc4","\xb0","\x8b","\x86")},
	{hx::fsInt,(void *) &MeshMode_obj::DynamicDraw,HX_HCSTRING("DynamicDraw","\x03","\xbb","\x30","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MeshMode_obj::StaticDraw,"StaticDraw");
	HX_MARK_MEMBER_NAME(MeshMode_obj::StreamDraw,"StreamDraw");
	HX_MARK_MEMBER_NAME(MeshMode_obj::DynamicDraw,"DynamicDraw");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MeshMode_obj::StaticDraw,"StaticDraw");
	HX_VISIT_MEMBER_NAME(MeshMode_obj::StreamDraw,"StreamDraw");
	HX_VISIT_MEMBER_NAME(MeshMode_obj::DynamicDraw,"DynamicDraw");
};

#endif

hx::Class MeshMode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("StaticDraw","\xf2","\x27","\xcd","\x9a"),
	HX_HCSTRING("StreamDraw","\xc4","\xb0","\x8b","\x86"),
	HX_HCSTRING("DynamicDraw","\x03","\xbb","\x30","\x4c"),
	String(null()) };

void MeshMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.MeshMode","\xd3","\x1d","\xe0","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MeshMode_obj >;
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

void MeshMode_obj::__boot()
{
	StaticDraw= (int)35044;
	StreamDraw= (int)35040;
	DynamicDraw= (int)35048;
}

} // end namespace haxor
} // end namespace core
