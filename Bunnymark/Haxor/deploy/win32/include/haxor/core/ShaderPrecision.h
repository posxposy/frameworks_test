#ifndef INCLUDED_haxor_core_ShaderPrecision
#define INCLUDED_haxor_core_ShaderPrecision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,ShaderPrecision)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ShaderPrecision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderPrecision_obj OBJ_;
		ShaderPrecision_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.ShaderPrecision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderPrecision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderPrecision_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ShaderPrecision","\x39","\x71","\x39","\x1c"); }

		static void __boot();
		static int None;
		static int VertexLow;
		static int VertexMed;
		static int VertexHigh;
		static int FragmentLow;
		static int FragmentMed;
		static int FragmentHigh;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_ShaderPrecision */ 
