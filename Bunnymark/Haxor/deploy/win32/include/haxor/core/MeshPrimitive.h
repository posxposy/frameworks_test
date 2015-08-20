#ifndef INCLUDED_haxor_core_MeshPrimitive
#define INCLUDED_haxor_core_MeshPrimitive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,MeshPrimitive)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  MeshPrimitive_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MeshPrimitive_obj OBJ_;
		MeshPrimitive_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.MeshPrimitive")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MeshPrimitive_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshPrimitive_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MeshPrimitive","\xda","\x48","\xc2","\xb6"); }

		static void __boot();
		static int Points;
		static int Triangles;
		static int TriangleStrip;
		static int TriangleFan;
		static int Lines;
		static int LineLoop;
		static int LineStrip;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_MeshPrimitive */ 
