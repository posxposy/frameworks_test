#ifndef INCLUDED_haxor_core_Engine
#define INCLUDED_haxor_core_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,Engine)
HX_DECLARE_CLASS2(haxor,core,EngineState)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Engine_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.Engine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Engine_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Engine_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Engine","\xe2","\xbb","\x18","\x31"); }

		static ::haxor::core::EngineState state;
		static Void Initialize( );
		static Dynamic Initialize_dyn();

		static Void Collect( );
		static Dynamic Collect_dyn();

		static Void Update( );
		static Dynamic Update_dyn();

		static Void Render( );
		static Dynamic Render_dyn();

		static Void RenderIRenderers( );
		static Dynamic RenderIRenderers_dyn();

		static Void Resize( );
		static Dynamic Resize_dyn();

};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_Engine */ 
