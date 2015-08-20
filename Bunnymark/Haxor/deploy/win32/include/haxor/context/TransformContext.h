#ifndef INCLUDED_haxor_context_TransformContext
#define INCLUDED_haxor_context_TransformContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,Transform)
HX_DECLARE_CLASS2(haxor,context,TransformContext)
HX_DECLARE_CLASS2(haxor,context,UID)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  TransformContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TransformContext_obj OBJ_;
		TransformContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.context.TransformContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TransformContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TransformContext_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TransformContext","\x03","\x32","\xe8","\xe2"); }

		::haxor::context::UID tid;
		virtual Void Initialize( );
		Dynamic Initialize_dyn();

		virtual Void OnChange( ::haxor::component::Transform t);
		Dynamic OnChange_dyn();

		virtual Void OnHierarchyChange( ::haxor::component::Transform t);
		Dynamic OnHierarchyChange_dyn();

};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_TransformContext */ 
