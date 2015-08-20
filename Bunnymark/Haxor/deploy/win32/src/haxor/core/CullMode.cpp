#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_CullMode
#include <haxor/core/CullMode.h>
#endif
namespace haxor{
namespace core{

Void CullMode_obj::__construct()
{
	return null();
}

//CullMode_obj::~CullMode_obj() { }

Dynamic CullMode_obj::__CreateEmpty() { return  new CullMode_obj; }
hx::ObjectPtr< CullMode_obj > CullMode_obj::__new()
{  hx::ObjectPtr< CullMode_obj > _result_ = new CullMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic CullMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CullMode_obj > _result_ = new CullMode_obj();
	_result_->__construct();
	return _result_;}

int CullMode_obj::None;

int CullMode_obj::Front;

int CullMode_obj::Back;


CullMode_obj::CullMode_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CullMode_obj::None,HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")},
	{hx::fsInt,(void *) &CullMode_obj::Front,HX_HCSTRING("Front","\x89","\x88","\xbb","\x99")},
	{hx::fsInt,(void *) &CullMode_obj::Back,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CullMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CullMode_obj::None,"None");
	HX_MARK_MEMBER_NAME(CullMode_obj::Front,"Front");
	HX_MARK_MEMBER_NAME(CullMode_obj::Back,"Back");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CullMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CullMode_obj::None,"None");
	HX_VISIT_MEMBER_NAME(CullMode_obj::Front,"Front");
	HX_VISIT_MEMBER_NAME(CullMode_obj::Back,"Back");
};

#endif

hx::Class CullMode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("Front","\x89","\x88","\xbb","\x99"),
	HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),
	String(null()) };

void CullMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.CullMode","\x18","\xe0","\x59","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CullMode_obj >;
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

void CullMode_obj::__boot()
{
	None= (int)0;
	Front= (int)1;
	Back= (int)2;
}

} // end namespace haxor
} // end namespace core
