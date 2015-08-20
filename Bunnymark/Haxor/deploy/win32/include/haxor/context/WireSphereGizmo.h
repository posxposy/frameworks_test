#ifndef INCLUDED_haxor_context_WireSphereGizmo
#define INCLUDED_haxor_context_WireSphereGizmo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
HX_DECLARE_CLASS2(haxor,context,Gizmo)
HX_DECLARE_CLASS2(haxor,context,WireSphereGizmo)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  WireSphereGizmo_obj : public ::haxor::context::Gizmo_obj{
	public:
		typedef ::haxor::context::Gizmo_obj super;
		typedef WireSphereGizmo_obj OBJ_;
		WireSphereGizmo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.context.WireSphereGizmo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WireSphereGizmo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WireSphereGizmo_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WireSphereGizmo","\xc8","\x62","\x55","\xb4"); }

		virtual Void OnBuild( );

};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_WireSphereGizmo */ 
