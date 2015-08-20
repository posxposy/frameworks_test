#ifndef INCLUDED_haxor_physics_CollisionSolver
#define INCLUDED_haxor_physics_CollisionSolver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS3(haxor,component,physics,BoxCollider)
HX_DECLARE_CLASS3(haxor,component,physics,Collider)
HX_DECLARE_CLASS3(haxor,component,physics,RigidBody)
HX_DECLARE_CLASS3(haxor,component,physics,SphereCollider)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,ds,IUSetItem)
HX_DECLARE_CLASS2(haxor,physics,Collision)
HX_DECLARE_CLASS2(haxor,physics,CollisionSolver)
HX_DECLARE_CLASS3(haxor,physics,broadphase,BroadPhase)
namespace haxor{
namespace physics{


class HXCPP_CLASS_ATTRIBUTES  CollisionSolver_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollisionSolver_obj OBJ_;
		CollisionSolver_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.physics.CollisionSolver")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CollisionSolver_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollisionSolver_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CollisionSolver","\x05","\xd6","\x99","\x5e"); }

		::haxor::physics::broadphase::BroadPhase broadphase;
		int iterations;
		virtual Void Step( );
		Dynamic Step_dyn();

		virtual Void Solve( ::haxor::physics::Collision c);
		Dynamic Solve_dyn();

		virtual Void Apply( ::haxor::physics::Collision c);
		Dynamic Apply_dyn();

		virtual Void Resolve( ::haxor::component::physics::RigidBody rb,::haxor::physics::Collision c,Float ratio);
		Dynamic Resolve_dyn();

		virtual Void SolveBoxBox( ::haxor::component::physics::BoxCollider ca,::haxor::component::physics::BoxCollider cb,::haxor::physics::Collision c);
		Dynamic SolveBoxBox_dyn();

		virtual Void SolveSphereSphere( ::haxor::component::physics::SphereCollider ca,::haxor::component::physics::SphereCollider cb,::haxor::physics::Collision c);
		Dynamic SolveSphereSphere_dyn();

		virtual Void SolveSphereBox( ::haxor::component::physics::SphereCollider ca,::haxor::component::physics::BoxCollider cb,::haxor::physics::Collision c);
		Dynamic SolveSphereBox_dyn();

};

} // end namespace haxor
} // end namespace physics

#endif /* INCLUDED_haxor_physics_CollisionSolver */ 
