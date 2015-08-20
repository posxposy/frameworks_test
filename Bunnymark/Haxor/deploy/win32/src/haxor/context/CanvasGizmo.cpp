#include <hxcpp.h>

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
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
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
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
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

Void CanvasGizmo_obj::__construct()
{
HX_STACK_FRAME("haxor.context.CanvasGizmo","new",0x954f30a9,"haxor.context.CanvasGizmo.new","haxor/context/GizmoContext.hx",755,0xa99c50bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(756)
	int tmp = ::haxor::context::Gizmo_obj::CANVAS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(756)
	int tmp1 = (int)3000;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(756)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(757)
	::haxor::math::Color tmp2 = ::haxor::math::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(757)
	this->fill = tmp2;
	HX_STACK_LINE(758)
	::haxor::math::Color tmp3 = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(758)
	this->line = tmp3;
	HX_STACK_LINE(759)
	::haxor::math::Vector3 tmp4 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(759)
	this->p0 = tmp4;
	HX_STACK_LINE(760)
	::haxor::math::Vector3 tmp5 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(760)
	this->p1 = tmp5;
	HX_STACK_LINE(761)
	::haxor::math::Vector3 tmp6 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(761)
	this->start = tmp6;
	HX_STACK_LINE(762)
	this->count = (int)0;
	HX_STACK_LINE(763)
	this->active = false;
	HX_STACK_LINE(765)
	::haxor::graphics::material::Material tmp7 = this->material;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(765)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(765)
	if ((tmp8)){
		HX_STACK_LINE(765)
		::haxor::graphics::material::Material tmp9 = this->material;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(765)
		tmp9->cull = (int)0;
	}
}
;
	return null();
}

//CanvasGizmo_obj::~CanvasGizmo_obj() { }

Dynamic CanvasGizmo_obj::__CreateEmpty() { return  new CanvasGizmo_obj; }
hx::ObjectPtr< CanvasGizmo_obj > CanvasGizmo_obj::__new()
{  hx::ObjectPtr< CanvasGizmo_obj > _result_ = new CanvasGizmo_obj();
	_result_->__construct();
	return _result_;}

Dynamic CanvasGizmo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasGizmo_obj > _result_ = new CanvasGizmo_obj();
	_result_->__construct();
	return _result_;}

