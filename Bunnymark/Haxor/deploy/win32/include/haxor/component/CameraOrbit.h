#ifndef INCLUDED_haxor_component_CameraOrbit
#define INCLUDED_haxor_component_CameraOrbit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,CameraOrbit)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,Transform)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IUpdateable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,math,Quaternion)
HX_DECLARE_CLASS2(haxor,math,Vector2)
namespace haxor{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  CameraOrbit_obj : public ::haxor::component::Behaviour_obj{
	public:
		typedef ::haxor::component::Behaviour_obj super;
		typedef CameraOrbit_obj OBJ_;
		CameraOrbit_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.CameraOrbit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CameraOrbit_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CameraOrbit_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxor::core::IUpdateable_obj *();
		::String __ToString() const { return HX_HCSTRING("CameraOrbit","\x85","\xfa","\x97","\x0d"); }

		static void __boot();
		virtual ::haxor::component::Transform get_pivot( );
		Dynamic get_pivot_dyn();

		::haxor::component::Transform m_pivot;
		Float distance;
		::haxor::math::Vector2 angle;
		Float smooth;
		::haxor::component::Transform target;
		bool follow;
		::haxor::math::Vector2 m_angle;
		Float m_distance;
		::haxor::math::Quaternion m_rotation;
		virtual Void OnBuild( );

		virtual Void OnStart( );

		virtual Void OnUpdate( );
		Dynamic OnUpdate_dyn();

		static Dynamic __meta__;
		static ::haxor::component::CameraOrbit Create( hx::Null< Float >  p_distance,hx::Null< Float >  p_angle_x,hx::Null< Float >  p_angle_y);
		static Dynamic Create_dyn();

};

} // end namespace haxor
} // end namespace component

#endif /* INCLUDED_haxor_component_CameraOrbit */ 
