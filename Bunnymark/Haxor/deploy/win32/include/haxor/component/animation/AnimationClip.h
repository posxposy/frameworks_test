#ifndef INCLUDED_haxor_component_animation_AnimationClip
#define INCLUDED_haxor_component_animation_AnimationClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
HX_DECLARE_CLASS3(haxor,component,animation,AnimationClip)
HX_DECLARE_CLASS3(haxor,component,animation,AnimationEvent)
HX_DECLARE_CLASS3(haxor,component,animation,ClipTrack)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
namespace haxor{
namespace component{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  AnimationClip_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef AnimationClip_obj OBJ_;
		AnimationClip_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.animation.AnimationClip")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnimationClip_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationClip_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AnimationClip","\xd4","\xab","\xfe","\x7b"); }

		Array< ::Dynamic > tracks;
		Float speed;
		bool playing;
		int wrap;
		virtual Float get_length( );
		Dynamic get_length_dyn();

		Float m_length;
		Array< ::Dynamic > m_events;
		int m_last_frame;
		virtual Void AddEvent( int p_frame,Dynamic p_listener,hx::Null< int >  p_repeat,Dynamic p_args);
		Dynamic AddEvent_dyn();

		virtual Void RemoveEvent( hx::Null< int >  p_frame);
		Dynamic RemoveEvent_dyn();

		virtual ::haxor::component::animation::ClipTrack Add( Dynamic p_target,::String p_property);
		Dynamic Add_dyn();

		virtual Void Remove( Dynamic p_target,::String p_property);
		Dynamic Remove_dyn();

		virtual Void Sample( Float p_time,hx::Null< Float >  p_weight);
		Dynamic Sample_dyn();

		virtual ::haxor::component::animation::AnimationClip Split( int p_start,int p_end);
		Dynamic Split_dyn();

		virtual Void UpdateLength( );
		Dynamic UpdateLength_dyn();

};

} // end namespace haxor
} // end namespace component
} // end namespace animation

#endif /* INCLUDED_haxor_component_animation_AnimationClip */ 
