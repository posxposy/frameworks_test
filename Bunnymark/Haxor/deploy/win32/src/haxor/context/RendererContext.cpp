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
#ifndef INCLUDED_haxor_component_SkinnedMeshRenderer
#include <haxor/component/SkinnedMeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
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
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
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
#ifndef INCLUDED_haxor_ds_SAP
#include <haxor/ds/SAP.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
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

Void RendererContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.RendererContext","new",0x3d8f3d93,"haxor.context.RendererContext.new","haxor/context/RendererContext.hx",75,0xd2e9a6bf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(76)
	::haxor::context::UID tmp = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->rid = tmp;
	HX_STACK_LINE(78)
	::haxor::context::UID tmp1 = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	this->fcid = tmp1;
	HX_STACK_LINE(79)
	::haxor::ds::SAP tmp2 = ::haxor::ds::SAP_obj::__new(((Float)0.01),false);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	this->sap = tmp2;
	HX_STACK_LINE(81)
	this->sap_dirty = false;
	HX_STACK_LINE(83)
	this->deferred_culling = (int)0;
	HX_STACK_LINE(84)
	this->deferred_offset = (int)100;
	HX_STACK_LINE(86)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	this->display = tmp3;
	HX_STACK_LINE(87)
	Array< bool > tmp4 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	this->sort = tmp4;
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			bool tmp5 = (_g < (int)32);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			if ((tmp6)){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(90)
			int tmp8 = ::haxor::context::EngineContext_obj::maxNodes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			bool tmp9 = (i == (int)31);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			::haxor::context::Process tmp10 = ::haxor::context::Process_obj::__new(HX_HCSTRING("process.renderers","\x11","\x03","\xec","\x2c"),tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(90)
			::haxor::context::Process p = tmp10;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(91)
			Array< ::Dynamic > tmp11 = this->display;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(91)
			::haxor::context::Process tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(91)
			tmp11->push(tmp12);
			HX_STACK_LINE(92)
			Array< bool > tmp13 = this->sort;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(92)
			tmp13->push(false);
		}
	}
}
;
	return null();
}

//RendererContext_obj::~RendererContext_obj() { }

Dynamic RendererContext_obj::__CreateEmpty() { return  new RendererContext_obj; }
hx::ObjectPtr< RendererContext_obj > RendererContext_obj::__new()
{  hx::ObjectPtr< RendererContext_obj > _result_ = new RendererContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic RendererContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RendererContext_obj > _result_ = new RendererContext_obj();
	_result_->__construct();
	return _result_;}

Void RendererContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.RendererContext","Initialize",0x7335249d,"haxor.context.RendererContext.Initialize","haxor/context/RendererContext.hx",100,0xd2e9a6bf)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererContext_obj,Initialize,(void))

