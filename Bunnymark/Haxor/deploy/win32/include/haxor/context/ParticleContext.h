#ifndef INCLUDED_haxor_context_ParticleContext
#define INCLUDED_haxor_context_ParticleContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,context,ParticleContext)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  ParticleContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ParticleContext_obj OBJ_;
		ParticleContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.context.ParticleContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ParticleContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ParticleContext_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ParticleContext","\x29","\x7c","\x52","\xda"); }

		virtual Void Initialize( );
		Dynamic Initialize_dyn();

};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_ParticleContext */ 
