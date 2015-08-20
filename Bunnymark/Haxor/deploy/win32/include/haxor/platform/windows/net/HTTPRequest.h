#ifndef INCLUDED_haxor_platform_windows_net_HTTPRequest
#define INCLUDED_haxor_platform_windows_net_HTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_net_HTTPRequestTask
#include <haxor/net/HTTPRequestTask.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IRenderable)
HX_DECLARE_CLASS2(haxor,core,IUpdateable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,net,HTTPRequestTask)
HX_DECLARE_CLASS4(haxor,platform,windows,net,HTTPRequest)
HX_DECLARE_CLASS2(haxor,thread,Activity)
HX_DECLARE_CLASS2(haxor,thread,Task)
namespace haxor{
namespace platform{
namespace windows{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  HTTPRequest_obj : public ::haxor::net::HTTPRequestTask_obj{
	public:
		typedef ::haxor::net::HTTPRequestTask_obj super;
		typedef HTTPRequest_obj OBJ_;
		HTTPRequest_obj();
		Void __construct(::String p_url,::String p_method,bool p_binary,::String p_data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.platform.windows.net.HTTPRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HTTPRequest_obj > __new(::String p_url,::String p_method,bool p_binary,::String p_data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPRequest_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HTTPRequest","\xa7","\xa4","\xcd","\x7f"); }

		static void __boot();
		bool m_loading;
		virtual Void OnStep( );

		static bool m_lock;
};

} // end namespace haxor
} // end namespace platform
} // end namespace windows
} // end namespace net

#endif /* INCLUDED_haxor_platform_windows_net_HTTPRequest */ 
