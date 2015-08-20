#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_CameraMode
#include <haxor/core/CameraMode.h>
#endif
namespace haxor{
namespace core{

Void CameraMode_obj::__construct()
{
	return null();
}

//CameraMode_obj::~CameraMode_obj() { }

Dynamic CameraMode_obj::__CreateEmpty() { return  new CameraMode_obj; }
hx::ObjectPtr< CameraMode_obj > CameraMode_obj::__new()
{  hx::ObjectPtr< CameraMode_obj > _result_ = new CameraMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraMode_obj > _result_ = new CameraMode_obj();
	_result_->__construct();
	return _result_;}

int CameraMode_obj::Custom;

int CameraMode_obj::Perspective;

int CameraMode_obj::Ortho;

int CameraMode_obj::UI;


CameraMode_obj::CameraMode_obj()
{
}

bool CameraMode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UI") ) { outValue = UI; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Ortho") ) { outValue = Ortho; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Custom") ) { outValue = Custom; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Perspective") ) { outValue = Perspective; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CameraMode_obj::Custom,HX_HCSTRING("Custom","\xd1","\xfb","\x26","\x74")},
	{hx::fsInt,(void *) &CameraMode_obj::Perspective,HX_HCSTRING("Perspective","\x5c","\x7d","\x24","\xa5")},
	{hx::fsInt,(void *) &CameraMode_obj::Ortho,HX_HCSTRING("Ortho","\x18","\x87","\x5a","\xc8")},
	{hx::fsInt,(void *) &CameraMode_obj::UI,HX_HCSTRING("UI","\x54","\x4a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CameraMode_obj::Custom,"Custom");
	HX_MARK_MEMBER_NAME(CameraMode_obj::Perspective,"Perspective");
	HX_MARK_MEMBER_NAME(CameraMode_obj::Ortho,"Ortho");
	HX_MARK_MEMBER_NAME(CameraMode_obj::UI,"UI");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CameraMode_obj::Custom,"Custom");
	HX_VISIT_MEMBER_NAME(CameraMode_obj::Perspective,"Perspective");
	HX_VISIT_MEMBER_NAME(CameraMode_obj::Ortho,"Ortho");
	HX_VISIT_MEMBER_NAME(CameraMode_obj::UI,"UI");
};

#endif

hx::Class CameraMode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Custom","\xd1","\xfb","\x26","\x74"),
	HX_HCSTRING("Perspective","\x5c","\x7d","\x24","\xa5"),
	HX_HCSTRING("Ortho","\x18","\x87","\x5a","\xc8"),
	HX_HCSTRING("UI","\x54","\x4a","\x00","\x00"),
	String(null()) };

void CameraMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.CameraMode","\x4b","\x55","\x50","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CameraMode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CameraMode_obj >;
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

void CameraMode_obj::__boot()
{
	Custom= (int)0;
	Perspective= (int)1;
	Ortho= (int)2;
	UI= (int)3;
}

} // end namespace haxor
} // end namespace core
