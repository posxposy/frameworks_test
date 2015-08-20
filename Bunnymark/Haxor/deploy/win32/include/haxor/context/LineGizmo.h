#ifndef INCLUDED_haxor_context_LineGizmo
#define INCLUDED_haxor_context_LineGizmo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
HX_DECLARE_CLASS2(haxor,context,Gizmo)
HX_DECLARE_CLASS2(haxor,context,LineGizmo)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  LineGizmo_obj : public ::haxor::context::Gizmo_obj{
	public:
		typedef ::haxor::context::Gizmo_obj super;
		typedef LineGizmo_obj OBJ_;
		LineGizmo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.context.LineGizmo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LineGizmo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineGizmo_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LineGizmo","\xc6","\xfc","\xd7","\x7c"); }

		virtual Void OnBuild( );

};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_LineGizmo */ 
