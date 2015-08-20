#ifndef INCLUDED_bm_Stage
#define INCLUDED_bm_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
HX_DECLARE_CLASS1(bm,Sprite)
HX_DECLARE_CLASS1(bm,Stage)
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,MeshRenderer)
HX_DECLARE_CLASS2(haxor,component,Renderer)
HX_DECLARE_CLASS2(haxor,context,BaseProcess)
HX_DECLARE_CLASS2(haxor,context,Process)
HX_DECLARE_CLASS2(haxor,context,UID)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,material,Material)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh)
HX_DECLARE_CLASS3(haxor,graphics,texture,ComputeTexture)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture2D)
HX_DECLARE_CLASS3(haxor,io,serialization,ISerializable)
namespace bm{


class HXCPP_CLASS_ATTRIBUTES  Stage_obj : public ::haxor::component::MeshRenderer_obj{
	public:
		typedef ::haxor::component::MeshRenderer_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="bm.Stage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stage_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stage","\x9e","\xda","\x38","\x17"); }

		static void __boot();
		::haxor::context::Process m_list;
		::haxor::graphics::mesh::Mesh m_sm;
		::haxor::graphics::texture::ComputeTexture m_sd;
		bool m_dirty;
		::haxor::graphics::material::Material m_mat;
		virtual Void OnBuild( );

		virtual Void Initialize( int p_sprite_count);
		Dynamic Initialize_dyn();

		virtual Void Add( ::bm::Sprite p_sprite);
		Dynamic Add_dyn();

		virtual Void Remove( ::bm::Sprite p_sprite);
		Dynamic Remove_dyn();

		virtual Void OnRender( );

		virtual Void OnSpriteTransform( ::bm::Sprite s);
		Dynamic OnSpriteTransform_dyn();

		virtual Void OnSpriteBuild( ::bm::Sprite s);
		Dynamic OnSpriteBuild_dyn();

		virtual Void OnSpriteDestroy( ::bm::Sprite s);
		Dynamic OnSpriteDestroy_dyn();

		static ::bm::Stage instance;
		static ::haxor::context::UID ids;
		static ::String vs_stage;
		static ::String fs_stage;
};

} // end namespace bm

#endif /* INCLUDED_bm_Stage */ 
