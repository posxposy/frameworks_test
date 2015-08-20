#ifndef INCLUDED_haxor_graphics_material_ShaderCompileResult
#define INCLUDED_haxor_graphics_material_ShaderCompileResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,graphics,material,ShaderCompilation)
HX_DECLARE_CLASS3(haxor,graphics,material,ShaderCompileResult)
namespace haxor{
namespace graphics{
namespace material{


class HXCPP_CLASS_ATTRIBUTES  ShaderCompileResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderCompileResult_obj OBJ_;
		ShaderCompileResult_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.material.ShaderCompileResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderCompileResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderCompileResult_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderCompileResult","\x2b","\xd0","\x84","\x0f"); }

		::haxor::graphics::material::ShaderCompilation vertex;
		::haxor::graphics::material::ShaderCompilation fragment;
		virtual bool get_success( );
		Dynamic get_success_dyn();

		virtual ::String ErrorString( );
		Dynamic ErrorString_dyn();

};

} // end namespace haxor
} // end namespace graphics
} // end namespace material

#endif /* INCLUDED_haxor_graphics_material_ShaderCompileResult */ 
