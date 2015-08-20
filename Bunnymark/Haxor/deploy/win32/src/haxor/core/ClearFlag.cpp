#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_ClearFlag
#include <haxor/core/ClearFlag.h>
#endif
namespace haxor{
namespace core{

Void ClearFlag_obj::__construct()
{
	return null();
}

//ClearFlag_obj::~ClearFlag_obj() { }

Dynamic ClearFlag_obj::__CreateEmpty() { return  new ClearFlag_obj; }
hx::ObjectPtr< ClearFlag_obj > ClearFlag_obj::__new()
{  hx::ObjectPtr< ClearFlag_obj > _result_ = new ClearFlag_obj();
	_result_->__construct();
	return _result_;}

Dynamic ClearFlag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClearFlag_obj > _result_ = new ClearFlag_obj();
	_result_->__construct();
	return _result_;}

int ClearFlag_obj::None;

int ClearFlag_obj::Color;

int ClearFlag_obj::Depth;

int ClearFlag_obj::Skybox;

int ClearFlag_obj::ColorDepth;

int ClearFlag_obj::SkyboxDepth;


ClearFlag_obj::ClearFlag_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ClearFlag_obj::None,HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")},
	{hx::fsInt,(void *) &ClearFlag_obj::Color,HX_HCSTRING("Color","\x43","\xe1","\x89","\xdd")},
	{hx::fsInt,(void *) &ClearFlag_obj::Depth,HX_HCSTRING("Depth","\xe3","\x60","\x57","\x6a")},
	{hx::fsInt,(void *) &ClearFlag_obj::Skybox,HX_HCSTRING("Skybox","\xea","\x93","\xc4","\x1b")},
	{hx::fsInt,(void *) &ClearFlag_obj::ColorDepth,HX_HCSTRING("ColorDepth","\xc0","\x0c","\x47","\xf2")},
	{hx::fsInt,(void *) &ClearFlag_obj::SkyboxDepth,HX_HCSTRING("SkyboxDepth","\xb9","\x5c","\xa0","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClearFlag_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ClearFlag_obj::None,"None");
	HX_MARK_MEMBER_NAME(ClearFlag_obj::Color,"Color");
	HX_MARK_MEMBER_NAME(ClearFlag_obj::Depth,"Depth");
	HX_MARK_MEMBER_NAME(ClearFlag_obj::Skybox,"Skybox");
	HX_MARK_MEMBER_NAME(ClearFlag_obj::ColorDepth,"ColorDepth");
	HX_MARK_MEMBER_NAME(ClearFlag_obj::SkyboxDepth,"SkyboxDepth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClearFlag_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClearFlag_obj::None,"None");
	HX_VISIT_MEMBER_NAME(ClearFlag_obj::Color,"Color");
	HX_VISIT_MEMBER_NAME(ClearFlag_obj::Depth,"Depth");
	HX_VISIT_MEMBER_NAME(ClearFlag_obj::Skybox,"Skybox");
	HX_VISIT_MEMBER_NAME(ClearFlag_obj::ColorDepth,"ColorDepth");
	HX_VISIT_MEMBER_NAME(ClearFlag_obj::SkyboxDepth,"SkyboxDepth");
};

#endif

hx::Class ClearFlag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("Color","\x43","\xe1","\x89","\xdd"),
	HX_HCSTRING("Depth","\xe3","\x60","\x57","\x6a"),
	HX_HCSTRING("Skybox","\xea","\x93","\xc4","\x1b"),
	HX_HCSTRING("ColorDepth","\xc0","\x0c","\x47","\xf2"),
	HX_HCSTRING("SkyboxDepth","\xb9","\x5c","\xa0","\x2d"),
	String(null()) };

void ClearFlag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.ClearFlag","\x96","\xc0","\x40","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ClearFlag_obj >;
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

void ClearFlag_obj::__boot()
{
	None= (int)0;
	Color= (int)1;
	Depth= (int)2;
	Skybox= (int)4;
	ColorDepth= (int)3;
	SkyboxDepth= (int)6;
}

} // end namespace haxor
} // end namespace core
