#ifndef INCLUDED_haxor_context_ShaderContext
#define INCLUDED_haxor_context_ShaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,context,ShaderContext)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  ShaderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderContext_obj OBJ_;
		ShaderContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.context.ShaderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderContext_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ShaderContext","\x2a","\xad","\x08","\xdd"); }

		static void __boot();
		static ::String vs_flat;
		static ::String fs_flat;
		static ::String vs_flat_texture;
		static ::String fs_flat_texture;
		static ::String vs_flat_skin_texture;
		static ::String fs_flat_skin_texture;
		static ::String vs_gizmo_grid;
		static ::String vs_gizmo_screen_texture;
		static ::String vs_gizmo;
		static ::String vs_flat_particle;
		static ::String fs_flat_particle;
		static ::String vs_screen_skybox;
		static ::String fs_screen_skybox;
};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_ShaderContext */ 
