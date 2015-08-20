#ifndef INCLUDED_haxor_graphics_texture_RenderTexture
#define INCLUDED_haxor_graphics_texture_RenderTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,core,TextureType)
HX_DECLARE_CLASS3(haxor,graphics,texture,RenderTexture)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture2D)
namespace haxor{
namespace graphics{
namespace texture{


class HXCPP_CLASS_ATTRIBUTES  RenderTexture_obj : public ::haxor::graphics::texture::Texture_obj{
	public:
		typedef ::haxor::graphics::texture::Texture_obj super;
		typedef RenderTexture_obj OBJ_;
		RenderTexture_obj();
		Void __construct(int p_width,int p_height,int p_format,hx::Null< bool >  __o_p_store_depth);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.texture.RenderTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RenderTexture_obj > __new(int p_width,int p_height,int p_format,hx::Null< bool >  __o_p_store_depth);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderTexture_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2"); }

		virtual ::haxor::graphics::texture::Texture2D get_depth( );
		Dynamic get_depth_dyn();

		::haxor::graphics::texture::Texture2D m_depth;
		virtual ::haxor::core::TextureType get_type( );

};

} // end namespace haxor
} // end namespace graphics
} // end namespace texture

#endif /* INCLUDED_haxor_graphics_texture_RenderTexture */ 
