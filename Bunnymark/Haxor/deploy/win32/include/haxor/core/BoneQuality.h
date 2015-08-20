#ifndef INCLUDED_haxor_core_BoneQuality
#define INCLUDED_haxor_core_BoneQuality

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,BoneQuality)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  BoneQuality_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BoneQuality_obj OBJ_;
		BoneQuality_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.core.BoneQuality")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BoneQuality_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoneQuality_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BoneQuality","\xbb","\xf1","\xe0","\xdf"); }

		static void __boot();
		static int Auto;
		static int Bone1;
		static int Bone2;
		static int Bone3;
		static int Bone4;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_BoneQuality */ 
