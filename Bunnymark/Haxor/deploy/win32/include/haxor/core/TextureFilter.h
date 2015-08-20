#ifndef INCLUDED_haxor_core_TextureFilter
#define INCLUDED_haxor_core_TextureFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,TextureFilter)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  TextureFilter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureFilter_obj OBJ_;
		TextureFilter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.TextureFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextureFilter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureFilter_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextureFilter","\xd3","\x42","\x3d","\x60"); }

		static void __boot();
		static int Nearest;
		static int Linear;
		static int NearestMipmapNearest;
		static int NearestMipmapLinear;
		static int LinearMipmapNearest;
		static int LinearMipmapLinear;
		static int Trilinear;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_TextureFilter */ 
