#ifndef INCLUDED_haxor_component_CameraOrbitInput
#define INCLUDED_haxor_component_CameraOrbitInput

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
HX_DECLARE_CLASS2(haxor,component,CameraOrbitInput)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IUpdateable)
HX_DECLARE_CLASS2(haxor,core,Resource)
namespace haxor{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  CameraOrbitInput_obj : public ::haxor::component::Behaviour_obj{
	public:
		typedef ::haxor::component::Behaviour_obj super;
		typedef CameraOrbitInput_obj OBJ_;
		CameraOrbitInput_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.CameraOrbitInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CameraOrbitInput_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CameraOrbitInput_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxor::core::IUpdateable_obj *();
		::String __ToString() const { return HX_HCSTRING("CameraOrbitInput","\x45","\xf7","\xff","\x05"); }

		static void __boot();
		bool rotate;
		bool zoom;
		Float zoomSpeed;
		Float rotateSpeed;
		::haxor::component::CameraOrbit m_orbit;
		virtual Void OnStart( );

		virtual Void OnUpdate( );
		Dynamic OnUpdate_dyn();

		static Dynamic __meta__;
};

} // end namespace haxor
} // end namespace component

#endif /* INCLUDED_haxor_component_CameraOrbitInput */ 
