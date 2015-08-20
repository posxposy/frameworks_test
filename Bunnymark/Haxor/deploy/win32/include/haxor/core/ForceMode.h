#ifndef INCLUDED_haxor_core_ForceMode
#define INCLUDED_haxor_core_ForceMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,ForceMode)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ForceMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ForceMode_obj OBJ_;
		ForceMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.ForceMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ForceMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ForceMode_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ForceMode","\xce","\x62","\x78","\xef"); }

		static void __boot();
		static int Acceleration;
		static int Force;
		static int Impulse;
		static int Velocity;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_ForceMode */ 
