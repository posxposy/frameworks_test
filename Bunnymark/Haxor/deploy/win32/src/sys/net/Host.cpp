#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
namespace sys{
namespace net{

Void Host_obj::__construct(::String name)
{
HX_STACK_FRAME("sys.net.Host","new",0x056496ac,"sys.net.Host.new","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/sys/net/Host.hx",29,0xba836672)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(30)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	int tmp1 = ::sys::net::Host_obj::host_resolve(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	this->ip = tmp1;
}
;
	return null();
}

//Host_obj::~Host_obj() { }

Dynamic Host_obj::__CreateEmpty() { return  new Host_obj; }
hx::ObjectPtr< Host_obj > Host_obj::__new(::String name)
{  hx::ObjectPtr< Host_obj > _result_ = new Host_obj();
	_result_->__construct(name);
	return _result_;}

Dynamic Host_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Host_obj > _result_ = new Host_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

void Host_obj::__init__() {
HX_STACK_FRAME("sys.net.Host","__init__",0xecfcc384,"sys.net.Host.__init__","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/sys/net/Host.hx",45,0xba836672)
{
	HX_STACK_LINE(46)
	Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("socket_init","\x5c","\x82","\xcf","\x81"),(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	tmp();
}
}

::String Host_obj::toString( ){
	HX_STACK_FRAME("sys.net.Host","toString",0xe5efb6e0,"sys.net.Host.toString","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/sys/net/Host.hx",33,0xba836672)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	int tmp = this->ip;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = ::sys::net::Host_obj::host_to_string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	::String tmp2 = ::String(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Host_obj,toString,return )

Dynamic Host_obj::host_resolve;

Dynamic Host_obj::host_to_string;


Host_obj::Host_obj()
{
}

Dynamic Host_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ip") ) { return ip; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Host_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"host_resolve") ) { outValue = host_resolve; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"host_to_string") ) { outValue = host_to_string; return true;  }
	}
	return false;
}

Dynamic Host_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ip") ) { ip=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Host_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"host_resolve") ) { host_resolve=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"host_to_string") ) { host_to_string=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Host_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ip","\xe7","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Host_obj,ip),HX_HCSTRING("ip","\xe7","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Host_obj::host_resolve,HX_HCSTRING("host_resolve","\xd5","\xe3","\x24","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Host_obj::host_to_string,HX_HCSTRING("host_to_string","\x7e","\xe7","\x33","\x80")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ip","\xe7","\x5b","\x00","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Host_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Host_obj::host_resolve,"host_resolve");
	HX_MARK_MEMBER_NAME(Host_obj::host_to_string,"host_to_string");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Host_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Host_obj::host_resolve,"host_resolve");
	HX_VISIT_MEMBER_NAME(Host_obj::host_to_string,"host_to_string");
};

#endif

hx::Class Host_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("host_resolve","\xd5","\xe3","\x24","\x2e"),
	HX_HCSTRING("host_to_string","\x7e","\xe7","\x33","\x80"),
	String(null()) };

void Host_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.net.Host","\xba","\x10","\x59","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Host_obj::__GetStatic;
	__mClass->mSetStaticField = &Host_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Host_obj >;
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

void Host_obj::__boot()
{
	host_resolve= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("host_resolve","\xd5","\xe3","\x24","\x2e"),(int)1);
	host_to_string= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("host_to_string","\x7e","\xe7","\x33","\x80"),(int)1);
}

} // end namespace sys
} // end namespace net
