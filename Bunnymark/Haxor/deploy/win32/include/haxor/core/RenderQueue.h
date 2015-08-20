#ifndef INCLUDED_haxor_core_RenderQueue
#define INCLUDED_haxor_core_RenderQueue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,RenderQueue)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  RenderQueue_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderQueue_obj OBJ_;
		RenderQueue_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.RenderQueue")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RenderQueue_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderQueue_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RenderQueue","\x3b","\x52","\xce","\x0d"); }

		static void __boot();
		static int Background;
		static int Opaque;
		static int Transparent;
		static int Overlay;
		static int Interface;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_RenderQueue */ 
