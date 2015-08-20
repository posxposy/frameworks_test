#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxor_context_CameraContext
#include <haxor/context/CameraContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
#endif
#ifndef INCLUDED_haxor_context_ShaderContext
#include <haxor/context/ShaderContext.h>
#endif
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
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
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
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
#ifndef INCLUDED_haxor_graphics_texture_RenderTexture
#include <haxor/graphics/texture/RenderTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB2
#include <haxor/math/AABB2.h>
#endif
namespace haxor{
namespace context{

Void CameraContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.CameraContext","new",0xddbd8c31,"haxor.context.CameraContext.new","haxor/context/CameraContext.hx",58,0x8aadd161)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(59)
	::haxor::context::UID tmp = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	this->cid = tmp;
	HX_STACK_LINE(60)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	this->list = tmp1;
	HX_STACK_LINE(61)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	this->front = tmp2;
	HX_STACK_LINE(62)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	this->back = tmp3;
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp4 = (_g < (int)64);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			if ((tmp5)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(64)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(66)
			Array< ::Dynamic > tmp7 = this->front;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			tmp7->push(null());
			HX_STACK_LINE(67)
			Array< ::Dynamic > tmp8 = this->back;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			tmp8->push(null());
		}
	}
}
;
	return null();
}

//CameraContext_obj::~CameraContext_obj() { }

Dynamic CameraContext_obj::__CreateEmpty() { return  new CameraContext_obj; }
hx::ObjectPtr< CameraContext_obj > CameraContext_obj::__new()
{  hx::ObjectPtr< CameraContext_obj > _result_ = new CameraContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraContext_obj > _result_ = new CameraContext_obj();
	_result_->__construct();
	return _result_;}

