#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_ShaderPrecision
#include <haxor/core/ShaderPrecision.h>
#endif
namespace haxor{
namespace core{

Void ShaderPrecision_obj::__construct()
{
	return null();
}

//ShaderPrecision_obj::~ShaderPrecision_obj() { }

Dynamic ShaderPrecision_obj::__CreateEmpty() { return  new ShaderPrecision_obj; }
hx::ObjectPtr< ShaderPrecision_obj > ShaderPrecision_obj::__new()
{  hx::ObjectPtr< ShaderPrecision_obj > _result_ = new ShaderPrecision_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderPrecision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderPrecision_obj > _result_ = new ShaderPrecision_obj();
	_result_->__construct();
	return _result_;}

int ShaderPrecision_obj::None;

int ShaderPrecision_obj::VertexLow;

int ShaderPrecision_obj::VertexMed;

int ShaderPrecision_obj::VertexHigh;

int ShaderPrecision_obj::FragmentLow;

int ShaderPrecision_obj::FragmentMed;

int ShaderPrecision_obj::FragmentHigh;


ShaderPrecision_obj::ShaderPrecision_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ShaderPrecision_obj::None,HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")},
	{hx::fsInt,(void *) &ShaderPrecision_obj::VertexLow,HX_HCSTRING("VertexLow","\x70","\x47","\xf9","\xca")},
	{hx::fsInt,(void *) &ShaderPrecision_obj::VertexMed,HX_HCSTRING("VertexMed","\xe8","\x00","\xfa","\xca")},
	{hx::fsInt,(void *) &ShaderPrecision_obj::VertexHigh,HX_HCSTRING("VertexHigh","\x06","\xc5","\x7b","\xcc")},
	{hx::fsInt,(void *) &ShaderPrecision_obj::FragmentLow,HX_HCSTRING("FragmentLow","\x84","\x06","\x69","\x88")},
	{hx::fsInt,(void *) &ShaderPrecision_obj::FragmentMed,HX_HCSTRING("FragmentMed","\xfc","\xbf","\x69","\x88")},
	{hx::fsInt,(void *) &ShaderPrecision_obj::FragmentHigh,HX_HCSTRING("FragmentHigh","\x72","\x37","\xd3","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderPrecision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShaderPrecision_obj::None,"None");
	HX_MARK_MEMBER_NAME(ShaderPrecision_obj::VertexLow,"VertexLow");
	HX_MARK_MEMBER_NAME(ShaderPrecision_obj::VertexMed,"VertexMed");
	HX_MARK_MEMBER_NAME(ShaderPrecision_obj::VertexHigh,"VertexHigh");
	HX_MARK_MEMBER_NAME(ShaderPrecision_obj::FragmentLow,"FragmentLow");
	HX_MARK_MEMBER_NAME(ShaderPrecision_obj::FragmentMed,"FragmentMed");
	HX_MARK_MEMBER_NAME(ShaderPrecision_obj::FragmentHigh,"FragmentHigh");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderPrecision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_obj::None,"None");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_obj::VertexLow,"VertexLow");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_obj::VertexMed,"VertexMed");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_obj::VertexHigh,"VertexHigh");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_obj::FragmentLow,"FragmentLow");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_obj::FragmentMed,"FragmentMed");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_obj::FragmentHigh,"FragmentHigh");
};

#endif

hx::Class ShaderPrecision_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("VertexLow","\x70","\x47","\xf9","\xca"),
	HX_HCSTRING("VertexMed","\xe8","\x00","\xfa","\xca"),
	HX_HCSTRING("VertexHigh","\x06","\xc5","\x7b","\xcc"),
	HX_HCSTRING("FragmentLow","\x84","\x06","\x69","\x88"),
	HX_HCSTRING("FragmentMed","\xfc","\xbf","\x69","\x88"),
	HX_HCSTRING("FragmentHigh","\x72","\x37","\xd3","\xd0"),
	String(null()) };

void ShaderPrecision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.ShaderPrecision","\xd6","\xe1","\x28","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ShaderPrecision_obj >;
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

void ShaderPrecision_obj::__boot()
{
	None= (int)0;
	VertexLow= (int)1;
	VertexMed= (int)2;
	VertexHigh= (int)4;
	FragmentLow= (int)8;
	FragmentMed= (int)16;
	FragmentHigh= (int)32;
}

} // end namespace haxor
} // end namespace core
