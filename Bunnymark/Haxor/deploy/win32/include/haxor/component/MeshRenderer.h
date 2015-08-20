#ifndef INCLUDED_haxor_component_MeshRenderer
#define INCLUDED_haxor_component_MeshRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Camera)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,MeshRenderer)
HX_DECLARE_CLASS2(haxor,component,Renderer)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IResizeable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh)
HX_DECLARE_CLASS2(haxor,math,AABB3)
HX_DECLARE_CLASS2(haxor,math,Vector3)
namespace haxor{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  MeshRenderer_obj : public ::haxor::component::Renderer_obj{
	public:
		typedef ::haxor::component::Renderer_obj super;
		typedef MeshRenderer_obj OBJ_;
		MeshRenderer_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.MeshRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MeshRenderer_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshRenderer_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MeshRenderer","\x70","\x4c","\x68","\x3e"); }

		int __fcid;
		virtual ::haxor::graphics::mesh::Mesh get_mesh( );
		Dynamic get_mesh_dyn();

		virtual ::haxor::graphics::mesh::Mesh set_mesh( ::haxor::graphics::mesh::Mesh v);
		Dynamic set_mesh_dyn();

		::haxor::graphics::mesh::Mesh m_mesh;
		::haxor::math::Vector3 m_ws_center;
		::haxor::math::Vector3 m_ws_radius;
		::haxor::math::AABB3 m_aabb;
		bool m_culling_dirty;
		virtual Void OnBuild( );

		virtual bool IsVisible( ::haxor::component::Camera p_camera);
		Dynamic IsVisible_dyn();

		virtual bool CheckCulling( );

		virtual Void OnTransformUpdate( bool p_hierarchy);

		virtual Void UpdateWorldBounds( );
		Dynamic UpdateWorldBounds_dyn();

		virtual Void OnRender( );

		static ::haxor::component::MeshRenderer current;
};

} // end namespace haxor
} // end namespace component

#endif /* INCLUDED_haxor_component_MeshRenderer */ 
