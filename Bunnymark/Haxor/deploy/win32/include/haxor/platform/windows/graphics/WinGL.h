#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#define INCLUDED_haxor_platform_windows_graphics_WinGL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,core,BaseApplication)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,graphics,GraphicContext)
HX_DECLARE_CLASS2(haxor,platform,OSWindow)
HX_DECLARE_CLASS3(haxor,platform,windows,Window)
HX_DECLARE_CLASS4(haxor,platform,windows,graphics,WinGL)

#include <windows.h>
#include "gl/glew.h"                              // Header File For The GLEW Library




namespace haxor{
namespace platform{
namespace windows{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  WinGL_obj : public ::haxor::graphics::GraphicContext_obj{
	public:
		typedef ::haxor::graphics::GraphicContext_obj super;
		typedef WinGL_obj OBJ_;
		WinGL_obj();
		Void __construct(::haxor::core::BaseApplication p_application);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.platform.windows.graphics.WinGL")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WinGL_obj > __new(::haxor::core::BaseApplication p_application);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WinGL_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WinGL","\x21","\x95","\x97","\x5d"); }

		::haxor::platform::windows::Window window;
		virtual ::haxor::platform::windows::Window get_window( );
		Dynamic get_window_dyn();

		::haxor::platform::OSWindow m_window;
		virtual bool Initialize( ::haxor::platform::windows::Window p_window);
		Dynamic Initialize_dyn();

		virtual Void CheckExtensions( );

		virtual Void Focus( );

		virtual Void Flush( );


#undef RegisterClass





};

} // end namespace haxor
} // end namespace platform
} // end namespace windows
} // end namespace graphics

#endif /* INCLUDED_haxor_platform_windows_graphics_WinGL */ 
