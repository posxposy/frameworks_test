#ifndef INCLUDED_haxor_platform_html_BrowserAgent
#define INCLUDED_haxor_platform_html_BrowserAgent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,platform,html,BrowserAgent)
namespace haxor{
namespace platform{
namespace html{


class HXCPP_CLASS_ATTRIBUTES  BrowserAgent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BrowserAgent_obj OBJ_;
		BrowserAgent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.platform.html.BrowserAgent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BrowserAgent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BrowserAgent_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BrowserAgent","\x1d","\xc2","\xa5","\x24"); }

		::String agent;
		::String name;
		::String version;
		::String OSVersion;
		::String OSMajorVersion;
		Dynamic iosdevice;
		bool tablet;
		bool phone;
		bool mobile;
		bool opera;
		bool ie;
		bool windowsPhone;
		bool chrome;
		bool firefox;
		bool sailfish;
		bool seamonkey;
		bool silk;
		bool phantom;
		bool blackberry;
		bool webOS;
		bool bada;
		bool tizen;
		bool safari;
		bool webkit;
		bool gecko;
		bool android;
		bool ios;
};

} // end namespace haxor
} // end namespace platform
} // end namespace html

#endif /* INCLUDED_haxor_platform_html_BrowserAgent */ 
