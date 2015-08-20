#ifndef INCLUDED_haxor_context_PointGizmo
#define INCLUDED_haxor_context_PointGizmo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
HX_DECLARE_CLASS2(haxor,context,Gizmo)
HX_DECLARE_CLASS2(haxor,context,PointGizmo)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  PointGizmo_obj : public ::haxor::context::Gizmo_obj{
	public:
		typedef ::haxor::context::Gizmo_obj super;
		typedef PointGizmo_obj OBJ_;
		PointGizmo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.context.PointGizmo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PointGizmo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PointGizmo_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PointGizmo","\x2a","\x37","\x79","\x6a"); }

		virtual Void OnBuild( );

};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_PointGizmo */ 
