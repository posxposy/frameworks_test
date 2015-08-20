#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_BlendMode
#include <haxor/core/BlendMode.h>
#endif
namespace haxor{
namespace core{

Void BlendMode_obj::__construct()
{
	return null();
}

//BlendMode_obj::~BlendMode_obj() { }

Dynamic BlendMode_obj::__CreateEmpty() { return  new BlendMode_obj; }
hx::ObjectPtr< BlendMode_obj > BlendMode_obj::__new()
{  hx::ObjectPtr< BlendMode_obj > _result_ = new BlendMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic BlendMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlendMode_obj > _result_ = new BlendMode_obj();
	_result_->__construct();
	return _result_;}

int BlendMode_obj::Zero;

int BlendMode_obj::One;

int BlendMode_obj::SrcColor;

int BlendMode_obj::OneMinusSrcColor;

int BlendMode_obj::SrcAlpha;

int BlendMode_obj::OneMinusSrcAlpha;

int BlendMode_obj::DstAlpha;

int BlendMode_obj::OneMinusDstAlpha;

int BlendMode_obj::DstColor;

int BlendMode_obj::OneMinusDstColor;

int BlendMode_obj::SrcAlphaSaturate;


BlendMode_obj::BlendMode_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BlendMode_obj::Zero,HX_HCSTRING("Zero","\x48","\x3b","\xca","\x3b")},
	{hx::fsInt,(void *) &BlendMode_obj::One,HX_HCSTRING("One","\x46","\x52","\x3c","\x00")},
	{hx::fsInt,(void *) &BlendMode_obj::SrcColor,HX_HCSTRING("SrcColor","\xff","\x7b","\xc8","\x82")},
	{hx::fsInt,(void *) &BlendMode_obj::OneMinusSrcColor,HX_HCSTRING("OneMinusSrcColor","\x49","\x76","\x9c","\xc3")},
	{hx::fsInt,(void *) &BlendMode_obj::SrcAlpha,HX_HCSTRING("SrcAlpha","\xfa","\xb1","\x02","\x5a")},
	{hx::fsInt,(void *) &BlendMode_obj::OneMinusSrcAlpha,HX_HCSTRING("OneMinusSrcAlpha","\x44","\xac","\xd6","\x9a")},
	{hx::fsInt,(void *) &BlendMode_obj::DstAlpha,HX_HCSTRING("DstAlpha","\x39","\x9b","\xb4","\xf5")},
	{hx::fsInt,(void *) &BlendMode_obj::OneMinusDstAlpha,HX_HCSTRING("OneMinusDstAlpha","\x83","\x95","\x88","\x36")},
	{hx::fsInt,(void *) &BlendMode_obj::DstColor,HX_HCSTRING("DstColor","\x3e","\x65","\x7a","\x1e")},
	{hx::fsInt,(void *) &BlendMode_obj::OneMinusDstColor,HX_HCSTRING("OneMinusDstColor","\x88","\x5f","\x4e","\x5f")},
	{hx::fsInt,(void *) &BlendMode_obj::SrcAlphaSaturate,HX_HCSTRING("SrcAlphaSaturate","\x09","\x48","\x45","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendMode_obj::Zero,"Zero");
	HX_MARK_MEMBER_NAME(BlendMode_obj::One,"One");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SrcColor,"SrcColor");
	HX_MARK_MEMBER_NAME(BlendMode_obj::OneMinusSrcColor,"OneMinusSrcColor");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SrcAlpha,"SrcAlpha");
	HX_MARK_MEMBER_NAME(BlendMode_obj::OneMinusSrcAlpha,"OneMinusSrcAlpha");
	HX_MARK_MEMBER_NAME(BlendMode_obj::DstAlpha,"DstAlpha");
	HX_MARK_MEMBER_NAME(BlendMode_obj::OneMinusDstAlpha,"OneMinusDstAlpha");
	HX_MARK_MEMBER_NAME(BlendMode_obj::DstColor,"DstColor");
	HX_MARK_MEMBER_NAME(BlendMode_obj::OneMinusDstColor,"OneMinusDstColor");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SrcAlphaSaturate,"SrcAlphaSaturate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::Zero,"Zero");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::One,"One");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SrcColor,"SrcColor");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::OneMinusSrcColor,"OneMinusSrcColor");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SrcAlpha,"SrcAlpha");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::OneMinusSrcAlpha,"OneMinusSrcAlpha");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::DstAlpha,"DstAlpha");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::OneMinusDstAlpha,"OneMinusDstAlpha");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::DstColor,"DstColor");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::OneMinusDstColor,"OneMinusDstColor");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SrcAlphaSaturate,"SrcAlphaSaturate");
};

#endif

hx::Class BlendMode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Zero","\x48","\x3b","\xca","\x3b"),
	HX_HCSTRING("One","\x46","\x52","\x3c","\x00"),
	HX_HCSTRING("SrcColor","\xff","\x7b","\xc8","\x82"),
	HX_HCSTRING("OneMinusSrcColor","\x49","\x76","\x9c","\xc3"),
	HX_HCSTRING("SrcAlpha","\xfa","\xb1","\x02","\x5a"),
	HX_HCSTRING("OneMinusSrcAlpha","\x44","\xac","\xd6","\x9a"),
	HX_HCSTRING("DstAlpha","\x39","\x9b","\xb4","\xf5"),
	HX_HCSTRING("OneMinusDstAlpha","\x83","\x95","\x88","\x36"),
	HX_HCSTRING("DstColor","\x3e","\x65","\x7a","\x1e"),
	HX_HCSTRING("OneMinusDstColor","\x88","\x5f","\x4e","\x5f"),
	HX_HCSTRING("SrcAlphaSaturate","\x09","\x48","\x45","\x6d"),
	String(null()) };

void BlendMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.BlendMode","\x11","\xb1","\xf9","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BlendMode_obj >;
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

void BlendMode_obj::__boot()
{
	Zero= (int)0;
	One= (int)1;
	SrcColor= (int)768;
	OneMinusSrcColor= (int)769;
	SrcAlpha= (int)770;
	OneMinusSrcAlpha= (int)771;
	DstAlpha= (int)772;
	OneMinusDstAlpha= (int)773;
	DstColor= (int)774;
	OneMinusDstColor= (int)775;
	SrcAlphaSaturate= (int)776;
}

} // end namespace haxor
} // end namespace core
