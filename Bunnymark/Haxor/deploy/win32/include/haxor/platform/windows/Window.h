#ifndef INCLUDED_haxor_platform_windows_Window
#define INCLUDED_haxor_platform_windows_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_platform_OSWindow
#include <haxor/platform/OSWindow.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,core,Application)
HX_DECLARE_CLASS2(haxor,core,BaseApplication)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,input,InputHandler)
HX_DECLARE_CLASS2(haxor,platform,OSWindow)
HX_DECLARE_CLASS3(haxor,platform,windows,WinApplication)
HX_DECLARE_CLASS3(haxor,platform,windows,Window)
HX_DECLARE_CLASS4(haxor,platform,windows,input,WinInputHandler)

#include <windows.h>
#include <stdio.h>
#include "gl/glew.h"

namespace haxor{
namespace platform{
namespace windows{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public ::haxor::platform::OSWindow_obj{
	public:
		typedef ::haxor::platform::OSWindow_obj super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(::haxor::core::Application p_application,::String p_title,int p_x,int p_y,int p_width,int p_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.platform.windows.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Window_obj > __new(::haxor::core::Application p_application,::String p_title,int p_x,int p_y,int p_width,int p_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		virtual bool get_border( );
		Dynamic get_border_dyn();

		virtual bool set_border( bool v);
		Dynamic set_border_dyn();

		bool m_border;
		virtual Void Run( );

		virtual Void EnableCursor( );

		virtual Void DisableCursor( );

		virtual Void OnResize( );

		virtual Void OnStyle( );
		Dynamic OnStyle_dyn();

		virtual Void OnTitleChange( );

		virtual Void OnFullscreen( );

		static ::haxor::platform::windows::input::WinInputHandler input;
		static ::haxor::core::Application m_application;
		static ::haxor::platform::windows::Window m_instance;
		static bool m_build;

#undef RegisterClass
HWND 	hwnd;

static LRESULT CALLBACK WndProc(HWND p_hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

};

} // end namespace haxor
} // end namespace platform
} // end namespace windows

#endif /* INCLUDED_haxor_platform_windows_Window */ 