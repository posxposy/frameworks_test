#ifndef INCLUDED_haxor_core_CameraMode
#define INCLUDED_haxor_core_CameraMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,CameraMode)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  CameraMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CameraMode_obj OBJ_;
		CameraMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.CameraMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CameraMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CameraMode_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CameraMode","\xc8","\x00","\x30","\xa5"); }

		static void __boot();
		static int Custom;
		static int Perspective;
		static int Ortho;
		static int UI;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_CameraMode */ 
