#ifndef INCLUDED_haxor_component_light_PointLight
#define INCLUDED_haxor_component_light_PointLight

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_light_Light
#include <haxor/component/light/Light.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS3(haxor,component,light,Light)
HX_DECLARE_CLASS3(haxor,component,light,PointLight)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,math,Color)
namespace haxor{
namespace component{
namespace light{


class HXCPP_CLASS_ATTRIBUTES  PointLight_obj : public ::haxor::component::light::Light_obj{
	public:
		typedef ::haxor::component::light::Light_obj super;
		typedef PointLight_obj OBJ_;
		PointLight_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.light.PointLight")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PointLight_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PointLight_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PointLight","\x86","\xae","\x6b","\x4b"); }

		Float atten;
		Float radius;
		static ::haxor::component::light::PointLight Create( ::haxor::math::Color p_color,Float p_intensity,Float p_atten,Float p_radius);
		static Dynamic Create_dyn();

};

} // end namespace haxor
} // end namespace component
} // end namespace light

#endif /* INCLUDED_haxor_component_light_PointLight */ 
