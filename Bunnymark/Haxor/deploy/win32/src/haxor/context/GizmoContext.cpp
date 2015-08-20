#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_AxisGizmo
#include <haxor/context/AxisGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_CanvasGizmo
#include <haxor/context/CanvasGizmo.h>
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
#ifndef INCLUDED_haxor_context_GizmoContext
#include <haxor/context/GizmoContext.h>
#endif
#ifndef INCLUDED_haxor_context_LineGizmo
#include <haxor/context/LineGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_PointGizmo
#include <haxor/context/PointGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_ShaderContext
#include <haxor/context/ShaderContext.h>
#endif
#ifndef INCLUDED_haxor_context_WireCubeGizmo
#include <haxor/context/WireCubeGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_WireSphereGizmo
#include <haxor/context/WireSphereGizmo.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Graphics
#include <haxor/graphics/Graphics.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
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
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
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
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace context{

Void GizmoContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.GizmoContext","new",0x3333c432,"haxor.context.GizmoContext.new","haxor/context/GizmoContext.hx",75,0xa99c50bc)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GizmoContext_obj::~GizmoContext_obj() { }

Dynamic GizmoContext_obj::__CreateEmpty() { return  new GizmoContext_obj; }
hx::ObjectPtr< GizmoContext_obj > GizmoContext_obj::__new()
{  hx::ObjectPtr< GizmoContext_obj > _result_ = new GizmoContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic GizmoContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GizmoContext_obj > _result_ = new GizmoContext_obj();
	_result_->__construct();
	return _result_;}

Void GizmoContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","Initialize",0x28223fde,"haxor.context.GizmoContext.Initialize","haxor/context/GizmoContext.hx",79,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::haxor::graphics::material::Material mat;		HX_STACK_VAR(mat,"mat");
		HX_STACK_LINE(81)
		::haxor::graphics::material::Material tmp = ::haxor::graphics::material::Material_obj::__new(HX_HCSTRING("$GizmoMaterial","\x7d","\x45","\xfe","\x3a"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::haxor::graphics::material::Material tmp1 = this->gizmo_material = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		mat = tmp1;
		HX_STACK_LINE(82)
		::String tmp2 = ::haxor::context::ShaderContext_obj::vs_gizmo_grid;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		::String tmp3 = ::haxor::context::ShaderContext_obj::fs_flat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::haxor::graphics::material::Shader tmp4 = ::haxor::graphics::material::Shader_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		mat->set_shader(tmp4);
		HX_STACK_LINE(83)
		mat->blend = true;
		HX_STACK_LINE(84)
		mat->SetBlending((int)770,(int)771);
		HX_STACK_LINE(85)
		mat->SetFloat(HX_HCSTRING("Area","\xad","\xb7","\x4d","\x2b"),((Float)1000.0));
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::haxor::math::Color tmp5 = ::haxor::math::Color_obj::__new(((Float)1.0),((Float)1.0),((Float)1.0),((Float)0.4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(86)
			::haxor::math::Color p_color = tmp5;		HX_STACK_VAR(p_color,"p_color");
			HX_STACK_LINE(86)
			Float tmp6 = p_color->r;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			Float tmp7 = p_color->g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			Float tmp8 = p_color->b;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			Float tmp9 = p_color->a;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			mat->SetFloat4(HX_HCSTRING("Tint","\x1b","\xf9","\xd5","\x37"),tmp6,tmp7,tmp8,tmp9);
		}
		HX_STACK_LINE(87)
		mat->ztest = false;
		HX_STACK_LINE(89)
		::haxor::graphics::material::Material tmp5 = ::haxor::graphics::material::Material_obj::__new(HX_HCSTRING("$TextureMaterial","\xde","\x84","\x16","\xbb"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		::haxor::graphics::material::Material tmp6 = this->texture_material = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		mat = tmp6;
		HX_STACK_LINE(90)
		::String tmp7 = ::haxor::context::ShaderContext_obj::vs_gizmo_screen_texture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(90)
		::String tmp8 = ::haxor::context::ShaderContext_obj::fs_flat_texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(90)
		::haxor::graphics::material::Shader tmp9 = ::haxor::graphics::material::Shader_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		mat->set_shader(tmp9);
		HX_STACK_LINE(91)
		mat->blend = true;
		HX_STACK_LINE(92)
		mat->SetBlending((int)770,(int)771);
		HX_STACK_LINE(93)
		Float tmp10 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		Float tmp11 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		mat->SetFloat2(HX_HCSTRING("Screen","\x8c","\xaf","\xf1","\x7b"),tmp10,tmp11);
		HX_STACK_LINE(94)
		mat->SetFloat4(HX_HCSTRING("Rect","\x44","\x79","\x80","\x36"),(int)0,(int)0,(int)100,(int)100);
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::haxor::math::Color tmp12 = ::haxor::math::Color_obj::__new(((Float)1.0),((Float)1.0),((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(95)
			::haxor::math::Color p_color = tmp12;		HX_STACK_VAR(p_color,"p_color");
			HX_STACK_LINE(95)
			Float tmp13 = p_color->r;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(95)
			Float tmp14 = p_color->g;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(95)
			Float tmp15 = p_color->b;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(95)
			Float tmp16 = p_color->a;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(95)
			mat->SetFloat4(HX_HCSTRING("Tint","\x1b","\xf9","\xd5","\x37"),tmp13,tmp14,tmp15,tmp16);
		}
		HX_STACK_LINE(96)
		mat->cull = (int)0;
		HX_STACK_LINE(97)
		mat->ztest = false;
		HX_STACK_LINE(99)
		this->CreateGrid(((Float)100.0));
		HX_STACK_LINE(100)
		this->CreateTextureQuad();
		HX_STACK_LINE(103)
		::haxor::context::WireSphereGizmo tmp12 = ::haxor::context::WireSphereGizmo_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(103)
		this->wire_sphere_renderer = tmp12;
		HX_STACK_LINE(104)
		::haxor::context::WireCubeGizmo tmp13 = ::haxor::context::WireCubeGizmo_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(104)
		this->wire_cube_renderer = tmp13;
		HX_STACK_LINE(105)
		::haxor::context::AxisGizmo tmp14 = ::haxor::context::AxisGizmo_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(105)
		this->axis_renderer = tmp14;
		HX_STACK_LINE(106)
		::haxor::context::CanvasGizmo tmp15 = ::haxor::context::CanvasGizmo_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(106)
		this->canvas_renderer = tmp15;
		HX_STACK_LINE(107)
		::haxor::context::LineGizmo tmp16 = ::haxor::context::LineGizmo_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(107)
		this->line_renderer = tmp16;
		HX_STACK_LINE(108)
		::haxor::context::PointGizmo tmp17 = ::haxor::context::PointGizmo_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(108)
		this->point_renderer = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GizmoContext_obj,Initialize,(void))

Void GizmoContext_obj::CreateTextureQuad( ){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","CreateTextureQuad",0xdfdc10d8,"haxor.context.GizmoContext.CreateTextureQuad","haxor/context/GizmoContext.hx",116,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$TextureQuad","\x7e","\x39","\xa7","\x24"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::haxor::graphics::mesh::Mesh tmp1 = this->texture = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		::haxor::graphics::mesh::Mesh m = tmp1;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(118)
		::haxor::io::FloatArray vl;		HX_STACK_VAR(vl,"vl");
		HX_STACK_LINE(119)
		Array< Float > tmp2 = Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)-1).Add((int)0).Add((int)1).Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)-1).Add((int)0).Add((int)1).Add((int)0).Add((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		::haxor::io::FloatArray tmp3 = ::haxor::io::FloatArray_obj::Alloc(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		vl = tmp3;
		HX_STACK_LINE(127)
		::haxor::io::FloatArray tmp4 = vl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp4,(int)3);
		HX_STACK_LINE(128)
		::haxor::math::AABB3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(128)
			Array< ::Dynamic > tmp7 = _this->m_aabb3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(128)
			int tmp8 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(128)
			int tmp9 = _this->m_aabb3->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(128)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(128)
			int tmp11 = _this->m_naabb3 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(128)
			tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::AABB3 >();
		}
		HX_STACK_LINE(128)
		::haxor::math::AABB3 tmp6 = m->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		m->set_bounds(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GizmoContext_obj,CreateTextureQuad,(void))

Void GizmoContext_obj::CreateGrid( Float p_step){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","CreateGrid",0x9260a670,"haxor.context.GizmoContext.CreateGrid","haxor/context/GizmoContext.hx",137,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_step,"p_step")
		HX_STACK_LINE(138)
		::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$GridMesh","\x17","\xa8","\x3c","\xce"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		this->grid = tmp;
		HX_STACK_LINE(139)
		::haxor::graphics::mesh::Mesh tmp1 = this->grid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		tmp1->primitive = (int)1;
		HX_STACK_LINE(140)
		Float tmp2 = (p_step + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		int len = ((int)(tmp2));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(141)
		Float tmp3 = (Float(((Float)1.0)) / Float(p_step));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		p_step = tmp3;
		HX_STACK_LINE(142)
		Float ox = ((Float)0.5);		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(143)
		Float oz = ((Float)0.5);		HX_STACK_VAR(oz,"oz");
		HX_STACK_LINE(144)
		Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(145)
		Float pz = ((Float)0.0);		HX_STACK_VAR(pz,"pz");
		HX_STACK_LINE(146)
		int tmp4 = ((int)12 * len);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		::haxor::io::FloatArray tmp5 = ::haxor::io::FloatArray_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		::haxor::io::FloatArray vl = tmp5;		HX_STACK_VAR(vl,"vl");
		HX_STACK_LINE(147)
		int k;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(149)
		k = (int)0;
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			while((true)){
				HX_STACK_LINE(150)
				bool tmp6 = (_g < len);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(150)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(150)
				if ((tmp7)){
					HX_STACK_LINE(150)
					break;
				}
				HX_STACK_LINE(150)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(150)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(152)
				int tmp9 = (k)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(152)
				Float tmp10 = (px - ox);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(152)
				vl->Set(tmp9,tmp10);
				HX_STACK_LINE(152)
				int tmp11 = (k)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(152)
				vl->Set(tmp11,((Float)0.0));
				HX_STACK_LINE(152)
				int tmp12 = (k)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(152)
				Float tmp13 = oz;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(152)
				vl->Set(tmp12,tmp13);
				HX_STACK_LINE(153)
				int tmp14 = (k)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(153)
				Float tmp15 = (px - ox);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(153)
				vl->Set(tmp14,tmp15);
				HX_STACK_LINE(153)
				int tmp16 = (k)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(153)
				vl->Set(tmp16,((Float)0.0));
				HX_STACK_LINE(153)
				int tmp17 = (k)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(153)
				Float tmp18 = oz;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(153)
				Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(153)
				vl->Set(tmp17,tmp19);
				HX_STACK_LINE(154)
				hx::AddEq(px,p_step);
			}
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			while((true)){
				HX_STACK_LINE(158)
				bool tmp6 = (_g < len);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(158)
				if ((tmp7)){
					HX_STACK_LINE(158)
					break;
				}
				HX_STACK_LINE(158)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(158)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(160)
				int tmp9 = (k)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(160)
				Float tmp10 = ox;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(160)
				vl->Set(tmp9,tmp10);
				HX_STACK_LINE(160)
				int tmp11 = (k)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(160)
				vl->Set(tmp11,((Float)0.0));
				HX_STACK_LINE(160)
				int tmp12 = (k)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(160)
				Float tmp13 = (pz - oz);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(160)
				vl->Set(tmp12,tmp13);
				HX_STACK_LINE(161)
				int tmp14 = (k)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(161)
				Float tmp15 = ox;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(161)
				Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(161)
				vl->Set(tmp14,tmp16);
				HX_STACK_LINE(161)
				int tmp17 = (k)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(161)
				vl->Set(tmp17,((Float)0.0));
				HX_STACK_LINE(161)
				int tmp18 = (k)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(161)
				Float tmp19 = (pz - oz);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(161)
				vl->Set(tmp18,tmp19);
				HX_STACK_LINE(162)
				hx::AddEq(pz,p_step);
			}
		}
		HX_STACK_LINE(164)
		::haxor::graphics::mesh::Mesh tmp6 = this->grid;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		::haxor::io::FloatArray tmp7 = vl;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		tmp6->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp7,(int)3);
		HX_STACK_LINE(165)
		::haxor::graphics::mesh::Mesh tmp8 = this->grid;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(165)
		::haxor::graphics::mesh::Mesh tmp9 = this->grid;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(165)
		::haxor::math::AABB3 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::haxor::context::DataContext tmp11 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(165)
			::haxor::context::DataContext _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(165)
			Array< ::Dynamic > tmp12 = _this->m_aabb3;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(165)
			int tmp13 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(165)
			int tmp14 = _this->m_aabb3->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(165)
			int tmp15 = hx::Mod(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(165)
			int tmp16 = _this->m_naabb3 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(165)
			tmp10 = tmp12->__get(tmp16).StaticCast< ::haxor::math::AABB3 >();
		}
		HX_STACK_LINE(165)
		::haxor::math::AABB3 tmp11 = tmp9->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(165)
		tmp8->set_bounds(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GizmoContext_obj,CreateGrid,(void))

Void GizmoContext_obj::DrawGrid( Float p_area,::haxor::math::Color p_color){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","DrawGrid",0xe6e82ff8,"haxor.context.GizmoContext.DrawGrid","haxor/context/GizmoContext.hx",174,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_area,"p_area")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_LINE(175)
		::haxor::graphics::material::Material tmp = this->gizmo_material;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		Float tmp1 = p_area;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		tmp->SetFloat(HX_HCSTRING("Area","\xad","\xb7","\x4d","\x2b"),tmp1);
		HX_STACK_LINE(176)
		bool tmp2 = (p_color != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		if ((tmp2)){
			HX_STACK_LINE(176)
			::haxor::graphics::material::Material tmp3 = this->gizmo_material;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			Float tmp4 = p_color->r;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			Float tmp5 = p_color->g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			Float tmp6 = p_color->b;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			Float tmp7 = p_color->a;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(176)
			tmp3->SetFloat4(HX_HCSTRING("Tint","\x1b","\xf9","\xd5","\x37"),tmp4,tmp5,tmp6,tmp7);
		}
		HX_STACK_LINE(177)
		::haxor::graphics::mesh::Mesh tmp3 = this->grid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		::haxor::graphics::material::Material tmp4 = this->gizmo_material;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		::haxor::component::Camera tmp5 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		::haxor::graphics::Graphics_obj::Render(tmp3,tmp4,null(),tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GizmoContext_obj,DrawGrid,(void))

Void GizmoContext_obj::DrawWireSphere( ::haxor::math::Vector3 p_position,Float p_radius,::haxor::math::Color p_color,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","DrawWireSphere",0x7691e3e4,"haxor.context.GizmoContext.DrawWireSphere","haxor/context/GizmoContext.hx",187,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_position,"p_position")
		HX_STACK_ARG(p_radius,"p_radius")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(188)
		::haxor::context::WireSphereGizmo tmp = this->wire_sphere_renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		::haxor::math::Color tmp1 = p_color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		::haxor::math::Vector4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(188)
			Array< ::Dynamic > tmp4 = _this->m_v4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(188)
			int tmp5 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(188)
			int tmp6 = _this->m_v4->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(188)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(188)
			int tmp8 = _this->m_nv4 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(188)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(188)
		Float tmp3 = p_radius;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		Float tmp4 = p_radius;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		Float tmp5 = p_radius;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		::haxor::math::Vector4 tmp6 = tmp2->Set(tmp3,tmp4,tmp5,((Float)1.0));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		::haxor::math::Vector4 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			::haxor::context::DataContext tmp8 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(188)
			::haxor::context::DataContext _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(188)
			Array< ::Dynamic > tmp9 = _this->m_v4;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(188)
			int tmp10 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(188)
			int tmp11 = _this->m_v4->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(188)
			int tmp12 = hx::Mod(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(188)
			int tmp13 = _this->m_nv4 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(188)
			tmp7 = tmp9->__get(tmp13).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(188)
		::haxor::math::Vector3 tmp8 = p_position;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(188)
		::haxor::math::Vector4 tmp9 = tmp7->Set3(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(188)
		::haxor::math::Matrix4 tmp10 = p_transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(188)
		tmp->Push(tmp1,tmp6,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GizmoContext_obj,DrawWireSphere,(void))

Void GizmoContext_obj::DrawWireCube( ::haxor::math::Vector3 p_position,::haxor::math::Vector3 p_size,::haxor::math::Color p_color,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","DrawWireCube",0x91b0be0c,"haxor.context.GizmoContext.DrawWireCube","haxor/context/GizmoContext.hx",199,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_position,"p_position")
		HX_STACK_ARG(p_size,"p_size")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(200)
		::haxor::context::WireCubeGizmo tmp = this->wire_cube_renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		::haxor::math::Color tmp1 = p_color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		::haxor::math::Vector4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			Array< ::Dynamic > tmp4 = _this->m_v4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			int tmp5 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			int tmp6 = _this->m_v4->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(200)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(200)
			int tmp8 = _this->m_nv4 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(200)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(200)
		::haxor::math::Vector3 tmp3 = p_size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		::haxor::math::Vector4 tmp4 = tmp2->Set3(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		::haxor::math::Vector4 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(200)
			::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			Array< ::Dynamic > tmp7 = _this->m_v4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(200)
			int tmp8 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(200)
			int tmp9 = _this->m_v4->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(200)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(200)
			int tmp11 = _this->m_nv4 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(200)
			tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(200)
		::haxor::math::Vector3 tmp6 = p_position;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		::haxor::math::Vector4 tmp7 = tmp5->Set3(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(200)
		::haxor::math::Matrix4 tmp8 = p_transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		tmp->Push(tmp1,tmp4,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GizmoContext_obj,DrawWireCube,(void))

Void GizmoContext_obj::DrawAxis( ::haxor::math::Vector3 p_position,::haxor::math::Vector3 p_size,::haxor::math::Color p_color,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","DrawAxis",0xe2f575d3,"haxor.context.GizmoContext.DrawAxis","haxor/context/GizmoContext.hx",211,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_position,"p_position")
		HX_STACK_ARG(p_size,"p_size")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(212)
		::haxor::context::AxisGizmo tmp = this->axis_renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		::haxor::math::Color tmp1 = p_color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		::haxor::math::Vector4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(212)
			Array< ::Dynamic > tmp4 = _this->m_v4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(212)
			int tmp5 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(212)
			int tmp6 = _this->m_v4->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			int tmp8 = _this->m_nv4 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(212)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(212)
		::haxor::math::Vector3 tmp3 = p_size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		::haxor::math::Vector4 tmp4 = tmp2->Set3(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		::haxor::math::Vector4 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(212)
			Array< ::Dynamic > tmp7 = _this->m_v4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			int tmp8 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(212)
			int tmp9 = _this->m_v4->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(212)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(212)
			int tmp11 = _this->m_nv4 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(212)
			tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(212)
		::haxor::math::Vector3 tmp6 = p_position;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		::haxor::math::Vector4 tmp7 = tmp5->Set3(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		::haxor::math::Matrix4 tmp8 = p_transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		tmp->Push(tmp1,tmp4,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GizmoContext_obj,DrawAxis,(void))

Void GizmoContext_obj::DrawLine( ::haxor::math::Vector3 p_from,::haxor::math::Vector3 p_to,::haxor::math::Color p_color,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","DrawLine",0xea2f7126,"haxor.context.GizmoContext.DrawLine","haxor/context/GizmoContext.hx",223,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_from,"p_from")
		HX_STACK_ARG(p_to,"p_to")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(224)
		::haxor::context::LineGizmo tmp = this->line_renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		::haxor::math::Color tmp1 = p_color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		::haxor::math::Vector4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(224)
			Array< ::Dynamic > tmp4 = _this->m_v4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			int tmp5 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			int tmp6 = _this->m_v4->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			int tmp8 = _this->m_nv4 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(224)
		::haxor::math::Vector3 tmp3 = p_from;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		::haxor::math::Vector4 tmp4 = tmp2->Set3(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(224)
		::haxor::math::Vector4 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(224)
			Array< ::Dynamic > tmp7 = _this->m_v4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			int tmp8 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			int tmp9 = _this->m_v4->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			int tmp11 = _this->m_nv4 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(224)
		::haxor::math::Vector3 tmp6 = p_to;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(224)
		::haxor::math::Vector4 tmp7 = tmp5->Set3(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(224)
		::haxor::math::Matrix4 tmp8 = p_transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(224)
		tmp->Push(tmp1,tmp4,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GizmoContext_obj,DrawLine,(void))

Void GizmoContext_obj::DrawPoint( ::haxor::math::Vector3 p_position,Float p_size,::haxor::math::Color p_color,bool p_smooth,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","DrawPoint",0x50e166de,"haxor.context.GizmoContext.DrawPoint","haxor/context/GizmoContext.hx",236,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_position,"p_position")
		HX_STACK_ARG(p_size,"p_size")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_smooth,"p_smooth")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(237)
		::haxor::context::PointGizmo tmp = this->point_renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		::haxor::math::Color tmp1 = p_color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		::haxor::math::Vector4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(237)
			Array< ::Dynamic > tmp4 = _this->m_v4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			int tmp5 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			int tmp6 = _this->m_v4->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			int tmp8 = _this->m_nv4 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(237)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(237)
		Float tmp3 = p_size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		bool tmp4 = p_smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(237)
		if ((tmp4)){
			HX_STACK_LINE(237)
			tmp5 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(237)
			tmp5 = ((Float)0.0);
		}
		HX_STACK_LINE(237)
		::haxor::math::Vector4 tmp6 = tmp2->Set(tmp3,tmp5,((Float)0.0),((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		::haxor::math::Vector4 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			::haxor::context::DataContext tmp8 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(237)
			::haxor::context::DataContext _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(237)
			Array< ::Dynamic > tmp9 = _this->m_v4;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(237)
			int tmp10 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(237)
			int tmp11 = _this->m_v4->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(237)
			int tmp12 = hx::Mod(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(237)
			int tmp13 = _this->m_nv4 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(237)
			tmp7 = tmp9->__get(tmp13).StaticCast< ::haxor::math::Vector4 >();
		}
		HX_STACK_LINE(237)
		::haxor::math::Vector4 tmp8 = tmp7->Set((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(237)
		::haxor::math::Vector3 tmp9 = p_position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(237)
		::haxor::math::Vector4 tmp10 = tmp8->Set3(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(237)
		::haxor::math::Matrix4 tmp11 = p_transform;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(237)
		tmp->Push(tmp1,tmp6,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GizmoContext_obj,DrawPoint,(void))

Void GizmoContext_obj::Render( ){
{
		HX_STACK_FRAME("haxor.context.GizmoContext","Render",0x05e69ae4,"haxor.context.GizmoContext.Render","haxor/context/GizmoContext.hx",244,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		::haxor::context::Gizmo gr;		HX_STACK_VAR(gr,"gr");
		HX_STACK_LINE(246)
		::haxor::context::WireSphereGizmo tmp = this->wire_sphere_renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		gr = tmp;
		HX_STACK_LINE(246)
		gr->Render();
		HX_STACK_LINE(246)
		gr->Clear();
		HX_STACK_LINE(247)
		::haxor::context::WireCubeGizmo tmp1 = this->wire_cube_renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		gr = tmp1;
		HX_STACK_LINE(247)
		gr->Render();
		HX_STACK_LINE(247)
		gr->Clear();
		HX_STACK_LINE(248)
		::haxor::context::AxisGizmo tmp2 = this->axis_renderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		gr = tmp2;
		HX_STACK_LINE(248)
		gr->Render();
		HX_STACK_LINE(248)
		gr->Clear();
		HX_STACK_LINE(249)
		::haxor::context::CanvasGizmo tmp3 = this->canvas_renderer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		gr = tmp3;
		HX_STACK_LINE(249)
		gr->Render();
		HX_STACK_LINE(249)
		gr->Clear();
		HX_STACK_LINE(250)
		::haxor::context::LineGizmo tmp4 = this->line_renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		gr = tmp4;
		HX_STACK_LINE(250)
		gr->Render();
		HX_STACK_LINE(250)
		gr->Clear();
		HX_STACK_LINE(251)
		::haxor::context::PointGizmo tmp5 = this->point_renderer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		gr = tmp5;
		HX_STACK_LINE(251)
		gr->Render();
		HX_STACK_LINE(251)
		gr->Clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GizmoContext_obj,Render,(void))


GizmoContext_obj::GizmoContext_obj()
{
}

void GizmoContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GizmoContext);
	HX_MARK_MEMBER_NAME(grid,"grid");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(gizmo_material,"gizmo_material");
	HX_MARK_MEMBER_NAME(texture_material,"texture_material");
	HX_MARK_MEMBER_NAME(wire_sphere_renderer,"wire_sphere_renderer");
	HX_MARK_MEMBER_NAME(wire_cube_renderer,"wire_cube_renderer");
	HX_MARK_MEMBER_NAME(axis_renderer,"axis_renderer");
	HX_MARK_MEMBER_NAME(line_renderer,"line_renderer");
	HX_MARK_MEMBER_NAME(point_renderer,"point_renderer");
	HX_MARK_MEMBER_NAME(canvas_renderer,"canvas_renderer");
	HX_MARK_END_CLASS();
}

void GizmoContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grid,"grid");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(gizmo_material,"gizmo_material");
	HX_VISIT_MEMBER_NAME(texture_material,"texture_material");
	HX_VISIT_MEMBER_NAME(wire_sphere_renderer,"wire_sphere_renderer");
	HX_VISIT_MEMBER_NAME(wire_cube_renderer,"wire_cube_renderer");
	HX_VISIT_MEMBER_NAME(axis_renderer,"axis_renderer");
	HX_VISIT_MEMBER_NAME(line_renderer,"line_renderer");
	HX_VISIT_MEMBER_NAME(point_renderer,"point_renderer");
	HX_VISIT_MEMBER_NAME(canvas_renderer,"canvas_renderer");
}

Dynamic GizmoContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { return grid; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Render") ) { return Render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DrawGrid") ) { return DrawGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"DrawAxis") ) { return DrawAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"DrawLine") ) { return DrawLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DrawPoint") ) { return DrawPoint_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateGrid") ) { return CreateGrid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DrawWireCube") ) { return DrawWireCube_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"axis_renderer") ) { return axis_renderer; }
		if (HX_FIELD_EQ(inName,"line_renderer") ) { return line_renderer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gizmo_material") ) { return gizmo_material; }
		if (HX_FIELD_EQ(inName,"point_renderer") ) { return point_renderer; }
		if (HX_FIELD_EQ(inName,"DrawWireSphere") ) { return DrawWireSphere_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"canvas_renderer") ) { return canvas_renderer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"texture_material") ) { return texture_material; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CreateTextureQuad") ) { return CreateTextureQuad_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"wire_cube_renderer") ) { return wire_cube_renderer; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"wire_sphere_renderer") ) { return wire_sphere_renderer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GizmoContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { grid=inValue.Cast< ::haxor::graphics::mesh::Mesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< ::haxor::graphics::mesh::Mesh >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::haxor::graphics::mesh::Mesh >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"axis_renderer") ) { axis_renderer=inValue.Cast< ::haxor::context::AxisGizmo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line_renderer") ) { line_renderer=inValue.Cast< ::haxor::context::LineGizmo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gizmo_material") ) { gizmo_material=inValue.Cast< ::haxor::graphics::material::Material >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point_renderer") ) { point_renderer=inValue.Cast< ::haxor::context::PointGizmo >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"canvas_renderer") ) { canvas_renderer=inValue.Cast< ::haxor::context::CanvasGizmo >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"texture_material") ) { texture_material=inValue.Cast< ::haxor::graphics::material::Material >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"wire_cube_renderer") ) { wire_cube_renderer=inValue.Cast< ::haxor::context::WireCubeGizmo >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"wire_sphere_renderer") ) { wire_sphere_renderer=inValue.Cast< ::haxor::context::WireSphereGizmo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GizmoContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GizmoContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44"));
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("gizmo_material","\x4c","\x3b","\x23","\xbc"));
	outFields->push(HX_HCSTRING("texture_material","\xcb","\x17","\xb6","\x6a"));
	outFields->push(HX_HCSTRING("wire_sphere_renderer","\xbb","\x94","\x2c","\x0b"));
	outFields->push(HX_HCSTRING("wire_cube_renderer","\x53","\x2c","\x65","\x2e"));
	outFields->push(HX_HCSTRING("axis_renderer","\xe1","\x83","\xca","\x76"));
	outFields->push(HX_HCSTRING("line_renderer","\x2e","\x06","\x1e","\x9c"));
	outFields->push(HX_HCSTRING("point_renderer","\x52","\xfe","\x90","\xdd"));
	outFields->push(HX_HCSTRING("canvas_renderer","\xca","\x0c","\x1a","\xd8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(int)offsetof(GizmoContext_obj,grid),HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(int)offsetof(GizmoContext_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(int)offsetof(GizmoContext_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::haxor::graphics::material::Material*/ ,(int)offsetof(GizmoContext_obj,gizmo_material),HX_HCSTRING("gizmo_material","\x4c","\x3b","\x23","\xbc")},
	{hx::fsObject /*::haxor::graphics::material::Material*/ ,(int)offsetof(GizmoContext_obj,texture_material),HX_HCSTRING("texture_material","\xcb","\x17","\xb6","\x6a")},
	{hx::fsObject /*::haxor::context::WireSphereGizmo*/ ,(int)offsetof(GizmoContext_obj,wire_sphere_renderer),HX_HCSTRING("wire_sphere_renderer","\xbb","\x94","\x2c","\x0b")},
	{hx::fsObject /*::haxor::context::WireCubeGizmo*/ ,(int)offsetof(GizmoContext_obj,wire_cube_renderer),HX_HCSTRING("wire_cube_renderer","\x53","\x2c","\x65","\x2e")},
	{hx::fsObject /*::haxor::context::AxisGizmo*/ ,(int)offsetof(GizmoContext_obj,axis_renderer),HX_HCSTRING("axis_renderer","\xe1","\x83","\xca","\x76")},
	{hx::fsObject /*::haxor::context::LineGizmo*/ ,(int)offsetof(GizmoContext_obj,line_renderer),HX_HCSTRING("line_renderer","\x2e","\x06","\x1e","\x9c")},
	{hx::fsObject /*::haxor::context::PointGizmo*/ ,(int)offsetof(GizmoContext_obj,point_renderer),HX_HCSTRING("point_renderer","\x52","\xfe","\x90","\xdd")},
	{hx::fsObject /*::haxor::context::CanvasGizmo*/ ,(int)offsetof(GizmoContext_obj,canvas_renderer),HX_HCSTRING("canvas_renderer","\xca","\x0c","\x1a","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("gizmo_material","\x4c","\x3b","\x23","\xbc"),
	HX_HCSTRING("texture_material","\xcb","\x17","\xb6","\x6a"),
	HX_HCSTRING("wire_sphere_renderer","\xbb","\x94","\x2c","\x0b"),
	HX_HCSTRING("wire_cube_renderer","\x53","\x2c","\x65","\x2e"),
	HX_HCSTRING("axis_renderer","\xe1","\x83","\xca","\x76"),
	HX_HCSTRING("line_renderer","\x2e","\x06","\x1e","\x9c"),
	HX_HCSTRING("point_renderer","\x52","\xfe","\x90","\xdd"),
	HX_HCSTRING("canvas_renderer","\xca","\x0c","\x1a","\xd8"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("CreateTextureQuad","\x86","\xd1","\xaf","\xf5"),
	HX_HCSTRING("CreateGrid","\x02","\x9c","\xaa","\x4d"),
	HX_HCSTRING("DrawGrid","\x0a","\x3d","\x87","\x32"),
	HX_HCSTRING("DrawWireSphere","\x76","\x0a","\xfb","\x46"),
	HX_HCSTRING("DrawWireCube","\x1e","\xbc","\x90","\x2b"),
	HX_HCSTRING("DrawAxis","\xe5","\x82","\x94","\x2e"),
	HX_HCSTRING("DrawLine","\x38","\x7e","\xce","\x35"),
	HX_HCSTRING("DrawPoint","\x8c","\xc9","\x6d","\x30"),
	HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GizmoContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GizmoContext_obj::__mClass,"__mClass");
};

#endif

hx::Class GizmoContext_obj::__mClass;

void GizmoContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.GizmoContext","\x40","\x83","\x55","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GizmoContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GizmoContext_obj >;
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
} // end namespace context
