#ifndef INCLUDED_haxor_component_animation_AnimationEvent
#define INCLUDED_haxor_component_animation_AnimationEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,component,animation,AnimationEvent)
namespace haxor{
namespace component{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  AnimationEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationEvent_obj OBJ_;
		AnimationEvent_obj();
		Void __construct(int p_frame,Dynamic p_listener,hx::Null< int >  __o_p_repeat,Dynamic p_args);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.animation.AnimationEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnimationEvent_obj > __new(int p_frame,Dynamic p_listener,hx::Null< int >  __o_p_repeat,Dynamic p_args);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationEvent_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AnimationEvent","\x96","\xee","\x3d","\x30"); }

		int frame;
		Dynamic args;
		Dynamic listener;
		Dynamic &listener_dyn() { return listener;}
		int repeat;
		virtual bool Dispatch( );
		Dynamic Dispatch_dyn();

};

} // end namespace haxor
} // end namespace component
} // end namespace animation

#endif /* INCLUDED_haxor_component_animation_AnimationEvent */ 
