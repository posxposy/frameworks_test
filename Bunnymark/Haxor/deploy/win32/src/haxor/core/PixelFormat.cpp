#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
namespace haxor{
namespace core{

Void PixelFormat_obj::__construct()
{
	return null();
}

//PixelFormat_obj::~PixelFormat_obj() { }

Dynamic PixelFormat_obj::__CreateEmpty() { return  new PixelFormat_obj; }
hx::ObjectPtr< PixelFormat_obj > PixelFormat_obj::__new()
{  hx::ObjectPtr< PixelFormat_obj > _result_ = new PixelFormat_obj();
	_result_->__construct();
	return _result_;}

Dynamic PixelFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PixelFormat_obj > _result_ = new PixelFormat_obj();
	_result_->__construct();
	return _result_;}

int PixelFormat_obj::Alpha8;

int PixelFormat_obj::Luminance;

int PixelFormat_obj::RGB8;

int PixelFormat_obj::RGBA8;

int PixelFormat_obj::Half;

int PixelFormat_obj::Half3;

int PixelFormat_obj::Half4;

int PixelFormat_obj::_Float;

int PixelFormat_obj::Float3;

int PixelFormat_obj::Float4;

int PixelFormat_obj::Depth;

int PixelFormat_obj::sRGB;

int PixelFormat_obj::sRGBA;

int PixelFormat_obj::sRGBA8;


PixelFormat_obj::PixelFormat_obj()
{
}

bool PixelFormat_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RGB8") ) { outValue = RGB8; return true;  }
		if (HX_FIELD_EQ(inName,"Half") ) { outValue = Half; return true;  }
		if (HX_FIELD_EQ(inName,"sRGB") ) { outValue = sRGB; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RGBA8") ) { outValue = RGBA8; return true;  }
		if (HX_FIELD_EQ(inName,"Half3") ) { outValue = Half3; return true;  }
		if (HX_FIELD_EQ(inName,"Half4") ) { outValue = Half4; return true;  }
		if (HX_FIELD_EQ(inName,"Float") ) { outValue = _Float; return true;  }
		if (HX_FIELD_EQ(inName,"Depth") ) { outValue = Depth; return true;  }
		if (HX_FIELD_EQ(inName,"sRGBA") ) { outValue = sRGBA; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Alpha8") ) { outValue = Alpha8; return true;  }
		if (HX_FIELD_EQ(inName,"Float3") ) { outValue = Float3; return true;  }
		if (HX_FIELD_EQ(inName,"Float4") ) { outValue = Float4; return true;  }
		if (HX_FIELD_EQ(inName,"sRGBA8") ) { outValue = sRGBA8; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Luminance") ) { outValue = Luminance; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PixelFormat_obj::Alpha8,HX_HCSTRING("Alpha8","\x3a","\x3f","\xd0","\x76")},
	{hx::fsInt,(void *) &PixelFormat_obj::Luminance,HX_HCSTRING("Luminance","\xd8","\x17","\x5b","\x0a")},
	{hx::fsInt,(void *) &PixelFormat_obj::RGB8,HX_HCSTRING("RGB8","\xab","\x98","\x69","\x36")},
	{hx::fsInt,(void *) &PixelFormat_obj::RGBA8,HX_HCSTRING("RGBA8","\x04","\x05","\xfc","\x65")},
	{hx::fsInt,(void *) &PixelFormat_obj::Half,HX_HCSTRING("Half","\xd3","\x55","\xe1","\x2f")},
	{hx::fsInt,(void *) &PixelFormat_obj::Half3,HX_HCSTRING("Half3","\x00","\xc3","\x49","\xb5")},
	{hx::fsInt,(void *) &PixelFormat_obj::Half4,HX_HCSTRING("Half4","\x01","\xc3","\x49","\xb5")},
	{hx::fsInt,(void *) &PixelFormat_obj::_Float,HX_HCSTRING("Float","\x7c","\x35","\xc4","\x95")},
	{hx::fsInt,(void *) &PixelFormat_obj::Float3,HX_HCSTRING("Float3","\x37","\x97","\xea","\x75")},
	{hx::fsInt,(void *) &PixelFormat_obj::Float4,HX_HCSTRING("Float4","\x38","\x97","\xea","\x75")},
	{hx::fsInt,(void *) &PixelFormat_obj::Depth,HX_HCSTRING("Depth","\xe3","\x60","\x57","\x6a")},
	{hx::fsInt,(void *) &PixelFormat_obj::sRGB,HX_HCSTRING("sRGB","\x5a","\x00","\x42","\x4c")},
	{hx::fsInt,(void *) &PixelFormat_obj::sRGBA,HX_HCSTRING("sRGBA","\xa7","\x4e","\x7e","\x6d")},
	{hx::fsInt,(void *) &PixelFormat_obj::sRGBA8,HX_HCSTRING("sRGBA8","\xb1","\x83","\x06","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelFormat_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::Alpha8,"Alpha8");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::Luminance,"Luminance");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGB8,"RGB8");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGBA8,"RGBA8");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::Half,"Half");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::Half3,"Half3");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::Half4,"Half4");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::_Float,"Float");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::Float3,"Float3");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::Float4,"Float4");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::Depth,"Depth");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::sRGB,"sRGB");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::sRGBA,"sRGBA");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::sRGBA8,"sRGBA8");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::Alpha8,"Alpha8");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::Luminance,"Luminance");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGB8,"RGB8");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGBA8,"RGBA8");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::Half,"Half");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::Half3,"Half3");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::Half4,"Half4");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::_Float,"Float");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::Float3,"Float3");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::Float4,"Float4");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::Depth,"Depth");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::sRGB,"sRGB");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::sRGBA,"sRGBA");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::sRGBA8,"sRGBA8");
};

#endif

hx::Class PixelFormat_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Alpha8","\x3a","\x3f","\xd0","\x76"),
	HX_HCSTRING("Luminance","\xd8","\x17","\x5b","\x0a"),
	HX_HCSTRING("RGB8","\xab","\x98","\x69","\x36"),
	HX_HCSTRING("RGBA8","\x04","\x05","\xfc","\x65"),
	HX_HCSTRING("Half","\xd3","\x55","\xe1","\x2f"),
	HX_HCSTRING("Half3","\x00","\xc3","\x49","\xb5"),
	HX_HCSTRING("Half4","\x01","\xc3","\x49","\xb5"),
	HX_HCSTRING("Float","\x7c","\x35","\xc4","\x95"),
	HX_HCSTRING("Float3","\x37","\x97","\xea","\x75"),
	HX_HCSTRING("Float4","\x38","\x97","\xea","\x75"),
	HX_HCSTRING("Depth","\xe3","\x60","\x57","\x6a"),
	HX_HCSTRING("sRGB","\x5a","\x00","\x42","\x4c"),
	HX_HCSTRING("sRGBA","\xa7","\x4e","\x7e","\x6d"),
	HX_HCSTRING("sRGBA8","\xb1","\x83","\x06","\x61"),
	String(null()) };

void PixelFormat_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.PixelFormat","\x5a","\xa8","\x77","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PixelFormat_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PixelFormat_obj >;
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

void PixelFormat_obj::__boot()
{
	Alpha8= (int)0;
	Luminance= (int)1;
	RGB8= (int)2;
	RGBA8= (int)3;
	Half= (int)4;
	Half3= (int)5;
	Half4= (int)6;
	_Float= (int)7;
	Float3= (int)8;
	Float4= (int)9;
	Depth= (int)10;
	sRGB= (int)11;
	sRGBA= (int)12;
	sRGBA8= (int)13;
}

} // end namespace haxor
} // end namespace core
