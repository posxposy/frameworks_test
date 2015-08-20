#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
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
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_light_Light
#include <haxor/component/light/Light.h>
#endif
#ifndef INCLUDED_haxor_component_physics_Collider
#include <haxor/component/physics/Collider.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_context_PhysicsContext
#include <haxor/context/PhysicsContext.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
#endif
#ifndef INCLUDED_haxor_context_ShaderContext
#include <haxor/context/ShaderContext.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_Debug
#include <haxor/core/Debug.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_Graphics
#include <haxor/graphics/Graphics.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
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
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace context{

Void Gizmo_obj::__construct(int p_type,int p_count)
{
HX_STACK_FRAME("haxor.context.Gizmo","new",0x1cb67ae1,"haxor.context.Gizmo.new","haxor/context/GizmoContext.hx",306,0xa99c50bc)
HX_STACK_THIS(this)
HX_STACK_ARG(p_type,"p_type")
HX_STACK_ARG(p_count,"p_count")
{
	HX_STACK_LINE(307)
	this->type = p_type;
	HX_STACK_LINE(308)
	this->m_render_count = (int)0;
	HX_STACK_LINE(309)
	this->m_gizmo_count = p_count;
	HX_STACK_LINE(311)
	bool tmp = ::haxor::graphics::GL_obj::TEXTURE_FLOAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	if ((tmp1)){
		HX_STACK_LINE(311)
		return null();
	}
	HX_STACK_LINE(312)
	int tmp2 = ::haxor::graphics::GL_obj::MAX_VERTEX_TEXTURES;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(312)
	if ((tmp3)){
		HX_STACK_LINE(312)
		return null();
	}
	HX_STACK_LINE(314)
	::haxor::graphics::material::Shader tmp4 = ::haxor::context::Gizmo_obj::SHADER;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(314)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(314)
	if ((tmp5)){
		HX_STACK_LINE(314)
		::String tmp6 = ::haxor::context::ShaderContext_obj::vs_gizmo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(314)
		::String tmp7 = ::haxor::context::ShaderContext_obj::fs_flat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(314)
		::haxor::graphics::material::Shader tmp8 = ::haxor::graphics::material::Shader_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(314)
		::haxor::context::Gizmo_obj::SHADER = tmp8;
	}
	HX_STACK_LINE(316)
	::String tmp6 = (HX_HCSTRING("Gizmo","\x5a","\x89","\x37","\x27") + p_type);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(316)
	::String tmp7 = (tmp6 + HX_HCSTRING("Material","\xc7","\x18","\x57","\xca"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(316)
	::haxor::graphics::material::Material tmp8 = ::haxor::graphics::material::Material_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(316)
	this->material = tmp8;
	HX_STACK_LINE(317)
	::haxor::graphics::material::Material tmp9 = this->material;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(317)
	::haxor::graphics::material::Shader tmp10 = ::haxor::context::Gizmo_obj::SHADER;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(317)
	tmp9->set_shader(tmp10);
	HX_STACK_LINE(318)
	::haxor::graphics::material::Material tmp11 = this->material;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(318)
	tmp11->blend = true;
	HX_STACK_LINE(319)
	::haxor::graphics::material::Material tmp12 = this->material;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(319)
	tmp12->SetBlending((int)770,(int)771);
	HX_STACK_LINE(320)
	::haxor::graphics::material::Material tmp13 = this->material;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(320)
	int tmp14 = p_type;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(320)
	tmp13->SetInt(HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37"),tmp14);
	HX_STACK_LINE(321)
	::haxor::graphics::material::Material tmp15 = this->material;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(321)
	tmp15->ztest = false;
	HX_STACK_LINE(322)
	int tw = (int)0;		HX_STACK_VAR(tw,"tw");
	HX_STACK_LINE(323)
	int th = (int)0;		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(325)
	bool tmp16 = (p_count >= (int)1);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(325)
	if ((tmp16)){
		HX_STACK_LINE(327)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(327)
				{
					HX_STACK_LINE(327)
					int tmp20 = p_count;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(327)
					int tmp21 = ::haxor::context::Gizmo_obj::DATA_OFFSET;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(327)
					Float tmp22 = (Float(tmp21) / Float((int)4));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(327)
					Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(327)
					Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(327)
					Float p_v = tmp24;		HX_STACK_VAR(p_v,"p_v");
					HX_STACK_LINE(327)
					Float tmp25 = p_v;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(327)
					bool tmp26 = (p_v < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(327)
					Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(327)
					if ((tmp26)){
						HX_STACK_LINE(327)
						tmp27 = ((Float)-0.9999999);
					}
					else{
						HX_STACK_LINE(327)
						tmp27 = ((Float)0.9999999);
					}
					HX_STACK_LINE(327)
					Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(327)
					int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(327)
					tmp19 = ((Float)(tmp29));
				}
				HX_STACK_LINE(327)
				int p_v = ((int)(tmp19));		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(327)
				--(p_v);
				HX_STACK_LINE(327)
				int tmp20 = (int(p_v) >> int((int)1));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(327)
				hx::OrEq(p_v,tmp20);
				HX_STACK_LINE(327)
				int tmp21 = (int(p_v) >> int((int)2));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(327)
				hx::OrEq(p_v,tmp21);
				HX_STACK_LINE(327)
				int tmp22 = (int(p_v) >> int((int)4));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(327)
				hx::OrEq(p_v,tmp22);
				HX_STACK_LINE(327)
				int tmp23 = (int(p_v) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(327)
				hx::OrEq(p_v,tmp23);
				HX_STACK_LINE(327)
				int tmp24 = (int(p_v) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(327)
				hx::OrEq(p_v,tmp24);
				HX_STACK_LINE(327)
				tmp18 = ++(p_v);
			}
			HX_STACK_LINE(327)
			Float b = ((Float)(tmp18));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(327)
			Float tmp19 = b;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(327)
			tmp17 = ::Math_obj::max((int)2,tmp19);
		}
		HX_STACK_LINE(327)
		int data_tex_size = ((int)(tmp17));		HX_STACK_VAR(data_tex_size,"data_tex_size");
		HX_STACK_LINE(328)
		int tmp18 = data_tex_size;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(328)
		int tmp19 = data_tex_size;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(328)
		int tmp20 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(328)
		::haxor::graphics::texture::ComputeTexture tmp21 = ::haxor::graphics::texture::ComputeTexture_obj::__new(tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(328)
		this->data = tmp21;
		HX_STACK_LINE(329)
		::haxor::graphics::texture::ComputeTexture tmp22 = this->data;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(329)
		::haxor::io::Buffer tmp23 = tmp22->m_data->get_buffer();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(329)
		::haxor::io::FloatArray f32 = ((::haxor::io::FloatArray)(tmp23));		HX_STACK_VAR(f32,"f32");
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(330)
			int _g = f32->m_length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(330)
			while((true)){
				HX_STACK_LINE(330)
				bool tmp24 = (_g1 < _g);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(330)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(330)
				if ((tmp25)){
					HX_STACK_LINE(330)
					break;
				}
				HX_STACK_LINE(330)
				int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(330)
				int i = tmp26;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(330)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(330)
				int tmp28 = hx::Mod(i,(int)4);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(330)
				bool tmp29 = (tmp28 == (int)3);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(330)
				Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(330)
				if ((tmp29)){
					HX_STACK_LINE(330)
					tmp30 = ((Float)1.0);
				}
				else{
					HX_STACK_LINE(330)
					tmp30 = ((Float)0.0);
				}
				HX_STACK_LINE(330)
				f32->Set(tmp27,tmp30);
			}
		}
		HX_STACK_LINE(331)
		::haxor::graphics::material::Material tmp24 = this->material;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(331)
		::haxor::graphics::texture::ComputeTexture tmp25 = this->data;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(331)
		tmp24->SetTexture(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"),tmp25);
		HX_STACK_LINE(332)
		::haxor::graphics::material::Material tmp26 = this->material;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(332)
		::haxor::graphics::texture::ComputeTexture tmp27 = this->data;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(332)
		int tmp28 = tmp27->m_width;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(332)
		tmp26->SetInt(HX_HCSTRING("DataSize","\x2b","\x3c","\x79","\x65"),tmp28);
		HX_STACK_LINE(333)
		::haxor::graphics::texture::ComputeTexture tmp29 = this->data;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(333)
		tw = tmp29->m_width;
		HX_STACK_LINE(334)
		::haxor::graphics::texture::ComputeTexture tmp30 = this->data;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(334)
		th = tmp30->m_height;
	}
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		int tmp17 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(336)
		bool tmp18 = (tmp17 >= (int)6);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(336)
		if ((tmp18)){
			HX_STACK_LINE(336)
			::String tmp19 = (HX_HCSTRING("Gizmos> Created Renderer [","\xb1","\xba","\xda","\xb6") + p_type);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(336)
			::String tmp20 = (tmp19 + HX_HCSTRING("] data[","\xee","\xbe","\x3f","\xbb"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(336)
			int tmp21 = tw;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(336)
			::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(336)
			::String tmp23 = (tmp22 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(336)
			int tmp24 = th;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(336)
			::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(336)
			::String tmp26 = (tmp25 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(336)
			::cpp::Lib_obj::println(tmp26);
		}
	}
	HX_STACK_LINE(337)
	this->OnBuild();
}
;
	return null();
}

//Gizmo_obj::~Gizmo_obj() { }

Dynamic Gizmo_obj::__CreateEmpty() { return  new Gizmo_obj; }
hx::ObjectPtr< Gizmo_obj > Gizmo_obj::__new(int p_type,int p_count)
{  hx::ObjectPtr< Gizmo_obj > _result_ = new Gizmo_obj();
	_result_->__construct(p_type,p_count);
	return _result_;}

Dynamic Gizmo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gizmo_obj > _result_ = new Gizmo_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Gizmo_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.context.Gizmo","OnBuild",0x792a2070,"haxor.context.Gizmo.OnBuild","haxor/context/GizmoContext.hx",343,0xa99c50bc)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gizmo_obj,OnBuild,(void))

Void Gizmo_obj::Push( ::haxor::math::Color p_color,::haxor::math::Vector4 p_a,::haxor::math::Vector4 p_b,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.context.Gizmo","Push",0xef2cc459,"haxor.context.Gizmo.Push","haxor/context/GizmoContext.hx",353,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_a,"p_a")
		HX_STACK_ARG(p_b,"p_b")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(354)
		bool tmp = ::haxor::graphics::GL_obj::TEXTURE_FLOAT;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		if ((tmp1)){
			HX_STACK_LINE(354)
			return null();
		}
		HX_STACK_LINE(355)
		int tmp2 = ::haxor::graphics::GL_obj::MAX_VERTEX_TEXTURES;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		if ((tmp3)){
			HX_STACK_LINE(355)
			return null();
		}
		HX_STACK_LINE(357)
		int tmp4 = this->m_render_count;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(357)
		int tmp5 = this->m_gizmo_count;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(357)
		bool tmp6 = (tmp4 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(357)
		if ((tmp6)){
			HX_STACK_LINE(359)
			return null();
		}
		HX_STACK_LINE(361)
		int tmp7 = this->m_render_count;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		int id = tmp7;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(362)
		::haxor::graphics::texture::ComputeTexture tmp8 = this->data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(362)
		::haxor::io::Buffer tmp9 = tmp8->m_data->get_buffer();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(362)
		::haxor::io::FloatArray f32 = ((::haxor::io::FloatArray)(tmp9));		HX_STACK_VAR(f32,"f32");
		HX_STACK_LINE(363)
		int tmp10 = id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(363)
		int tmp11 = ::haxor::context::Gizmo_obj::DATA_OFFSET;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(363)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(363)
		int p = tmp12;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(364)
		bool tmp13 = (p_color == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(364)
		::haxor::math::Color tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(364)
		if ((tmp13)){
			HX_STACK_LINE(364)
			::haxor::math::Color tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				::haxor::context::DataContext tmp16 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(364)
				::haxor::context::DataContext _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(364)
				Array< ::Dynamic > tmp17 = _this->m_c;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(364)
				int tmp18 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(364)
				int tmp19 = _this->m_c->length;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(364)
				int tmp20 = hx::Mod(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(364)
				int tmp21 = _this->m_nc = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(364)
				tmp15 = tmp17->__get(tmp21).StaticCast< ::haxor::math::Color >();
			}
			HX_STACK_LINE(364)
			tmp14 = tmp15->Set((int)1,(int)1,(int)1,(int)1);
		}
		else{
			HX_STACK_LINE(364)
			tmp14 = p_color;
		}
		HX_STACK_LINE(364)
		::haxor::math::Color c = tmp14;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(365)
		int tmp15 = (p)++;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(365)
		Float tmp16 = c->r;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(365)
		f32->Set(tmp15,tmp16);
		HX_STACK_LINE(366)
		int tmp17 = (p)++;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(366)
		Float tmp18 = c->g;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(366)
		f32->Set(tmp17,tmp18);
		HX_STACK_LINE(367)
		int tmp19 = (p)++;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(367)
		Float tmp20 = c->b;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(367)
		f32->Set(tmp19,tmp20);
		HX_STACK_LINE(368)
		int tmp21 = (p)++;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(368)
		Float tmp22 = c->a;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(368)
		f32->Set(tmp21,tmp22);
		HX_STACK_LINE(369)
		int tmp23 = (p)++;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(369)
		Float tmp24 = p_a->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(369)
		f32->Set(tmp23,tmp24);
		HX_STACK_LINE(370)
		int tmp25 = (p)++;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(370)
		Float tmp26 = p_a->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(370)
		f32->Set(tmp25,tmp26);
		HX_STACK_LINE(371)
		int tmp27 = (p)++;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(371)
		Float tmp28 = p_a->z;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(371)
		f32->Set(tmp27,tmp28);
		HX_STACK_LINE(372)
		int tmp29 = (p)++;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(372)
		Float tmp30 = p_a->w;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(372)
		f32->Set(tmp29,tmp30);
		HX_STACK_LINE(373)
		int tmp31 = (p)++;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(373)
		Float tmp32 = p_b->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(373)
		f32->Set(tmp31,tmp32);
		HX_STACK_LINE(374)
		int tmp33 = (p)++;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(374)
		Float tmp34 = p_b->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(374)
		f32->Set(tmp33,tmp34);
		HX_STACK_LINE(375)
		int tmp35 = (p)++;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(375)
		Float tmp36 = p_b->z;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(375)
		f32->Set(tmp35,tmp36);
		HX_STACK_LINE(376)
		int tmp37 = (p)++;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(376)
		Float tmp38 = p_b->w;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(376)
		f32->Set(tmp37,tmp38);
		HX_STACK_LINE(378)
		bool tmp39 = (p_transform == null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(378)
		::haxor::math::Matrix4 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(378)
		if ((tmp39)){
			HX_STACK_LINE(378)
			tmp40 = ::haxor::context::Gizmo_obj::IDM;
		}
		else{
			HX_STACK_LINE(378)
			tmp40 = p_transform;
		}
		HX_STACK_LINE(378)
		::haxor::math::Matrix4 m = tmp40;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(379)
		::String ms = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(ms,"ms");
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(380)
			while((true)){
				HX_STACK_LINE(380)
				bool tmp41 = (_g < (int)12);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(380)
				bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(380)
				if ((tmp42)){
					HX_STACK_LINE(380)
					break;
				}
				HX_STACK_LINE(380)
				int tmp43 = (_g)++;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(380)
				int i = tmp43;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(382)
				int tmp44 = (p)++;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(382)
				int tmp45 = i;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(382)
				Float tmp46 = m->GetIndex(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(382)
				f32->Set(tmp44,tmp46);
			}
		}
		HX_STACK_LINE(385)
		(this->m_render_count)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Gizmo_obj,Push,(void))

Void Gizmo_obj::Clear( ){
{
		HX_STACK_FRAME("haxor.context.Gizmo","Clear",0xd5cbee2e,"haxor.context.Gizmo.Clear","haxor/context/GizmoContext.hx",393,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(393)
		this->m_render_count = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gizmo_obj,Clear,(void))

Void Gizmo_obj::Render( ){
{
		HX_STACK_FRAME("haxor.context.Gizmo","Render",0x3a25fb95,"haxor.context.Gizmo.Render","haxor/context/GizmoContext.hx",400,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(401)
		bool tmp = ::haxor::graphics::GL_obj::TEXTURE_FLOAT;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(401)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(401)
		if ((tmp1)){
			HX_STACK_LINE(401)
			return null();
		}
		HX_STACK_LINE(402)
		int tmp2 = ::haxor::graphics::GL_obj::MAX_VERTEX_TEXTURES;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		if ((tmp3)){
			HX_STACK_LINE(402)
			return null();
		}
		HX_STACK_LINE(404)
		bool tmp4 = ::haxor::core::Debug_obj::collider;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(404)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		if ((tmp6)){
			HX_STACK_LINE(404)
			tmp7 = ::haxor::core::Debug_obj::colliderAABB;
		}
		else{
			HX_STACK_LINE(404)
			tmp7 = true;
		}
		HX_STACK_LINE(404)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(404)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(404)
		if ((tmp8)){
			HX_STACK_LINE(404)
			tmp9 = ::haxor::core::Debug_obj::colliderSB;
		}
		else{
			HX_STACK_LINE(404)
			tmp9 = true;
		}
		HX_STACK_LINE(404)
		bool gizmo_collider = tmp9;		HX_STACK_VAR(gizmo_collider,"gizmo_collider");
		HX_STACK_LINE(406)
		bool tmp10 = gizmo_collider;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(406)
		if ((tmp10)){
			HX_STACK_LINE(408)
			::haxor::context::PhysicsContext tmp11 = ::haxor::context::EngineContext_obj::physics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(408)
			Array< ::Dynamic > cl = tmp11->colliders;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(409)
			{
				HX_STACK_LINE(409)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(409)
				int _g = cl->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(409)
				while((true)){
					HX_STACK_LINE(409)
					bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(409)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(409)
					if ((tmp13)){
						HX_STACK_LINE(409)
						break;
					}
					HX_STACK_LINE(409)
					int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(409)
					int i = tmp14;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(411)
					::haxor::component::physics::Collider tmp15 = cl->__get(i).StaticCast< ::haxor::component::physics::Collider >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(411)
					::haxor::component::physics::Collider c = tmp15;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(412)
					bool tmp16 = ::haxor::core::Debug_obj::collider;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(412)
					if ((tmp16)){
						HX_STACK_LINE(412)
						::haxor::component::physics::Collider tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(412)
						::haxor::core::Debug_obj::Collider(tmp17);
					}
					HX_STACK_LINE(413)
					bool tmp17 = ::haxor::core::Debug_obj::colliderAABB;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(413)
					if ((tmp17)){
						HX_STACK_LINE(413)
						::haxor::math::AABB3 tmp18 = c->get_aabb();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(413)
						::haxor::core::Debug_obj::BoundingAABB(tmp18);
					}
					HX_STACK_LINE(414)
					bool tmp18 = ::haxor::core::Debug_obj::colliderSB;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(414)
					if ((tmp18)){
						HX_STACK_LINE(414)
						::haxor::math::Vector4 tmp19 = c->get_sphere();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(414)
						::haxor::core::Debug_obj::BoundingSphere(tmp19);
					}
				}
			}
		}
		HX_STACK_LINE(418)
		bool tmp11 = ::haxor::core::Debug_obj::renderer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(418)
		if ((tmp11)){
			HX_STACK_LINE(420)
			::haxor::context::RendererContext tmp12 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(420)
			Array< ::Dynamic > rpl = tmp12->display;		HX_STACK_VAR(rpl,"rpl");
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(421)
				int _g = rpl->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(421)
				while((true)){
					HX_STACK_LINE(421)
					bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(421)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(421)
					if ((tmp14)){
						HX_STACK_LINE(421)
						break;
					}
					HX_STACK_LINE(421)
					int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(421)
					int i = tmp15;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(423)
					::haxor::context::Process tmp16 = rpl->__get(i).StaticCast< ::haxor::context::Process >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(423)
					::haxor::context::Process rp = tmp16;		HX_STACK_VAR(rp,"rp");
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(424)
						int _g2 = rp->m_length;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(424)
						while((true)){
							HX_STACK_LINE(424)
							bool tmp17 = (_g3 < _g2);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(424)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(424)
							if ((tmp18)){
								HX_STACK_LINE(424)
								break;
							}
							HX_STACK_LINE(424)
							int tmp19 = (_g3)++;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(424)
							int j = tmp19;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(426)
							::haxor::component::Renderer tmp20 = rp->list->__GetItem(j);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(426)
							::haxor::component::MeshRenderer mr = ((::haxor::component::MeshRenderer)(tmp20));		HX_STACK_VAR(mr,"mr");
							HX_STACK_LINE(428)
							bool tmp21 = (mr == null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(428)
							if ((tmp21)){
								HX_STACK_LINE(428)
								continue;
							}
							HX_STACK_LINE(429)
							::haxor::component::MeshRenderer tmp22 = mr;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(429)
							::haxor::core::Debug_obj::MeshRenderer(tmp22);
						}
					}
				}
			}
		}
		HX_STACK_LINE(434)
		bool tmp12 = ::haxor::core::Debug_obj::transform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(434)
		if ((tmp12)){
			HX_STACK_LINE(436)
			::haxor::component::Transform tmp13 = ::haxor::component::Transform_obj::get_root();		HX_STACK_VAR(tmp13,"tmp13");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 2; }
			bool run(::haxor::component::Transform p_t,int p_d){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxor/context/GizmoContext.hx",437,0xa99c50bc)
				HX_STACK_ARG(p_t,"p_t")
				HX_STACK_ARG(p_d,"p_d")
				{
					HX_STACK_LINE(438)
					::haxor::component::Transform tmp14 = p_t;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(438)
					::haxor::component::Transform tmp15 = ::haxor::component::Transform_obj::get_root();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(438)
					bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(438)
					if ((tmp16)){
						HX_STACK_LINE(438)
						return true;
					}
					HX_STACK_LINE(439)
					::haxor::component::Transform tmp17 = p_t;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(439)
					::haxor::component::Camera tmp18 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(439)
					::haxor::component::Transform tmp19 = tmp18->m_entity->m_transform;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(439)
					bool tmp20 = (tmp17 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(439)
					if ((tmp20)){
						HX_STACK_LINE(439)
						return true;
					}
					HX_STACK_LINE(440)
					::haxor::component::Transform tmp21 = p_t;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(440)
					::haxor::core::Debug_obj::Transform(tmp21);
					HX_STACK_LINE(441)
					return true;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(436)
			tmp13->Traverse( Dynamic(new _Function_2_1()));
		}
		HX_STACK_LINE(445)
		bool tmp13 = ::haxor::core::Debug_obj::light;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(445)
		if ((tmp13)){
			HX_STACK_LINE(447)
			Array< ::Dynamic > tmp14 = ::haxor::component::light::Light_obj::m_list;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(447)
			Array< ::Dynamic > ll = tmp14;		HX_STACK_VAR(ll,"ll");
			HX_STACK_LINE(448)
			{
				HX_STACK_LINE(448)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(448)
				int _g = ll->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(448)
				while((true)){
					HX_STACK_LINE(448)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(448)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(448)
					if ((tmp16)){
						HX_STACK_LINE(448)
						break;
					}
					HX_STACK_LINE(448)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(448)
					int i = tmp17;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(450)
					::haxor::component::light::Light tmp18 = ll->__get(i).StaticCast< ::haxor::component::light::Light >();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(450)
					::haxor::core::Debug_obj::Light(tmp18);
				}
			}
		}
		HX_STACK_LINE(454)
		int tmp14 = this->m_render_count;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(454)
		bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(454)
		if ((tmp15)){
			HX_STACK_LINE(456)
			::haxor::graphics::texture::ComputeTexture tmp16 = this->data;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(456)
			tmp16->Apply();
			HX_STACK_LINE(457)
			::haxor::graphics::material::Material tmp17 = this->material;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(457)
			int tmp18 = this->m_render_count;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(457)
			tmp17->SetInt(HX_HCSTRING("Count","\xaf","\xb4","\x90","\xdd"),tmp18);
			HX_STACK_LINE(458)
			::haxor::component::Camera tmp19 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(458)
			Float np = tmp19->m_near;		HX_STACK_VAR(np,"np");
			HX_STACK_LINE(459)
			::haxor::component::Camera tmp20 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(459)
			Float fp = tmp20->m_far;		HX_STACK_VAR(fp,"fp");
			HX_STACK_LINE(460)
			{
				HX_STACK_LINE(460)
				::haxor::component::Camera tmp21 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(460)
				::haxor::component::Camera _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(460)
				_this->m_near = ((Float)0.0001);
				HX_STACK_LINE(460)
				_this->m_projection_dirty = true;
				HX_STACK_LINE(460)
				_this->m_proj_uniform_dirty = true;
				HX_STACK_LINE(460)
				((Float)0.0001);
			}
			HX_STACK_LINE(461)
			{
				HX_STACK_LINE(461)
				::haxor::component::Camera tmp21 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(461)
				::haxor::component::Camera _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(461)
				_this->m_far = (int)50000;
				HX_STACK_LINE(461)
				_this->m_projection_dirty = true;
				HX_STACK_LINE(461)
				_this->m_proj_uniform_dirty = true;
				HX_STACK_LINE(461)
				(int)50000;
			}
			HX_STACK_LINE(462)
			::haxor::graphics::mesh::Mesh tmp21 = this->mesh;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(462)
			::haxor::graphics::material::Material tmp22 = this->material;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(462)
			::haxor::component::Camera tmp23 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(462)
			::haxor::graphics::Graphics_obj::Render(tmp21,tmp22,null(),tmp23);
			HX_STACK_LINE(463)
			{
				HX_STACK_LINE(463)
				::haxor::component::Camera tmp24 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(463)
				::haxor::component::Camera _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(463)
				_this->m_near = np;
				HX_STACK_LINE(463)
				_this->m_projection_dirty = true;
				HX_STACK_LINE(463)
				_this->m_proj_uniform_dirty = true;
				HX_STACK_LINE(463)
				np;
			}
			HX_STACK_LINE(464)
			{
				HX_STACK_LINE(464)
				::haxor::component::Camera tmp24 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(464)
				::haxor::component::Camera _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(464)
				_this->m_far = fp;
				HX_STACK_LINE(464)
				_this->m_projection_dirty = true;
				HX_STACK_LINE(464)
				_this->m_proj_uniform_dirty = true;
				HX_STACK_LINE(464)
				fp;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gizmo_obj,Render,(void))

int Gizmo_obj::POINT;

int Gizmo_obj::LINE;

int Gizmo_obj::AXIS;

int Gizmo_obj::WIRE_CUBE;

int Gizmo_obj::WIRE_SPHERE;

int Gizmo_obj::CANVAS;

int Gizmo_obj::DATA_OFFSET;

int Gizmo_obj::MAX_GIZMOS;

::haxor::math::Matrix4 Gizmo_obj::IDM;

::haxor::graphics::material::Shader Gizmo_obj::SHADER;


Gizmo_obj::Gizmo_obj()
{
}

void Gizmo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gizmo);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(mesh,"mesh");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(m_render_count,"m_render_count");
	HX_MARK_MEMBER_NAME(m_gizmo_count,"m_gizmo_count");
	HX_MARK_END_CLASS();
}

void Gizmo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(mesh,"mesh");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(m_render_count,"m_render_count");
	HX_VISIT_MEMBER_NAME(m_gizmo_count,"m_gizmo_count");
}

Dynamic Gizmo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"mesh") ) { return mesh; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"Push") ) { return Push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Render") ) { return Render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return material; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_gizmo_count") ) { return m_gizmo_count; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_render_count") ) { return m_render_count; }
	}
	return super::__Field(inName,inCallProp);
}

bool Gizmo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"IDM") ) { outValue = IDM; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LINE") ) { outValue = LINE; return true;  }
		if (HX_FIELD_EQ(inName,"AXIS") ) { outValue = AXIS; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POINT") ) { outValue = POINT; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANVAS") ) { outValue = CANVAS; return true;  }
		if (HX_FIELD_EQ(inName,"SHADER") ) { outValue = SHADER; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"WIRE_CUBE") ) { outValue = WIRE_CUBE; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_GIZMOS") ) { outValue = MAX_GIZMOS; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"WIRE_SPHERE") ) { outValue = WIRE_SPHERE; return true;  }
		if (HX_FIELD_EQ(inName,"DATA_OFFSET") ) { outValue = DATA_OFFSET; return true;  }
	}
	return false;
}

Dynamic Gizmo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxor::graphics::texture::ComputeTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mesh") ) { mesh=inValue.Cast< ::haxor::graphics::mesh::Mesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< ::haxor::graphics::material::Material >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_gizmo_count") ) { m_gizmo_count=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_render_count") ) { m_render_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gizmo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"IDM") ) { IDM=ioValue.Cast< ::haxor::math::Matrix4 >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LINE") ) { LINE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"AXIS") ) { AXIS=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POINT") ) { POINT=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANVAS") ) { CANVAS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SHADER") ) { SHADER=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"WIRE_CUBE") ) { WIRE_CUBE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_GIZMOS") ) { MAX_GIZMOS=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"WIRE_SPHERE") ) { WIRE_SPHERE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DATA_OFFSET") ) { DATA_OFFSET=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Gizmo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("mesh","\xed","\x49","\x59","\x48"));
	outFields->push(HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("m_render_count","\x38","\x2e","\x47","\x47"));
	outFields->push(HX_HCSTRING("m_gizmo_count","\xf8","\x1a","\xa7","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::texture::ComputeTexture*/ ,(int)offsetof(Gizmo_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(int)offsetof(Gizmo_obj,mesh),HX_HCSTRING("mesh","\xed","\x49","\x59","\x48")},
	{hx::fsObject /*::haxor::graphics::material::Material*/ ,(int)offsetof(Gizmo_obj,material),HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0")},
	{hx::fsInt,(int)offsetof(Gizmo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Gizmo_obj,m_render_count),HX_HCSTRING("m_render_count","\x38","\x2e","\x47","\x47")},
	{hx::fsInt,(int)offsetof(Gizmo_obj,m_gizmo_count),HX_HCSTRING("m_gizmo_count","\xf8","\x1a","\xa7","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Gizmo_obj::POINT,HX_HCSTRING("POINT","\x30","\xec","\x7d","\x44")},
	{hx::fsInt,(void *) &Gizmo_obj::LINE,HX_HCSTRING("LINE","\xf4","\xdf","\x73","\x32")},
	{hx::fsInt,(void *) &Gizmo_obj::AXIS,HX_HCSTRING("AXIS","\xa1","\xe4","\x39","\x2b")},
	{hx::fsInt,(void *) &Gizmo_obj::WIRE_CUBE,HX_HCSTRING("WIRE_CUBE","\x6f","\x4a","\x88","\xc7")},
	{hx::fsInt,(void *) &Gizmo_obj::WIRE_SPHERE,HX_HCSTRING("WIRE_SPHERE","\x07","\x73","\xaf","\x7a")},
	{hx::fsInt,(void *) &Gizmo_obj::CANVAS,HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")},
	{hx::fsInt,(void *) &Gizmo_obj::DATA_OFFSET,HX_HCSTRING("DATA_OFFSET","\x48","\xb0","\x3b","\x4c")},
	{hx::fsInt,(void *) &Gizmo_obj::MAX_GIZMOS,HX_HCSTRING("MAX_GIZMOS","\x54","\xe1","\xce","\x24")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(void *) &Gizmo_obj::IDM,HX_HCSTRING("IDM","\x12","\xa0","\x37","\x00")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Gizmo_obj::SHADER,HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("mesh","\xed","\x49","\x59","\x48"),
	HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("m_render_count","\x38","\x2e","\x47","\x47"),
	HX_HCSTRING("m_gizmo_count","\xf8","\x1a","\xa7","\x00"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("Push","\xfa","\x3d","\x3a","\x35"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gizmo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gizmo_obj::POINT,"POINT");
	HX_MARK_MEMBER_NAME(Gizmo_obj::LINE,"LINE");
	HX_MARK_MEMBER_NAME(Gizmo_obj::AXIS,"AXIS");
	HX_MARK_MEMBER_NAME(Gizmo_obj::WIRE_CUBE,"WIRE_CUBE");
	HX_MARK_MEMBER_NAME(Gizmo_obj::WIRE_SPHERE,"WIRE_SPHERE");
	HX_MARK_MEMBER_NAME(Gizmo_obj::CANVAS,"CANVAS");
	HX_MARK_MEMBER_NAME(Gizmo_obj::DATA_OFFSET,"DATA_OFFSET");
	HX_MARK_MEMBER_NAME(Gizmo_obj::MAX_GIZMOS,"MAX_GIZMOS");
	HX_MARK_MEMBER_NAME(Gizmo_obj::IDM,"IDM");
	HX_MARK_MEMBER_NAME(Gizmo_obj::SHADER,"SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gizmo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::POINT,"POINT");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::LINE,"LINE");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::AXIS,"AXIS");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::WIRE_CUBE,"WIRE_CUBE");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::WIRE_SPHERE,"WIRE_SPHERE");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::CANVAS,"CANVAS");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::DATA_OFFSET,"DATA_OFFSET");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::MAX_GIZMOS,"MAX_GIZMOS");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::IDM,"IDM");
	HX_VISIT_MEMBER_NAME(Gizmo_obj::SHADER,"SHADER");
};

#endif

hx::Class Gizmo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("POINT","\x30","\xec","\x7d","\x44"),
	HX_HCSTRING("LINE","\xf4","\xdf","\x73","\x32"),
	HX_HCSTRING("AXIS","\xa1","\xe4","\x39","\x2b"),
	HX_HCSTRING("WIRE_CUBE","\x6f","\x4a","\x88","\xc7"),
	HX_HCSTRING("WIRE_SPHERE","\x07","\x73","\xaf","\x7a"),
	HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a"),
	HX_HCSTRING("DATA_OFFSET","\x48","\xb0","\x3b","\x4c"),
	HX_HCSTRING("MAX_GIZMOS","\x54","\xe1","\xce","\x24"),
	HX_HCSTRING("IDM","\x12","\xa0","\x37","\x00"),
	HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf"),
	String(null()) };

void Gizmo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.Gizmo","\x6f","\x76","\x8d","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gizmo_obj::__GetStatic;
	__mClass->mSetStaticField = &Gizmo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Gizmo_obj >;
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

void Gizmo_obj::__boot()
{
	POINT= (int)0;
	LINE= (int)1;
	AXIS= (int)2;
	WIRE_CUBE= (int)3;
	WIRE_SPHERE= (int)4;
	CANVAS= (int)10;
	DATA_OFFSET= (int)24;
	MAX_GIZMOS= (int)500;
	IDM= ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);
}

} // end namespace haxor
} // end namespace context
