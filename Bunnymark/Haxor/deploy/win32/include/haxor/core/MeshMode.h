#ifndef INCLUDED_haxor_core_MeshMode
#define INCLUDED_haxor_core_MeshMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,MeshMode)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  MeshMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MeshMode_obj OBJ_;
		MeshMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.MeshMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MeshMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshMode_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MeshMode","\x10","\x00","\x15","\xac"); }

		static void __boot();
		static int StaticDraw;
		static int StreamDraw;
		static int DynamicDraw;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_MeshMode */ 
