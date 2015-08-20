#ifndef INCLUDED_haxor_context_EngineContext
#define INCLUDED_haxor_context_EngineContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,context,BaseProcess)
HX_DECLARE_CLASS2(haxor,context,CameraContext)
HX_DECLARE_CLASS2(haxor,context,DataContext)
HX_DECLARE_CLASS2(haxor,context,EngineContext)
HX_DECLARE_CLASS2(haxor,context,GizmoContext)
HX_DECLARE_CLASS2(haxor,context,KernelContext)
HX_DECLARE_CLASS2(haxor,context,MaterialContext)
HX_DECLARE_CLASS2(haxor,context,MeshContext)
HX_DECLARE_CLASS2(haxor,context,ParticleContext)
HX_DECLARE_CLASS2(haxor,context,PhysicsContext)
HX_DECLARE_CLASS2(haxor,context,Process)
HX_DECLARE_CLASS2(haxor,context,RendererContext)
HX_DECLARE_CLASS2(haxor,context,TextureContext)
HX_DECLARE_CLASS2(haxor,context,TransformContext)
HX_DECLARE_CLASS2(haxor,core,Entity)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,io,serialization,ISerializable)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  EngineContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EngineContext_obj OBJ_;
		EngineContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.context.EngineContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EngineContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EngineContext_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EngineContext","\x2d","\x22","\x96","\xe0"); }

		static void __boot();
		static int uid;
		static int maxNodes;
		static int collectRate;
		static ::haxor::context::Process update;
		static ::haxor::context::Process fixed_update;
		static Array< ::Dynamic > awake;
		static Array< ::Dynamic > start;
		static ::haxor::context::Process resize;
		static ::haxor::context::Process render;
		static ::haxor::context::Process resources;
		static ::haxor::context::Process disposables;
		static Array< ::Dynamic > list;
		static ::haxor::context::MeshContext mesh;
		static ::haxor::context::MaterialContext material;
		static ::haxor::context::TextureContext texture;
		static ::haxor::context::CameraContext camera;
		static ::haxor::context::RendererContext renderer;
		static ::haxor::context::ParticleContext particle;
		static ::haxor::context::GizmoContext gizmo;
		static ::haxor::context::DataContext data;
		static ::haxor::context::TransformContext transform;
		static ::haxor::context::PhysicsContext physics;
		static ::haxor::context::KernelContext kernel;
		static Void Initialize( );
		static Dynamic Initialize_dyn();

		static Void Build( );
		static Dynamic Build_dyn();

		static Void Enable( ::haxor::core::Resource p_resource);
		static Dynamic Enable_dyn();

		static Void Disable( ::haxor::core::Resource p_resource);
		static Dynamic Disable_dyn();

		static Void OnEntiyLayerChange( ::haxor::core::Entity p_entity,int p_from,int p_to);
		static Dynamic OnEntiyLayerChange_dyn();

		static Void OnGUIDChange( ::haxor::core::Resource p_resource);
		static Dynamic OnGUIDChange_dyn();

		static ::haxor::core::Resource FindByGUID( ::String p_guid);
		static Dynamic FindByGUID_dyn();

		static Void Destroy( ::haxor::core::Resource p_resource);
		static Dynamic Destroy_dyn();

		static Void ScheduleDestroy( ::haxor::core::Resource p_resource);
		static Dynamic ScheduleDestroy_dyn();

};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_EngineContext */ 
