#ifndef INCLUDED_haxor_physics_Collision
#define INCLUDED_haxor_physics_Collision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_ds_IUSetItem
#include <haxor/ds/IUSetItem.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS3(haxor,component,physics,Collider)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,ds,IUSetItem)
HX_DECLARE_CLASS2(haxor,math,Vector3)
HX_DECLARE_CLASS2(haxor,physics,Collision)
namespace haxor{
namespace physics{


class HXCPP_CLASS_ATTRIBUTES  Collision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Collision_obj OBJ_;
		Collision_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.physics.Collision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Collision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Collision_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxor::ds::IUSetItem_obj *();
		::String __ToString() const { return HX_HCSTRING("Collision","\x52","\x88","\x0d","\x7d"); }

		int usid;
		::haxor::component::physics::Collider from;
		::haxor::component::physics::Collider to;
		::haxor::math::Vector3 point;
		Float depth;
		::haxor::math::Vector3 normal;
		Float speed;
		virtual ::haxor::physics::Collision Invert( );
		Dynamic Invert_dyn();

		virtual Void Reset( );
		Dynamic Reset_dyn();

};

} // end namespace haxor
} // end namespace physics

#endif /* INCLUDED_haxor_physics_Collision */ 
