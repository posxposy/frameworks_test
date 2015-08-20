#ifndef INCLUDED_haxor_component_SkinnedMeshRenderer
#define INCLUDED_haxor_component_SkinnedMeshRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,MeshRenderer)
HX_DECLARE_CLASS2(haxor,component,Renderer)
HX_DECLARE_CLASS2(haxor,component,SkinnedMeshRenderer)
HX_DECLARE_CLASS2(haxor,component,Transform)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh)
HX_DECLARE_CLASS3(haxor,graphics,texture,ComputeTexture)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture2D)
HX_DECLARE_CLASS2(haxor,math,Vector2)
namespace haxor{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  SkinnedMeshRenderer_obj : public ::haxor::component::MeshRenderer_obj{
	public:
		typedef ::haxor::component::MeshRenderer_obj super;
		typedef SkinnedMeshRenderer_obj OBJ_;
		SkinnedMeshRenderer_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.SkinnedMeshRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SkinnedMeshRenderer_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SkinnedMeshRenderer_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SkinnedMeshRenderer","\x40","\x12","\xcf","\xef"); }

		virtual Array< ::Dynamic > set_joints( Array< ::Dynamic > v);
		Dynamic set_joints_dyn();

		virtual Array< ::Dynamic > get_joints( );
		Dynamic get_joints_dyn();

		Array< ::Dynamic > m_joints;
		virtual ::haxor::graphics::mesh::Mesh set_mesh( ::haxor::graphics::mesh::Mesh v);

		virtual int get_quality( );
		Dynamic get_quality_dyn();

		virtual int set_quality( int v);
		Dynamic set_quality_dyn();

		int m_quality;
		Array< Float > m_bmf32;
		Array< Float > m_jf32;
		::haxor::graphics::texture::ComputeTexture m_jt;
		::haxor::graphics::texture::ComputeTexture m_bmt;
		int __smid;
		virtual Void OnBuild( );

		virtual Void OnRender( );

		virtual Void UpdateSkinTexture( int p_joint_count);
		Dynamic UpdateSkinTexture_dyn();

		virtual ::haxor::math::Vector2 GetSkinTexSize( int p_joint_count);
		Dynamic GetSkinTexSize_dyn();

};

} // end namespace haxor
} // end namespace component

#endif /* INCLUDED_haxor_component_SkinnedMeshRenderer */ 
