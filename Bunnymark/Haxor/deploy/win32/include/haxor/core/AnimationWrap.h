#ifndef INCLUDED_haxor_core_AnimationWrap
#define INCLUDED_haxor_core_AnimationWrap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,AnimationWrap)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  AnimationWrap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationWrap_obj OBJ_;
		AnimationWrap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.AnimationWrap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnimationWrap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationWrap_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AnimationWrap","\xce","\x76","\x3b","\x89"); }

		static void __boot();
		static int Clamp;
		static int Loop;
		static int Oscilate;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_AnimationWrap */ 
