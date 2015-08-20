#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
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
#ifndef INCLUDED_haxor_platform_windows_net_HTTPRequest
#include <haxor/platform/windows/net/HTTPRequest.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
#ifndef INCLUDED_haxor_thread_Task
#include <haxor/thread/Task.h>
#endif
namespace haxor{
namespace platform{
namespace windows{
namespace net{

Void HTTPRequest_obj::__construct(::String p_url,::String p_method,bool p_binary,::String p_data)
{
HX_STACK_FRAME("haxor.platform.windows.net.HTTPRequest","new",0xf97dc30e,"haxor.platform.windows.net.HTTPRequest.new","haxor/platform/windows/net/HTTPRequest.hx",31,0x83d55c04)
HX_STACK_THIS(this)
HX_STACK_ARG(p_url,"p_url")
HX_STACK_ARG(p_method,"p_method")
HX_STACK_ARG(p_binary,"p_binary")
HX_STACK_ARG(p_data,"p_data")
{
	HX_STACK_LINE(32)
	::String tmp = p_url;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::String tmp1 = p_method;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	bool tmp2 = p_binary;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	::String tmp3 = p_data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	super::__construct(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(33)
	::String tmp4 = this->url;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	::haxe::Http tmp5 = ::haxe::Http_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	this->request = tmp5;
	HX_STACK_LINE(34)
	this->m_loading = false;
}
;
	return null();
}

//HTTPRequest_obj::~HTTPRequest_obj() { }

Dynamic HTTPRequest_obj::__CreateEmpty() { return  new HTTPRequest_obj; }
hx::ObjectPtr< HTTPRequest_obj > HTTPRequest_obj::__new(::String p_url,::String p_method,bool p_binary,::String p_data)
{  hx::ObjectPtr< HTTPRequest_obj > _result_ = new HTTPRequest_obj();
	_result_->__construct(p_url,p_method,p_binary,p_data);
	return _result_;}

Dynamic HTTPRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPRequest_obj > _result_ = new HTTPRequest_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void HTTPRequest_obj::OnStep( ){
{
		HX_STACK_FRAME("haxor.platform.windows.net.HTTPRequest","OnStep",0xf296d23d,"haxor.platform.windows.net.HTTPRequest.OnStep","haxor/platform/windows/net/HTTPRequest.hx",41,0x83d55c04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::haxor::platform::windows::net::HTTPRequest _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		bool tmp = ::haxor::platform::windows::net::HTTPRequest_obj::m_lock;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(43)
		::haxor::platform::windows::net::HTTPRequest_obj::m_lock = true;
		HX_STACK_LINE(44)
		bool tmp1 = this->m_loading;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		if ((tmp2)){
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				int tmp3 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(46)
				bool tmp4 = (tmp3 >= (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(46)
				if ((tmp4)){
					HX_STACK_LINE(46)
					::String tmp5 = this->url;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(46)
					::String tmp6 = (HX_HCSTRING("HTTPRequest> ","\x89","\x92","\xfd","\x49") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(46)
					::cpp::Lib_obj::println(tmp6);
				}
			}
			HX_STACK_LINE(47)
			this->m_loading = true;
			HX_STACK_LINE(48)
			::haxe::Http tmp3 = this->request;		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxor::platform::windows::net::HTTPRequest,_g)
			int __ArgCount() const { return 1; }
			Void run(::String err){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxor/platform/windows/net/HTTPRequest.hx",48,0x83d55c04)
				HX_STACK_ARG(err,"err")
				{
					HX_STACK_LINE(48)
					_g->error = err;
					HX_STACK_LINE(48)
					_g->OnError();
					HX_STACK_LINE(48)
					_g->Cancel();
					HX_STACK_LINE(48)
					::haxor::platform::windows::net::HTTPRequest_obj::m_lock = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(48)
			tmp3->onError =  Dynamic(new _Function_2_1(_g));
			HX_STACK_LINE(49)
			::haxe::Http tmp4 = this->request;		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxor::platform::windows::net::HTTPRequest,_g)
			int __ArgCount() const { return 1; }
			Void run(::String d){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxor/platform/windows/net/HTTPRequest.hx",50,0x83d55c04)
				HX_STACK_ARG(d,"d")
				{
					HX_STACK_LINE(51)
					_g->response = d;
					HX_STACK_LINE(52)
					_g->set_progress(((Float)1.0));
					HX_STACK_LINE(53)
					::haxor::platform::windows::net::HTTPRequest_obj::m_lock = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(49)
			tmp4->onData =  Dynamic(new _Function_2_2(_g));
			HX_STACK_LINE(55)
			::haxe::Http tmp5 = this->request;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_3)
			int __ArgCount() const { return 1; }
			Void run(int n){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","haxor/platform/windows/net/HTTPRequest.hx",55,0x83d55c04)
				HX_STACK_ARG(n,"n")
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(55)
			tmp5->onStatus =  Dynamic(new _Function_2_3());
			HX_STACK_LINE(56)
			::haxe::Http tmp6 = this->request;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			::String tmp7 = this->method;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			bool tmp8 = (tmp7 == HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			tmp6->request(tmp8);
		}
	}
return null();
}


bool HTTPRequest_obj::m_lock;


HTTPRequest_obj::HTTPRequest_obj()
{
}

Dynamic HTTPRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"OnStep") ) { return OnStep_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_loading") ) { return m_loading; }
	}
	return super::__Field(inName,inCallProp);
}

bool HTTPRequest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_lock") ) { outValue = m_lock; return true;  }
	}
	return false;
}

Dynamic HTTPRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"m_loading") ) { m_loading=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPRequest_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_lock") ) { m_lock=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void HTTPRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_loading","\x6a","\xdd","\x74","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(HTTPRequest_obj,m_loading),HX_HCSTRING("m_loading","\x6a","\xdd","\x74","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &HTTPRequest_obj::m_lock,HX_HCSTRING("m_lock","\x3d","\x0c","\xaf","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_loading","\x6a","\xdd","\x74","\x13"),
	HX_HCSTRING("OnStep","\x2b","\x64","\x7a","\x23"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPRequest_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPRequest_obj::m_lock,"m_lock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPRequest_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPRequest_obj::m_lock,"m_lock");
};

#endif

hx::Class HTTPRequest_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_lock","\x3d","\x0c","\xaf","\x8f"),
	String(null()) };

void HTTPRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.windows.net.HTTPRequest","\x1c","\xe4","\xc7","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTTPRequest_obj::__GetStatic;
	__mClass->mSetStaticField = &HTTPRequest_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPRequest_obj >;
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

void HTTPRequest_obj::__boot()
{
	m_lock= false;
}

} // end namespace haxor
} // end namespace platform
} // end namespace windows
} // end namespace net
