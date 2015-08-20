#ifndef INCLUDED_haxor_input_Touch
#define INCLUDED_haxor_input_Touch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,InputState)
HX_DECLARE_CLASS2(haxor,input,Touch)
HX_DECLARE_CLASS2(haxor,math,Vector2)
namespace haxor{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  Touch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Touch_obj OBJ_;
		Touch_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.input.Touch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Touch_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Touch_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Touch","\x9f","\x87","\x60","\xa7"); }

		::haxor::core::InputState state;
		virtual bool get_down( );
		Dynamic get_down_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual bool get_hit( );
		Dynamic get_hit_dyn();

		int id;
		::haxor::math::Vector2 position;
		::haxor::math::Vector2 radius;
		Float angle;
		::haxor::math::Vector2 relativePosition;
		::haxor::math::Vector2 delta;
		Float pressure;
		Float hold;
		bool m_down;
		virtual ::String ToString( );
		Dynamic ToString_dyn();

};

} // end namespace haxor
} // end namespace input

#endif /* INCLUDED_haxor_input_Touch */ 
