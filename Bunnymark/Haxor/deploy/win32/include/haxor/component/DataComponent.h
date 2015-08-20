#ifndef INCLUDED_haxor_component_DataComponent
#define INCLUDED_haxor_component_DataComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,DataComponent)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
namespace haxor{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  DataComponent_obj : public ::haxor::component::Component_obj{
	public:
		typedef ::haxor::component::Component_obj super;
		typedef DataComponent_obj OBJ_;
		DataComponent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.DataComponent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DataComponent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataComponent_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DataComponent","\x13","\xb5","\xd0","\x62"); }

		Dynamic data;
};

} // end namespace haxor
} // end namespace component

#endif /* INCLUDED_haxor_component_DataComponent */ 
