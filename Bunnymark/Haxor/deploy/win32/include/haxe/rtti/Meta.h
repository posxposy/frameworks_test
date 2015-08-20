#ifndef INCLUDED_haxe_rtti_Meta
#define INCLUDED_haxe_rtti_Meta

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,rtti,Meta)
namespace haxe{
namespace rtti{


class HXCPP_CLASS_ATTRIBUTES  Meta_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Meta_obj OBJ_;
		Meta_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.rtti.Meta")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Meta_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Meta_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Meta","\xe5","\x76","\x32","\x33"); }

		static Dynamic getMeta( Dynamic t);
		static Dynamic getMeta_dyn();

		static Dynamic getFields( Dynamic t);
		static Dynamic getFields_dyn();

};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_Meta */ 
