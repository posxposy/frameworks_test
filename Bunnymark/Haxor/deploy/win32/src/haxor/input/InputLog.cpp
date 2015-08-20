#include <hxcpp.h>

#ifndef INCLUDED_haxor_input_InputLog
#include <haxor/input/InputLog.h>
#endif
namespace haxor{
namespace input{

Void InputLog_obj::__construct(int k,Float t)
{
HX_STACK_FRAME("haxor.input.InputLog","new",0x2007163c,"haxor.input.InputLog.new","haxor/input/Input.hx",29,0xee96c766)
HX_STACK_THIS(this)
HX_STACK_ARG(k,"k")
HX_STACK_ARG(t,"t")
{
	HX_STACK_LINE(29)
	this->key = k;
	HX_STACK_LINE(29)
	this->time = t;
}
;
	return null();
}

//InputLog_obj::~InputLog_obj() { }

Dynamic InputLog_obj::__CreateEmpty() { return  new InputLog_obj; }
hx::ObjectPtr< InputLog_obj > InputLog_obj::__new(int k,Float t)
{  hx::ObjectPtr< InputLog_obj > _result_ = new InputLog_obj();
	_result_->__construct(k,t);
	return _result_;}

Dynamic InputLog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputLog_obj > _result_ = new InputLog_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


InputLog_obj::InputLog_obj()
{
}

Dynamic InputLog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputLog_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InputLog_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void InputLog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(InputLog_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsFloat,(int)offsetof(InputLog_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputLog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputLog_obj::__mClass,"__mClass");
};

#endif

hx::Class InputLog_obj::__mClass;

void InputLog_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.input.InputLog","\x4a","\x88","\xc0","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &InputLog_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputLog_obj >;
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

} // end namespace haxor
} // end namespace input