Void RendererContext_obj::Create( ::haxor::component::Renderer r){
{
		HX_STACK_FRAME("haxor.context.RendererContext","Create",0x58406fc9,"haxor.context.RendererContext.Create","haxor/context/RendererContext.hx",109,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(110)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::haxor::context::UID tmp1 = this->rid;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			::haxor::context::UID _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(110)
			int tmp2 = _this->m_cache->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			if ((tmp3)){
				HX_STACK_LINE(110)
				tmp = (_this->m_id)++;
			}
			else{
				HX_STACK_LINE(110)
				tmp = _this->m_cache->shift();
			}
		}
		HX_STACK_LINE(110)
		r->__cid = tmp;
		HX_STACK_LINE(111)
		bool tmp1 = r->m_has_mesh;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(113)
			::haxor::component::MeshRenderer mr = ((::haxor::component::MeshRenderer)(r));		HX_STACK_VAR(mr,"mr");
			HX_STACK_LINE(114)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				::haxor::context::UID tmp3 = this->fcid;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(114)
				::haxor::context::UID _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(114)
				int tmp4 = _this->m_cache->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(114)
				bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(114)
				if ((tmp5)){
					HX_STACK_LINE(114)
					tmp2 = (_this->m_id)++;
				}
				else{
					HX_STACK_LINE(114)
					tmp2 = _this->m_cache->shift();
				}
			}
			HX_STACK_LINE(114)
			mr->__fcid = tmp2;
			HX_STACK_LINE(115)
			::haxor::ds::SAP tmp3 = this->sap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			int tmp4 = mr->__fcid;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			tmp3->Create(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,Create,(void))

Void RendererContext_obj::UpdateSkinning( ::haxor::component::SkinnedMeshRenderer smr,bool jf){
{
		HX_STACK_FRAME("haxor.context.RendererContext","UpdateSkinning",0x4ea82f27,"haxor.context.RendererContext.UpdateSkinning","haxor/context/RendererContext.hx",124,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(smr,"smr")
		HX_STACK_ARG(jf,"jf")
		HX_STACK_LINE(125)
		bool tmp = jf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		::haxor::graphics::texture::ComputeTexture tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp)){
			HX_STACK_LINE(125)
			tmp1 = smr->m_jt;
		}
		else{
			HX_STACK_LINE(125)
			tmp1 = smr->m_bmt;
		}
		HX_STACK_LINE(125)
		::haxor::graphics::texture::ComputeTexture t = tmp1;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(126)
		bool tmp2 = (t == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		if ((tmp2)){
			HX_STACK_LINE(126)
			return null();
		}
		HX_STACK_LINE(127)
		::haxor::io::Buffer tmp3 = t->m_data->get_buffer();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		::haxor::io::FloatArray f32 = ((::haxor::io::FloatArray)(tmp3));		HX_STACK_VAR(f32,"f32");
		HX_STACK_LINE(128)
		bool tmp4 = jf;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		Array< Float > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		if ((tmp4)){
			HX_STACK_LINE(128)
			tmp5 = smr->m_jf32;
		}
		else{
			HX_STACK_LINE(128)
			tmp5 = smr->m_bmf32;
		}
		HX_STACK_LINE(128)
		Array< Float > vl = tmp5;		HX_STACK_VAR(vl,"vl");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(129)
			int _g = vl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			while((true)){
				HX_STACK_LINE(129)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(129)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(129)
				if ((tmp7)){
					HX_STACK_LINE(129)
					break;
				}
				HX_STACK_LINE(129)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(129)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(129)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(129)
				Float tmp10 = vl->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(129)
				f32->Set(tmp9,tmp10);
			}
		}
		HX_STACK_LINE(130)
		t->Apply();
		HX_STACK_LINE(131)
		bool tmp6 = jf;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		if ((tmp6)){
			HX_STACK_LINE(133)
			Float tw = ((Float)(t->m_width));		HX_STACK_VAR(tw,"tw");
			HX_STACK_LINE(134)
			Float th = ((Float)(t->m_height));		HX_STACK_VAR(th,"th");
			HX_STACK_LINE(135)
			bool tmp7 = (tw <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(135)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(135)
			if ((tmp7)){
				HX_STACK_LINE(135)
				tmp8 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(135)
				tmp8 = (Float(((Float)1.0)) / Float(tw));
			}
			HX_STACK_LINE(135)
			Float itw = tmp8;		HX_STACK_VAR(itw,"itw");
			HX_STACK_LINE(136)
			bool tmp9 = (th <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(136)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(136)
			if ((tmp9)){
				HX_STACK_LINE(136)
				tmp10 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(136)
				tmp10 = (Float(((Float)1.0)) / Float(th));
			}
			HX_STACK_LINE(136)
			Float ith = tmp10;		HX_STACK_VAR(ith,"ith");
			HX_STACK_LINE(137)
			::haxor::graphics::texture::ComputeTexture tmp11 = smr->m_jt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(137)
			smr->m_material->SetTexture(HX_HCSTRING("Joints","\x09","\x5c","\x9e","\xc5"),tmp11);
			HX_STACK_LINE(138)
			::haxor::graphics::texture::ComputeTexture tmp12 = smr->m_bmt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(138)
			smr->m_material->SetTexture(HX_HCSTRING("Binds","\xf6","\x7f","\x2d","\x46"),tmp12);
			HX_STACK_LINE(139)
			Float tmp13 = tw;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(139)
			Float tmp14 = th;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(139)
			Float tmp15 = itw;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(139)
			Float tmp16 = ith;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(139)
			smr->m_material->SetFloat4(HX_HCSTRING("SkinTexSize","\x2b","\xcd","\x46","\x96"),tmp13,tmp14,tmp15,tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RendererContext_obj,UpdateSkinning,(void))

Void RendererContext_obj::AddCamera( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.RendererContext","AddCamera",0x595530f9,"haxor.context.RendererContext.AddCamera","haxor/context/RendererContext.hx",148,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(149)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::haxor::context::UID tmp1 = this->fcid;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			::haxor::context::UID _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(149)
			int tmp2 = _this->m_cache->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			if ((tmp3)){
				HX_STACK_LINE(149)
				tmp = (_this->m_id)++;
			}
			else{
				HX_STACK_LINE(149)
				tmp = _this->m_cache->shift();
			}
		}
		HX_STACK_LINE(149)
		c->__fcid = tmp;
		HX_STACK_LINE(150)
		::haxor::ds::SAP tmp1 = this->sap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		int tmp2 = c->__fcid;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		tmp1->Create(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,AddCamera,(void))

Void RendererContext_obj::RemoveCamera( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.RendererContext","RemoveCamera",0xb6110296,"haxor.context.RendererContext.RemoveCamera","haxor/context/RendererContext.hx",158,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			int v = c->__fcid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(159)
			::haxor::context::UID tmp = this->fcid;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(159)
			int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(159)
			tmp->m_cache->push(tmp1);
			HX_STACK_LINE(159)
			v;
		}
		HX_STACK_LINE(160)
		::haxor::ds::SAP tmp = this->sap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		int tmp1 = c->__fcid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		tmp->Remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,RemoveCamera,(void))

Void RendererContext_obj::OnMaterialChange( ::haxor::component::Renderer r){
{
		HX_STACK_FRAME("haxor.context.RendererContext","OnMaterialChange",0xd2d6d203,"haxor.context.RendererContext.OnMaterialChange","haxor/context/RendererContext.hx",168,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(169)
		int tmp = r->m_entity->m_layer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		int l = tmp;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(170)
		Array< bool > tmp1 = this->sort;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		int tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		tmp1[tmp2] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,OnMaterialChange,(void))

Void RendererContext_obj::OnMeshChange( ::haxor::component::Renderer r){
{
		HX_STACK_FRAME("haxor.context.RendererContext","OnMeshChange",0x02f6c1c9,"haxor.context.RendererContext.OnMeshChange","haxor/context/RendererContext.hx",178,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(179)
		int tmp = r->m_entity->m_layer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		int l = tmp;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(180)
		Array< bool > tmp1 = this->sort;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		int tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		tmp1[tmp2] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,OnMeshChange,(void))

Void RendererContext_obj::OnVisibilityChange( ::haxor::component::Renderer r,bool f){
{
		HX_STACK_FRAME("haxor.context.RendererContext","OnVisibilityChange",0x3d85106e,"haxor.context.RendererContext.OnVisibilityChange","haxor/context/RendererContext.hx",189,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(190)
		Array< ::Dynamic > tmp = r->m_entity->m_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		Array< ::Dynamic > cl = tmp;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(191)
			int _g = cl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while((true)){
				HX_STACK_LINE(191)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(191)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(191)
				if ((tmp2)){
					HX_STACK_LINE(191)
					break;
				}
				HX_STACK_LINE(191)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(191)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(191)
				::haxor::component::Component tmp4 = cl->__get(i).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(191)
				bool tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(191)
				tmp4->OnVisibilityChange(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RendererContext_obj,OnVisibilityChange,(void))

bool RendererContext_obj::DeferredCulling( ::haxor::component::Renderer r){
	HX_STACK_FRAME("haxor.context.RendererContext","DeferredCulling",0x56f5b2a4,"haxor.context.RendererContext.DeferredCulling","haxor/context/RendererContext.hx",200,0xd2e9a6bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(202)
	return false;
	HX_STACK_LINE(203)
	bool tmp = r->m_visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp)){
		HX_STACK_LINE(203)
		bool tmp2 = r->m_culled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		tmp1 = !(tmp3);
	}
	else{
		HX_STACK_LINE(203)
		tmp1 = false;
	}
	HX_STACK_LINE(203)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	if ((tmp2)){
		HX_STACK_LINE(203)
		return false;
	}
	HX_STACK_LINE(204)
	::haxor::context::RendererContext tmp3 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	int c_id = tmp3->deferred_culling;		HX_STACK_VAR(c_id,"c_id");
	HX_STACK_LINE(205)
	int tmp4 = this->deferred_offset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(205)
	int c_off = tmp4;		HX_STACK_VAR(c_off,"c_off");
	HX_STACK_LINE(206)
	int tmp5 = this->deferred_culling;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(206)
	int tmp6 = this->deferred_offset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(206)
	int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(206)
	::haxor::context::UID tmp8 = this->rid;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(206)
	int tmp9 = tmp8->get_next();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(206)
	int tmp10 = hx::Mod(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(206)
	this->deferred_culling = tmp10;
	HX_STACK_LINE(207)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		int tmp12 = (c_id - r->__cid);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(207)
		int p_a = tmp12;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(207)
		bool tmp13 = (p_a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(207)
		if ((tmp13)){
			HX_STACK_LINE(207)
			int tmp14 = p_a;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(207)
			tmp11 = -(tmp14);
		}
		else{
			HX_STACK_LINE(207)
			tmp11 = p_a;
		}
	}
	HX_STACK_LINE(207)
	int tmp12 = c_off;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(207)
	bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(207)
	if ((tmp13)){
		HX_STACK_LINE(207)
		return true;
	}
	HX_STACK_LINE(208)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,DeferredCulling,return )

Void RendererContext_obj::OnLayerChange( ::haxor::component::Renderer r,int from,int to){
{
		HX_STACK_FRAME("haxor.context.RendererContext","OnLayerChange",0x2f73b215,"haxor.context.RendererContext.OnLayerChange","haxor/context/RendererContext.hx",218,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(from,"from")
		HX_STACK_ARG(to,"to")
		HX_STACK_LINE(219)
		Array< bool > tmp = this->sort;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		int tmp1 = from;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		tmp[tmp1] = true;
		HX_STACK_LINE(220)
		Array< ::Dynamic > tmp2 = this->display;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		int tmp3 = from;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		::haxor::context::Process tmp4 = tmp2->__get(tmp3).StaticCast< ::haxor::context::Process >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		::haxor::component::Renderer tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		tmp4->Remove(tmp5);
		HX_STACK_LINE(221)
		bool tmp6 = r->get_enabled();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		if ((tmp6)){
			HX_STACK_LINE(223)
			Array< ::Dynamic > tmp7 = this->display;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			int tmp8 = to;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			::haxor::context::Process tmp9 = tmp7->__get(tmp8).StaticCast< ::haxor::context::Process >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			::haxor::component::Renderer tmp10 = r;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			tmp9->Add(tmp10);
			HX_STACK_LINE(224)
			Array< bool > tmp11 = this->sort;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			int tmp12 = to;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			tmp11[tmp12] = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RendererContext_obj,OnLayerChange,(void))

Void RendererContext_obj::UpdateDisplayList( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.RendererContext","UpdateDisplayList",0xd536288a,"haxor.context.RendererContext.UpdateDisplayList","haxor/context/RendererContext.hx",232,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(233)
		Array< int > ll = c->m_layers;		HX_STACK_VAR(ll,"ll");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(234)
			int _g = ll->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			while((true)){
				HX_STACK_LINE(234)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(234)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(234)
				if ((tmp1)){
					HX_STACK_LINE(234)
					break;
				}
				HX_STACK_LINE(234)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(234)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(236)
				int tmp3 = ll->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(236)
				int l = tmp3;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(237)
				Array< ::Dynamic > tmp4 = this->display;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(237)
				int tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				::haxor::context::Process tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::context::Process >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(237)
				::haxor::context::Process rl = tmp6;		HX_STACK_VAR(rl,"rl");
				HX_STACK_LINE(238)
				Array< bool > tmp7 = this->sort;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				int tmp8 = l;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				bool tmp9 = tmp7->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				bool need_sort = tmp9;		HX_STACK_VAR(need_sort,"need_sort");
				HX_STACK_LINE(239)
				bool tmp10 = need_sort;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(239)
				if ((tmp10)){
					HX_STACK_LINE(241)
					Array< bool > tmp11 = this->sort;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(241)
					int tmp12 = l;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(241)
					tmp11[tmp12] = false;
					HX_STACK_LINE(242)
					bool tmp13 = (rl->m_length > (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(242)
					if ((tmp13)){
						HX_STACK_LINE(244)
						Dynamic tmp14 = this->DisplayListSort_dyn();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(244)
						rl->Sort(tmp14);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,UpdateDisplayList,(void))

Void RendererContext_obj::Enable( ::haxor::component::Renderer r){
{
		HX_STACK_FRAME("haxor.context.RendererContext","Enable",0xd4b8b750,"haxor.context.RendererContext.Enable","haxor/context/RendererContext.hx",255,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(256)
		Array< ::Dynamic > tmp = this->display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		int tmp1 = r->m_entity->m_layer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		::haxor::context::Process tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::context::Process >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		::haxor::component::Renderer tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		tmp2->Add(tmp3);
		HX_STACK_LINE(257)
		Array< bool > tmp4 = this->sort;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		int tmp5 = r->m_entity->m_layer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		tmp4[tmp5] = true;
		HX_STACK_LINE(258)
		bool tmp6 = r->m_has_mesh;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		if ((tmp6)){
			HX_STACK_LINE(260)
			::haxor::component::MeshRenderer mr = ((::haxor::component::MeshRenderer)(r));		HX_STACK_VAR(mr,"mr");
			HX_STACK_LINE(261)
			mr->m_culling_dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,Enable,(void))

Void RendererContext_obj::Disable( ::haxor::component::Renderer r){
{
		HX_STACK_FRAME("haxor.context.RendererContext","Disable",0x800f147b,"haxor.context.RendererContext.Disable","haxor/context/RendererContext.hx",270,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(271)
		Array< ::Dynamic > tmp = this->display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		int tmp1 = r->m_entity->m_layer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		::haxor::context::Process tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::context::Process >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		::haxor::component::Renderer tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		tmp2->Remove(tmp3);
		HX_STACK_LINE(272)
		Array< bool > tmp4 = this->sort;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		int tmp5 = r->m_entity->m_layer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		tmp4[tmp5] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,Disable,(void))

Void RendererContext_obj::UpdateCameraSAP( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.RendererContext","UpdateCameraSAP",0x6ecda8c7,"haxor.context.RendererContext.UpdateCameraSAP","haxor/context/RendererContext.hx",280,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(281)
		bool tmp = this->sap_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		if ((tmp2)){
			HX_STACK_LINE(281)
			tmp3 = c->m_view_uniform_dirty;
		}
		else{
			HX_STACK_LINE(281)
			tmp3 = true;
		}
		HX_STACK_LINE(281)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(281)
		if ((tmp4)){
			HX_STACK_LINE(281)
			tmp5 = c->m_proj_uniform_dirty;
		}
		else{
			HX_STACK_LINE(281)
			tmp5 = true;
		}
		HX_STACK_LINE(281)
		bool need_sap = tmp5;		HX_STACK_VAR(need_sap,"need_sap");
		HX_STACK_LINE(282)
		bool tmp6 = need_sap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		if ((tmp7)){
			HX_STACK_LINE(282)
			return null();
		}
		HX_STACK_LINE(283)
		::haxor::math::Vector3 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			::haxor::context::DataContext tmp9 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(283)
			::haxor::context::DataContext _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(283)
			Array< ::Dynamic > tmp10 = _this->m_v3;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(283)
			int tmp11 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(283)
			int tmp12 = _this->m_v3->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(283)
			int tmp13 = hx::Mod(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(283)
			int tmp14 = _this->m_nv3 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(283)
			tmp8 = tmp10->__get(tmp14).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(283)
		::haxor::math::Vector4 tmp9 = c->m_frustum->__get((int)0).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(283)
		::haxor::math::Vector3 tmp10 = tmp8->Set4(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(283)
		::haxor::math::Vector3 n0 = tmp10;		HX_STACK_VAR(n0,"n0");
		HX_STACK_LINE(284)
		::haxor::math::Vector3 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(284)
		{
			HX_STACK_LINE(284)
			::haxor::context::DataContext tmp12 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(284)
			::haxor::context::DataContext _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(284)
			Array< ::Dynamic > tmp13 = _this->m_v3;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(284)
			int tmp14 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(284)
			int tmp15 = _this->m_v3->length;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(284)
			int tmp16 = hx::Mod(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(284)
			int tmp17 = _this->m_nv3 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(284)
			tmp11 = tmp13->__get(tmp17).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(284)
		::haxor::math::Vector4 tmp12 = c->m_frustum->__get((int)1).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(284)
		::haxor::math::Vector3 tmp13 = tmp11->Set4(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(284)
		::haxor::math::Vector3 n1 = tmp13;		HX_STACK_VAR(n1,"n1");
		HX_STACK_LINE(285)
		::haxor::math::Vector3 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			::haxor::context::DataContext tmp15 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(285)
			::haxor::context::DataContext _this = tmp15;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(285)
			Array< ::Dynamic > tmp16 = _this->m_v3;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(285)
			int tmp17 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(285)
			int tmp18 = _this->m_v3->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(285)
			int tmp19 = hx::Mod(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(285)
			int tmp20 = _this->m_nv3 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(285)
			tmp14 = tmp16->__get(tmp20).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(285)
		::haxor::math::Vector4 tmp15 = c->m_frustum->__get((int)2).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(285)
		::haxor::math::Vector3 tmp16 = tmp14->Set4(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(285)
		::haxor::math::Vector3 n2 = tmp16;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(286)
		::haxor::math::Vector3 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::haxor::context::DataContext tmp18 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(286)
			::haxor::context::DataContext _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(286)
			Array< ::Dynamic > tmp19 = _this->m_v3;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(286)
			int tmp20 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(286)
			int tmp21 = _this->m_v3->length;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(286)
			int tmp22 = hx::Mod(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(286)
			int tmp23 = _this->m_nv3 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(286)
			tmp17 = tmp19->__get(tmp23).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(286)
		::haxor::math::Vector4 tmp18 = c->m_frustum->__get((int)3).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(286)
		::haxor::math::Vector3 tmp19 = tmp17->Set4(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(286)
		::haxor::math::Vector3 n3 = tmp19;		HX_STACK_VAR(n3,"n3");
		HX_STACK_LINE(287)
		::haxor::math::Vector3 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::haxor::context::DataContext tmp21 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(287)
			::haxor::context::DataContext _this = tmp21;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(287)
			Array< ::Dynamic > tmp22 = _this->m_v3;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(287)
			int tmp23 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(287)
			int tmp24 = _this->m_v3->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(287)
			int tmp25 = hx::Mod(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(287)
			int tmp26 = _this->m_nv3 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(287)
			tmp20 = tmp22->__get(tmp26).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(287)
		::haxor::math::Vector4 tmp21 = c->m_frustum->__get((int)4).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(287)
		::haxor::math::Vector3 tmp22 = tmp20->Set4(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(287)
		::haxor::math::Vector3 f0 = tmp22;		HX_STACK_VAR(f0,"f0");
		HX_STACK_LINE(288)
		::haxor::math::Vector3 tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			::haxor::context::DataContext tmp24 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(288)
			::haxor::context::DataContext _this = tmp24;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(288)
			Array< ::Dynamic > tmp25 = _this->m_v3;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(288)
			int tmp26 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(288)
			int tmp27 = _this->m_v3->length;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(288)
			int tmp28 = hx::Mod(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(288)
			int tmp29 = _this->m_nv3 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(288)
			tmp23 = tmp25->__get(tmp29).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(288)
		::haxor::math::Vector4 tmp24 = c->m_frustum->__get((int)5).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(288)
		::haxor::math::Vector3 tmp25 = tmp23->Set4(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(288)
		::haxor::math::Vector3 f1 = tmp25;		HX_STACK_VAR(f1,"f1");
		HX_STACK_LINE(289)
		::haxor::math::Vector3 tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			::haxor::context::DataContext tmp27 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(289)
			::haxor::context::DataContext _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(289)
			Array< ::Dynamic > tmp28 = _this->m_v3;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(289)
			int tmp29 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(289)
			int tmp30 = _this->m_v3->length;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(289)
			int tmp31 = hx::Mod(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(289)
			int tmp32 = _this->m_nv3 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(289)
			tmp26 = tmp28->__get(tmp32).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(289)
		::haxor::math::Vector4 tmp27 = c->m_frustum->__get((int)6).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(289)
		::haxor::math::Vector3 tmp28 = tmp26->Set4(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(289)
		::haxor::math::Vector3 f2 = tmp28;		HX_STACK_VAR(f2,"f2");
		HX_STACK_LINE(290)
		::haxor::math::Vector3 tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			::haxor::context::DataContext tmp30 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(290)
			::haxor::context::DataContext _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(290)
			Array< ::Dynamic > tmp31 = _this->m_v3;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(290)
			int tmp32 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(290)
			int tmp33 = _this->m_v3->length;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(290)
			int tmp34 = hx::Mod(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(290)
			int tmp35 = _this->m_nv3 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(290)
			tmp29 = tmp31->__get(tmp35).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(290)
		::haxor::math::Vector4 tmp30 = c->m_frustum->__get((int)7).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(290)
		::haxor::math::Vector3 tmp31 = tmp29->Set4(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(290)
		::haxor::math::Vector3 f3 = tmp31;		HX_STACK_VAR(f3,"f3");
		HX_STACK_LINE(292)
		{
			HX_STACK_LINE(292)
			::haxor::component::Transform tmp32 = c->m_entity->m_transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(292)
			::haxor::math::Matrix4 tmp33 = tmp32->get_WorldMatrix();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(292)
			::haxor::math::Matrix4 _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(292)
			Float tmp34 = (_this->m00 * n0->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(292)
			Float tmp35 = (_this->m01 * n0->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(292)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(292)
			Float tmp37 = (_this->m02 * n0->z);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(292)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(292)
			Float tmp39 = _this->m03;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(292)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(292)
			Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(292)
			Float tmp41 = (_this->m10 * n0->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(292)
			Float tmp42 = (_this->m11 * n0->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(292)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(292)
			Float tmp44 = (_this->m12 * n0->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(292)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(292)
			Float tmp46 = _this->m13;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(292)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(292)
			Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(292)
			Float tmp48 = (_this->m20 * n0->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(292)
			Float tmp49 = (_this->m21 * n0->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(292)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(292)
			Float tmp51 = (_this->m22 * n0->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(292)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(292)
			Float tmp53 = _this->m23;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(292)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(292)
			Float vz = tmp54;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(292)
			n0->x = vx;
			HX_STACK_LINE(292)
			n0->y = vy;
			HX_STACK_LINE(292)
			n0->z = vz;
			HX_STACK_LINE(292)
			n0;
		}
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			::haxor::component::Transform tmp32 = c->m_entity->m_transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(293)
			::haxor::math::Matrix4 tmp33 = tmp32->get_WorldMatrix();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(293)
			::haxor::math::Matrix4 _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(293)
			Float tmp34 = (_this->m00 * n1->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(293)
			Float tmp35 = (_this->m01 * n1->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(293)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(293)
			Float tmp37 = (_this->m02 * n1->z);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(293)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(293)
			Float tmp39 = _this->m03;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(293)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(293)
			Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(293)
			Float tmp41 = (_this->m10 * n1->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(293)
			Float tmp42 = (_this->m11 * n1->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(293)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(293)
			Float tmp44 = (_this->m12 * n1->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(293)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(293)
			Float tmp46 = _this->m13;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(293)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(293)
			Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(293)
			Float tmp48 = (_this->m20 * n1->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(293)
			Float tmp49 = (_this->m21 * n1->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(293)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(293)
			Float tmp51 = (_this->m22 * n1->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(293)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(293)
			Float tmp53 = _this->m23;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(293)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(293)
			Float vz = tmp54;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(293)
			n1->x = vx;
			HX_STACK_LINE(293)
			n1->y = vy;
			HX_STACK_LINE(293)
			n1->z = vz;
			HX_STACK_LINE(293)
			n1;
		}
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			::haxor::component::Transform tmp32 = c->m_entity->m_transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(294)
			::haxor::math::Matrix4 tmp33 = tmp32->get_WorldMatrix();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(294)
			::haxor::math::Matrix4 _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(294)
			Float tmp34 = (_this->m00 * n2->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(294)
			Float tmp35 = (_this->m01 * n2->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(294)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(294)
			Float tmp37 = (_this->m02 * n2->z);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(294)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(294)
			Float tmp39 = _this->m03;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(294)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(294)
			Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(294)
			Float tmp41 = (_this->m10 * n2->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(294)
			Float tmp42 = (_this->m11 * n2->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(294)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(294)
			Float tmp44 = (_this->m12 * n2->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(294)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(294)
			Float tmp46 = _this->m13;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(294)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(294)
			Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(294)
			Float tmp48 = (_this->m20 * n2->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(294)
			Float tmp49 = (_this->m21 * n2->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(294)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(294)
			Float tmp51 = (_this->m22 * n2->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(294)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(294)
			Float tmp53 = _this->m23;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(294)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(294)
			Float vz = tmp54;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(294)
			n2->x = vx;
			HX_STACK_LINE(294)
			n2->y = vy;
			HX_STACK_LINE(294)
			n2->z = vz;
			HX_STACK_LINE(294)
			n2;
		}
		HX_STACK_LINE(295)
		{
			HX_STACK_LINE(295)
			::haxor::component::Transform tmp32 = c->m_entity->m_transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(295)
			::haxor::math::Matrix4 tmp33 = tmp32->get_WorldMatrix();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(295)
			::haxor::math::Matrix4 _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(295)
			Float tmp34 = (_this->m00 * n3->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(295)
			Float tmp35 = (_this->m01 * n3->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(295)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(295)
			Float tmp37 = (_this->m02 * n3->z);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(295)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(295)
			Float tmp39 = _this->m03;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(295)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(295)
			Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(295)
			Float tmp41 = (_this->m10 * n3->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(295)
			Float tmp42 = (_this->m11 * n3->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(295)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(295)
			Float tmp44 = (_this->m12 * n3->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(295)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(295)
			Float tmp46 = _this->m13;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(295)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(295)
			Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(295)
			Float tmp48 = (_this->m20 * n3->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(295)
			Float tmp49 = (_this->m21 * n3->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(295)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(295)
			Float tmp51 = (_this->m22 * n3->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(295)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(295)
			Float tmp53 = _this->m23;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(295)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(295)
			Float vz = tmp54;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(295)
			n3->x = vx;
			HX_STACK_LINE(295)
			n3->y = vy;
			HX_STACK_LINE(295)
			n3->z = vz;
			HX_STACK_LINE(295)
			n3;
		}
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			::haxor::component::Transform tmp32 = c->m_entity->m_transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(296)
			::haxor::math::Matrix4 tmp33 = tmp32->get_WorldMatrix();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(296)
			::haxor::math::Matrix4 _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(296)
			Float tmp34 = (_this->m00 * f0->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(296)
			Float tmp35 = (_this->m01 * f0->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(296)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(296)
			Float tmp37 = (_this->m02 * f0->z);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(296)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(296)
			Float tmp39 = _this->m03;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(296)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(296)
			Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(296)
			Float tmp41 = (_this->m10 * f0->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(296)
			Float tmp42 = (_this->m11 * f0->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(296)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(296)
			Float tmp44 = (_this->m12 * f0->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(296)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(296)
			Float tmp46 = _this->m13;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(296)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(296)
			Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(296)
			Float tmp48 = (_this->m20 * f0->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(296)
			Float tmp49 = (_this->m21 * f0->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(296)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(296)
			Float tmp51 = (_this->m22 * f0->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(296)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(296)
			Float tmp53 = _this->m23;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(296)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(296)
			Float vz = tmp54;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(296)
			f0->x = vx;
			HX_STACK_LINE(296)
			f0->y = vy;
			HX_STACK_LINE(296)
			f0->z = vz;
			HX_STACK_LINE(296)
			f0;
		}
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			::haxor::component::Transform tmp32 = c->m_entity->m_transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(297)
			::haxor::math::Matrix4 tmp33 = tmp32->get_WorldMatrix();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(297)
			::haxor::math::Matrix4 _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(297)
			Float tmp34 = (_this->m00 * f1->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(297)
			Float tmp35 = (_this->m01 * f1->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(297)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(297)
			Float tmp37 = (_this->m02 * f1->z);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(297)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(297)
			Float tmp39 = _this->m03;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(297)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(297)
			Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(297)
			Float tmp41 = (_this->m10 * f1->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(297)
			Float tmp42 = (_this->m11 * f1->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(297)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(297)
			Float tmp44 = (_this->m12 * f1->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(297)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(297)
			Float tmp46 = _this->m13;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(297)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(297)
			Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(297)
			Float tmp48 = (_this->m20 * f1->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(297)
			Float tmp49 = (_this->m21 * f1->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(297)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(297)
			Float tmp51 = (_this->m22 * f1->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(297)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(297)
			Float tmp53 = _this->m23;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(297)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(297)
			Float vz = tmp54;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(297)
			f1->x = vx;
			HX_STACK_LINE(297)
			f1->y = vy;
			HX_STACK_LINE(297)
			f1->z = vz;
			HX_STACK_LINE(297)
			f1;
		}
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			::haxor::component::Transform tmp32 = c->m_entity->m_transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(298)
			::haxor::math::Matrix4 tmp33 = tmp32->get_WorldMatrix();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(298)
			::haxor::math::Matrix4 _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(298)
			Float tmp34 = (_this->m00 * f2->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(298)
			Float tmp35 = (_this->m01 * f2->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(298)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(298)
			Float tmp37 = (_this->m02 * f2->z);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(298)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(298)
			Float tmp39 = _this->m03;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(298)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(298)
			Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(298)
			Float tmp41 = (_this->m10 * f2->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(298)
			Float tmp42 = (_this->m11 * f2->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(298)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(298)
			Float tmp44 = (_this->m12 * f2->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(298)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(298)
			Float tmp46 = _this->m13;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(298)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(298)
			Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(298)
			Float tmp48 = (_this->m20 * f2->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(298)
			Float tmp49 = (_this->m21 * f2->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(298)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(298)
			Float tmp51 = (_this->m22 * f2->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(298)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(298)
			Float tmp53 = _this->m23;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(298)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(298)
			Float vz = tmp54;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(298)
			f2->x = vx;
			HX_STACK_LINE(298)
			f2->y = vy;
			HX_STACK_LINE(298)
			f2->z = vz;
			HX_STACK_LINE(298)
			f2;
		}
		HX_STACK_LINE(299)
		{
			HX_STACK_LINE(299)
			::haxor::component::Transform tmp32 = c->m_entity->m_transform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(299)
			::haxor::math::Matrix4 tmp33 = tmp32->get_WorldMatrix();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(299)
			::haxor::math::Matrix4 _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(299)
			Float tmp34 = (_this->m00 * f3->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(299)
			Float tmp35 = (_this->m01 * f3->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(299)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(299)
			Float tmp37 = (_this->m02 * f3->z);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(299)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(299)
			Float tmp39 = _this->m03;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(299)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(299)
			Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(299)
			Float tmp41 = (_this->m10 * f3->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(299)
			Float tmp42 = (_this->m11 * f3->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(299)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(299)
			Float tmp44 = (_this->m12 * f3->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(299)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(299)
			Float tmp46 = _this->m13;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(299)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(299)
			Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(299)
			Float tmp48 = (_this->m20 * f3->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(299)
			Float tmp49 = (_this->m21 * f3->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(299)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(299)
			Float tmp51 = (_this->m22 * f3->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(299)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(299)
			Float tmp53 = _this->m23;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(299)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(299)
			Float vz = tmp54;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(299)
			f3->x = vx;
			HX_STACK_LINE(299)
			f3->y = vy;
			HX_STACK_LINE(299)
			f3->z = vz;
			HX_STACK_LINE(299)
			f3;
		}
		HX_STACK_LINE(301)
		::haxor::math::Vector3 tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(301)
			::haxor::context::DataContext tmp33 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(301)
			::haxor::context::DataContext _this = tmp33;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(301)
			Array< ::Dynamic > tmp34 = _this->m_v3;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(301)
			int tmp35 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(301)
			int tmp36 = _this->m_v3->length;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(301)
			int tmp37 = hx::Mod(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(301)
			int tmp38 = _this->m_nv3 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(301)
			tmp32 = tmp34->__get(tmp38).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(301)
		Float tmp33 = n0->x;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(301)
		Float tmp34 = n0->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(301)
		Float tmp35 = n0->z;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(301)
		::haxor::math::Vector3 tmp36 = tmp32->Set(tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(301)
		::haxor::math::Vector3 pmin = tmp36;		HX_STACK_VAR(pmin,"pmin");
		HX_STACK_LINE(302)
		::haxor::math::Vector3 tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			::haxor::context::DataContext tmp38 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(302)
			::haxor::context::DataContext _this = tmp38;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(302)
			Array< ::Dynamic > tmp39 = _this->m_v3;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(302)
			int tmp40 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(302)
			int tmp41 = _this->m_v3->length;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(302)
			int tmp42 = hx::Mod(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(302)
			int tmp43 = _this->m_nv3 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(302)
			tmp37 = tmp39->__get(tmp43).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(302)
		Float tmp38 = n0->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(302)
		Float tmp39 = n0->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(302)
		Float tmp40 = n0->z;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(302)
		::haxor::math::Vector3 tmp41 = tmp37->Set(tmp38,tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(302)
		::haxor::math::Vector3 pmax = tmp41;		HX_STACK_VAR(pmax,"pmax");
		HX_STACK_LINE(304)
		Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				Float tmp44 = n2->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(304)
				Float tmp45 = n3->x;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(304)
				Float tmp46 = ::Math_obj::min(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(304)
				Float b = tmp46;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(304)
				Float tmp47 = n1->x;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(304)
				Float tmp48 = b;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(304)
				tmp43 = ::Math_obj::min(tmp47,tmp48);
			}
			HX_STACK_LINE(304)
			Float b = tmp43;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(304)
			Float tmp44 = pmin->x;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(304)
			Float tmp45 = b;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(304)
			tmp42 = ::Math_obj::min(tmp44,tmp45);
		}
		HX_STACK_LINE(304)
		pmin->x = tmp42;
		HX_STACK_LINE(305)
		Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				Float tmp45 = n2->y;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(305)
				Float tmp46 = n3->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(305)
				Float tmp47 = ::Math_obj::min(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(305)
				Float b = tmp47;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(305)
				Float tmp48 = n1->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(305)
				Float tmp49 = b;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(305)
				tmp44 = ::Math_obj::min(tmp48,tmp49);
			}
			HX_STACK_LINE(305)
			Float b = tmp44;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(305)
			Float tmp45 = pmin->y;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(305)
			Float tmp46 = b;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(305)
			tmp43 = ::Math_obj::min(tmp45,tmp46);
		}
		HX_STACK_LINE(305)
		pmin->y = tmp43;
		HX_STACK_LINE(306)
		Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(306)
		{
			HX_STACK_LINE(306)
			Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				Float tmp46 = n2->z;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(306)
				Float tmp47 = n3->z;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(306)
				Float tmp48 = ::Math_obj::min(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(306)
				Float b = tmp48;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(306)
				Float tmp49 = n1->z;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(306)
				Float tmp50 = b;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(306)
				tmp45 = ::Math_obj::min(tmp49,tmp50);
			}
			HX_STACK_LINE(306)
			Float b = tmp45;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(306)
			Float tmp46 = pmin->z;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(306)
			Float tmp47 = b;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(306)
			tmp44 = ::Math_obj::min(tmp46,tmp47);
		}
		HX_STACK_LINE(306)
		pmin->z = tmp44;
		HX_STACK_LINE(308)
		Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(308)
			{
				HX_STACK_LINE(308)
				Float tmp47 = n2->x;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(308)
				Float tmp48 = n3->x;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(308)
				Float tmp49 = ::Math_obj::max(tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(308)
				Float b = tmp49;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(308)
				Float tmp50 = n1->x;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(308)
				Float tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(308)
				tmp46 = ::Math_obj::max(tmp50,tmp51);
			}
			HX_STACK_LINE(308)
			Float b = tmp46;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(308)
			Float tmp47 = pmax->x;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(308)
			Float tmp48 = b;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(308)
			tmp45 = ::Math_obj::max(tmp47,tmp48);
		}
		HX_STACK_LINE(308)
		pmax->x = tmp45;
		HX_STACK_LINE(309)
		Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				Float tmp48 = n2->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(309)
				Float tmp49 = n3->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(309)
				Float tmp50 = ::Math_obj::max(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(309)
				Float b = tmp50;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(309)
				Float tmp51 = n1->y;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(309)
				Float tmp52 = b;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(309)
				tmp47 = ::Math_obj::max(tmp51,tmp52);
			}
			HX_STACK_LINE(309)
			Float b = tmp47;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(309)
			Float tmp48 = pmax->y;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(309)
			Float tmp49 = b;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(309)
			tmp46 = ::Math_obj::max(tmp48,tmp49);
		}
		HX_STACK_LINE(309)
		pmax->y = tmp46;
		HX_STACK_LINE(310)
		Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				Float tmp49 = n2->z;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(310)
				Float tmp50 = n3->z;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(310)
				Float tmp51 = ::Math_obj::max(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(310)
				Float b = tmp51;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(310)
				Float tmp52 = n1->z;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(310)
				Float tmp53 = b;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(310)
				tmp48 = ::Math_obj::max(tmp52,tmp53);
			}
			HX_STACK_LINE(310)
			Float b = tmp48;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(310)
			Float tmp49 = pmax->z;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(310)
			Float tmp50 = b;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(310)
			tmp47 = ::Math_obj::max(tmp49,tmp50);
		}
		HX_STACK_LINE(310)
		pmax->z = tmp47;
		HX_STACK_LINE(312)
		Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(312)
			{
				HX_STACK_LINE(312)
				Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					Float tmp51 = f2->x;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(312)
					Float tmp52 = f3->x;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(312)
					Float tmp53 = ::Math_obj::min(tmp51,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(312)
					Float b = tmp53;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(312)
					Float tmp54 = f1->x;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(312)
					Float tmp55 = b;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(312)
					tmp50 = ::Math_obj::min(tmp54,tmp55);
				}
				HX_STACK_LINE(312)
				Float b = tmp50;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(312)
				Float tmp51 = f0->x;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(312)
				Float tmp52 = b;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(312)
				tmp49 = ::Math_obj::min(tmp51,tmp52);
			}
			HX_STACK_LINE(312)
			Float b = tmp49;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(312)
			Float tmp50 = pmin->x;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(312)
			Float tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(312)
			tmp48 = ::Math_obj::min(tmp50,tmp51);
		}
		HX_STACK_LINE(312)
		pmin->x = tmp48;
		HX_STACK_LINE(313)
		Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					Float tmp52 = f2->y;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(313)
					Float tmp53 = f3->y;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(313)
					Float tmp54 = ::Math_obj::min(tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(313)
					Float b = tmp54;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(313)
					Float tmp55 = f1->y;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(313)
					Float tmp56 = b;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(313)
					tmp51 = ::Math_obj::min(tmp55,tmp56);
				}
				HX_STACK_LINE(313)
				Float b = tmp51;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(313)
				Float tmp52 = f0->y;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(313)
				Float tmp53 = b;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(313)
				tmp50 = ::Math_obj::min(tmp52,tmp53);
			}
			HX_STACK_LINE(313)
			Float b = tmp50;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(313)
			Float tmp51 = pmin->y;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(313)
			Float tmp52 = b;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(313)
			tmp49 = ::Math_obj::min(tmp51,tmp52);
		}
		HX_STACK_LINE(313)
		pmin->y = tmp49;
		HX_STACK_LINE(314)
		Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(314)
					Float tmp53 = f2->z;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(314)
					Float tmp54 = f3->z;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(314)
					Float tmp55 = ::Math_obj::min(tmp53,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(314)
					Float b = tmp55;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(314)
					Float tmp56 = f1->z;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(314)
					Float tmp57 = b;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(314)
					tmp52 = ::Math_obj::min(tmp56,tmp57);
				}
				HX_STACK_LINE(314)
				Float b = tmp52;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(314)
				Float tmp53 = f0->z;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(314)
				Float tmp54 = b;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(314)
				tmp51 = ::Math_obj::min(tmp53,tmp54);
			}
			HX_STACK_LINE(314)
			Float b = tmp51;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(314)
			Float tmp52 = pmin->z;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(314)
			Float tmp53 = b;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(314)
			tmp50 = ::Math_obj::min(tmp52,tmp53);
		}
		HX_STACK_LINE(314)
		pmin->z = tmp50;
		HX_STACK_LINE(316)
		Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(316)
		{
			HX_STACK_LINE(316)
			Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(316)
			{
				HX_STACK_LINE(316)
				Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					Float tmp54 = f2->x;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(316)
					Float tmp55 = f3->x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(316)
					Float tmp56 = ::Math_obj::max(tmp54,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(316)
					Float b = tmp56;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(316)
					Float tmp57 = f1->x;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(316)
					Float tmp58 = b;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(316)
					tmp53 = ::Math_obj::max(tmp57,tmp58);
				}
				HX_STACK_LINE(316)
				Float b = tmp53;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(316)
				Float tmp54 = f0->x;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(316)
				Float tmp55 = b;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(316)
				tmp52 = ::Math_obj::max(tmp54,tmp55);
			}
			HX_STACK_LINE(316)
			Float b = tmp52;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(316)
			Float tmp53 = pmax->x;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(316)
			Float tmp54 = b;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(316)
			tmp51 = ::Math_obj::max(tmp53,tmp54);
		}
		HX_STACK_LINE(316)
		pmax->x = tmp51;
		HX_STACK_LINE(317)
		Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(317)
			Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(317)
				{
					HX_STACK_LINE(317)
					Float tmp55 = f2->y;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(317)
					Float tmp56 = f3->y;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(317)
					Float tmp57 = ::Math_obj::max(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(317)
					Float b = tmp57;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(317)
					Float tmp58 = f1->y;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(317)
					Float tmp59 = b;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(317)
					tmp54 = ::Math_obj::max(tmp58,tmp59);
				}
				HX_STACK_LINE(317)
				Float b = tmp54;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(317)
				Float tmp55 = f0->y;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(317)
				Float tmp56 = b;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(317)
				tmp53 = ::Math_obj::max(tmp55,tmp56);
			}
			HX_STACK_LINE(317)
			Float b = tmp53;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(317)
			Float tmp54 = pmax->y;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(317)
			Float tmp55 = b;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(317)
			tmp52 = ::Math_obj::max(tmp54,tmp55);
		}
		HX_STACK_LINE(317)
		pmax->y = tmp52;
		HX_STACK_LINE(318)
		Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(318)
			Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(318)
			{
				HX_STACK_LINE(318)
				Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(318)
				{
					HX_STACK_LINE(318)
					Float tmp56 = f2->z;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(318)
					Float tmp57 = f3->z;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(318)
					Float tmp58 = ::Math_obj::max(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(318)
					Float b = tmp58;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(318)
					Float tmp59 = f1->z;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(318)
					Float tmp60 = b;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(318)
					tmp55 = ::Math_obj::max(tmp59,tmp60);
				}
				HX_STACK_LINE(318)
				Float b = tmp55;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(318)
				Float tmp56 = f0->z;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(318)
				Float tmp57 = b;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(318)
				tmp54 = ::Math_obj::max(tmp56,tmp57);
			}
			HX_STACK_LINE(318)
			Float b = tmp54;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(318)
			Float tmp55 = pmax->z;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(318)
			Float tmp56 = b;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(318)
			tmp53 = ::Math_obj::max(tmp55,tmp56);
		}
		HX_STACK_LINE(318)
		pmax->z = tmp53;
		HX_STACK_LINE(320)
		::haxor::math::Vector3 tmp54 = pmin;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(320)
		::haxor::math::Vector3 tmp55 = pmax;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(320)
		c->m_aabb->Set3(tmp54,tmp55);
		HX_STACK_LINE(322)
		int tmp56 = c->__fcid;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(322)
		::haxor::component::Camera tmp57 = c;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(322)
		::haxor::math::Vector3 tmp58 = pmin;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(322)
		::haxor::math::Vector3 tmp59 = pmax;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(322)
		this->UpdateSAP(tmp56,tmp57,tmp58,tmp59);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,UpdateCameraSAP,(void))

Void RendererContext_obj::UpdateSAP( int p_id,Dynamic p_d,::haxor::math::Vector3 p_min,::haxor::math::Vector3 p_max){
{
		HX_STACK_FRAME("haxor.context.RendererContext","UpdateSAP",0x6c890eec,"haxor.context.RendererContext.UpdateSAP","haxor/context/RendererContext.hx",333,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_d,"p_d")
		HX_STACK_ARG(p_min,"p_min")
		HX_STACK_ARG(p_max,"p_max")
		HX_STACK_LINE(334)
		this->sap_dirty = true;
		HX_STACK_LINE(335)
		::haxor::ds::SAP tmp = this->sap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		Dynamic tmp2 = p_d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		::haxor::math::Vector3 tmp3 = p_min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		::haxor::math::Vector3 tmp4 = p_max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		tmp->Update(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RendererContext_obj,UpdateSAP,(void))

bool RendererContext_obj::IsSAPCulled( ::haxor::component::Renderer r,::haxor::component::Camera c){
	HX_STACK_FRAME("haxor.context.RendererContext","IsSAPCulled",0xb9324b1c,"haxor.context.RendererContext.IsSAPCulled","haxor/context/RendererContext.hx",345,0xd2e9a6bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(346)
	bool tmp = r->m_has_mesh;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	if ((tmp1)){
		HX_STACK_LINE(346)
		return false;
	}
	HX_STACK_LINE(347)
	::haxor::component::MeshRenderer mr = ((::haxor::component::MeshRenderer)(r));		HX_STACK_VAR(mr,"mr");
	HX_STACK_LINE(348)
	bool tmp2 = mr->m_culling_dirty;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(348)
	if ((tmp2)){
		HX_STACK_LINE(348)
		return false;
	}
	HX_STACK_LINE(349)
	::haxor::ds::SAP tmp3 = this->sap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(349)
	int tmp4 = mr->__fcid;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(349)
	int tmp5 = c->__fcid;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(349)
	bool tmp6 = tmp3->Overlap(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(349)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(349)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(RendererContext_obj,IsSAPCulled,return )

Void RendererContext_obj::Destroy( ::haxor::component::Renderer r){
{
		HX_STACK_FRAME("haxor.context.RendererContext","Destroy",0xf33cd78d,"haxor.context.RendererContext.Destroy","haxor/context/RendererContext.hx",357,0xd2e9a6bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(358)
		Array< ::Dynamic > tmp = this->display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		int tmp1 = r->m_entity->m_layer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		::haxor::context::Process tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::context::Process >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		::haxor::component::Renderer tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		tmp2->Remove(tmp3);
		HX_STACK_LINE(359)
		Array< bool > tmp4 = this->sort;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(359)
		int tmp5 = r->m_entity->m_layer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(359)
		tmp4[tmp5] = true;
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			int v = r->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(360)
			::haxor::context::UID tmp6 = this->rid;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			int tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(360)
			tmp6->m_cache->push(tmp7);
			HX_STACK_LINE(360)
			v;
		}
		HX_STACK_LINE(363)
		bool tmp6 = r->m_has_mesh;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		if ((tmp6)){
			HX_STACK_LINE(365)
			::haxor::component::MeshRenderer mr = ((::haxor::component::MeshRenderer)(r));		HX_STACK_VAR(mr,"mr");
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				int v = mr->__fcid;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(366)
				::haxor::context::UID tmp7 = this->fcid;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(366)
				int tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(366)
				tmp7->m_cache->push(tmp8);
				HX_STACK_LINE(366)
				v;
			}
			HX_STACK_LINE(367)
			::haxor::ds::SAP tmp7 = this->sap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(367)
			int tmp8 = mr->__fcid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(367)
			tmp7->Remove(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererContext_obj,Destroy,(void))

int RendererContext_obj::DisplayListSort( ::haxor::component::Renderer a,::haxor::component::Renderer b){
	HX_STACK_FRAME("haxor.context.RendererContext","DisplayListSort",0xfdcfe4d1,"haxor.context.RendererContext.DisplayListSort","haxor/context/RendererContext.hx",389,0xd2e9a6bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(391)
	bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(391)
	if ((tmp)){
		HX_STACK_LINE(391)
		bool tmp1 = (b == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		if ((tmp1)){
			HX_STACK_LINE(391)
			return (int)0;
		}
	}
	HX_STACK_LINE(392)
	bool tmp1 = (a == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(392)
	if ((tmp1)){
		HX_STACK_LINE(392)
		return (int)1;
	}
	HX_STACK_LINE(393)
	bool tmp2 = (b == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(393)
	if ((tmp2)){
		HX_STACK_LINE(393)
		return (int)-1;
	}
	HX_STACK_LINE(396)
	bool tmp3 = (a->m_material == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(396)
	if ((tmp3)){
		HX_STACK_LINE(396)
		bool tmp4 = (b->m_material == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		if ((tmp4)){
			HX_STACK_LINE(396)
			return (int)0;
		}
	}
	HX_STACK_LINE(399)
	bool tmp4 = (a->m_material == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(399)
	if ((tmp4)){
		HX_STACK_LINE(399)
		return (int)1;
	}
	HX_STACK_LINE(400)
	bool tmp5 = (b->m_material == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(400)
	if ((tmp5)){
		HX_STACK_LINE(400)
		return (int)-1;
	}
	HX_STACK_LINE(402)
	::haxor::graphics::material::Material ma = a->m_material;		HX_STACK_VAR(ma,"ma");
	HX_STACK_LINE(403)
	::haxor::graphics::material::Material mb = b->m_material;		HX_STACK_VAR(mb,"mb");
	HX_STACK_LINE(404)
	int ia = ma->queue;		HX_STACK_VAR(ia,"ia");
	HX_STACK_LINE(405)
	int ib = mb->queue;		HX_STACK_VAR(ib,"ib");
	HX_STACK_LINE(408)
	bool tmp6 = (ia != ib);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(408)
	if ((tmp6)){
		HX_STACK_LINE(408)
		bool tmp7 = (ia < ib);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(408)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(408)
		if ((tmp7)){
			HX_STACK_LINE(408)
			tmp8 = (int)-1;
		}
		else{
			HX_STACK_LINE(408)
			tmp8 = (int)1;
		}
		HX_STACK_LINE(408)
		return tmp8;
	}
	HX_STACK_LINE(411)
	bool tmp7 = a->m_has_mesh;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(411)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(411)
	if ((tmp8)){
		HX_STACK_LINE(411)
		bool tmp9 = b->m_has_mesh;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(411)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(411)
		if ((tmp10)){
			HX_STACK_LINE(411)
			return (int)0;
		}
	}
	HX_STACK_LINE(414)
	bool tmp9 = a->m_has_mesh;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(414)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(414)
	if ((tmp10)){
		HX_STACK_LINE(414)
		return (int)1;
	}
	HX_STACK_LINE(415)
	bool tmp11 = b->m_has_mesh;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(415)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(415)
	if ((tmp12)){
		HX_STACK_LINE(415)
		return (int)-1;
	}
	HX_STACK_LINE(417)
	::haxor::component::MeshRenderer mra = ((::haxor::component::MeshRenderer)(a));		HX_STACK_VAR(mra,"mra");
	HX_STACK_LINE(418)
	::haxor::component::MeshRenderer mrb = ((::haxor::component::MeshRenderer)(b));		HX_STACK_VAR(mrb,"mrb");
	HX_STACK_LINE(421)
	int tmp13 = mra->m_material->get_uid();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(421)
	int tmp14 = mrb->m_material->get_uid();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(421)
	bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(421)
	if ((tmp15)){
		HX_STACK_LINE(421)
		return (int)-1;
	}
	HX_STACK_LINE(422)
	int tmp16 = mra->m_material->get_uid();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(422)
	int tmp17 = mrb->m_material->get_uid();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(422)
	bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(422)
	if ((tmp18)){
		HX_STACK_LINE(422)
		return (int)1;
	}
	HX_STACK_LINE(425)
	bool tmp19 = (mra->m_mesh == null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(425)
	if ((tmp19)){
		HX_STACK_LINE(425)
		bool tmp20 = (mrb->m_mesh == null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(425)
		if ((tmp20)){
			HX_STACK_LINE(425)
			return (int)0;
		}
	}
	HX_STACK_LINE(426)
	bool tmp20 = (mra->m_mesh == null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(426)
	if ((tmp20)){
		HX_STACK_LINE(426)
		return (int)1;
	}
	HX_STACK_LINE(427)
	bool tmp21 = (mrb->m_mesh == null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(427)
	if ((tmp21)){
		HX_STACK_LINE(427)
		return (int)-1;
	}
	HX_STACK_LINE(430)
	int tmp22 = mra->m_mesh->get_uid();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(430)
	int tmp23 = mrb->m_mesh->get_uid();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(430)
	bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(430)
	if ((tmp24)){
		HX_STACK_LINE(430)
		return (int)-1;
	}
	HX_STACK_LINE(431)
	int tmp25 = mra->m_mesh->get_uid();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(431)
	int tmp26 = mrb->m_mesh->get_uid();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(431)
	bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(431)
	if ((tmp27)){
		HX_STACK_LINE(431)
		return (int)1;
	}
	HX_STACK_LINE(433)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(RendererContext_obj,DisplayListSort,return )


RendererContext_obj::RendererContext_obj()
{
}

void RendererContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RendererContext);
	HX_MARK_MEMBER_NAME(rid,"rid");
	HX_MARK_MEMBER_NAME(fcid,"fcid");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(sap,"sap");
	HX_MARK_MEMBER_NAME(sap_dirty,"sap_dirty");
	HX_MARK_MEMBER_NAME(sort,"sort");
	HX_MARK_MEMBER_NAME(deferred_culling,"deferred_culling");
	HX_MARK_MEMBER_NAME(deferred_offset,"deferred_offset");
	HX_MARK_END_CLASS();
}

void RendererContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rid,"rid");
	HX_VISIT_MEMBER_NAME(fcid,"fcid");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(sap,"sap");
	HX_VISIT_MEMBER_NAME(sap_dirty,"sap_dirty");
	HX_VISIT_MEMBER_NAME(sort,"sort");
	HX_VISIT_MEMBER_NAME(deferred_culling,"deferred_culling");
	HX_VISIT_MEMBER_NAME(deferred_offset,"deferred_offset");
}

Dynamic RendererContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rid") ) { return rid; }
		if (HX_FIELD_EQ(inName,"sap") ) { return sap; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fcid") ) { return fcid; }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Create") ) { return Create_dyn(); }
		if (HX_FIELD_EQ(inName,"Enable") ) { return Enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display; }
		if (HX_FIELD_EQ(inName,"Disable") ) { return Disable_dyn(); }
		if (HX_FIELD_EQ(inName,"Destroy") ) { return Destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sap_dirty") ) { return sap_dirty; }
		if (HX_FIELD_EQ(inName,"AddCamera") ) { return AddCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateSAP") ) { return UpdateSAP_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"IsSAPCulled") ) { return IsSAPCulled_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RemoveCamera") ) { return RemoveCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"OnMeshChange") ) { return OnMeshChange_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"OnLayerChange") ) { return OnLayerChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"UpdateSkinning") ) { return UpdateSkinning_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deferred_offset") ) { return deferred_offset; }
		if (HX_FIELD_EQ(inName,"DeferredCulling") ) { return DeferredCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateCameraSAP") ) { return UpdateCameraSAP_dyn(); }
		if (HX_FIELD_EQ(inName,"DisplayListSort") ) { return DisplayListSort_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"deferred_culling") ) { return deferred_culling; }
		if (HX_FIELD_EQ(inName,"OnMaterialChange") ) { return OnMaterialChange_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"UpdateDisplayList") ) { return UpdateDisplayList_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OnVisibilityChange") ) { return OnVisibilityChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RendererContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rid") ) { rid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sap") ) { sap=inValue.Cast< ::haxor::ds::SAP >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fcid") ) { fcid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sort") ) { sort=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sap_dirty") ) { sap_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deferred_offset") ) { deferred_offset=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"deferred_culling") ) { deferred_culling=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RendererContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RendererContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rid","\xcd","\xdc","\x56","\x00"));
	outFields->push(HX_HCSTRING("fcid","\x58","\x3e","\xb7","\x43"));
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("sap","\x22","\x98","\x57","\x00"));
	outFields->push(HX_HCSTRING("sap_dirty","\xf5","\xf4","\xaa","\x75"));
	outFields->push(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"));
	outFields->push(HX_HCSTRING("deferred_culling","\x10","\xf2","\x4f","\x27"));
	outFields->push(HX_HCSTRING("deferred_offset","\xf3","\x5b","\xc3","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(RendererContext_obj,rid),HX_HCSTRING("rid","\xcd","\xdc","\x56","\x00")},
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(RendererContext_obj,fcid),HX_HCSTRING("fcid","\x58","\x3e","\xb7","\x43")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RendererContext_obj,display),HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb")},
	{hx::fsObject /*::haxor::ds::SAP*/ ,(int)offsetof(RendererContext_obj,sap),HX_HCSTRING("sap","\x22","\x98","\x57","\x00")},
	{hx::fsBool,(int)offsetof(RendererContext_obj,sap_dirty),HX_HCSTRING("sap_dirty","\xf5","\xf4","\xaa","\x75")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(RendererContext_obj,sort),HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c")},
	{hx::fsInt,(int)offsetof(RendererContext_obj,deferred_culling),HX_HCSTRING("deferred_culling","\x10","\xf2","\x4f","\x27")},
	{hx::fsInt,(int)offsetof(RendererContext_obj,deferred_offset),HX_HCSTRING("deferred_offset","\xf3","\x5b","\xc3","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rid","\xcd","\xdc","\x56","\x00"),
	HX_HCSTRING("fcid","\x58","\x3e","\xb7","\x43"),
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("sap","\x22","\x98","\x57","\x00"),
	HX_HCSTRING("sap_dirty","\xf5","\xf4","\xaa","\x75"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("deferred_culling","\x10","\xf2","\x4f","\x27"),
	HX_HCSTRING("deferred_offset","\xf3","\x5b","\xc3","\x1f"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Create","\x1c","\xdb","\xa3","\xb0"),
	HX_HCSTRING("UpdateSkinning","\x7a","\xa5","\x33","\x8d"),
	HX_HCSTRING("AddCamera","\x86","\x5b","\x83","\x11"),
	HX_HCSTRING("RemoveCamera","\x29","\x2e","\xcc","\xee"),
	HX_HCSTRING("OnMaterialChange","\x16","\xc3","\xea","\x63"),
	HX_HCSTRING("OnMeshChange","\x5c","\xed","\xb1","\x3b"),
	HX_HCSTRING("OnVisibilityChange","\x41","\xac","\x45","\x30"),
	HX_HCSTRING("DeferredCulling","\xf1","\xc4","\x71","\xd2"),
	HX_HCSTRING("OnLayerChange","\x22","\xa7","\x7e","\x9a"),
	HX_HCSTRING("UpdateDisplayList","\x17","\x28","\x95","\x35"),
	HX_HCSTRING("Enable","\xa3","\x22","\x1c","\x2d"),
	HX_HCSTRING("Disable","\xc8","\x91","\xa9","\x7e"),
	HX_HCSTRING("UpdateCameraSAP","\x14","\xbb","\x49","\xea"),
	HX_HCSTRING("UpdateSAP","\x79","\x39","\xb7","\x24"),
	HX_HCSTRING("IsSAPCulled","\xe9","\xf2","\x29","\x79"),
	HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),
	HX_HCSTRING("DisplayListSort","\x1e","\xf7","\x4b","\x79"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RendererContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RendererContext_obj::__mClass,"__mClass");
};

#endif

hx::Class RendererContext_obj::__mClass;

void RendererContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.RendererContext","\x21","\x78","\xfe","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RendererContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RendererContext_obj >;
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
