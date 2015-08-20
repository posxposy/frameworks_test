#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
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
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Graphics
#include <haxor/graphics/Graphics.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
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
namespace component{

Void MeshRenderer_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.MeshRenderer","new",0x52d8f6df,"haxor.component.MeshRenderer.new","haxor/component/MeshRenderer.hx",24,0x9df8586f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(24)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	super::__construct(tmp);
}
;
	return null();
}

//MeshRenderer_obj::~MeshRenderer_obj() { }

Dynamic MeshRenderer_obj::__CreateEmpty() { return  new MeshRenderer_obj; }
hx::ObjectPtr< MeshRenderer_obj > MeshRenderer_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< MeshRenderer_obj > _result_ = new MeshRenderer_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic MeshRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshRenderer_obj > _result_ = new MeshRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::graphics::mesh::Mesh MeshRenderer_obj::get_mesh( ){
	HX_STACK_FRAME("haxor.component.MeshRenderer","get_mesh",0x8a77f297,"haxor.component.MeshRenderer.get_mesh","haxor/component/MeshRenderer.hx",37,0x9df8586f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::haxor::graphics::mesh::Mesh tmp = this->m_mesh;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshRenderer_obj,get_mesh,return )

::haxor::graphics::mesh::Mesh MeshRenderer_obj::set_mesh( ::haxor::graphics::mesh::Mesh v){
	HX_STACK_FRAME("haxor.component.MeshRenderer","set_mesh",0x38d54c0b,"haxor.component.MeshRenderer.set_mesh","haxor/component/MeshRenderer.hx",38,0x9df8586f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(38)
	::haxor::graphics::mesh::Mesh tmp = this->m_mesh;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::haxor::graphics::mesh::Mesh tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	if ((tmp2)){
		HX_STACK_LINE(38)
		::haxor::graphics::mesh::Mesh tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		return tmp3;
	}
	HX_STACK_LINE(38)
	this->m_mesh = v;
	HX_STACK_LINE(38)
	this->UpdateWorldBounds();
	HX_STACK_LINE(38)
	::haxor::graphics::mesh::Mesh tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshRenderer_obj,set_mesh,return )

Void MeshRenderer_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.MeshRenderer","OnBuild",0xf16d736e,"haxor.component.MeshRenderer.OnBuild","haxor/component/MeshRenderer.hx",65,0x9df8586f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->m_has_mesh = true;
		HX_STACK_LINE(67)
		this->super::OnBuild();
		HX_STACK_LINE(68)
		::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		this->m_ws_center = tmp;
		HX_STACK_LINE(69)
		::haxor::math::Vector3 tmp1 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->m_ws_radius = tmp1;
		HX_STACK_LINE(70)
		this->m_culling_dirty = false;
		HX_STACK_LINE(71)
		::haxor::math::AABB3 tmp2 = ::haxor::math::AABB3_obj::get_empty();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		this->m_aabb = tmp2;
	}
return null();
}


