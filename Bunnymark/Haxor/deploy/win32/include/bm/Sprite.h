#ifndef INCLUDED_bm_Sprite
#define INCLUDED_bm_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
HX_DECLARE_CLASS1(bm,Sprite)
HX_DECLARE_CLASS1(bm,Stage)
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,MeshRenderer)
HX_DECLARE_CLASS2(haxor,component,Renderer)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,math,Vector2)
namespace bm{


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="bm.Sprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sprite_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sprite","\x25","\x50","\x2a","\xf8"); }

		virtual ::bm::Stage get_stage( );
		Dynamic get_stage_dyn();

		int __sdp;
		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float v);
		Dynamic set_x_dyn();

		Float m_x;
		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float v);
		Dynamic set_y_dyn();

		Float m_y;
		::haxor::math::Vector2 speed;
		virtual Void OnDestroy( );

};

} // end namespace bm

#endif /* INCLUDED_bm_Sprite */ 
