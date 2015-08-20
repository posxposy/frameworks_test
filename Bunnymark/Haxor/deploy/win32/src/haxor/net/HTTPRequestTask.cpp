#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_net_HTTPRequestTask
#include <haxor/net/HTTPRequestTask.h>
#endif
#ifndef INCLUDED_haxor_net_Web
#include <haxor/net/Web.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
#ifndef INCLUDED_haxor_thread_Task
#include <haxor/thread/Task.h>
#endif
namespace haxor{
namespace net{

Void HTTPRequestTask_obj::__construct(::String p_url,::String p_method,bool p_binary,Dynamic p_data)
{
HX_STACK_FRAME("haxor.net.HTTPRequestTask","new",0x48fd59c1,"haxor.net.HTTPRequestTask.new","haxor/net/HTTPRequestTask.hx",62,0x1884b5d1)
HX_STACK_THIS(this)
HX_STACK_ARG(p_url,"p_url")
HX_STACK_ARG(p_method,"p_method")
HX_STACK_ARG(p_binary,"p_binary")
HX_STACK_ARG(p_data,"p_data")
{
	HX_STACK_LINE(63)
	super::__construct(null(),null());
	HX_STACK_LINE(64)
	int tmp = p_url.indexOf(HX_HCSTRING("./","\x41","\x28","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	if ((tmp1)){
		HX_STACK_LINE(64)
		::String tmp2 = p_url;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::String tmp3 = ::haxor::net::Web_obj::root;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		::String tmp4 = ::StringTools_obj::replace(tmp2,HX_HCSTRING("./","\x41","\x28","\x00","\x00"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		p_url = tmp4;
	}
	HX_STACK_LINE(65)
	this->url = p_url;
	HX_STACK_LINE(66)
	this->binary = p_binary;
	HX_STACK_LINE(67)
	this->method = p_method;
	HX_STACK_LINE(68)
	this->data = p_data;
	HX_STACK_LINE(69)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(70)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(71)
	this->error = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		int tmp2 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		bool tmp3 = (tmp2 >= (int)6);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp3)){
			HX_STACK_LINE(72)
			::String tmp4 = this->url;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			::String tmp5 = (HX_HCSTRING("HTTPRequest> ","\x89","\x92","\xfd","\x49") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			::cpp::Lib_obj::println(tmp5);
		}
	}
}
;
	return null();
}

//HTTPRequestTask_obj::~HTTPRequestTask_obj() { }

Dynamic HTTPRequestTask_obj::__CreateEmpty() { return  new HTTPRequestTask_obj; }
hx::ObjectPtr< HTTPRequestTask_obj > HTTPRequestTask_obj::__new(::String p_url,::String p_method,bool p_binary,Dynamic p_data)
{  hx::ObjectPtr< HTTPRequestTask_obj > _result_ = new HTTPRequestTask_obj();
	_result_->__construct(p_url,p_method,p_binary,p_data);
	return _result_;}

Dynamic HTTPRequestTask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPRequestTask_obj > _result_ = new HTTPRequestTask_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void HTTPRequestTask_obj::OnStart( ){
{
		HX_STACK_FRAME("haxor.net.HTTPRequestTask","OnStart",0xf81a8884,"haxor.net.HTTPRequestTask.OnStart","haxor/net/HTTPRequestTask.hx",78,0x1884b5d1)
		HX_STACK_THIS(this)
	}
return null();
}


Void HTTPRequestTask_obj::OnError( ){
{
		HX_STACK_FRAME("haxor.net.HTTPRequestTask","OnError",0xe738dfea,"haxor.net.HTTPRequestTask.OnError","haxor/net/HTTPRequestTask.hx",83,0x1884b5d1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
		HX_STACK_LINE(83)
		int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		int tmp1 = p_level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		if ((tmp2)){
			HX_STACK_LINE(83)
			::String tmp3 = this->error;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			::String tmp4 = (HX_HCSTRING("HTTPRequest> Error [","\x7a","\x52","\x13","\xb8") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			::String tmp5 = (tmp4 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			::String tmp7 = (HX_HCSTRING("[E] ","\x2d","\x17","\x5b","\x3c") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			::cpp::Lib_obj::println(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HTTPRequestTask_obj,OnError,(void))


HTTPRequestTask_obj::HTTPRequestTask_obj()
{
}

void HTTPRequestTask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPRequestTask);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(request,"request");
	HX_MARK_MEMBER_NAME(response,"response");
	HX_MARK_MEMBER_NAME(binary,"binary");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(error,"error");
	::haxor::thread::Activity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPRequestTask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(request,"request");
	HX_VISIT_MEMBER_NAME(response,"response");
	HX_VISIT_MEMBER_NAME(binary,"binary");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(error,"error");
	::haxor::thread::Activity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HTTPRequestTask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"binary") ) { return binary; }
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request; }
		if (HX_FIELD_EQ(inName,"OnStart") ) { return OnStart_dyn(); }
		if (HX_FIELD_EQ(inName,"OnError") ) { return OnError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"response") ) { return response; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTTPRequestTask_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"binary") ) { binary=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { request=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"response") ) { response=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPRequestTask_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void HTTPRequestTask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"));
	outFields->push(HX_HCSTRING("response","\x81","\xae","\x0c","\xa2"));
	outFields->push(HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HTTPRequestTask_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HTTPRequestTask_obj,request),HX_HCSTRING("request","\x4f","\xdf","\x84","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HTTPRequestTask_obj,response),HX_HCSTRING("response","\x81","\xae","\x0c","\xa2")},
	{hx::fsBool,(int)offsetof(HTTPRequestTask_obj,binary),HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed")},
	{hx::fsString,(int)offsetof(HTTPRequestTask_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HTTPRequestTask_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(HTTPRequestTask_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(HTTPRequestTask_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsString,(int)offsetof(HTTPRequestTask_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("response","\x81","\xae","\x0c","\xa2"),
	HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("OnStart","\xa3","\x3a","\x9a","\xe7"),
	HX_HCSTRING("OnError","\x09","\x92","\xb8","\xd6"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPRequestTask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPRequestTask_obj::__mClass,"__mClass");
};

#endif

hx::Class HTTPRequestTask_obj::__mClass;

void HTTPRequestTask_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.net.HTTPRequestTask","\x4f","\x65","\x83","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &HTTPRequestTask_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPRequestTask_obj >;
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
} // end namespace net
