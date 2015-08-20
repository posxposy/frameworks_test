#ifndef INCLUDED_haxor_graphics_material_Shader
#define INCLUDED_haxor_graphics_material_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,material,Shader)
HX_DECLARE_CLASS3(haxor,graphics,material,ShaderCompileResult)
namespace haxor{
namespace graphics{
namespace material{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(::String __o_p_vs,::String __o_p_fs);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.material.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(::String __o_p_vs,::String __o_p_fs);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		static void __boot();
		::String vertex;
		::String fragment;
		::String preprocessor;
		int precision;
		virtual bool get_hasError( );
		Dynamic get_hasError_dyn();

		::haxor::graphics::material::ShaderCompileResult compilation;
		virtual ::haxor::graphics::material::ShaderCompileResult Compile( );
		Dynamic Compile_dyn();

		virtual Void OnDestroy( );

		static Dynamic __meta__;
		static Array< ::Dynamic > list;
		static int get_globalPrecision( );
		static Dynamic get_globalPrecision_dyn();

		static int set_globalPrecision( int v);
		static Dynamic set_globalPrecision_dyn();

		static int m_global_precision;
		static ::String get_globalPreprocessor( );
		static Dynamic get_globalPreprocessor_dyn();

		static ::String set_globalPreprocessor( ::String v);
		static Dynamic set_globalPreprocessor_dyn();

		static ::String m_global_preprocessor;
		static ::haxor::graphics::material::Shader Flat;
		static ::haxor::graphics::material::Shader get_Flat( );
		static Dynamic get_Flat_dyn();

		static ::haxor::graphics::material::Shader m_flat_shader;
		static ::haxor::graphics::material::Shader FlatTexture;
		static ::haxor::graphics::material::Shader get_FlatTexture( );
		static Dynamic get_FlatTexture_dyn();

		static ::haxor::graphics::material::Shader m_flat_texture_shader;
		static ::haxor::graphics::material::Shader FlatTextureSkin;
		static ::haxor::graphics::material::Shader get_FlatTextureSkin( );
		static Dynamic get_FlatTextureSkin_dyn();

		static ::haxor::graphics::material::Shader m_flat_texture_skin_shader;
		static ::haxor::graphics::material::Shader FlatParticle;
		static ::haxor::graphics::material::Shader get_FlatParticle( );
		static Dynamic get_FlatParticle_dyn();

		static ::haxor::graphics::material::Shader m_flat_particle_shader;
};

} // end namespace haxor
} // end namespace graphics
} // end namespace material

#endif /* INCLUDED_haxor_graphics_material_Shader */ 
