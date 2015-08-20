#ifndef INCLUDED_haxor_physics_PhysicsMaterial
#define INCLUDED_haxor_physics_PhysicsMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,physics,PhysicsMaterial)
namespace haxor{
namespace physics{


class HXCPP_CLASS_ATTRIBUTES  PhysicsMaterial_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef PhysicsMaterial_obj OBJ_;
		PhysicsMaterial_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.physics.PhysicsMaterial")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PhysicsMaterial_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsMaterial_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PhysicsMaterial","\x6e","\xf8","\xd4","\xea"); }

		Float bounce;
		Float friction;
		static ::haxor::physics::PhysicsMaterial m_empty;
		static ::haxor::physics::PhysicsMaterial get_empty( );
		static Dynamic get_empty_dyn();

};

} // end namespace haxor
} // end namespace physics

#endif /* INCLUDED_haxor_physics_PhysicsMaterial */ 