bool MeshRenderer_obj::IsVisible( ::haxor::component::Camera p_camera){
	HX_STACK_FRAME("haxor.component.MeshRenderer","IsVisible",0x9e016547,"haxor.component.MeshRenderer.IsVisible","haxor/component/MeshRenderer.hx",80,0x9df8586f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_camera,"p_camera")
	HX_STACK_LINE(81)
	::haxor::component::Camera c = p_camera;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(82)
	bool tmp = (c == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		return false;
	}
	HX_STACK_LINE(83)
	::haxor::graphics::mesh::Mesh tmp1 = this->m_mesh;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	if ((tmp2)){
		HX_STACK_LINE(83)
		return false;
	}
	HX_STACK_LINE(85)
	::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(85)
		Array< ::Dynamic > tmp5 = _this->m_v3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		int tmp6 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		int tmp7 = _this->m_v3->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		int tmp9 = _this->m_nv3 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(85)
	::haxor::math::Vector3 tmp4 = this->m_ws_center;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	::haxor::math::Vector3 tmp5 = tmp3->Set3(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	::haxor::math::Vector4 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		::haxor::context::DataContext tmp7 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		::haxor::context::DataContext _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(85)
		Array< ::Dynamic > tmp8 = _this->m_v4;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		int tmp9 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		int tmp10 = _this->m_v4->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		int tmp11 = hx::Mod(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		int tmp12 = _this->m_nv4 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		tmp6 = tmp8->__get(tmp12).StaticCast< ::haxor::math::Vector4 >();
	}
	HX_STACK_LINE(85)
	::haxor::math::Vector4 tmp7 = c->WorldToProjection(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	::haxor::math::Vector4 ps_center = tmp7;		HX_STACK_VAR(ps_center,"ps_center");
	HX_STACK_LINE(86)
	Float w = ps_center->w;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(87)
	::haxor::math::Vector4 p = ps_center;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(89)
	bool tmp8 = (w <= ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(89)
	if ((tmp8)){
		HX_STACK_LINE(89)
		return false;
	}
	HX_STACK_LINE(92)
	Float tmp9 = p->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(92)
	Float tmp10 = w;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(92)
	Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(92)
	bool tmp12 = (tmp9 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(92)
	if ((tmp12)){
		HX_STACK_LINE(93)
		bool tmp13 = (p->x <= w);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(93)
		if ((tmp13)){
			HX_STACK_LINE(94)
			Float tmp14 = p->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(94)
			Float tmp15 = w;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(94)
			Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(94)
			bool tmp17 = (tmp14 >= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(94)
			if ((tmp17)){
				HX_STACK_LINE(95)
				bool tmp18 = (p->y <= w);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(95)
				if ((tmp18)){
					HX_STACK_LINE(96)
					Float tmp19 = p->z;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(96)
					Float tmp20 = w;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(96)
					Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(96)
					bool tmp22 = (tmp19 >= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(96)
					if ((tmp22)){
						HX_STACK_LINE(97)
						bool tmp23 = (p->z <= w);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(97)
						if ((tmp23)){
							HX_STACK_LINE(97)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(99)
	::haxor::math::Vector3 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::haxor::context::DataContext tmp14 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(99)
		::haxor::context::DataContext _this = tmp14;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(99)
		Array< ::Dynamic > tmp15 = _this->m_v3;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(99)
		int tmp16 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(99)
		int tmp17 = _this->m_v3->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(99)
		int tmp18 = hx::Mod(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(99)
		int tmp19 = _this->m_nv3 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(99)
		tmp13 = tmp15->__get(tmp19).StaticCast< ::haxor::math::Vector3 >();
	}
	HX_STACK_LINE(99)
	::haxor::math::Vector3 tmp14 = this->m_ws_radius;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(99)
	::haxor::math::Vector3 tmp15 = tmp13->Set3(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(99)
	::haxor::math::Vector4 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::haxor::context::DataContext tmp17 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(99)
		::haxor::context::DataContext _this = tmp17;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(99)
		Array< ::Dynamic > tmp18 = _this->m_v4;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(99)
		int tmp19 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(99)
		int tmp20 = _this->m_v4->length;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(99)
		int tmp21 = hx::Mod(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(99)
		int tmp22 = _this->m_nv4 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(99)
		tmp16 = tmp18->__get(tmp22).StaticCast< ::haxor::math::Vector4 >();
	}
	HX_STACK_LINE(99)
	::haxor::math::Vector4 tmp17 = c->WorldToProjection(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(99)
	::haxor::math::Vector4 v = tmp17;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(100)
	Float tmp18 = (v->x * v->x);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(100)
	Float tmp19 = (v->y * v->y);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(100)
	Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(100)
	Float tmp21 = (v->z * v->z);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(100)
	Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(100)
	Float tmp23 = (v->w * v->w);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(100)
	Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(100)
	Float tmp25 = ::Math_obj::sqrt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(100)
	Float r = tmp25;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(102)
	Float tmp26 = (p->x + r);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(102)
	Float tmp27 = w;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(102)
	Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(102)
	bool tmp29 = (tmp26 >= tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(102)
	if ((tmp29)){
		HX_STACK_LINE(103)
		Float tmp30 = (p->x - r);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(103)
		Float tmp31 = w;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(103)
		bool tmp32 = (tmp30 <= tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(103)
		if ((tmp32)){
			HX_STACK_LINE(104)
			Float tmp33 = (p->y + r);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(104)
			Float tmp34 = w;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(104)
			Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(104)
			bool tmp36 = (tmp33 >= tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(104)
			if ((tmp36)){
				HX_STACK_LINE(105)
				Float tmp37 = (p->y - r);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(105)
				Float tmp38 = w;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(105)
				bool tmp39 = (tmp37 <= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(105)
				if ((tmp39)){
					HX_STACK_LINE(106)
					Float tmp40 = (p->z + r);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(106)
					Float tmp41 = w;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(106)
					Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(106)
					bool tmp43 = (tmp40 >= tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(106)
					if ((tmp43)){
						HX_STACK_LINE(107)
						Float tmp44 = (p->z - r);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(107)
						Float tmp45 = w;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(107)
						bool tmp46 = (tmp44 <= tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(107)
						if ((tmp46)){
							HX_STACK_LINE(107)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(109)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshRenderer_obj,IsVisible,return )

bool MeshRenderer_obj::CheckCulling( ){
	HX_STACK_FRAME("haxor.component.MeshRenderer","CheckCulling",0x30b87849,"haxor.component.MeshRenderer.CheckCulling","haxor/component/MeshRenderer.hx",117,0x9df8586f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	::haxor::component::Camera tmp = ::haxor::component::Camera_obj::m_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	::haxor::component::Camera c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(119)
	bool tmp1 = (c == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	if ((tmp1)){
		HX_STACK_LINE(119)
		bool tmp2 = this->m_culled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		return tmp2;
	}
	HX_STACK_LINE(121)
	bool tmp2 = c->m_view_uniform_dirty;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	if ((tmp3)){
		HX_STACK_LINE(122)
		bool tmp4 = c->m_proj_uniform_dirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		if ((tmp5)){
			HX_STACK_LINE(123)
			bool tmp6 = this->m_culling_dirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			if ((tmp7)){
				HX_STACK_LINE(123)
				bool tmp8 = this->m_culled;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(124)
	this->UpdateWorldBounds();
	HX_STACK_LINE(125)
	::haxor::component::Camera tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	bool tmp5 = this->IsVisible(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(125)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(125)
	return tmp6;
}


Void MeshRenderer_obj::OnTransformUpdate( bool p_hierarchy){
{
		HX_STACK_FRAME("haxor.component.MeshRenderer","OnTransformUpdate",0x36a668d5,"haxor.component.MeshRenderer.OnTransformUpdate","haxor/component/MeshRenderer.hx",133,0x9df8586f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_hierarchy,"p_hierarchy")
		HX_STACK_LINE(133)
		this->m_culling_dirty = true;
	}
return null();
}


Void MeshRenderer_obj::UpdateWorldBounds( ){
{
		HX_STACK_FRAME("haxor.component.MeshRenderer","UpdateWorldBounds",0x4b4a6d7d,"haxor.component.MeshRenderer.UpdateWorldBounds","haxor/component/MeshRenderer.hx",141,0x9df8586f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		::haxor::graphics::mesh::Mesh tmp = this->m_mesh;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		if ((tmp1)){
			HX_STACK_LINE(146)
			::haxor::graphics::mesh::Mesh tmp2 = this->m_mesh;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			::haxor::math::AABB3 tmp3 = tmp2->m_bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			::haxor::math::Vector3 tmp4 = this->m_ws_center;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			::haxor::math::AABB3_obj::Center(tmp3,tmp4);
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				::haxor::core::Entity tmp5 = this->m_entity;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(148)
				::haxor::math::Matrix4 tmp6 = tmp5->m_transform->get_WorldMatrix();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(148)
				::haxor::math::Matrix4 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(148)
				::haxor::math::Vector3 tmp7 = this->m_ws_center;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				::haxor::math::Vector3 p_point = tmp7;		HX_STACK_VAR(p_point,"p_point");
				HX_STACK_LINE(148)
				Float tmp8 = (_this->m00 * p_point->x);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(148)
				Float tmp9 = (_this->m01 * p_point->y);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(148)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(148)
				Float tmp11 = (_this->m02 * p_point->z);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(148)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(148)
				Float tmp13 = _this->m03;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(148)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(148)
				Float vx = tmp14;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(148)
				Float tmp15 = (_this->m10 * p_point->x);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(148)
				Float tmp16 = (_this->m11 * p_point->y);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(148)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(148)
				Float tmp18 = (_this->m12 * p_point->z);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(148)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(148)
				Float tmp20 = _this->m13;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(148)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				Float vy = tmp21;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(148)
				Float tmp22 = (_this->m20 * p_point->x);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(148)
				Float tmp23 = (_this->m21 * p_point->y);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(148)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(148)
				Float tmp25 = (_this->m22 * p_point->z);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(148)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(148)
				Float tmp27 = _this->m23;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(148)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(148)
				Float vz = tmp28;		HX_STACK_VAR(vz,"vz");
				HX_STACK_LINE(148)
				p_point->x = vx;
				HX_STACK_LINE(148)
				p_point->y = vy;
				HX_STACK_LINE(148)
				p_point->z = vz;
				HX_STACK_LINE(148)
				p_point;
			}
			HX_STACK_LINE(151)
			::haxor::math::Vector3 tmp5 = this->m_ws_radius;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				::haxor::graphics::mesh::Mesh tmp7 = this->m_mesh;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(151)
				::haxor::math::AABB3 _this = tmp7->m_bounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					Float tmp8 = (_this->m_xMax - _this->m_xMin);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(151)
					Float p_a = tmp8;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(151)
					bool tmp9 = (p_a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(151)
					if ((tmp9)){
						HX_STACK_LINE(151)
						Float tmp10 = p_a;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(151)
						tmp6 = -(tmp10);
					}
					else{
						HX_STACK_LINE(151)
						tmp6 = p_a;
					}
				}
			}
			HX_STACK_LINE(151)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				::haxor::graphics::mesh::Mesh tmp8 = this->m_mesh;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				::haxor::math::AABB3 _this = tmp8->m_bounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					Float tmp9 = (_this->m_yMax - _this->m_yMin);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(151)
					Float p_a = tmp9;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(151)
					bool tmp10 = (p_a < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(151)
					if ((tmp10)){
						HX_STACK_LINE(151)
						Float tmp11 = p_a;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(151)
						tmp7 = -(tmp11);
					}
					else{
						HX_STACK_LINE(151)
						tmp7 = p_a;
					}
				}
			}
			HX_STACK_LINE(151)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				::haxor::graphics::mesh::Mesh tmp9 = this->m_mesh;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				::haxor::math::AABB3 _this = tmp9->m_bounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					Float tmp10 = (_this->m_zMax - _this->m_zMin);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(151)
					Float p_a = tmp10;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(151)
					bool tmp11 = (p_a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(151)
					if ((tmp11)){
						HX_STACK_LINE(151)
						Float tmp12 = p_a;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(151)
						tmp8 = -(tmp12);
					}
					else{
						HX_STACK_LINE(151)
						tmp8 = p_a;
					}
				}
			}
			HX_STACK_LINE(151)
			tmp5->Set(tmp6,tmp7,tmp8);
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				::haxor::core::Entity tmp9 = this->m_entity;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(152)
				::haxor::math::Matrix4 tmp10 = tmp9->m_transform->get_WorldMatrix();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(152)
				::haxor::math::Matrix4 _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(152)
				::haxor::math::Vector3 tmp11 = this->m_ws_radius;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(152)
				::haxor::math::Vector3 p_point = tmp11;		HX_STACK_VAR(p_point,"p_point");
				HX_STACK_LINE(152)
				Float tmp12 = (_this->m00 * p_point->x);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(152)
				Float tmp13 = (_this->m01 * p_point->y);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(152)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(152)
				Float tmp15 = (_this->m02 * p_point->z);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(152)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				Float vx = tmp16;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(152)
				Float tmp17 = (_this->m10 * p_point->x);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(152)
				Float tmp18 = (_this->m11 * p_point->y);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(152)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(152)
				Float tmp20 = (_this->m12 * p_point->z);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(152)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(152)
				Float vy = tmp21;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(152)
				Float tmp22 = (_this->m20 * p_point->x);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(152)
				Float tmp23 = (_this->m21 * p_point->y);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(152)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(152)
				Float tmp25 = (_this->m22 * p_point->z);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(152)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(152)
				Float vz = tmp26;		HX_STACK_VAR(vz,"vz");
				HX_STACK_LINE(152)
				p_point->x = vx;
				HX_STACK_LINE(152)
				p_point->y = vy;
				HX_STACK_LINE(152)
				p_point->z = vz;
				HX_STACK_LINE(152)
				p_point;
			}
			HX_STACK_LINE(154)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				::haxor::math::Vector3 tmp10 = this->m_ws_radius;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(154)
				::haxor::math::Vector3 _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(154)
				Float tmp11 = (_this->x * _this->x);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(154)
				Float tmp12 = (_this->y * _this->y);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(154)
				Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(154)
				Float tmp14 = (_this->z * _this->z);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(154)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(154)
				tmp9 = ::Math_obj::sqrt(tmp15);
			}
			HX_STACK_LINE(154)
			Float tmp10 = (tmp9 * ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(154)
			Float r = tmp10;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(155)
			::haxor::math::Vector3 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				::haxor::context::DataContext tmp12 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(155)
				::haxor::context::DataContext _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(155)
				Array< ::Dynamic > tmp13 = _this->m_v3;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(155)
				int tmp14 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(155)
				int tmp15 = _this->m_v3->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(155)
				int tmp16 = hx::Mod(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(155)
				int tmp17 = _this->m_nv3 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(155)
				tmp11 = tmp13->__get(tmp17).StaticCast< ::haxor::math::Vector3 >();
			}
			HX_STACK_LINE(155)
			::haxor::math::Vector3 pmin = tmp11;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(156)
			::haxor::math::Vector3 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::haxor::context::DataContext tmp13 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(156)
				::haxor::context::DataContext _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(156)
				Array< ::Dynamic > tmp14 = _this->m_v3;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(156)
				int tmp15 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(156)
				int tmp16 = _this->m_v3->length;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(156)
				int tmp17 = hx::Mod(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(156)
				int tmp18 = _this->m_nv3 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(156)
				tmp12 = tmp14->__get(tmp18).StaticCast< ::haxor::math::Vector3 >();
			}
			HX_STACK_LINE(156)
			::haxor::math::Vector3 pmax = tmp12;		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(157)
			::haxor::math::Vector3 tmp13 = this->m_ws_center;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(157)
			Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(157)
			Float tmp15 = r;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(157)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(157)
			::haxor::math::Vector3 tmp17 = this->m_ws_center;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(157)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(157)
			Float tmp19 = r;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(157)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(157)
			::haxor::math::Vector3 tmp21 = this->m_ws_center;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(157)
			Float tmp22 = tmp21->z;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(157)
			Float tmp23 = r;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(157)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(157)
			pmin->Set(tmp16,tmp20,tmp24);
			HX_STACK_LINE(158)
			::haxor::math::Vector3 tmp25 = this->m_ws_center;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(158)
			Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(158)
			Float tmp27 = r;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(158)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(158)
			::haxor::math::Vector3 tmp29 = this->m_ws_center;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(158)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(158)
			Float tmp31 = r;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(158)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(158)
			::haxor::math::Vector3 tmp33 = this->m_ws_center;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(158)
			Float tmp34 = tmp33->z;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(158)
			Float tmp35 = r;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(158)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(158)
			pmax->Set(tmp28,tmp32,tmp36);
			HX_STACK_LINE(159)
			::haxor::math::AABB3 tmp37 = this->m_aabb;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(159)
			::haxor::math::Vector3 tmp38 = pmin;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(159)
			::haxor::math::Vector3 tmp39 = pmax;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(159)
			tmp37->Set3(tmp38,tmp39);
			HX_STACK_LINE(160)
			::haxor::context::RendererContext tmp40 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(160)
			int tmp41 = this->__fcid;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(160)
			::haxor::math::Vector3 tmp42 = pmin;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(160)
			::haxor::math::Vector3 tmp43 = pmax;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(160)
			tmp40->UpdateSAP(tmp41,hx::ObjectPtr<OBJ_>(this),tmp42,tmp43);
			HX_STACK_LINE(162)
			this->m_culling_dirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MeshRenderer_obj,UpdateWorldBounds,(void))

Void MeshRenderer_obj::OnRender( ){
{
		HX_STACK_FRAME("haxor.component.MeshRenderer","OnRender",0x80ec0b16,"haxor.component.MeshRenderer.OnRender","haxor/component/MeshRenderer.hx",170,0x9df8586f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		this->super::OnRender();
		HX_STACK_LINE(172)
		::haxor::graphics::mesh::Mesh tmp = this->m_mesh;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		if ((tmp1)){
			HX_STACK_LINE(172)
			return null();
		}
		HX_STACK_LINE(174)
		::haxor::component::MeshRenderer_obj::current = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(176)
		::haxor::graphics::mesh::Mesh tmp2 = this->m_mesh;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		::haxor::graphics::material::Material tmp3 = this->m_material;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		::haxor::core::Entity tmp4 = this->m_entity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		::haxor::component::Transform tmp5 = tmp4->m_transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		::haxor::component::Camera tmp6 = ::haxor::component::Camera_obj::m_current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(176)
		::haxor::graphics::Graphics_obj::Render(tmp2,tmp3,tmp5,tmp6);
	}
return null();
}


::haxor::component::MeshRenderer MeshRenderer_obj::current;


MeshRenderer_obj::MeshRenderer_obj()
{
}

void MeshRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshRenderer);
	HX_MARK_MEMBER_NAME(__fcid,"__fcid");
	HX_MARK_MEMBER_NAME(m_mesh,"m_mesh");
	HX_MARK_MEMBER_NAME(m_ws_center,"m_ws_center");
	HX_MARK_MEMBER_NAME(m_ws_radius,"m_ws_radius");
	HX_MARK_MEMBER_NAME(m_aabb,"m_aabb");
	HX_MARK_MEMBER_NAME(m_culling_dirty,"m_culling_dirty");
	::haxor::component::Renderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeshRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__fcid,"__fcid");
	HX_VISIT_MEMBER_NAME(m_mesh,"m_mesh");
	HX_VISIT_MEMBER_NAME(m_ws_center,"m_ws_center");
	HX_VISIT_MEMBER_NAME(m_ws_radius,"m_ws_radius");
	HX_VISIT_MEMBER_NAME(m_aabb,"m_aabb");
	HX_VISIT_MEMBER_NAME(m_culling_dirty,"m_culling_dirty");
	::haxor::component::Renderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MeshRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mesh") ) { if (inCallProp == hx::paccAlways) return get_mesh(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__fcid") ) { return __fcid; }
		if (HX_FIELD_EQ(inName,"m_mesh") ) { return m_mesh; }
		if (HX_FIELD_EQ(inName,"m_aabb") ) { return m_aabb; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_mesh") ) { return get_mesh_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mesh") ) { return set_mesh_dyn(); }
		if (HX_FIELD_EQ(inName,"OnRender") ) { return OnRender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"IsVisible") ) { return IsVisible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_ws_center") ) { return m_ws_center; }
		if (HX_FIELD_EQ(inName,"m_ws_radius") ) { return m_ws_radius; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CheckCulling") ) { return CheckCulling_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_culling_dirty") ) { return m_culling_dirty; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OnTransformUpdate") ) { return OnTransformUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateWorldBounds") ) { return UpdateWorldBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MeshRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
	}
	return false;
}

Dynamic MeshRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mesh") ) { if (inCallProp == hx::paccAlways) return set_mesh(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__fcid") ) { __fcid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_mesh") ) { m_mesh=inValue.Cast< ::haxor::graphics::mesh::Mesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_aabb") ) { m_aabb=inValue.Cast< ::haxor::math::AABB3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_ws_center") ) { m_ws_center=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_ws_radius") ) { m_ws_radius=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_culling_dirty") ) { m_culling_dirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MeshRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< ::haxor::component::MeshRenderer >(); return true; }
	}
	return false;
}

void MeshRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__fcid","\x78","\xa1","\xaf","\xf2"));
	outFields->push(HX_HCSTRING("mesh","\xed","\x49","\x59","\x48"));
	outFields->push(HX_HCSTRING("m_mesh","\x3f","\xba","\x50","\x90"));
	outFields->push(HX_HCSTRING("m_ws_center","\x46","\x71","\x89","\x6e"));
	outFields->push(HX_HCSTRING("m_ws_radius","\xc3","\x1b","\xa5","\x19"));
	outFields->push(HX_HCSTRING("m_aabb","\xf2","\x12","\x5f","\x88"));
	outFields->push(HX_HCSTRING("m_culling_dirty","\x31","\xe3","\x2d","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MeshRenderer_obj,__fcid),HX_HCSTRING("__fcid","\x78","\xa1","\xaf","\xf2")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(int)offsetof(MeshRenderer_obj,m_mesh),HX_HCSTRING("m_mesh","\x3f","\xba","\x50","\x90")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(MeshRenderer_obj,m_ws_center),HX_HCSTRING("m_ws_center","\x46","\x71","\x89","\x6e")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(MeshRenderer_obj,m_ws_radius),HX_HCSTRING("m_ws_radius","\xc3","\x1b","\xa5","\x19")},
	{hx::fsObject /*::haxor::math::AABB3*/ ,(int)offsetof(MeshRenderer_obj,m_aabb),HX_HCSTRING("m_aabb","\xf2","\x12","\x5f","\x88")},
	{hx::fsBool,(int)offsetof(MeshRenderer_obj,m_culling_dirty),HX_HCSTRING("m_culling_dirty","\x31","\xe3","\x2d","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::component::MeshRenderer*/ ,(void *) &MeshRenderer_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__fcid","\x78","\xa1","\xaf","\xf2"),
	HX_HCSTRING("get_mesh","\x76","\x05","\x14","\xc8"),
	HX_HCSTRING("set_mesh","\xea","\x5e","\x71","\x76"),
	HX_HCSTRING("m_mesh","\x3f","\xba","\x50","\x90"),
	HX_HCSTRING("m_ws_center","\x46","\x71","\x89","\x6e"),
	HX_HCSTRING("m_ws_radius","\xc3","\x1b","\xa5","\x19"),
	HX_HCSTRING("m_aabb","\xf2","\x12","\x5f","\x88"),
	HX_HCSTRING("m_culling_dirty","\x31","\xe3","\x2d","\xda"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("IsVisible","\x88","\xd5","\xf5","\x48"),
	HX_HCSTRING("CheckCulling","\xa8","\xe6","\x20","\x09"),
	HX_HCSTRING("OnTransformUpdate","\x16","\x82","\xd6","\x22"),
	HX_HCSTRING("UpdateWorldBounds","\xbe","\x86","\x7a","\x37"),
	HX_HCSTRING("OnRender","\xf5","\x1d","\x88","\xbe"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MeshRenderer_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MeshRenderer_obj::current,"current");
};

#endif

hx::Class MeshRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	String(null()) };

void MeshRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.MeshRenderer","\x6d","\x9b","\x86","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MeshRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &MeshRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MeshRenderer_obj >;
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
