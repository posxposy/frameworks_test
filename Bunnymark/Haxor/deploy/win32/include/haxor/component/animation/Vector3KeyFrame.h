#ifndef INCLUDED_haxor_component_animation_Vector3KeyFrame
#define INCLUDED_haxor_component_animation_Vector3KeyFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
HX_DECLARE_CLASS3(haxor,component,animation,KeyFrame)
HX_DECLARE_CLASS3(haxor,component,animation,Vector3KeyFrame)
HX_DECLARE_CLASS2(haxor,math,Vector3)
namespace haxor{
namespace component{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  Vector3KeyFrame_obj : public ::haxor::component::animation::KeyFrame_obj{
	public:
		typedef ::haxor::component::animation::KeyFrame_obj super;
		typedef Vector3KeyFrame_obj OBJ_;
		Vector3KeyFrame_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.animation.Vector3KeyFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector3KeyFrame_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector3KeyFrame_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Vector3KeyFrame","\x1e","\x6c","\x68","\x4b"); }

		static void __boot();
		::haxor::math::Vector3 value;
		virtual ::haxor::component::animation::KeyFrame Blend( ::haxor::component::animation::KeyFrame b,Float r);

		virtual Dynamic Sample( Dynamic v,hx::Null< Float >  w);

		static ::haxor::component::animation::Vector3KeyFrame m_temp;
};

} // end namespace haxor
} // end namespace component
} // end namespace animation

#endif /* INCLUDED_haxor_component_animation_Vector3KeyFrame */ 
