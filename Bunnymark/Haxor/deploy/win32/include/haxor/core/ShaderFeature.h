#ifndef INCLUDED_haxor_core_ShaderFeature
#define INCLUDED_haxor_core_ShaderFeature

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,ShaderFeature)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ShaderFeature_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderFeature_obj OBJ_;
		ShaderFeature_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.ShaderFeature")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderFeature_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderFeature_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ShaderFeature","\xf1","\x09","\x0e","\xde"); }

		static void __boot();
		static int Empty;
		static int Texture;
		static int Tint;
		static int VertexColor;
		static int Skinning;
		static int ReflectionVertex;
		static int ReflectionPixel;
		static int ReflectionTexture;
		static int FalloffVertex;
		static int FalloffPixel;
		static int Bump;
		static int LightingVertex;
		static int LightingPixel;
		static int Specular;
		static int SpecularTexture;
		static int SpecularAlpha;
		static int Lightmap;
		static int FogVertex;
		static int FogPixel;
		static int Toon;
		static int Cutoff;
		static int Particle;
		static int UVScroll;
		static int Random;
		static int AlphaTexture;
		static int Emissive;
		static int EmissiveTexture;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_ShaderFeature */ 
