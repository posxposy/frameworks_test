#ifndef INCLUDED_haxor_core_Scene
#define INCLUDED_haxor_core_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,core,Scene)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct(::String p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.core.Scene")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scene_obj > __new(::String p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Scene","\x2c","\x49","\xff","\x0b"); }

};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_Scene */ 
