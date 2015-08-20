#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_MeshPrimitive
#include <haxor/core/MeshPrimitive.h>
#endif
namespace haxor{
namespace core{

Void MeshPrimitive_obj::__construct()
{
	return null();
}

//MeshPrimitive_obj::~MeshPrimitive_obj() { }

Dynamic MeshPrimitive_obj::__CreateEmpty() { return  new MeshPrimitive_obj; }
hx::ObjectPtr< MeshPrimitive_obj > MeshPrimitive_obj::__new()
{  hx::ObjectPtr< MeshPrimitive_obj > _result_ = new MeshPrimitive_obj();
	_result_->__construct();
	return _result_;}

Dynamic MeshPrimitive_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshPrimitive_obj > _result_ = new MeshPrimitive_obj();
	_result_->__construct();
	return _result_;}

int MeshPrimitive_obj::Points;

int MeshPrimitive_obj::Triangles;

int MeshPrimitive_obj::TriangleStrip;

int MeshPrimitive_obj::TriangleFan;

int MeshPrimitive_obj::Lines;

int MeshPrimitive_obj::LineLoop;

int MeshPrimitive_obj::LineStrip;


MeshPrimitive_obj::MeshPrimitive_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MeshPrimitive_obj::Points,HX_HCSTRING("Points","\x43","\x86","\xc2","\x2b")},
	{hx::fsInt,(void *) &MeshPrimitive_obj::Triangles,HX_HCSTRING("Triangles","\x8b","\x10","\x14","\x21")},
	{hx::fsInt,(void *) &MeshPrimitive_obj::TriangleStrip,HX_HCSTRING("TriangleStrip","\xd0","\xbe","\x3f","\x8d")},
	{hx::fsInt,(void *) &MeshPrimitive_obj::TriangleFan,HX_HCSTRING("TriangleFan","\xcb","\xb8","\x7f","\x9a")},
	{hx::fsInt,(void *) &MeshPrimitive_obj::Lines,HX_HCSTRING("Lines","\xdf","\x4d","\x2f","\x08")},
	{hx::fsInt,(void *) &MeshPrimitive_obj::LineLoop,HX_HCSTRING("LineLoop","\x98","\xb0","\x92","\x5e")},
	{hx::fsInt,(void *) &MeshPrimitive_obj::LineStrip,HX_HCSTRING("LineStrip","\x24","\x36","\xe6","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshPrimitive_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MeshPrimitive_obj::Points,"Points");
	HX_MARK_MEMBER_NAME(MeshPrimitive_obj::Triangles,"Triangles");
	HX_MARK_MEMBER_NAME(MeshPrimitive_obj::TriangleStrip,"TriangleStrip");
	HX_MARK_MEMBER_NAME(MeshPrimitive_obj::TriangleFan,"TriangleFan");
	HX_MARK_MEMBER_NAME(MeshPrimitive_obj::Lines,"Lines");
	HX_MARK_MEMBER_NAME(MeshPrimitive_obj::LineLoop,"LineLoop");
	HX_MARK_MEMBER_NAME(MeshPrimitive_obj::LineStrip,"LineStrip");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshPrimitive_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MeshPrimitive_obj::Points,"Points");
	HX_VISIT_MEMBER_NAME(MeshPrimitive_obj::Triangles,"Triangles");
	HX_VISIT_MEMBER_NAME(MeshPrimitive_obj::TriangleStrip,"TriangleStrip");
	HX_VISIT_MEMBER_NAME(MeshPrimitive_obj::TriangleFan,"TriangleFan");
	HX_VISIT_MEMBER_NAME(MeshPrimitive_obj::Lines,"Lines");
	HX_VISIT_MEMBER_NAME(MeshPrimitive_obj::LineLoop,"LineLoop");
	HX_VISIT_MEMBER_NAME(MeshPrimitive_obj::LineStrip,"LineStrip");
};

#endif

hx::Class MeshPrimitive_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Points","\x43","\x86","\xc2","\x2b"),
	HX_HCSTRING("Triangles","\x8b","\x10","\x14","\x21"),
	HX_HCSTRING("TriangleStrip","\xd0","\xbe","\x3f","\x8d"),
	HX_HCSTRING("TriangleFan","\xcb","\xb8","\x7f","\x9a"),
	HX_HCSTRING("Lines","\xdf","\x4d","\x2f","\x08"),
	HX_HCSTRING("LineLoop","\x98","\xb0","\x92","\x5e"),
	HX_HCSTRING("LineStrip","\x24","\x36","\xe6","\x6c"),
	String(null()) };

void MeshPrimitive_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.MeshPrimitive","\x37","\x68","\x25","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MeshPrimitive_obj >;
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

void MeshPrimitive_obj::__boot()
{
	Points= (int)0;
	Triangles= (int)4;
	TriangleStrip= (int)5;
	TriangleFan= (int)6;
	Lines= (int)1;
	LineLoop= (int)2;
	LineStrip= (int)3;
}

} // end namespace haxor
} // end namespace core
