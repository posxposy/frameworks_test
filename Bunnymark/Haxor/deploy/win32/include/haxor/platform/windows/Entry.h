#ifndef INCLUDED_haxor_platform_windows_Entry
#define INCLUDED_haxor_platform_windows_Entry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,platform,windows,Entry)
namespace haxor{
namespace platform{
namespace windows{


class HXCPP_CLASS_ATTRIBUTES  Entry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Entry_obj OBJ_;
		Entry_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.platform.windows.Entry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Entry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entry_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Entry","\x52","\xe8","\xb3","\x03"); }

		static Void Initialize( );
		static Dynamic Initialize_dyn();

};

} // end namespace haxor
} // end namespace platform
} // end namespace windows

#endif /* INCLUDED_haxor_platform_windows_Entry */ 
