#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_DepthTest
#include <haxor/core/DepthTest.h>
#endif
namespace haxor{
namespace core{

Void DepthTest_obj::__construct()
{
	return null();
}

//DepthTest_obj::~DepthTest_obj() { }

Dynamic DepthTest_obj::__CreateEmpty() { return  new DepthTest_obj; }
hx::ObjectPtr< DepthTest_obj > DepthTest_obj::__new()
{  hx::ObjectPtr< DepthTest_obj > _result_ = new DepthTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic DepthTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DepthTest_obj > _result_ = new DepthTest_obj();
	_result_->__construct();
	return _result_;}

int DepthTest_obj::Never;

int DepthTest_obj::Less;

int DepthTest_obj::Equal;

int DepthTest_obj::LessEqual;

int DepthTest_obj::Greater;

int DepthTest_obj::NotEqual;

int DepthTest_obj::GreaterEqual;

int DepthTest_obj::Always;


DepthTest_obj::DepthTest_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DepthTest_obj::Never,HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c")},
	{hx::fsInt,(void *) &DepthTest_obj::Less,HX_HCSTRING("Less","\x79","\x3f","\x89","\x32")},
	{hx::fsInt,(void *) &DepthTest_obj::Equal,HX_HCSTRING("Equal","\x94","\x3f","\xb0","\x05")},
	{hx::fsInt,(void *) &DepthTest_obj::LessEqual,HX_HCSTRING("LessEqual","\x7b","\x49","\x71","\xdf")},
	{hx::fsInt,(void *) &DepthTest_obj::Greater,HX_HCSTRING("Greater","\xda","\xb8","\x11","\x85")},
	{hx::fsInt,(void *) &DepthTest_obj::NotEqual,HX_HCSTRING("NotEqual","\xc1","\x5d","\x43","\xdc")},
	{hx::fsInt,(void *) &DepthTest_obj::GreaterEqual,HX_HCSTRING("GreaterEqual","\x7a","\x30","\x30","\x57")},
	{hx::fsInt,(void *) &DepthTest_obj::Always,HX_HCSTRING("Always","\xef","\x82","\x6b","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DepthTest_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DepthTest_obj::Never,"Never");
	HX_MARK_MEMBER_NAME(DepthTest_obj::Less,"Less");
	HX_MARK_MEMBER_NAME(DepthTest_obj::Equal,"Equal");
	HX_MARK_MEMBER_NAME(DepthTest_obj::LessEqual,"LessEqual");
	HX_MARK_MEMBER_NAME(DepthTest_obj::Greater,"Greater");
	HX_MARK_MEMBER_NAME(DepthTest_obj::NotEqual,"NotEqual");
	HX_MARK_MEMBER_NAME(DepthTest_obj::GreaterEqual,"GreaterEqual");
	HX_MARK_MEMBER_NAME(DepthTest_obj::Always,"Always");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DepthTest_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DepthTest_obj::Never,"Never");
	HX_VISIT_MEMBER_NAME(DepthTest_obj::Less,"Less");
	HX_VISIT_MEMBER_NAME(DepthTest_obj::Equal,"Equal");
	HX_VISIT_MEMBER_NAME(DepthTest_obj::LessEqual,"LessEqual");
	HX_VISIT_MEMBER_NAME(DepthTest_obj::Greater,"Greater");
	HX_VISIT_MEMBER_NAME(DepthTest_obj::NotEqual,"NotEqual");
	HX_VISIT_MEMBER_NAME(DepthTest_obj::GreaterEqual,"GreaterEqual");
	HX_VISIT_MEMBER_NAME(DepthTest_obj::Always,"Always");
};

#endif

hx::Class DepthTest_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c"),
	HX_HCSTRING("Less","\x79","\x3f","\x89","\x32"),
	HX_HCSTRING("Equal","\x94","\x3f","\xb0","\x05"),
	HX_HCSTRING("LessEqual","\x7b","\x49","\x71","\xdf"),
	HX_HCSTRING("Greater","\xda","\xb8","\x11","\x85"),
	HX_HCSTRING("NotEqual","\xc1","\x5d","\x43","\xdc"),
	HX_HCSTRING("GreaterEqual","\x7a","\x30","\x30","\x57"),
	HX_HCSTRING("Always","\xef","\x82","\x6b","\x7b"),
	String(null()) };

void DepthTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.DepthTest","\xb2","\xef","\x3e","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DepthTest_obj >;
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

void DepthTest_obj::__boot()
{
	Never= (int)512;
	Less= (int)513;
	Equal= (int)514;
	LessEqual= (int)515;
	Greater= (int)516;
	NotEqual= (int)517;
	GreaterEqual= (int)518;
	Always= (int)519;
}

} // end namespace haxor
} // end namespace core
