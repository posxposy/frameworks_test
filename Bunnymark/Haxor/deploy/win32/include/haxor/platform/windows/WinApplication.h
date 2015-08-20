#ifndef INCLUDED_haxor_platform_windows_WinApplication
#define INCLUDED_haxor_platform_windows_WinApplication

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,core,BaseApplication)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Platform)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,platform,OSWindow)
HX_DECLARE_CLASS3(haxor,platform,windows,WinApplication)
HX_DECLARE_CLASS3(haxor,platform,windows,Window)
namespace haxor{
namespace platform{
namespace windows{


class HXCPP_CLASS_ATTRIBUTES  WinApplication_obj : public ::haxor::core::BaseApplication_obj{
	public:
		typedef ::haxor::core::BaseApplication_obj super;
		typedef WinApplication_obj OBJ_;
		WinApplication_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.platform.windows.WinApplication")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WinApplication_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WinApplication_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WinApplication","\xb4","\x2c","\x8d","\x13"); }

		::haxor::platform::windows::Window window;
		virtual ::haxor::platform::windows::Window get_window( );
		Dynamic get_window_dyn();

		::haxor::platform::windows::Window m_window;
		virtual ::haxor::core::Platform get_platform( );

		virtual Float GetContainerWidth( );

		virtual Float GetContainerHeight( );

		virtual Void OnMessage( int p_msg,int p_wp,int p_lp);
		Dynamic OnMessage_dyn();

		virtual bool OnFullscreenRequest( bool v);

		virtual bool OnPointerLockRequest( bool v);

		virtual bool OnPointerVisibilityRequest( bool v);

};

} // end namespace haxor
} // end namespace platform
} // end namespace windows

#endif /* INCLUDED_haxor_platform_windows_WinApplication */ 