Void CanvasGizmo_obj::Begin( ::haxor::math::Color p_fill,::haxor::math::Color p_line,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.context.CanvasGizmo","Begin",0x964e1e92,"haxor.context.CanvasGizmo.Begin","haxor/context/GizmoContext.hx",775,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_fill,"p_fill")
		HX_STACK_ARG(p_line,"p_line")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(776)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		if ((tmp)){
			HX_STACK_LINE(776)
			return null();
		}
		HX_STACK_LINE(777)
		::haxor::math::Color tmp1 = this->fill;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(777)
		::haxor::math::Color tmp2 = p_fill;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(777)
		tmp1->SetColor(tmp2);
		HX_STACK_LINE(778)
		bool tmp3 = (p_line == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(778)
		if ((tmp3)){
			HX_STACK_LINE(778)
			::haxor::math::Color tmp4 = this->line;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(778)
			tmp4->a = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(778)
			::haxor::math::Color tmp4 = this->line;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(778)
			::haxor::math::Color tmp5 = p_line;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(778)
			tmp4->SetColor(tmp5);
		}
		HX_STACK_LINE(779)
		this->transform = p_transform;
		HX_STACK_LINE(780)
		this->count = (int)0;
		HX_STACK_LINE(781)
		this->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CanvasGizmo_obj,Begin,(void))

Void CanvasGizmo_obj::Line( ::haxor::math::Vector3 p_position){
{
		HX_STACK_FRAME("haxor.context.CanvasGizmo","Line",0xf98523ab,"haxor.context.CanvasGizmo.Line","haxor/context/GizmoContext.hx",789,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_position,"p_position")
		HX_STACK_LINE(790)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(790)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(790)
		if ((tmp1)){
			HX_STACK_LINE(790)
			return null();
		}
		HX_STACK_LINE(791)
		int tmp2 = this->count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(791)
		bool tmp3 = (tmp2 >= (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(791)
		if ((tmp3)){
			HX_STACK_LINE(791)
			::haxor::context::GizmoContext tmp4 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(791)
			::haxor::math::Vector3 tmp5 = this->p0;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(791)
			::haxor::math::Vector3 tmp6 = this->p1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(791)
			::haxor::math::Color tmp7 = this->line;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(791)
			::haxor::math::Matrix4 tmp8 = this->transform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(791)
			tmp4->DrawLine(tmp5,tmp6,tmp7,tmp8);
		}
		HX_STACK_LINE(792)
		int tmp4 = this->count;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(792)
		bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(792)
		if ((tmp5)){
			HX_STACK_LINE(792)
			::haxor::math::Vector3 tmp6 = this->start;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(792)
			::haxor::math::Vector3 tmp7 = p_position;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(792)
			tmp6->Set3(tmp7);
		}
		HX_STACK_LINE(794)
		::haxor::math::Vector3 tmp6 = this->p1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(794)
		::haxor::math::Vector3 tmp7 = this->p0;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(794)
		tmp6->Set3(tmp7);
		HX_STACK_LINE(795)
		::haxor::math::Vector3 tmp8 = this->p0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(795)
		::haxor::math::Vector3 tmp9 = p_position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(795)
		tmp8->Set3(tmp9);
		HX_STACK_LINE(797)
		int tmp10 = this->count;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(797)
		bool tmp11 = (tmp10 >= (int)2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(797)
		if ((tmp11)){
			HX_STACK_LINE(799)
			::haxor::math::Color tmp12 = this->fill;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(799)
			::haxor::math::Vector4 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(799)
			{
				HX_STACK_LINE(799)
				::haxor::context::DataContext tmp14 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(799)
				::haxor::context::DataContext _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(799)
				Array< ::Dynamic > tmp15 = _this->m_v4;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(799)
				int tmp16 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(799)
				int tmp17 = _this->m_v4->length;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(799)
				int tmp18 = hx::Mod(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(799)
				int tmp19 = _this->m_nv4 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(799)
				tmp13 = tmp15->__get(tmp19).StaticCast< ::haxor::math::Vector4 >();
			}
			HX_STACK_LINE(799)
			::haxor::math::Vector4 tmp14 = tmp13->Set((int)1,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(799)
			::haxor::math::Vector4 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(799)
			{
				HX_STACK_LINE(799)
				::haxor::context::DataContext tmp16 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(799)
				::haxor::context::DataContext _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(799)
				Array< ::Dynamic > tmp17 = _this->m_v4;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(799)
				int tmp18 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(799)
				int tmp19 = _this->m_v4->length;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(799)
				int tmp20 = hx::Mod(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(799)
				int tmp21 = _this->m_nv4 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(799)
				tmp15 = tmp17->__get(tmp21).StaticCast< ::haxor::math::Vector4 >();
			}
			HX_STACK_LINE(799)
			::haxor::math::Vector3 tmp16 = this->start;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(799)
			::haxor::math::Vector4 tmp17 = tmp15->Set3(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(799)
			::haxor::math::Matrix4 tmp18 = this->transform;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(799)
			this->Push(tmp12,tmp14,tmp17,tmp18);
			HX_STACK_LINE(800)
			::haxor::math::Color tmp19 = this->fill;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(800)
			::haxor::math::Vector4 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(800)
			{
				HX_STACK_LINE(800)
				::haxor::context::DataContext tmp21 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(800)
				::haxor::context::DataContext _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(800)
				Array< ::Dynamic > tmp22 = _this->m_v4;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(800)
				int tmp23 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(800)
				int tmp24 = _this->m_v4->length;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(800)
				int tmp25 = hx::Mod(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(800)
				int tmp26 = _this->m_nv4 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(800)
				tmp20 = tmp22->__get(tmp26).StaticCast< ::haxor::math::Vector4 >();
			}
			HX_STACK_LINE(800)
			::haxor::math::Vector4 tmp21 = tmp20->Set((int)1,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(800)
			::haxor::math::Vector4 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(800)
			{
				HX_STACK_LINE(800)
				::haxor::context::DataContext tmp23 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(800)
				::haxor::context::DataContext _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(800)
				Array< ::Dynamic > tmp24 = _this->m_v4;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(800)
				int tmp25 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(800)
				int tmp26 = _this->m_v4->length;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(800)
				int tmp27 = hx::Mod(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(800)
				int tmp28 = _this->m_nv4 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(800)
				tmp22 = tmp24->__get(tmp28).StaticCast< ::haxor::math::Vector4 >();
			}
			HX_STACK_LINE(800)
			::haxor::math::Vector3 tmp23 = this->p1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(800)
			::haxor::math::Vector4 tmp24 = tmp22->Set3(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(800)
			::haxor::math::Matrix4 tmp25 = this->transform;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(800)
			this->Push(tmp19,tmp21,tmp24,tmp25);
			HX_STACK_LINE(801)
			::haxor::math::Color tmp26 = this->fill;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(801)
			::haxor::math::Vector4 tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(801)
			{
				HX_STACK_LINE(801)
				::haxor::context::DataContext tmp28 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(801)
				::haxor::context::DataContext _this = tmp28;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(801)
				Array< ::Dynamic > tmp29 = _this->m_v4;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(801)
				int tmp30 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(801)
				int tmp31 = _this->m_v4->length;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(801)
				int tmp32 = hx::Mod(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(801)
				int tmp33 = _this->m_nv4 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(801)
				tmp27 = tmp29->__get(tmp33).StaticCast< ::haxor::math::Vector4 >();
			}
			HX_STACK_LINE(801)
			::haxor::math::Vector4 tmp28 = tmp27->Set((int)1,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(801)
			::haxor::math::Vector4 tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(801)
			{
				HX_STACK_LINE(801)
				::haxor::context::DataContext tmp30 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(801)
				::haxor::context::DataContext _this = tmp30;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(801)
				Array< ::Dynamic > tmp31 = _this->m_v4;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(801)
				int tmp32 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(801)
				int tmp33 = _this->m_v4->length;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(801)
				int tmp34 = hx::Mod(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(801)
				int tmp35 = _this->m_nv4 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(801)
				tmp29 = tmp31->__get(tmp35).StaticCast< ::haxor::math::Vector4 >();
			}
			HX_STACK_LINE(801)
			::haxor::math::Vector3 tmp30 = this->p0;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(801)
			::haxor::math::Vector4 tmp31 = tmp29->Set3(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(801)
			::haxor::math::Matrix4 tmp32 = this->transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(801)
			this->Push(tmp26,tmp28,tmp31,tmp32);
		}
		HX_STACK_LINE(804)
		(this->count)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasGizmo_obj,Line,(void))

Void CanvasGizmo_obj::End( ){
{
		HX_STACK_FRAME("haxor.context.CanvasGizmo","End",0x95301c04,"haxor.context.CanvasGizmo.End","haxor/context/GizmoContext.hx",811,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(812)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		if ((tmp1)){
			HX_STACK_LINE(812)
			return null();
		}
		HX_STACK_LINE(813)
		{
			HX_STACK_LINE(813)
			::haxor::context::GizmoContext tmp2 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(813)
			::haxor::math::Vector3 tmp3 = this->p0;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(813)
			::haxor::math::Vector3 tmp4 = this->start;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(813)
			::haxor::math::Color tmp5 = this->line;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(813)
			::haxor::math::Matrix4 tmp6 = this->transform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(813)
			tmp2->DrawLine(tmp3,tmp4,tmp5,tmp6);
		}
		HX_STACK_LINE(814)
		{
			HX_STACK_LINE(814)
			::haxor::context::GizmoContext tmp2 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(814)
			::haxor::math::Vector3 tmp3 = this->p0;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(814)
			::haxor::math::Vector3 tmp4 = this->p1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(814)
			::haxor::math::Color tmp5 = this->line;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(814)
			::haxor::math::Matrix4 tmp6 = this->transform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(814)
			tmp2->DrawLine(tmp3,tmp4,tmp5,tmp6);
		}
		HX_STACK_LINE(816)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasGizmo_obj,End,(void))

Void CanvasGizmo_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.context.CanvasGizmo","OnBuild",0xcce55a38,"haxor.context.CanvasGizmo.OnBuild","haxor/context/GizmoContext.hx",823,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(824)
		::haxor::graphics::mesh::Mesh3 tmp = ::haxor::graphics::mesh::Mesh3_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(824)
		::haxor::graphics::mesh::Mesh3 m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(825)
		m->set_name(HX_HCSTRING("$GizmoCanvasMesh","\x3b","\x61","\xc1","\x7c"));
		HX_STACK_LINE(826)
		m->primitive = (int)4;
		HX_STACK_LINE(827)
		Float id = ((Float)0.0);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(828)
		int tmp1 = this->m_gizmo_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(828)
		int tmp2 = (tmp1 * (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(828)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(828)
		::haxor::io::FloatArray tmp4 = ::haxor::io::FloatArray_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(828)
		::haxor::io::FloatArray ia = tmp4;		HX_STACK_VAR(ia,"ia");
		HX_STACK_LINE(829)
		int tmp5 = this->m_gizmo_count;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(829)
		int tmp6 = (tmp5 * (int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(829)
		int tmp7 = (tmp6 * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(829)
		::haxor::io::FloatArray tmp8 = ::haxor::io::FloatArray_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(829)
		::haxor::io::FloatArray va = tmp8;		HX_STACK_VAR(va,"va");
		HX_STACK_LINE(830)
		int va_k = (int)0;		HX_STACK_VAR(va_k,"va_k");
		HX_STACK_LINE(831)
		int ia_k = (int)0;		HX_STACK_VAR(ia_k,"ia_k");
		HX_STACK_LINE(832)
		{
			HX_STACK_LINE(832)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(832)
			int tmp9 = this->m_gizmo_count;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(832)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(832)
			while((true)){
				HX_STACK_LINE(832)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(832)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(832)
				if ((tmp11)){
					HX_STACK_LINE(832)
					break;
				}
				HX_STACK_LINE(832)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(832)
				int k = tmp12;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(834)
				int tmp13 = (va_k)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(834)
				va->Set(tmp13,((Float)0.0));
				HX_STACK_LINE(834)
				int tmp14 = (va_k)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(834)
				va->Set(tmp14,((Float)0.0));
				HX_STACK_LINE(834)
				int tmp15 = (va_k)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(834)
				va->Set(tmp15,((Float)0.0));
				HX_STACK_LINE(834)
				int tmp16 = (ia_k)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(834)
				Float tmp17 = id;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(834)
				ia->Set(tmp16,tmp17);
				HX_STACK_LINE(834)
				hx::AddEq(id,((Float)1.0));
				HX_STACK_LINE(835)
				int tmp18 = (va_k)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(835)
				va->Set(tmp18,((Float)0.0));
				HX_STACK_LINE(835)
				int tmp19 = (va_k)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(835)
				va->Set(tmp19,((Float)0.0));
				HX_STACK_LINE(835)
				int tmp20 = (va_k)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(835)
				va->Set(tmp20,((Float)0.0));
				HX_STACK_LINE(835)
				int tmp21 = (ia_k)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(835)
				Float tmp22 = id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(835)
				ia->Set(tmp21,tmp22);
				HX_STACK_LINE(835)
				hx::AddEq(id,((Float)1.0));
				HX_STACK_LINE(836)
				int tmp23 = (va_k)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(836)
				va->Set(tmp23,((Float)0.0));
				HX_STACK_LINE(836)
				int tmp24 = (va_k)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(836)
				va->Set(tmp24,((Float)0.0));
				HX_STACK_LINE(836)
				int tmp25 = (va_k)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(836)
				va->Set(tmp25,((Float)0.0));
				HX_STACK_LINE(836)
				int tmp26 = (ia_k)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(836)
				Float tmp27 = id;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(836)
				ia->Set(tmp26,tmp27);
				HX_STACK_LINE(836)
				hx::AddEq(id,((Float)1.0));
			}
		}
		HX_STACK_LINE(839)
		::haxor::io::FloatArray tmp9 = ia;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(839)
		m->Set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp9,(int)1);
		HX_STACK_LINE(840)
		::haxor::io::FloatArray tmp10 = va;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(840)
		m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp10,(int)3);
		HX_STACK_LINE(841)
		this->mesh = m;
	}
return null();
}



CanvasGizmo_obj::CanvasGizmo_obj()
{
}

void CanvasGizmo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasGizmo);
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(p0,"p0");
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(active,"active");
	::haxor::context::Gizmo_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasGizmo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(p0,"p0");
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(active,"active");
	::haxor::context::Gizmo_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CanvasGizmo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p0") ) { return p0; }
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"End") ) { return End_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill; }
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"Line") ) { return Line_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"Begin") ) { return Begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasGizmo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p0") ) { p0=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p1") ) { p1=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CanvasGizmo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CanvasGizmo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(CanvasGizmo_obj,fill),HX_HCSTRING("fill","\x83","\xce","\xbb","\x43")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(CanvasGizmo_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(CanvasGizmo_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(CanvasGizmo_obj,p0),HX_HCSTRING("p0","\xc0","\x61","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(CanvasGizmo_obj,p1),HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(CanvasGizmo_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsInt,(int)offsetof(CanvasGizmo_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsBool,(int)offsetof(CanvasGizmo_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"),
	HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("Begin","\x09","\x5a","\x83","\x43"),
	HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),
	HX_HCSTRING("End","\xbb","\xbb","\x34","\x00"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasGizmo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasGizmo_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasGizmo_obj::__mClass;

void CanvasGizmo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.CanvasGizmo","\x37","\xa8","\x95","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CanvasGizmo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasGizmo_obj >;
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
