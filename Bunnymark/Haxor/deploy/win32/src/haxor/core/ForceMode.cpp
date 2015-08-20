#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_ForceMode
#include <haxor/core/ForceMode.h>
#endif
namespace haxor{
namespace core{

Void ForceMode_obj::__construct()
{
	return null();
}

//ForceMode_obj::~ForceMode_obj() { }

Dynamic ForceMode_obj::__CreateEmpty() { return  new ForceMode_obj; }
hx::ObjectPtr< ForceMode_obj > ForceMode_obj::__new()
{  hx::ObjectPtr< ForceMode_obj > _result_ = new ForceMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic ForceMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ForceMode_obj > _result_ = new ForceMode_obj();
	_result_->__construct();
	return _result_;}

int ForceMode_obj::Acceleration;

int ForceMode_obj::Force;

int ForceMode_obj::Impulse;

int ForceMode_obj::Velocity;


ForceMode_obj::ForceMode_obj()
{
}

bool ForceMode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Force") ) { outValue = Force; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Impulse") ) { outValue = Impulse; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Velocity") ) { outValue = Velocity; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"Acceleration") ) { outValue = Acceleration; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ForceMode_obj::Acceleration,HX_HCSTRING("Acceleration","\x60","\x4c","\x73","\x62")},
	{hx::fsInt,(void *) &ForceMode_obj::Force,HX_HCSTRING("Force","\xcb","\x21","\xc2","\x97")},
	{hx::fsInt,(void *) &ForceMode_obj::Impulse,HX_HCSTRING("Impulse","\x95","\x78","\x0e","\x3b")},
	{hx::fsInt,(void *) &ForceMode_obj::Velocity,HX_HCSTRING("Velocity","\x3d","\xbe","\xaf","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ForceMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ForceMode_obj::Acceleration,"Acceleration");
	HX_MARK_MEMBER_NAME(ForceMode_obj::Force,"Force");
	HX_MARK_MEMBER_NAME(ForceMode_obj::Impulse,"Impulse");
	HX_MARK_MEMBER_NAME(ForceMode_obj::Velocity,"Velocity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ForceMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ForceMode_obj::Acceleration,"Acceleration");
	HX_VISIT_MEMBER_NAME(ForceMode_obj::Force,"Force");
	HX_VISIT_MEMBER_NAME(ForceMode_obj::Impulse,"Impulse");
	HX_VISIT_MEMBER_NAME(ForceMode_obj::Velocity,"Velocity");
};

#endif

hx::Class ForceMode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Acceleration","\x60","\x4c","\x73","\x62"),
	HX_HCSTRING("Force","\xcb","\x21","\xc2","\x97"),
	HX_HCSTRING("Impulse","\x95","\x78","\x0e","\x3b"),
	HX_HCSTRING("Velocity","\x3d","\xbe","\xaf","\xf8"),
	String(null()) };

void ForceMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.ForceMode","\xab","\x4f","\x67","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ForceMode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ForceMode_obj >;
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

void ForceMode_obj::__boot()
{
	Acceleration= (int)0;
	Force= (int)1;
	Impulse= (int)2;
	Velocity= (int)3;
}

} // end namespace haxor
} // end namespace core
