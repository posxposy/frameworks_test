#ifndef INCLUDED_haxor_core_CullMode
#define INCLUDED_haxor_core_CullMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,CullMode)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  CullMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CullMode_obj OBJ_;
		CullMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.CullMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CullMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CullMode_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CullMode","\x55","\xc2","\x8e","\x8a"); }

		static void __boot();
		static int None;
		static int Front;
		static int Back;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_CullMode */ 
