#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_component_SkinnedMeshRenderer
#include <haxor/component/SkinnedMeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
#endif
#ifndef INCLUDED_haxor_core_BoneQuality
#include <haxor/core/BoneQuality.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh3
#include <haxor/graphics/mesh/Mesh3.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_SkinnedMesh3
#include <haxor/graphics/mesh/SkinnedMesh3.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_ComputeTexture
#include <haxor/graphics/texture/ComputeTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
namespace haxor{
namespace component{

Void SkinnedMeshRenderer_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","new",0xfc589b55,"haxor.component.SkinnedMeshRenderer.new","haxor/component/SkinnedMeshRenderer.hx",26,0x9853527d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(26)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	super::__construct(tmp);
}
;
	return null();
}

//SkinnedMeshRenderer_obj::~SkinnedMeshRenderer_obj() { }

Dynamic SkinnedMeshRenderer_obj::__CreateEmpty() { return  new SkinnedMeshRenderer_obj; }
hx::ObjectPtr< SkinnedMeshRenderer_obj > SkinnedMeshRenderer_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< SkinnedMeshRenderer_obj > _result_ = new SkinnedMeshRenderer_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic SkinnedMeshRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkinnedMeshRenderer_obj > _result_ = new SkinnedMeshRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Array< ::Dynamic > SkinnedMeshRenderer_obj::set_joints( Array< ::Dynamic > v){
	HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","set_joints",0x5cdea3d1,"haxor.component.SkinnedMeshRenderer.set_joints","haxor/component/SkinnedMeshRenderer.hx",33,0x9853527d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(34)
	bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Array< ::Dynamic > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp)){
		HX_STACK_LINE(34)
		tmp1 = Array_obj< ::Dynamic >::__new();
	}
	else{
		HX_STACK_LINE(34)
		tmp1 = v;
	}
	HX_STACK_LINE(34)
	this->m_joints = tmp1;
	HX_STACK_LINE(35)
	Array< Float > tmp2 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	this->m_jf32 = tmp2;
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		Array< ::Dynamic > tmp3 = this->m_joints;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		int _g = tmp3->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			if ((tmp5)){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(36)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(36)
			while((true)){
				HX_STACK_LINE(36)
				bool tmp7 = (_g2 < (int)12);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(36)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(36)
				if ((tmp8)){
					HX_STACK_LINE(36)
					break;
				}
				HX_STACK_LINE(36)
				int tmp9 = (_g2)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(36)
				int j = tmp9;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(36)
				Array< Float > tmp10 = this->m_jf32;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(36)
				Array< ::Dynamic > tmp11 = this->m_joints;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(36)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(36)
				::haxor::component::Transform tmp13 = tmp11->__get(tmp12).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(36)
				::haxor::math::Matrix4 tmp14 = tmp13->get_WorldMatrix();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(36)
				int tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(36)
				Float tmp16 = tmp14->GetIndex(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(36)
				tmp10->push(tmp16);
			}
		}
	}
	HX_STACK_LINE(37)
	Array< ::Dynamic > tmp3 = this->m_joints;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	this->UpdateSkinTexture(tmp4);
	HX_STACK_LINE(38)
	bool tmp5 = ::haxor::graphics::GL_obj::BONE_TEXTURE;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(38)
	if ((tmp6)){
		HX_STACK_LINE(38)
		Array< ::Dynamic > tmp7 = this->m_joints;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		int tmp8 = tmp7->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		int tmp9 = ::haxor::graphics::GL_obj::get_MAX_UNIFORM_BONES();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		if ((tmp10)){
			HX_STACK_LINE(38)
			::String tmp11 = this->get_name();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(38)
			::String tmp12 = (HX_HCSTRING("SkinnedMeshRenderer> [","\xb9","\xfd","\xe4","\xab") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(38)
			::String tmp13 = (tmp12 + HX_HCSTRING("] max bone count exceeded!","\xa0","\x27","\xaf","\x02"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(38)
			Dynamic p_msg = tmp13;		HX_STACK_VAR(p_msg,"p_msg");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
				HX_STACK_LINE(38)
				int tmp14 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(38)
				int tmp15 = p_level;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(38)
				bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(38)
				if ((tmp16)){
					HX_STACK_LINE(38)
					Dynamic tmp17 = p_msg;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(38)
					::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(38)
					::String tmp19 = (HX_HCSTRING("[W] ","\xbf","\xbf","\x68","\x3c") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(38)
					::cpp::Lib_obj::println(tmp19);
				}
			}
		}
	}
	HX_STACK_LINE(39)
	Array< ::Dynamic > tmp7 = this->m_joints;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedMeshRenderer_obj,set_joints,return )

Array< ::Dynamic > SkinnedMeshRenderer_obj::get_joints( ){
	HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","get_joints",0x5961055d,"haxor.component.SkinnedMeshRenderer.get_joints","haxor/component/SkinnedMeshRenderer.hx",41,0x9853527d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	Array< ::Dynamic > tmp = this->m_joints;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedMeshRenderer_obj,get_joints,return )

::haxor::graphics::mesh::Mesh SkinnedMeshRenderer_obj::set_mesh( ::haxor::graphics::mesh::Mesh v){
	HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","set_mesh",0x783fbbd5,"haxor.component.SkinnedMeshRenderer.set_mesh","haxor/component/SkinnedMeshRenderer.hx",50,0x9853527d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(51)
	::haxor::graphics::mesh::SkinnedMesh3 skm = ((::haxor::graphics::mesh::SkinnedMesh3)(v));		HX_STACK_VAR(skm,"skm");
	HX_STACK_LINE(52)
	Array< Float > tmp = Array_obj< Float >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	this->m_bmf32 = tmp;
	HX_STACK_LINE(53)
	bool tmp1 = (skm != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	if ((tmp1)){
		HX_STACK_LINE(55)
		Array< ::Dynamic > tmp2 = skm->get_binds();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		this->UpdateSkinTexture(tmp3);
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(56)
			Array< ::Dynamic > tmp4 = skm->get_binds();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			int _g = tmp4->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				if ((tmp6)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(56)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(56)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(56)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(56)
				while((true)){
					HX_STACK_LINE(56)
					bool tmp8 = (_g2 < (int)12);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(56)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					if ((tmp9)){
						HX_STACK_LINE(56)
						break;
					}
					HX_STACK_LINE(56)
					int tmp10 = (_g2)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					int j = tmp10;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(56)
					Array< Float > tmp11 = this->m_bmf32;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					Array< ::Dynamic > tmp12 = skm->get_binds();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(56)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(56)
					::haxor::math::Matrix4 tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::math::Matrix4 >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(56)
					int tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(56)
					Float tmp16 = tmp14->GetIndex(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(56)
					tmp11->push(tmp16);
				}
			}
		}
	}
	HX_STACK_LINE(58)
	bool tmp2 = ::haxor::graphics::GL_obj::BONE_TEXTURE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	if ((tmp2)){
		HX_STACK_LINE(60)
		::haxor::context::RendererContext tmp3 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		tmp3->UpdateSkinning(hx::ObjectPtr<OBJ_>(this),false);
	}
	HX_STACK_LINE(62)
	::haxor::graphics::mesh::Mesh tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	::haxor::graphics::mesh::Mesh tmp4 = this->super::set_mesh(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	return tmp4;
}


int SkinnedMeshRenderer_obj::get_quality( ){
	HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","get_quality",0xc82eaccb,"haxor.component.SkinnedMeshRenderer.get_quality","haxor/component/SkinnedMeshRenderer.hx",69,0x9853527d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	int tmp = this->m_quality;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedMeshRenderer_obj,get_quality,return )

int SkinnedMeshRenderer_obj::set_quality( int v){
	HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","set_quality",0xd29bb3d7,"haxor.component.SkinnedMeshRenderer.set_quality","haxor/component/SkinnedMeshRenderer.hx",70,0x9853527d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(70)
	this->m_quality = v;
	HX_STACK_LINE(70)
	int tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedMeshRenderer_obj,set_quality,return )

Void SkinnedMeshRenderer_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","OnBuild",0x6ed78ae4,"haxor.component.SkinnedMeshRenderer.OnBuild","haxor/component/SkinnedMeshRenderer.hx",100,0x9853527d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->__smid = (int)-1;
		HX_STACK_LINE(102)
		this->super::OnBuild();
		HX_STACK_LINE(103)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		this->m_joints = tmp;
		HX_STACK_LINE(104)
		Array< Float > tmp1 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		this->m_bmf32 = tmp1;
		HX_STACK_LINE(105)
		Array< Float > tmp2 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		this->m_jf32 = tmp2;
		HX_STACK_LINE(106)
		int tmp3 = ::haxor::core::BoneQuality_obj::Bone2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		this->m_quality = tmp3;
	}
return null();
}


Void SkinnedMeshRenderer_obj::OnRender( ){
{
		HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","OnRender",0xc0567ae0,"haxor.component.SkinnedMeshRenderer.OnRender","haxor/component/SkinnedMeshRenderer.hx",112,0x9853527d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		::haxor::graphics::material::Material tmp = this->m_material;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(115)
			int k = (int)0;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(117)
				Array< ::Dynamic > tmp2 = this->m_joints;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(117)
				int _g = tmp2->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(117)
				while((true)){
					HX_STACK_LINE(117)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(117)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(117)
					if ((tmp4)){
						HX_STACK_LINE(117)
						break;
					}
					HX_STACK_LINE(117)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(117)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(117)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(117)
					while((true)){
						HX_STACK_LINE(117)
						bool tmp6 = (_g2 < (int)12);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(117)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(117)
						if ((tmp7)){
							HX_STACK_LINE(117)
							break;
						}
						HX_STACK_LINE(117)
						int tmp8 = (_g2)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(117)
						int j = tmp8;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(117)
						Array< Float > tmp9 = this->m_jf32;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(117)
						int tmp10 = (k)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(117)
						Array< ::Dynamic > tmp11 = this->m_joints;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(117)
						int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(117)
						::haxor::component::Transform tmp13 = tmp11->__get(tmp12).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(117)
						::haxor::math::Matrix4 tmp14 = tmp13->get_WorldMatrix();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(117)
						int tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(117)
						Float tmp16 = tmp14->GetIndex(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(117)
						tmp9[tmp10] = tmp16;
					}
				}
			}
			HX_STACK_LINE(119)
			bool tmp2 = ::haxor::graphics::GL_obj::BONE_TEXTURE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			if ((tmp2)){
				HX_STACK_LINE(121)
				::haxor::context::RendererContext tmp3 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(121)
				tmp3->UpdateSkinning(hx::ObjectPtr<OBJ_>(this),true);
			}
			else{
				HX_STACK_LINE(126)
				::haxor::graphics::material::Material tmp3 = this->m_material;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				Array< Float > tmp4 = this->m_jf32;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				tmp3->SetFloat4Array(HX_HCSTRING("Joints","\x09","\x5c","\x9e","\xc5"),tmp4);
				HX_STACK_LINE(128)
				::haxor::graphics::material::Material tmp5 = this->m_material;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(128)
				Array< Float > tmp6 = this->m_bmf32;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(128)
				tmp5->SetFloat4Array(HX_HCSTRING("Binds","\xf6","\x7f","\x2d","\x46"),tmp6);
			}
			HX_STACK_LINE(131)
			int bq = (int)2;		HX_STACK_VAR(bq,"bq");
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				int tmp3 = this->m_quality;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(132)
				int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				switch( (int)(tmp4)){
					case (int)0: {
						HX_STACK_LINE(134)
						bq = (int)2;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(135)
						bq = (int)1;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(136)
						bq = (int)2;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(137)
						bq = (int)3;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(138)
						bq = (int)4;
					}
					;break;
				}
			}
			HX_STACK_LINE(140)
			::haxor::graphics::material::Material tmp3 = this->m_material;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			int tmp4 = bq;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			tmp3->SetInt(HX_HCSTRING("SkinQuality","\xa2","\x27","\x8b","\x51"),tmp4);
		}
		HX_STACK_LINE(142)
		this->super::OnRender();
	}
return null();
}


Void SkinnedMeshRenderer_obj::UpdateSkinTexture( int p_joint_count){
{
		HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","UpdateSkinTexture",0x69beedea,"haxor.component.SkinnedMeshRenderer.UpdateSkinTexture","haxor/component/SkinnedMeshRenderer.hx",151,0x9853527d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_joint_count,"p_joint_count")
		HX_STACK_LINE(152)
		bool tmp = ::haxor::graphics::GL_obj::BONE_TEXTURE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(152)
			return null();
		}
		HX_STACK_LINE(153)
		bool tmp2 = (p_joint_count <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		if ((tmp2)){
			HX_STACK_LINE(153)
			return null();
		}
		HX_STACK_LINE(154)
		::haxor::graphics::texture::ComputeTexture tmp3 = this->m_jt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		if ((tmp4)){
			HX_STACK_LINE(154)
			::haxor::graphics::texture::ComputeTexture tmp5 = this->m_jt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			::haxor::core::Resource_obj::Destroy(tmp5);
		}
		HX_STACK_LINE(155)
		::haxor::graphics::texture::ComputeTexture tmp5 = this->m_bmt;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		if ((tmp6)){
			HX_STACK_LINE(155)
			::haxor::graphics::texture::ComputeTexture tmp7 = this->m_bmt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			::haxor::core::Resource_obj::Destroy(tmp7);
		}
		HX_STACK_LINE(156)
		int tmp7 = p_joint_count;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		::haxor::math::Vector2 tmp8 = this->GetSkinTexSize(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		::haxor::math::Vector2 ts = tmp8;		HX_STACK_VAR(ts,"ts");
		HX_STACK_LINE(157)
		int tmp9 = ((int)(ts->x));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		int tmp10 = ((int)(ts->y));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(157)
		int tmp11 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(157)
		::haxor::graphics::texture::ComputeTexture tmp12 = ::haxor::graphics::texture::ComputeTexture_obj::__new(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		this->m_jt = tmp12;
		HX_STACK_LINE(158)
		int tmp13 = ((int)(ts->x));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(158)
		int tmp14 = ((int)(ts->y));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(158)
		int tmp15 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(158)
		::haxor::graphics::texture::ComputeTexture tmp16 = ::haxor::graphics::texture::ComputeTexture_obj::__new(tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(158)
		this->m_bmt = tmp16;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedMeshRenderer_obj,UpdateSkinTexture,(void))

::haxor::math::Vector2 SkinnedMeshRenderer_obj::GetSkinTexSize( int p_joint_count){
	HX_STACK_FRAME("haxor.component.SkinnedMeshRenderer","GetSkinTexSize",0x17377ba0,"haxor.component.SkinnedMeshRenderer.GetSkinTexSize","haxor/component/SkinnedMeshRenderer.hx",167,0x9853527d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_joint_count,"p_joint_count")
	HX_STACK_LINE(168)
	int w = (int)1;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(169)
	int h = (int)1;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(170)
	int tmp = (p_joint_count * (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	int t = tmp;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(171)
	while((true)){
		HX_STACK_LINE(171)
		int tmp1 = (w * h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		int tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		if ((tmp4)){
			HX_STACK_LINE(171)
			break;
		}
		HX_STACK_LINE(173)
		int tmp5 = (int(w) << int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		w = tmp5;
		HX_STACK_LINE(174)
		int tmp6 = (w * h);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		int tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		bool tmp8 = (tmp6 >= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		if ((tmp8)){
			HX_STACK_LINE(174)
			break;
		}
		HX_STACK_LINE(175)
		int tmp9 = (int(h) << int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		h = tmp9;
		HX_STACK_LINE(176)
		int tmp10 = (w * h);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(176)
		int tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(176)
		bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(176)
		if ((tmp12)){
			HX_STACK_LINE(176)
			break;
		}
		HX_STACK_LINE(177)
		bool tmp13 = (w >= (int)512);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(177)
		if ((tmp13)){
			HX_STACK_LINE(177)
			bool tmp14 = (h >= (int)512);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(177)
			if ((tmp14)){
				HX_STACK_LINE(177)
				break;
			}
		}
	}
	HX_STACK_LINE(179)
	::haxor::math::Vector2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		::haxor::context::DataContext tmp2 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		::haxor::context::DataContext _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(179)
		Array< ::Dynamic > tmp3 = _this->m_v2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		int tmp4 = (_this->m_nv2 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		int tmp5 = _this->m_v2->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(179)
		int tmp7 = _this->m_nv2 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		tmp1 = tmp3->__get(tmp7).StaticCast< ::haxor::math::Vector2 >();
	}
	HX_STACK_LINE(179)
	int tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	int tmp3 = h;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	::haxor::math::Vector2 tmp4 = tmp1->Set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedMeshRenderer_obj,GetSkinTexSize,return )


SkinnedMeshRenderer_obj::SkinnedMeshRenderer_obj()
{
}

void SkinnedMeshRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinnedMeshRenderer);
	HX_MARK_MEMBER_NAME(m_joints,"m_joints");
	HX_MARK_MEMBER_NAME(m_quality,"m_quality");
	HX_MARK_MEMBER_NAME(m_bmf32,"m_bmf32");
	HX_MARK_MEMBER_NAME(m_jf32,"m_jf32");
	HX_MARK_MEMBER_NAME(m_jt,"m_jt");
	HX_MARK_MEMBER_NAME(m_bmt,"m_bmt");
	HX_MARK_MEMBER_NAME(__smid,"__smid");
	::haxor::component::MeshRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkinnedMeshRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_joints,"m_joints");
	HX_VISIT_MEMBER_NAME(m_quality,"m_quality");
	HX_VISIT_MEMBER_NAME(m_bmf32,"m_bmf32");
	HX_VISIT_MEMBER_NAME(m_jf32,"m_jf32");
	HX_VISIT_MEMBER_NAME(m_jt,"m_jt");
	HX_VISIT_MEMBER_NAME(m_bmt,"m_bmt");
	HX_VISIT_MEMBER_NAME(__smid,"__smid");
	::haxor::component::MeshRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SkinnedMeshRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_jt") ) { return m_jt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_bmt") ) { return m_bmt; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { if (inCallProp == hx::paccAlways) return get_joints(); }
		if (HX_FIELD_EQ(inName,"m_jf32") ) { return m_jf32; }
		if (HX_FIELD_EQ(inName,"__smid") ) { return __smid; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return get_quality(); }
		if (HX_FIELD_EQ(inName,"m_bmf32") ) { return m_bmf32; }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_joints") ) { return m_joints; }
		if (HX_FIELD_EQ(inName,"set_mesh") ) { return set_mesh_dyn(); }
		if (HX_FIELD_EQ(inName,"OnRender") ) { return OnRender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_quality") ) { return m_quality; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_joints") ) { return set_joints_dyn(); }
		if (HX_FIELD_EQ(inName,"get_joints") ) { return get_joints_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_quality") ) { return get_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GetSkinTexSize") ) { return GetSkinTexSize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"UpdateSkinTexture") ) { return UpdateSkinTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkinnedMeshRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_jt") ) { m_jt=inValue.Cast< ::haxor::graphics::texture::ComputeTexture >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_bmt") ) { m_bmt=inValue.Cast< ::haxor::graphics::texture::ComputeTexture >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { if (inCallProp == hx::paccAlways) return set_joints(inValue); }
		if (HX_FIELD_EQ(inName,"m_jf32") ) { m_jf32=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__smid") ) { __smid=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return set_quality(inValue); }
		if (HX_FIELD_EQ(inName,"m_bmf32") ) { m_bmf32=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_joints") ) { m_joints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_quality") ) { m_quality=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SkinnedMeshRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SkinnedMeshRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"));
	outFields->push(HX_HCSTRING("m_joints","\xbb","\x90","\xfb","\x59"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("m_quality","\xad","\x13","\xce","\x4e"));
	outFields->push(HX_HCSTRING("m_bmf32","\x08","\x85","\x29","\x66"));
	outFields->push(HX_HCSTRING("m_jf32","\xad","\xa0","\x55","\x8e"));
	outFields->push(HX_HCSTRING("m_jt","\x9c","\xb4","\x54","\x48"));
	outFields->push(HX_HCSTRING("m_bmt","\x37","\x3c","\xc3","\x01"));
	outFields->push(HX_HCSTRING("__smid","\x15","\xfe","\x4e","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SkinnedMeshRenderer_obj,m_joints),HX_HCSTRING("m_joints","\xbb","\x90","\xfb","\x59")},
	{hx::fsInt,(int)offsetof(SkinnedMeshRenderer_obj,m_quality),HX_HCSTRING("m_quality","\xad","\x13","\xce","\x4e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(SkinnedMeshRenderer_obj,m_bmf32),HX_HCSTRING("m_bmf32","\x08","\x85","\x29","\x66")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(SkinnedMeshRenderer_obj,m_jf32),HX_HCSTRING("m_jf32","\xad","\xa0","\x55","\x8e")},
	{hx::fsObject /*::haxor::graphics::texture::ComputeTexture*/ ,(int)offsetof(SkinnedMeshRenderer_obj,m_jt),HX_HCSTRING("m_jt","\x9c","\xb4","\x54","\x48")},
	{hx::fsObject /*::haxor::graphics::texture::ComputeTexture*/ ,(int)offsetof(SkinnedMeshRenderer_obj,m_bmt),HX_HCSTRING("m_bmt","\x37","\x3c","\xc3","\x01")},
	{hx::fsInt,(int)offsetof(SkinnedMeshRenderer_obj,__smid),HX_HCSTRING("__smid","\x15","\xfe","\x4e","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("set_joints","\x26","\xf6","\x0e","\x85"),
	HX_HCSTRING("get_joints","\xb2","\x57","\x91","\x81"),
	HX_HCSTRING("m_joints","\xbb","\x90","\xfb","\x59"),
	HX_HCSTRING("set_mesh","\xea","\x5e","\x71","\x76"),
	HX_HCSTRING("get_quality","\xd6","\x64","\x46","\xca"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	HX_HCSTRING("m_quality","\xad","\x13","\xce","\x4e"),
	HX_HCSTRING("m_bmf32","\x08","\x85","\x29","\x66"),
	HX_HCSTRING("m_jf32","\xad","\xa0","\x55","\x8e"),
	HX_HCSTRING("m_jt","\x9c","\xb4","\x54","\x48"),
	HX_HCSTRING("m_bmt","\x37","\x3c","\xc3","\x01"),
	HX_HCSTRING("__smid","\x15","\xfe","\x4e","\xfb"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("OnRender","\xf5","\x1d","\x88","\xbe"),
	HX_HCSTRING("UpdateSkinTexture","\x35","\xc0","\xdc","\xcd"),
	HX_HCSTRING("GetSkinTexSize","\x75","\x1c","\x08","\xe4"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkinnedMeshRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkinnedMeshRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class SkinnedMeshRenderer_obj::__mClass;

void SkinnedMeshRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.SkinnedMeshRenderer","\xe3","\x4c","\x11","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SkinnedMeshRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SkinnedMeshRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxor
} // end namespace component
