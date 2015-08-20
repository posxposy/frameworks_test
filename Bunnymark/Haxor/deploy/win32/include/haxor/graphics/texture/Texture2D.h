#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#define INCLUDED_haxor_graphics_texture_Texture2D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,core,TextureType)
HX_DECLARE_CLASS2(haxor,graphics,Bitmap)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture2D)
namespace haxor{
namespace graphics{
namespace texture{


class HXCPP_CLASS_ATTRIBUTES  Texture2D_obj : public ::haxor::graphics::texture::Texture_obj{
	public:
		typedef ::haxor::graphics::texture::Texture_obj super;
		typedef Texture2D_obj OBJ_;
		Texture2D_obj();
		Void __construct(int p_width,int p_height,int p_format);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.texture.Texture2D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Texture2D_obj > __new(int p_width,int p_height,int p_format);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture2D_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Texture2D","\x4d","\x01","\x1c","\x51"); }

		::haxor::graphics::Bitmap data;
		virtual ::haxor::graphics::Bitmap get_data( );
		Dynamic get_data_dyn();

		::haxor::graphics::Bitmap m_data;
		virtual ::haxor::core::TextureType get_type( );

		virtual Void Upload( hx::Null< int >  p_steps,Dynamic p_on_complete);
		Dynamic Upload_dyn();

		static ::haxor::graphics::texture::Texture2D get_random( );
		static Dynamic get_random_dyn();

		static ::haxor::graphics::texture::Texture2D m_random;
		static ::haxor::graphics::texture::Texture2D get_white( );
		static Dynamic get_white_dyn();

		static ::haxor::graphics::texture::Texture2D m_white;
		static ::haxor::graphics::texture::Texture2D get_black( );
		static Dynamic get_black_dyn();

		static ::haxor::graphics::texture::Texture2D m_black;
		static ::haxor::graphics::texture::Texture2D get_gray50( );
		static Dynamic get_gray50_dyn();

		static ::haxor::graphics::texture::Texture2D m_gray50;
		static ::haxor::graphics::texture::Texture2D get_gray25( );
		static Dynamic get_gray25_dyn();

		static ::haxor::graphics::texture::Texture2D m_gray25;
		static ::haxor::graphics::texture::Texture2D get_red( );
		static Dynamic get_red_dyn();

		static ::haxor::graphics::texture::Texture2D m_red;
		static ::haxor::graphics::texture::Texture2D get_green( );
		static Dynamic get_green_dyn();

		static ::haxor::graphics::texture::Texture2D m_green;
		static ::haxor::graphics::texture::Texture2D FromBitmap( ::haxor::graphics::Bitmap p_bitmap,hx::Null< bool >  p_apply);
		static Dynamic FromBitmap_dyn();

};

} // end namespace haxor
} // end namespace graphics
} // end namespace texture

#endif /* INCLUDED_haxor_graphics_texture_Texture2D */ 
