#ifndef INCLUDED_haxor_graphics_material_UberShader
#define INCLUDED_haxor_graphics_material_UberShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,material,Shader)
HX_DECLARE_CLASS3(haxor,graphics,material,UberShader)
namespace haxor{
namespace graphics{
namespace material{


class HXCPP_CLASS_ATTRIBUTES  UberShader_obj : public ::haxor::graphics::material::Shader_obj{
	public:
		typedef ::haxor::graphics::material::Shader_obj super;
		typedef UberShader_obj OBJ_;
		UberShader_obj();
		Void __construct(::String __o_p_vs,::String __o_p_fs);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.material.UberShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UberShader_obj > __new(::String __o_p_vs,::String __o_p_fs);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UberShader_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UberShader","\xdf","\x1a","\x4f","\x00"); }

};

} // end namespace haxor
} // end namespace graphics
} // end namespace material

#endif /* INCLUDED_haxor_graphics_material_UberShader */ 
