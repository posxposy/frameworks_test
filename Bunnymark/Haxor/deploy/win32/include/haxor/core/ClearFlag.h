#ifndef INCLUDED_haxor_core_ClearFlag
#define INCLUDED_haxor_core_ClearFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,ClearFlag)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ClearFlag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClearFlag_obj OBJ_;
		ClearFlag_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.ClearFlag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ClearFlag_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClearFlag_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ClearFlag","\xb9","\xd3","\x51","\x59"); }

		static void __boot();
		static int None;
		static int Color;
		static int Depth;
		static int Skybox;
		static int ColorDepth;
		static int SkyboxDepth;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_ClearFlag */ 
