#ifndef INCLUDED_haxor_core_Application
#define INCLUDED_haxor_core_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,core,Application)
HX_DECLARE_CLASS2(haxor,core,BaseApplication)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,platform,windows,WinApplication)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Application_obj : public ::haxor::platform::windows::WinApplication_obj{
	public:
		typedef ::haxor::platform::windows::WinApplication_obj super;
		typedef Application_obj OBJ_;
		Application_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.core.Application")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Application_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Application","\x30","\x43","\x71","\x0e"); }

};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_Application */ 
