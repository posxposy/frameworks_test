#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
namespace haxe{

Void Timer_obj::__construct()
{
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new()
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct();
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct();
	return _result_;}

Float Timer_obj::stamp( ){
	HX_STACK_FRAME("haxe.Timer","stamp",0xebba8a32,"haxe.Timer.stamp","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Timer.hx",156,0x8eb95bb3)
	HX_STACK_LINE(164)
	Float tmp = ::__time_stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )


Timer_obj::Timer_obj()
{
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stamp") ) { outValue = stamp_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	String(null()) };

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Timer","\x5d","\x9d","\x24","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
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

} // end namespace haxe
