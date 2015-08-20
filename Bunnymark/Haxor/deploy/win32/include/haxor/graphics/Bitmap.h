#ifndef INCLUDED_haxor_graphics_Bitmap
#define INCLUDED_haxor_graphics_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,graphics,Bitmap)
HX_DECLARE_CLASS2(haxor,io,Buffer)
HX_DECLARE_CLASS2(haxor,math,Color)
namespace haxor{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Bitmap_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();
		Void __construct(int p_width,int p_height,int p_format);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.Bitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bitmap_obj > __new(int p_width,int p_height,int p_format);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bitmap_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bitmap","\x0f","\x84","\xa0","\x25"); }

		::haxor::io::Buffer buffer;
		virtual ::haxor::io::Buffer get_buffer( );
		Dynamic get_buffer_dyn();

		::haxor::io::Buffer m_buffer;
		bool _float;
		virtual bool get_float( );
		Dynamic get_float_dyn();

		bool m_float;
		bool half;
		virtual bool get_half( );
		Dynamic get_half_dyn();

		bool m_half;
		int width;
		virtual int get_width( );
		Dynamic get_width_dyn();

		int m_width;
		int height;
		virtual int get_height( );
		Dynamic get_height_dyn();

		int m_height;
		int channels;
		virtual int get_channels( );
		Dynamic get_channels_dyn();

		int m_channels;
		int format;
		virtual int get_format( );
		Dynamic get_format_dyn();

		int m_format;
		virtual Void Resize( int p_width,int p_height,int p_format);
		Dynamic Resize_dyn();

		virtual ::haxor::math::Color GetPixel( int p_x,int p_y);
		Dynamic GetPixel_dyn();

		virtual Void SetPixel( int p_x,int p_y,::haxor::math::Color p_color);
		Dynamic SetPixel_dyn();

		virtual Void SetPixels( Array< ::Dynamic > p_colors,hx::Null< int >  p_x,hx::Null< int >  p_y,hx::Null< int >  p_width,hx::Null< int >  p_height);
		Dynamic SetPixels_dyn();

		virtual Void Fill( ::haxor::math::Color p_color);
		Dynamic Fill_dyn();

		virtual Void Set( int p_x,int p_y,hx::Null< Float >  p_v0,hx::Null< Float >  p_v1,hx::Null< Float >  p_v2,hx::Null< Float >  p_v3);
		Dynamic Set_dyn();

		virtual Void SetRange( Array< Float > p_values,hx::Null< int >  p_x,hx::Null< int >  p_y,hx::Null< int >  p_width,hx::Null< int >  p_height);
		Dynamic SetRange_dyn();

};

} // end namespace haxor
} // end namespace graphics

#endif /* INCLUDED_haxor_graphics_Bitmap */ 