Void CameraContext_obj::Create( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.CameraContext","Create",0x7fe697eb,"haxor.context.CameraContext.Create","haxor/context/CameraContext.hx",76,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(77)
		::haxor::graphics::material::Material tmp = ::haxor::graphics::material::Material_obj::__new(HX_HCSTRING("internal/Skybox","\xbc","\x0b","\x6f","\x1d"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		this->skybox_material = tmp;
		HX_STACK_LINE(78)
		::haxor::graphics::material::Material tmp1 = this->skybox_material;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		tmp1->ztest = true;
		HX_STACK_LINE(79)
		::haxor::graphics::material::Material tmp2 = this->skybox_material;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		tmp2->cull = (int)0;
		HX_STACK_LINE(80)
		::haxor::graphics::material::Material tmp3 = this->skybox_material;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		tmp3->zwrite = false;
		HX_STACK_LINE(83)
		::haxor::graphics::material::Material tmp4 = this->skybox_material;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		::String tmp5 = ::haxor::context::ShaderContext_obj::vs_screen_skybox;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		::String tmp6 = ::haxor::context::ShaderContext_obj::fs_screen_skybox;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		::haxor::graphics::material::Shader tmp7 = ::haxor::graphics::material::Shader_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		tmp4->set_shader(tmp7);
		HX_STACK_LINE(85)
		Array< ::Dynamic > tmp8 = this->list;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		::haxor::component::Camera tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		tmp8->push(tmp9);
		HX_STACK_LINE(86)
		this->SortCameraList();
		HX_STACK_LINE(87)
		::haxor::context::RendererContext tmp10 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(87)
		::haxor::component::Camera tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(87)
		tmp10->AddCamera(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraContext_obj,Create,(void))

Void CameraContext_obj::Destroy( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.CameraContext","Destroy",0x7cf9cd2b,"haxor.context.CameraContext.Destroy","haxor/context/CameraContext.hx",95,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(96)
		::haxor::component::Camera tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		this->ClearTargets(tmp);
		HX_STACK_LINE(97)
		Array< ::Dynamic > tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		::haxor::component::Camera tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		tmp1->remove(tmp2);
		HX_STACK_LINE(98)
		this->SortCameraList();
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int v = c->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(99)
			::haxor::context::UID tmp3 = this->cid;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			int tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			tmp3->m_cache->push(tmp4);
			HX_STACK_LINE(99)
			v;
		}
		HX_STACK_LINE(100)
		::haxor::context::RendererContext tmp3 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::haxor::component::Camera tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		tmp3->RemoveCamera(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraContext_obj,Destroy,(void))

Void CameraContext_obj::Bind( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.CameraContext","Bind",0x0b0abcec,"haxor.context.CameraContext.Bind","haxor/context/CameraContext.hx",110,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(111)
		Array< ::Dynamic > tmp = this->front;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		int tmp1 = c->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		::haxor::graphics::texture::RenderTexture tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		::haxor::graphics::texture::RenderTexture ft = tmp2;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(112)
		::haxor::graphics::texture::RenderTexture rt = c->m_target;		HX_STACK_VAR(rt,"rt");
		HX_STACK_LINE(113)
		bool tmp3 = (ft == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		::haxor::graphics::texture::RenderTexture tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(113)
			tmp4 = rt;
		}
		else{
			HX_STACK_LINE(113)
			tmp4 = ft;
		}
		HX_STACK_LINE(113)
		::haxor::graphics::texture::RenderTexture target = tmp4;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(114)
		c->UpdateProjection();
		HX_STACK_LINE(115)
		::haxor::context::RendererContext tmp5 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::haxor::component::Camera tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		tmp5->UpdateCameraSAP(tmp6);
		HX_STACK_LINE(116)
		::haxor::context::TextureContext tmp7 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		::haxor::graphics::texture::RenderTexture tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		tmp7->BindTarget(tmp8);
		HX_STACK_LINE(117)
		::haxor::context::RendererContext tmp9 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		::haxor::component::Camera tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(117)
		tmp9->UpdateDisplayList(tmp10);
		HX_STACK_LINE(118)
		::haxor::component::Camera tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(118)
		::haxor::graphics::Graphics_obj::Clear(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraContext_obj,Bind,(void))

Void CameraContext_obj::Resize( ){
{
		HX_STACK_FRAME("haxor.context.CameraContext","Resize",0x0c528ae3,"haxor.context.CameraContext.Resize","haxor/context/CameraContext.hx",127,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		while((true)){
			HX_STACK_LINE(127)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			if ((tmp2)){
				HX_STACK_LINE(127)
				break;
			}
			HX_STACK_LINE(127)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(127)
			Array< ::Dynamic > tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			::haxor::component::Camera tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::Camera >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			this->UpdateViewport(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraContext_obj,Resize,(void))

Void CameraContext_obj::ClearTargets( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.CameraContext","ClearTargets",0x3bcbb424,"haxor.context.CameraContext.ClearTargets","haxor/context/CameraContext.hx",135,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(136)
		::haxor::graphics::texture::RenderTexture rt;		HX_STACK_VAR(rt,"rt");
		HX_STACK_LINE(137)
		Array< ::Dynamic > tmp = this->front;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		int tmp1 = c->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		::haxor::graphics::texture::RenderTexture tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		rt = tmp2;
		HX_STACK_LINE(137)
		bool tmp3 = (rt != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		if ((tmp3)){
			HX_STACK_LINE(137)
			::haxor::graphics::texture::RenderTexture tmp4 = rt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			::haxor::core::Resource_obj::Destroy(tmp4);
		}
		HX_STACK_LINE(138)
		Array< ::Dynamic > tmp4 = this->back;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		int tmp5 = c->__cid;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		::haxor::graphics::texture::RenderTexture tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		rt = tmp6;
		HX_STACK_LINE(138)
		bool tmp7 = (rt != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(138)
		if ((tmp7)){
			HX_STACK_LINE(138)
			::haxor::graphics::texture::RenderTexture tmp8 = rt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			::haxor::core::Resource_obj::Destroy(tmp8);
		}
		HX_STACK_LINE(139)
		Array< ::Dynamic > tmp8 = this->front;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(139)
		int tmp9 = c->__cid;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		tmp8[tmp9] = null();
		HX_STACK_LINE(140)
		Array< ::Dynamic > tmp10 = this->back;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		int tmp11 = c->__cid;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		tmp10[tmp11] = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraContext_obj,ClearTargets,(void))

Void CameraContext_obj::Unbind( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.CameraContext","Unbind",0x62c32d85,"haxor.context.CameraContext.Unbind","haxor/context/CameraContext.hx",148,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(150)
		::haxor::component::Camera tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		this->SwapTargets(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraContext_obj,Unbind,(void))

Void CameraContext_obj::SwapTargets( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.CameraContext","SwapTargets",0xf131c660,"haxor.context.CameraContext.SwapTargets","haxor/context/CameraContext.hx",158,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(159)
		::haxor::graphics::texture::RenderTexture tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		Array< ::Dynamic > tmp1 = this->front;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		int tmp2 = c->__cid;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		::haxor::graphics::texture::RenderTexture tmp3 = tmp1->__get(tmp2).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		tmp = tmp3;
		HX_STACK_LINE(161)
		Array< ::Dynamic > tmp4 = this->front;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		int tmp5 = c->__cid;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Array< ::Dynamic > tmp6 = this->back;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		int tmp7 = c->__cid;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		::haxor::graphics::texture::RenderTexture tmp8 = tmp6->__get(tmp7).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(161)
		tmp4[tmp5] = tmp8;
		HX_STACK_LINE(162)
		Array< ::Dynamic > tmp9 = this->back;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(162)
		int tmp10 = c->__cid;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(162)
		::haxor::graphics::texture::RenderTexture tmp11 = tmp;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(162)
		tmp9[tmp10] = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraContext_obj,SwapTargets,(void))

Void CameraContext_obj::UpdateViewport( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.CameraContext","UpdateViewport",0x37b7777e,"haxor.context.CameraContext.UpdateViewport","haxor/context/CameraContext.hx",170,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(171)
		bool need_buffer = false;		HX_STACK_VAR(need_buffer,"need_buffer");
		HX_STACK_LINE(172)
		bool tmp = (c->m_quality < ((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		if ((tmp)){
			HX_STACK_LINE(172)
			need_buffer = true;
		}
		else{
			HX_STACK_LINE(174)
			Dynamic tmp1 = c->get_filters();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(174)
			int tmp2 = tmp1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			if ((tmp3)){
				HX_STACK_LINE(174)
				need_buffer = true;
			}
		}
		HX_STACK_LINE(176)
		Float tmp1 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		Float w = tmp1;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(177)
		Float tmp2 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		Float h = tmp2;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(179)
		bool tmp3 = (c->m_target != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		if ((tmp3)){
			HX_STACK_LINE(181)
			int tmp4 = c->m_target->m_width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			w = ((Float)(tmp4));
			HX_STACK_LINE(182)
			int tmp5 = c->m_target->m_height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			h = ((Float)(tmp5));
		}
		HX_STACK_LINE(185)
		Float tmp4 = (Float(w) / Float(h));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		c->m_aspect = tmp4;
		HX_STACK_LINE(187)
		Float tmp5 = (w * c->m_quality);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		Float sw = tmp5;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(188)
		Float tmp6 = (h * c->m_quality);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		Float sh = tmp6;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(189)
		bool tmp7 = (sw < ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		if ((tmp7)){
			HX_STACK_LINE(189)
			tmp8 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(189)
			tmp8 = sw;
		}
		HX_STACK_LINE(189)
		w = tmp8;
		HX_STACK_LINE(190)
		bool tmp9 = (sh < ((Float)1.0));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(190)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(190)
		if ((tmp9)){
			HX_STACK_LINE(190)
			tmp10 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(190)
			tmp10 = sh;
		}
		HX_STACK_LINE(190)
		h = tmp10;
		HX_STACK_LINE(192)
		Float tmp11 = c->m_viewport->get_xMin();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(192)
		Float tmp12 = w;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(192)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(192)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(192)
		Float vx = tmp14;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(193)
		Float tmp15 = c->m_viewport->get_yMin();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(193)
		Float tmp16 = h;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(193)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(193)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(193)
		Float vy = tmp18;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(194)
		Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::haxor::math::AABB2 _this = c->m_viewport;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				Float tmp20 = _this->get_xMax();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(194)
				Float tmp21 = _this->get_xMin();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(194)
				Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(194)
				Float p_a = tmp22;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(194)
				bool tmp23 = (p_a < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(194)
				if ((tmp23)){
					HX_STACK_LINE(194)
					Float tmp24 = p_a;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(194)
					tmp19 = -(tmp24);
				}
				else{
					HX_STACK_LINE(194)
					tmp19 = p_a;
				}
			}
		}
		HX_STACK_LINE(194)
		Float tmp20 = w;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(194)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(194)
		Float aw = tmp21;		HX_STACK_VAR(aw,"aw");
		HX_STACK_LINE(195)
		Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::haxor::math::AABB2 _this = c->m_viewport;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				Float tmp23 = _this->get_yMax();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(195)
				Float tmp24 = _this->get_yMin();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(195)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(195)
				Float p_a = tmp25;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(195)
				bool tmp26 = (p_a < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(195)
				if ((tmp26)){
					HX_STACK_LINE(195)
					Float tmp27 = p_a;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(195)
					tmp22 = -(tmp27);
				}
				else{
					HX_STACK_LINE(195)
					tmp22 = p_a;
				}
			}
		}
		HX_STACK_LINE(195)
		Float tmp23 = h;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(195)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(195)
		Float ah = tmp24;		HX_STACK_VAR(ah,"ah");
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			Float tmp25 = vx;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(197)
			c->m_pixelViewport->set_xMin(tmp25);
			HX_STACK_LINE(197)
			vx;
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			Float tmp25 = (h - ah);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(198)
			Float tmp26 = vy;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(198)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(198)
			Float v = tmp27;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(198)
			Float tmp28 = v;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(198)
			c->m_pixelViewport->set_yMin(tmp28);
			HX_STACK_LINE(198)
			v;
		}
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			::haxor::math::AABB2 _this = c->m_pixelViewport;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(199)
			Float tmp25 = _this->get_xMin();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(199)
			Float tmp26 = aw;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(199)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(199)
			_this->set_xMax(tmp27);
			HX_STACK_LINE(199)
			aw;
		}
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::haxor::math::AABB2 _this = c->m_pixelViewport;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			Float tmp25 = _this->get_yMin();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(200)
			Float tmp26 = ah;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(200)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(200)
			_this->set_yMax(tmp27);
			HX_STACK_LINE(200)
			ah;
		}
		HX_STACK_LINE(202)
		int tw = ((int)(aw));		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(203)
		int th = ((int)(ah));		HX_STACK_VAR(th,"th");
		HX_STACK_LINE(205)
		::haxor::graphics::texture::RenderTexture grt;		HX_STACK_VAR(grt,"grt");
		HX_STACK_LINE(207)
		Array< ::Dynamic > tmp25 = this->front;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(207)
		int tmp26 = c->__cid;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(207)
		::haxor::graphics::texture::RenderTexture tmp27 = tmp25->__get(tmp26).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(207)
		grt = tmp27;
		HX_STACK_LINE(209)
		bool tmp28 = (grt != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(209)
		if ((tmp28)){
			HX_STACK_LINE(211)
			bool tmp29 = (tw != grt->m_width);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(211)
			if ((tmp29)){
				HX_STACK_LINE(211)
				::haxor::component::Camera tmp30 = c;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(211)
				this->ClearTargets(tmp30);
			}
			else{
				HX_STACK_LINE(213)
				bool tmp30 = (th != grt->m_height);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(213)
				if ((tmp30)){
					HX_STACK_LINE(213)
					::haxor::component::Camera tmp31 = c;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(213)
					this->ClearTargets(tmp31);
				}
			}
		}
		HX_STACK_LINE(216)
		Array< ::Dynamic > tmp29 = this->front;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(216)
		int tmp30 = c->__cid;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(216)
		::haxor::graphics::texture::RenderTexture tmp31 = tmp29->__get(tmp30).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(216)
		grt = tmp31;
		HX_STACK_LINE(218)
		bool tmp32 = (grt == null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(218)
		if ((tmp32)){
			HX_STACK_LINE(220)
			bool tmp33 = need_buffer;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(220)
			if ((tmp33)){
				HX_STACK_LINE(223)
				bool tmp34 = (c->m_target == null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(223)
				int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(223)
				if ((tmp34)){
					HX_STACK_LINE(223)
					tmp35 = ::haxor::core::PixelFormat_obj::RGB8;
				}
				else{
					HX_STACK_LINE(223)
					tmp35 = c->m_target->m_format;
				}
				HX_STACK_LINE(223)
				int tf = tmp35;		HX_STACK_VAR(tf,"tf");
				HX_STACK_LINE(224)
				Array< ::Dynamic > tmp36 = this->front;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(224)
				int tmp37 = c->__cid;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(224)
				::haxor::graphics::texture::RenderTexture tmp38 = ::haxor::graphics::texture::RenderTexture_obj::__new(((int)(aw)),((int)(ah)),tf,c->m_captureDepth);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(224)
				tmp36[tmp37] = tmp38;
				HX_STACK_LINE(225)
				Array< ::Dynamic > tmp39 = this->back;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(225)
				int tmp40 = c->__cid;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(225)
				Dynamic tmp41 = c->get_filters();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(225)
				int tmp42 = tmp41->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(225)
				bool tmp43 = (tmp42 <= (int)0);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(225)
				::haxor::graphics::texture::RenderTexture tmp44;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(225)
				if ((tmp43)){
					HX_STACK_LINE(225)
					Array< ::Dynamic > tmp45 = this->front;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(225)
					int tmp46 = c->__cid;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(225)
					tmp44 = tmp45->__get(tmp46).StaticCast< ::haxor::graphics::texture::RenderTexture >();
				}
				else{
					HX_STACK_LINE(225)
					tmp44 = ::haxor::graphics::texture::RenderTexture_obj::__new(((int)(aw)),((int)(ah)),tf,c->m_captureDepth);
				}
				HX_STACK_LINE(225)
				tmp39[tmp40] = tmp44;
				HX_STACK_LINE(226)
				Array< ::Dynamic > tmp45 = this->front;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(226)
				int tmp46 = c->__cid;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(226)
				::haxor::graphics::texture::RenderTexture tmp47 = tmp45->__get(tmp46).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(227)
				Array< ::Dynamic > tmp48 = this->back;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(227)
				int tmp49 = c->__cid;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(227)
				::haxor::graphics::texture::RenderTexture tmp50 = tmp48->__get(tmp49).StaticCast< ::haxor::graphics::texture::RenderTexture >();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(227)
				::String tmp51 = tmp50->set_name(HX_HCSTRING("CameraScreenBuffer","\xf1","\x5f","\x35","\x9a"));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(226)
				tmp47->set_name(tmp51);
			}
		}
		HX_STACK_LINE(231)
		c->m_projection_dirty = true;
		HX_STACK_LINE(232)
		c->m_proj_uniform_dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraContext_obj,UpdateViewport,(void))

Void CameraContext_obj::SortCameraList( ){
{
		HX_STACK_FRAME("haxor.context.CameraContext","SortCameraList",0x68c4ca90,"haxor.context.CameraContext.SortCameraList","haxor/context/CameraContext.hx",239,0x8aadd161)
		HX_STACK_THIS(this)
		HX_STACK_LINE(240)
		Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		bool tmp2 = (tmp1 > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		if ((tmp2)){
			HX_STACK_LINE(241)
			Array< ::Dynamic > tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 2; }
			int run(::haxor::component::Camera a,::haxor::component::Camera b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxor/context/CameraContext.hx",241,0x8aadd161)
				HX_STACK_ARG(a,"a")
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(241)
					int tmp4 = a->get_order();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(241)
					int tmp5 = b->get_order();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(241)
					bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(241)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(241)
					if ((tmp6)){
						HX_STACK_LINE(241)
						::String tmp8 = a->m_entity->get_name();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(241)
						::String tmp9 = b->m_entity->get_name();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(241)
						bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(241)
						if ((tmp10)){
							HX_STACK_LINE(241)
							tmp7 = (int)-1;
						}
						else{
							HX_STACK_LINE(241)
							tmp7 = (int)1;
						}
					}
					else{
						HX_STACK_LINE(241)
						int tmp8 = a->get_order();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(241)
						int tmp9 = b->get_order();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(241)
						bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(241)
						if ((tmp10)){
							HX_STACK_LINE(241)
							tmp7 = (int)-1;
						}
						else{
							HX_STACK_LINE(241)
							tmp7 = (int)1;
						}
					}
					HX_STACK_LINE(241)
					return tmp7;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(241)
			tmp3->sort( Dynamic(new _Function_2_1()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraContext_obj,SortCameraList,(void))


CameraContext_obj::CameraContext_obj()
{
}

void CameraContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraContext);
	HX_MARK_MEMBER_NAME(cid,"cid");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(front,"front");
	HX_MARK_MEMBER_NAME(back,"back");
	HX_MARK_MEMBER_NAME(skybox_material,"skybox_material");
	HX_MARK_END_CLASS();
}

void CameraContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cid,"cid");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(front,"front");
	HX_VISIT_MEMBER_NAME(back,"back");
	HX_VISIT_MEMBER_NAME(skybox_material,"skybox_material");
}

Dynamic CameraContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cid") ) { return cid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"back") ) { return back; }
		if (HX_FIELD_EQ(inName,"Bind") ) { return Bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Create") ) { return Create_dyn(); }
		if (HX_FIELD_EQ(inName,"Resize") ) { return Resize_dyn(); }
		if (HX_FIELD_EQ(inName,"Unbind") ) { return Unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Destroy") ) { return Destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SwapTargets") ) { return SwapTargets_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ClearTargets") ) { return ClearTargets_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"UpdateViewport") ) { return UpdateViewport_dyn(); }
		if (HX_FIELD_EQ(inName,"SortCameraList") ) { return SortCameraList_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"skybox_material") ) { return skybox_material; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cid") ) { cid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"back") ) { back=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { front=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"skybox_material") ) { skybox_material=inValue.Cast< ::haxor::graphics::material::Material >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CameraContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CameraContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cid","\xfe","\x7a","\x4b","\x00"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("front","\xa9","\x18","\x8e","\x06"));
	outFields->push(HX_HCSTRING("back","\x27","\xda","\x10","\x41"));
	outFields->push(HX_HCSTRING("skybox_material","\xfc","\xea","\x51","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(CameraContext_obj,cid),HX_HCSTRING("cid","\xfe","\x7a","\x4b","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraContext_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraContext_obj,front),HX_HCSTRING("front","\xa9","\x18","\x8e","\x06")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraContext_obj,back),HX_HCSTRING("back","\x27","\xda","\x10","\x41")},
	{hx::fsObject /*::haxor::graphics::material::Material*/ ,(int)offsetof(CameraContext_obj,skybox_material),HX_HCSTRING("skybox_material","\xfc","\xea","\x51","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cid","\xfe","\x7a","\x4b","\x00"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("front","\xa9","\x18","\x8e","\x06"),
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("skybox_material","\xfc","\xea","\x51","\xaa"),
	HX_HCSTRING("Create","\x1c","\xdb","\xa3","\xb0"),
	HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),
	HX_HCSTRING("Bind","\xdd","\x21","\xf0","\x2b"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	HX_HCSTRING("ClearTargets","\x15","\xf2","\xf8","\x2b"),
	HX_HCSTRING("Unbind","\xb6","\x70","\x80","\x93"),
	HX_HCSTRING("SwapTargets","\x8f","\x51","\xfe","\x73"),
	HX_HCSTRING("UpdateViewport","\xaf","\xd3","\x24","\x7c"),
	HX_HCSTRING("SortCameraList","\xc1","\x26","\x32","\xad"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraContext_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraContext_obj::__mClass;

void CameraContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.CameraContext","\xbf","\x9f","\xbd","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CameraContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraContext_obj >;
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
