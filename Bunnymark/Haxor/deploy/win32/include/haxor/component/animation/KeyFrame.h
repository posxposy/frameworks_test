#ifndef INCLUDED_haxor_component_animation_KeyFrame
#define INCLUDED_haxor_component_animation_KeyFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,component,animation,KeyFrame)
namespace haxor{
namespace component{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  KeyFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyFrame_obj OBJ_;
		KeyFrame_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.component.animation.KeyFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KeyFrame_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyFrame_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("KeyFrame","\x2e","\xda","\x9e","\x24"); }

		Float time;
		bool changed;
		virtual ::haxor::component::animation::KeyFrame Blend( ::haxor::component::animation::KeyFrame b,Float r);
		Dynamic Blend_dyn();

		virtual Dynamic Sample( Dynamic v,hx::Null< Float >  w);
		Dynamic Sample_dyn();

};

} // end namespace haxor
} // end namespace component
} // end namespace animation

#endif /* INCLUDED_haxor_component_animation_KeyFrame */ 
