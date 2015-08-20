#ifndef INCLUDED_haxor_graphics_material_Material
#define INCLUDED_haxor_graphics_material_Material

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,material,Material)
HX_DECLARE_CLASS3(haxor,graphics,material,MaterialUniform)
HX_DECLARE_CLASS3(haxor,graphics,material,Shader)
HX_DECLARE_CLASS3(haxor,graphics,material,UniformInfo)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture)
HX_DECLARE_CLASS3(haxor,io,serialization,Formatter)
HX_DECLARE_CLASS3(haxor,io,serialization,ISerializable)
HX_DECLARE_CLASS3(haxor,io,serialization,SerializedField)
HX_DECLARE_CLASS2(haxor,math,Color)
HX_DECLARE_CLASS2(haxor,math,Matrix4)
HX_DECLARE_CLASS2(haxor,math,Vector2)
HX_DECLARE_CLASS2(haxor,math,Vector3)
HX_DECLARE_CLASS2(haxor,math,Vector4)
namespace haxor{
namespace graphics{
namespace material{


class HXCPP_CLASS_ATTRIBUTES  Material_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef Material_obj OBJ_;
		Material_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.material.Material")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Material_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Material_obj();

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
		operator ::haxor::io::serialization::ISerializable_obj *();
		::String __ToString() const { return HX_HCSTRING("Material","\xc7","\x18","\x57","\xca"); }

		static void __boot();
		bool ztest;
		int zfunc;
		bool zwrite;
		bool blend;
		int queue;
		int blendSrc;
		int blendDst;
		bool invert;
		int cull;
		bool lighting;
		bool grab;
		virtual ::haxor::graphics::material::Shader get_shader( );
		Dynamic get_shader_dyn();

		virtual ::haxor::graphics::material::Shader set_shader( ::haxor::graphics::material::Shader v);
		Dynamic set_shader_dyn();

		::haxor::graphics::material::Shader m_shader;
		virtual Array< ::Dynamic > get_uniforms( );
		Dynamic get_uniforms_dyn();

		Array< ::Dynamic > m_uniforms;
		virtual Void SetBlending( int p_src,int p_dst);
		Dynamic SetBlending_dyn();

		virtual Array< ::Dynamic > GetActiveUniforms( );
		Dynamic GetActiveUniforms_dyn();

		virtual Void SetTexture( ::String p_name,::haxor::graphics::texture::Texture p_texture);
		Dynamic SetTexture_dyn();

		virtual Void SetMatrix4( ::String p_name,::haxor::math::Matrix4 p_matrix4,hx::Null< bool >  p_transpose);
		Dynamic SetMatrix4_dyn();

		virtual Void SetVector2( ::String p_name,::haxor::math::Vector2 p_v);
		Dynamic SetVector2_dyn();

		virtual Void SetVector3( ::String p_name,::haxor::math::Vector3 p_v);
		Dynamic SetVector3_dyn();

		virtual Void SetVector4( ::String p_name,::haxor::math::Vector4 p_v);
		Dynamic SetVector4_dyn();

		virtual Void SetColor( ::String p_name,::haxor::math::Color p_color);
		Dynamic SetColor_dyn();

		virtual Void SetFloat( ::String p_name,Float p_v);
		Dynamic SetFloat_dyn();

		virtual Void SetFloat2( ::String p_name,Float p_x,Float p_y);
		Dynamic SetFloat2_dyn();

		virtual Void SetFloat3( ::String p_name,Float p_x,Float p_y,Float p_z);
		Dynamic SetFloat3_dyn();

		virtual Void SetFloat4( ::String p_name,Float p_x,Float p_y,Float p_z,Float p_w);
		Dynamic SetFloat4_dyn();

		virtual Void SetFloatArray( ::String p_name,Array< Float > p_list);
		Dynamic SetFloatArray_dyn();

		virtual Void SetFloat2Array( ::String p_name,Array< Float > p_list);
		Dynamic SetFloat2Array_dyn();

		virtual Void SetFloat3Array( ::String p_name,Array< Float > p_list);
		Dynamic SetFloat3Array_dyn();

		virtual Void SetFloat4Array( ::String p_name,Array< Float > p_list);
		Dynamic SetFloat4Array_dyn();

		virtual Void SetInt( ::String p_name,int p_v);
		Dynamic SetInt_dyn();

		virtual Void SetInt2( ::String p_name,int p_x,int p_y);
		Dynamic SetInt2_dyn();

		virtual Void SetInt3( ::String p_name,int p_x,int p_y,int p_z);
		Dynamic SetInt3_dyn();

		virtual Void SetInt4( ::String p_name,int p_x,int p_y,int p_z,int p_w);
		Dynamic SetInt4_dyn();

		virtual Void SetIntArray( ::String p_name,Array< int > p_list);
		Dynamic SetIntArray_dyn();

		virtual Void SetInt2Array( ::String p_name,Array< int > p_list);
		Dynamic SetInt2Array_dyn();

		virtual Void SetInt3Array( ::String p_name,Array< int > p_list);
		Dynamic SetInt3Array_dyn();

		virtual Void SetInt4Array( ::String p_name,Array< int > p_list);
		Dynamic SetInt4Array_dyn();

		virtual ::haxor::graphics::material::MaterialUniform GetUniform( ::String p_name);
		Dynamic GetUniform_dyn();

		virtual bool HasUniform( ::String p_name,hx::Null< bool >  p_check_shader);
		Dynamic HasUniform_dyn();

		virtual Void RemoveUniform( ::String p_name);
		Dynamic RemoveUniform_dyn();

		virtual ::haxor::graphics::material::MaterialUniform FetchUniform( ::String p_name,bool p_is_float,int p_length,int p_offset,bool p_create);
		Dynamic FetchUniform_dyn();

		virtual Void SetUniformFloat( ::haxor::graphics::material::MaterialUniform u);
		Dynamic SetUniformFloat_dyn();

		virtual Void SetUniformInt( ::haxor::graphics::material::MaterialUniform u);
		Dynamic SetUniformInt_dyn();

		virtual Void OnDestroy( );

		virtual ::String OnSerializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt);
		Dynamic OnSerializeField_dyn();

		virtual bool OnDeserializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt);
		Dynamic OnDeserializeField_dyn();

		static Dynamic __meta__;
		static ::haxor::graphics::material::Material Opaque( ::haxor::graphics::texture::Texture p_texture,hx::Null< bool >  p_ztest,hx::Null< bool >  p_zwrite);
		static Dynamic Opaque_dyn();

		static ::haxor::graphics::material::Material Transparent( ::haxor::graphics::texture::Texture p_texture,hx::Null< bool >  p_ztest,hx::Null< bool >  p_zwrite,hx::Null< bool >  p_double_sided);
		static Dynamic Transparent_dyn();

		static ::haxor::graphics::material::Material AdditiveAlpha( ::haxor::graphics::texture::Texture p_texture,hx::Null< bool >  p_ztest,hx::Null< bool >  p_zwrite,hx::Null< bool >  p_double_sided);
		static Dynamic AdditiveAlpha_dyn();

		static ::haxor::graphics::material::Material Additive( ::haxor::graphics::texture::Texture p_texture,hx::Null< bool >  p_ztest,hx::Null< bool >  p_zwrite,hx::Null< bool >  p_double_sided);
		static Dynamic Additive_dyn();

};

} // end namespace haxor
} // end namespace graphics
} // end namespace material

#endif /* INCLUDED_haxor_graphics_material_Material */ 