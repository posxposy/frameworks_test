#ifndef INCLUDED_BunnyMark
#define INCLUDED_BunnyMark

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
HX_DECLARE_CLASS0(BunnyMark)
HX_DECLARE_CLASS1(bm,Sprite)
HX_DECLARE_CLASS1(bm,Stage)
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Camera)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,MeshRenderer)
HX_DECLARE_CLASS2(haxor,component,Renderer)
HX_DECLARE_CLASS2(haxor,core,Application)
HX_DECLARE_CLASS2(haxor,core,BaseApplication)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IRenderable)
HX_DECLARE_CLASS2(haxor,core,IResizeable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,platform,windows,WinApplication)


class HXCPP_CLASS_ATTRIBUTES  BunnyMark_obj : public ::haxor::core::Application_obj{
	public:
		typedef ::haxor::core::Application_obj super;
		typedef BunnyMark_obj OBJ_;
		BunnyMark_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="BunnyMark")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BunnyMark_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BunnyMark_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxor::core::IRenderable_obj *();
		::String __ToString() const { return HX_HCSTRING("BunnyMark","\x53","\x8f","\x71","\x3e"); }

		::haxor::component::Camera cam;
		::bm::Stage canvas;
		Array< ::Dynamic > rabbits;
		int count;
		virtual bool Load( );

		virtual Void Initialize( );

		virtual Void AddBunny( );
		Dynamic AddBunny_dyn();

		virtual Void InitStats( );
		Dynamic InitStats_dyn();

		virtual Void OnResize( );

		virtual Void ResizeCamera( );
		Dynamic ResizeCamera_dyn();

		virtual Void OnRender( );
		Dynamic OnRender_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_BunnyMark */ 
