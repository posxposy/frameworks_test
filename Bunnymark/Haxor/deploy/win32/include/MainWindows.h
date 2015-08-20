#ifndef INCLUDED_MainWindows
#define INCLUDED_MainWindows

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
HX_DECLARE_CLASS0(MainWindows)
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,core,Application)
HX_DECLARE_CLASS2(haxor,core,BaseApplication)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IRenderable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,platform,windows,WinApplication)


class HXCPP_CLASS_ATTRIBUTES  MainWindows_obj : public ::haxor::core::Application_obj{
	public:
		typedef ::haxor::core::Application_obj super;
		typedef MainWindows_obj OBJ_;
		MainWindows_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MainWindows")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MainWindows_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainWindows_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxor::core::IRenderable_obj *();
		::String __ToString() const { return HX_HCSTRING("MainWindows","\x2a","\xcf","\x94","\x6d"); }

		virtual Void Initialize( );

		virtual Void OnRender( );
		Dynamic OnRender_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_MainWindows */ 
