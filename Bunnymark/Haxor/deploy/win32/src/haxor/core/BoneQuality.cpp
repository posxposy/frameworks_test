#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_BoneQuality
#include <haxor/core/BoneQuality.h>
#endif
namespace haxor{
namespace core{

Void BoneQuality_obj::__construct()
{
	return null();
}

//BoneQuality_obj::~BoneQuality_obj() { }

Dynamic BoneQuality_obj::__CreateEmpty() { return  new BoneQuality_obj; }
hx::ObjectPtr< BoneQuality_obj > BoneQuality_obj::__new()
{  hx::ObjectPtr< BoneQuality_obj > _result_ = new BoneQuality_obj();
	_result_->__construct();
	return _result_;}

Dynamic BoneQuality_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoneQuality_obj > _result_ = new BoneQuality_obj();
	_result_->__construct();
	return _result_;}

int BoneQuality_obj::Auto;

int BoneQuality_obj::Bone1;

int BoneQuality_obj::Bone2;

int BoneQuality_obj::Bone3;

int BoneQuality_obj::Bone4;


BoneQuality_obj::BoneQuality_obj()
{
}

bool BoneQuality_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Auto") ) { outValue = Auto; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Bone1") ) { outValue = Bone1; return true;  }
		if (HX_FIELD_EQ(inName,"Bone2") ) { outValue = Bone2; return true;  }
		if (HX_FIELD_EQ(inName,"Bone3") ) { outValue = Bone3; return true;  }
		if (HX_FIELD_EQ(inName,"Bone4") ) { outValue = Bone4; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BoneQuality_obj::Auto,HX_HCSTRING("Auto","\x8f","\x0b","\x50","\x2b")},
	{hx::fsInt,(void *) &BoneQuality_obj::Bone1,HX_HCSTRING("Bone1","\x4d","\xc8","\x24","\x4a")},
	{hx::fsInt,(void *) &BoneQuality_obj::Bone2,HX_HCSTRING("Bone2","\x4e","\xc8","\x24","\x4a")},
	{hx::fsInt,(void *) &BoneQuality_obj::Bone3,HX_HCSTRING("Bone3","\x4f","\xc8","\x24","\x4a")},
	{hx::fsInt,(void *) &BoneQuality_obj::Bone4,HX_HCSTRING("Bone4","\x50","\xc8","\x24","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoneQuality_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BoneQuality_obj::Auto,"Auto");
	HX_MARK_MEMBER_NAME(BoneQuality_obj::Bone1,"Bone1");
	HX_MARK_MEMBER_NAME(BoneQuality_obj::Bone2,"Bone2");
	HX_MARK_MEMBER_NAME(BoneQuality_obj::Bone3,"Bone3");
	HX_MARK_MEMBER_NAME(BoneQuality_obj::Bone4,"Bone4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoneQuality_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BoneQuality_obj::Auto,"Auto");
	HX_VISIT_MEMBER_NAME(BoneQuality_obj::Bone1,"Bone1");
	HX_VISIT_MEMBER_NAME(BoneQuality_obj::Bone2,"Bone2");
	HX_VISIT_MEMBER_NAME(BoneQuality_obj::Bone3,"Bone3");
	HX_VISIT_MEMBER_NAME(BoneQuality_obj::Bone4,"Bone4");
};

#endif

hx::Class BoneQuality_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Auto","\x8f","\x0b","\x50","\x2b"),
	HX_HCSTRING("Bone1","\x4d","\xc8","\x24","\x4a"),
	HX_HCSTRING("Bone2","\x4e","\xc8","\x24","\x4a"),
	HX_HCSTRING("Bone3","\x4f","\xc8","\x24","\x4a"),
	HX_HCSTRING("Bone4","\x50","\xc8","\x24","\x4a"),
	String(null()) };

void BoneQuality_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.BoneQuality","\xd8","\x8f","\x0a","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BoneQuality_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BoneQuality_obj >;
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

void BoneQuality_obj::__boot()
{
	Auto= (int)0;
	Bone1= (int)1;
	Bone2= (int)2;
	Bone3= (int)3;
	Bone4= (int)4;
}

} // end namespace haxor
} // end namespace core
