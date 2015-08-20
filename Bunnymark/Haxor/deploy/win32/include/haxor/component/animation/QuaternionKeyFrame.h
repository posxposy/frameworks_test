#ifndef INCLUDED_haxor_component_animation_QuaternionKeyFrame
#define INCLUDED_haxor_component_animation_QuaternionKeyFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
HX_DECLARE_CLASS3(haxor,component,animation,KeyFrame)
HX_DECLARE_CLASS3(haxor,component,animation,QuaternionKeyFrame)
HX_DECLARE_CLASS2(haxor,math,Quaternion)
namespace haxor{
namespace component{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  QuaternionKeyFrame_obj : public ::haxor::component::animation::KeyFrame_obj{
	public:
		typedef ::haxor::component::animation::KeyFrame_obj super;
		typedef QuaternionKeyFrame_obj OBJ_;
		QuaternionKeyFrame_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.animation.QuaternionKeyFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QuaternionKeyFrame_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuaternionKeyFrame_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("QuaternionKeyFrame","\x6c","\x59","\x8a","\xc8"); }

		static void __boot();
		::haxor::math::Quaternion value;
		virtual ::haxor::component::animation::KeyFrame Blend( ::haxor::component::animation::KeyFrame b,Float r);

		virtual Dynamic Sample( Dynamic v,hx::Null< Float >  w);

		static ::haxor::component::animation::QuaternionKeyFrame m_temp;
};

} // end namespace haxor
} // end namespace component
} // end namespace animation

#endif /* INCLUDED_haxor_component_animation_QuaternionKeyFrame */ 
