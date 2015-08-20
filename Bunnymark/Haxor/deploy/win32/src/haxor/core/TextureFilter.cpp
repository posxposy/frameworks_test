#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_TextureFilter
#include <haxor/core/TextureFilter.h>
#endif
namespace haxor{
namespace core{

Void TextureFilter_obj::__construct()
{
	return null();
}

//TextureFilter_obj::~TextureFilter_obj() { }

Dynamic TextureFilter_obj::__CreateEmpty() { return  new TextureFilter_obj; }
hx::ObjectPtr< TextureFilter_obj > TextureFilter_obj::__new()
{  hx::ObjectPtr< TextureFilter_obj > _result_ = new TextureFilter_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureFilter_obj > _result_ = new TextureFilter_obj();
	_result_->__construct();
	return _result_;}

int TextureFilter_obj::Nearest;

int TextureFilter_obj::Linear;

int TextureFilter_obj::NearestMipmapNearest;

int TextureFilter_obj::NearestMipmapLinear;

int TextureFilter_obj::LinearMipmapNearest;

int TextureFilter_obj::LinearMipmapLinear;

int TextureFilter_obj::Trilinear;


TextureFilter_obj::TextureFilter_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextureFilter_obj::Nearest,HX_HCSTRING("Nearest","\x3e","\x40","\x1b","\x33")},
	{hx::fsInt,(void *) &TextureFilter_obj::Linear,HX_HCSTRING("Linear","\x05","\xc6","\x34","\x21")},
	{hx::fsInt,(void *) &TextureFilter_obj::NearestMipmapNearest,HX_HCSTRING("NearestMipmapNearest","\x98","\x94","\xea","\x8c")},
	{hx::fsInt,(void *) &TextureFilter_obj::NearestMipmapLinear,HX_HCSTRING("NearestMipmapLinear","\xeb","\xba","\x7b","\x85")},
	{hx::fsInt,(void *) &TextureFilter_obj::LinearMipmapNearest,HX_HCSTRING("LinearMipmapNearest","\x71","\xbe","\x3d","\x64")},
	{hx::fsInt,(void *) &TextureFilter_obj::LinearMipmapLinear,HX_HCSTRING("LinearMipmapLinear","\x32","\x4f","\xea","\xee")},
	{hx::fsInt,(void *) &TextureFilter_obj::Trilinear,HX_HCSTRING("Trilinear","\x30","\x4d","\x9b","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::Nearest,"Nearest");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::Linear,"Linear");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::NearestMipmapNearest,"NearestMipmapNearest");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::NearestMipmapLinear,"NearestMipmapLinear");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::LinearMipmapNearest,"LinearMipmapNearest");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::LinearMipmapLinear,"LinearMipmapLinear");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::Trilinear,"Trilinear");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::Nearest,"Nearest");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::Linear,"Linear");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::NearestMipmapNearest,"NearestMipmapNearest");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::NearestMipmapLinear,"NearestMipmapLinear");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::LinearMipmapNearest,"LinearMipmapNearest");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::LinearMipmapLinear,"LinearMipmapLinear");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::Trilinear,"Trilinear");
};

#endif

hx::Class TextureFilter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Nearest","\x3e","\x40","\x1b","\x33"),
	HX_HCSTRING("Linear","\x05","\xc6","\x34","\x21"),
	HX_HCSTRING("NearestMipmapNearest","\x98","\x94","\xea","\x8c"),
	HX_HCSTRING("NearestMipmapLinear","\xeb","\xba","\x7b","\x85"),
	HX_HCSTRING("LinearMipmapNearest","\x71","\xbe","\x3d","\x64"),
	HX_HCSTRING("LinearMipmapLinear","\x32","\x4f","\xea","\xee"),
	HX_HCSTRING("Trilinear","\x30","\x4d","\x9b","\xaa"),
	String(null()) };

void TextureFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.TextureFilter","\x30","\x62","\xa0","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextureFilter_obj >;
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

void TextureFilter_obj::__boot()
{
	Nearest= (int)0;
	Linear= (int)1;
	NearestMipmapNearest= (int)2;
	NearestMipmapLinear= (int)3;
	LinearMipmapNearest= (int)4;
	LinearMipmapLinear= (int)5;
	Trilinear= (int)6;
}

} // end namespace haxor
} // end namespace core
