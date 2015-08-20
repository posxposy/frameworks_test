#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_TextureWrap
#include <haxor/core/TextureWrap.h>
#endif
namespace haxor{
namespace core{

Void TextureWrap_obj::__construct()
{
	return null();
}

//TextureWrap_obj::~TextureWrap_obj() { }

Dynamic TextureWrap_obj::__CreateEmpty() { return  new TextureWrap_obj; }
hx::ObjectPtr< TextureWrap_obj > TextureWrap_obj::__new()
{  hx::ObjectPtr< TextureWrap_obj > _result_ = new TextureWrap_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureWrap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureWrap_obj > _result_ = new TextureWrap_obj();
	_result_->__construct();
	return _result_;}

int TextureWrap_obj::ClampX;

int TextureWrap_obj::RepeatX;

int TextureWrap_obj::ClampY;

int TextureWrap_obj::RepeatY;

int TextureWrap_obj::ClampZ;

int TextureWrap_obj::RepeatZ;


TextureWrap_obj::TextureWrap_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextureWrap_obj::ClampX,HX_HCSTRING("ClampX","\x1d","\x9d","\xa0","\x39")},
	{hx::fsInt,(void *) &TextureWrap_obj::RepeatX,HX_HCSTRING("RepeatX","\x7d","\x00","\xd9","\x73")},
	{hx::fsInt,(void *) &TextureWrap_obj::ClampY,HX_HCSTRING("ClampY","\x1e","\x9d","\xa0","\x39")},
	{hx::fsInt,(void *) &TextureWrap_obj::RepeatY,HX_HCSTRING("RepeatY","\x7e","\x00","\xd9","\x73")},
	{hx::fsInt,(void *) &TextureWrap_obj::ClampZ,HX_HCSTRING("ClampZ","\x1f","\x9d","\xa0","\x39")},
	{hx::fsInt,(void *) &TextureWrap_obj::RepeatZ,HX_HCSTRING("RepeatZ","\x7f","\x00","\xd9","\x73")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureWrap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextureWrap_obj::ClampX,"ClampX");
	HX_MARK_MEMBER_NAME(TextureWrap_obj::RepeatX,"RepeatX");
	HX_MARK_MEMBER_NAME(TextureWrap_obj::ClampY,"ClampY");
	HX_MARK_MEMBER_NAME(TextureWrap_obj::RepeatY,"RepeatY");
	HX_MARK_MEMBER_NAME(TextureWrap_obj::ClampZ,"ClampZ");
	HX_MARK_MEMBER_NAME(TextureWrap_obj::RepeatZ,"RepeatZ");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureWrap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureWrap_obj::ClampX,"ClampX");
	HX_VISIT_MEMBER_NAME(TextureWrap_obj::RepeatX,"RepeatX");
	HX_VISIT_MEMBER_NAME(TextureWrap_obj::ClampY,"ClampY");
	HX_VISIT_MEMBER_NAME(TextureWrap_obj::RepeatY,"RepeatY");
	HX_VISIT_MEMBER_NAME(TextureWrap_obj::ClampZ,"ClampZ");
	HX_VISIT_MEMBER_NAME(TextureWrap_obj::RepeatZ,"RepeatZ");
};

#endif

hx::Class TextureWrap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ClampX","\x1d","\x9d","\xa0","\x39"),
	HX_HCSTRING("RepeatX","\x7d","\x00","\xd9","\x73"),
	HX_HCSTRING("ClampY","\x1e","\x9d","\xa0","\x39"),
	HX_HCSTRING("RepeatY","\x7e","\x00","\xd9","\x73"),
	HX_HCSTRING("ClampZ","\x1f","\x9d","\xa0","\x39"),
	HX_HCSTRING("RepeatZ","\x7f","\x00","\xd9","\x73"),
	String(null()) };

void TextureWrap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.TextureWrap","\x42","\x6e","\xda","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextureWrap_obj >;
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

void TextureWrap_obj::__boot()
{
	ClampX= (int)1;
	RepeatX= (int)2;
	ClampY= (int)4;
	RepeatY= (int)8;
	ClampZ= (int)16;
	RepeatZ= (int)32;
}

} // end namespace haxor
} // end namespace core
