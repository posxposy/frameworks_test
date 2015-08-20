#include <hxcpp.h>

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
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_net_HTTPRequestTask
#include <haxor/net/HTTPRequestTask.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_HTTPLoader
#include <haxor/platform/windows/net/HTTPLoader.h>
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

Void HTTPLoader_obj::__construct(::String p_url,bool p_binary,Dynamic p_callback)
{
HX_STACK_FRAME("haxor.platform.windows.net.HTTPLoader","new",0xd20427d8,"haxor.platform.windows.net.HTTPLoader.new","haxor/platform/windows/net/HTTPLoader.hx",23,0x6e62a8f6)
HX_STACK_THIS(this)
HX_STACK_ARG(p_url,"p_url")
HX_STACK_ARG(p_binary,"p_binary")
HX_STACK_ARG(p_callback,"p_callback")
{
	HX_STACK_LINE(24)
	::String tmp = p_url;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	bool tmp1 = p_binary;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	super::__construct(tmp,HX_HCSTRING("GET","\x76","\x1c","\x36","\x00"),tmp1,null());
	HX_STACK_LINE(25)
	this->callback = p_callback;
}
;
	return null();
}

//HTTPLoader_obj::~HTTPLoader_obj() { }

Dynamic HTTPLoader_obj::__CreateEmpty() { return  new HTTPLoader_obj; }
hx::ObjectPtr< HTTPLoader_obj > HTTPLoader_obj::__new(::String p_url,bool p_binary,Dynamic p_callback)
{  hx::ObjectPtr< HTTPLoader_obj > _result_ = new HTTPLoader_obj();
	_result_->__construct(p_url,p_binary,p_callback);
	return _result_;}

Dynamic HTTPLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPLoader_obj > _result_ = new HTTPLoader_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void HTTPLoader_obj::OnStart( ){
{
		HX_STACK_FRAME("haxor.platform.windows.net.HTTPLoader","OnStart",0x45d7ae1b,"haxor.platform.windows.net.HTTPLoader.OnStart","haxor/platform/windows/net/HTTPLoader.hx",27,0x6e62a8f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		if ((tmp1)){
			HX_STACK_LINE(27)
			this->callback(null(),((Float)0.0));
		}
	}
return null();
}


Void HTTPLoader_obj::OnProgress( ){
{
		HX_STACK_FRAME("haxor.platform.windows.net.HTTPLoader","OnProgress",0x1350d794,"haxor.platform.windows.net.HTTPLoader.OnProgress","haxor/platform/windows/net/HTTPLoader.hx",28,0x6e62a8f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		if ((tmp1)){
			HX_STACK_LINE(28)
			Float tmp2 = this->m_progress;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			Float tmp3 = (tmp2 * ((Float)0.9999));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			this->callback(null(),tmp3);
		}
	}
return null();
}


Void HTTPLoader_obj::OnComplete( ){
{
		HX_STACK_FRAME("haxor.platform.windows.net.HTTPLoader","OnComplete",0x0cede0a0,"haxor.platform.windows.net.HTTPLoader.OnComplete","haxor/platform/windows/net/HTTPLoader.hx",30,0x6e62a8f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		if ((tmp1)){
			HX_STACK_LINE(31)
			return null();
		}
		HX_STACK_LINE(32)
		bool tmp2 = this->binary;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		if ((tmp2)){
			HX_STACK_LINE(34)
			::String tmp3 = this->response;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			if ((tmp4)){
				HX_STACK_LINE(34)
				Dynamic tmp5 = this->callback_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(34)
				if ((tmp6)){
					HX_STACK_LINE(34)
					this->callback(null(),((Float)1.0));
				}
				HX_STACK_LINE(34)
				return null();
			}
			HX_STACK_LINE(35)
			::String tmp5 = this->response;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			::haxor::io::Buffer tmp7 = ::haxor::io::Buffer_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			::haxor::io::Buffer b = tmp7;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(36)
				::String tmp8 = this->response;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(36)
				int _g = tmp8.length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(36)
				while((true)){
					HX_STACK_LINE(36)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(36)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(36)
					if ((tmp10)){
						HX_STACK_LINE(36)
						break;
					}
					HX_STACK_LINE(36)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(36)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(36)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(36)
					::String tmp13 = this->response;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(36)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(36)
					Dynamic tmp15 = tmp13.charCodeAt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(36)
					b->SetByte(tmp12,tmp15);
				}
			}
			HX_STACK_LINE(37)
			Dynamic tmp8 = this->callback_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			if ((tmp9)){
				HX_STACK_LINE(37)
				Dynamic tmp10 = ((Dynamic)(b));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(37)
				this->callback(tmp10,((Float)1.0));
			}
		}
		else{
			HX_STACK_LINE(41)
			Dynamic tmp3 = this->callback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			if ((tmp4)){
				HX_STACK_LINE(41)
				::String tmp5 = this->response;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(41)
				Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(41)
				this->callback(tmp6,((Float)1.0));
			}
		}
	}
return null();
}


Void HTTPLoader_obj::OnError( ){
{
		HX_STACK_FRAME("haxor.platform.windows.net.HTTPLoader","OnError",0x34f60581,"haxor.platform.windows.net.HTTPLoader.OnError","haxor/platform/windows/net/HTTPLoader.hx",45,0x6e62a8f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->super::OnError();
		HX_STACK_LINE(45)
		Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(45)
			this->callback(null(),((Float)1.0));
		}
	}
return null();
}



HTTPLoader_obj::HTTPLoader_obj()
{
}

void HTTPLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPLoader);
	HX_MARK_MEMBER_NAME(callback,"callback");
	::haxor::net::HTTPRequestTask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	::haxor::net::HTTPRequestTask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HTTPLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"OnStart") ) { return OnStart_dyn(); }
		if (HX_FIELD_EQ(inName,"OnError") ) { return OnError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"OnProgress") ) { return OnProgress_dyn(); }
		if (HX_FIELD_EQ(inName,"OnComplete") ) { return OnComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTTPLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPLoader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HTTPLoader_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("OnStart","\xa3","\x3a","\x9a","\xe7"),
	HX_HCSTRING("OnProgress","\x0c","\xd0","\x92","\x5a"),
	HX_HCSTRING("OnComplete","\x18","\xd9","\x2f","\x54"),
	HX_HCSTRING("OnError","\x09","\x92","\xb8","\xd6"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class HTTPLoader_obj::__mClass;

void HTTPLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.windows.net.HTTPLoader","\xe6","\x9b","\xb5","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &HTTPLoader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPLoader_obj >;
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
} // end namespace platform
} // end namespace windows
} // end namespace net
