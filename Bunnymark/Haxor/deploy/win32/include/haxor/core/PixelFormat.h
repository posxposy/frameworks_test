#ifndef INCLUDED_haxor_core_PixelFormat
#define INCLUDED_haxor_core_PixelFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,PixelFormat)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  PixelFormat_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PixelFormat_obj OBJ_;
		PixelFormat_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.PixelFormat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PixelFormat_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PixelFormat_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PixelFormat","\x3d","\x0a","\x4e","\x53"); }

		static void __boot();
		static int Alpha8;
		static int Luminance;
		static int RGB8;
		static int RGBA8;
		static int Half;
		static int Half3;
		static int Half4;
		static int _Float;
		static int Float3;
		static int Float4;
		static int Depth;
		static int sRGB;
		static int sRGBA;
		static int sRGBA8;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_PixelFormat */ 
