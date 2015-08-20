#ifndef INCLUDED_haxor_component_animation_ClipTrack
#define INCLUDED_haxor_component_animation_ClipTrack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,component,animation,ClipTrack)
HX_DECLARE_CLASS3(haxor,component,animation,KeyFrame)
namespace haxor{
namespace component{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  ClipTrack_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClipTrack_obj OBJ_;
		ClipTrack_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.animation.ClipTrack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ClipTrack_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClipTrack_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ClipTrack","\x7b","\xbd","\x09","\xd6"); }

		Dynamic target;
		::String property;
		Array< ::Dynamic > keyframes;
		virtual Float get_length( );
		Dynamic get_length_dyn();

		Float m_length;
		int m_head;
		virtual ::haxor::component::animation::KeyFrame Add( Float p_time,Dynamic p_value);
		Dynamic Add_dyn();

		virtual int Sample( Float p_time,hx::Null< Float >  p_weight);
		Dynamic Sample_dyn();

		virtual ::haxor::component::animation::ClipTrack Split( int p_start,int p_end);
		Dynamic Split_dyn();

		virtual Void Clear( );
		Dynamic Clear_dyn();

};

} // end namespace haxor
} // end namespace component
} // end namespace animation

#endif /* INCLUDED_haxor_component_animation_ClipTrack */ 
