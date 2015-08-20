#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
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
#ifndef INCLUDED_haxor_core_TextureType
#include <haxor/core/TextureType.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
namespace haxor{
namespace graphics{
namespace texture{

Void Texture_obj::__construct()
{
HX_STACK_FRAME("haxor.graphics.texture.Texture","new",0x9dbfa5a3,"haxor.graphics.texture.Texture.new","haxor/graphics/texture/Texture.hx",92,0x91e47a4e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(93)
	super::__construct(null());
	HX_STACK_LINE(94)
	this->m_mipmaps = false;
	HX_STACK_LINE(95)
	int tmp = ::haxor::core::PixelFormat_obj::RGBA8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	this->m_format = tmp;
	HX_STACK_LINE(96)
	this->m_minFilter = (int)1;
	HX_STACK_LINE(97)
	this->m_magFilter = (int)1;
	HX_STACK_LINE(98)
	int tmp1 = (int)5;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	int tmp2 = (int(tmp1) | int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	this->m_wrap = tmp2;
	HX_STACK_LINE(99)
	this->m_width = (int)0;
	HX_STACK_LINE(100)
	this->m_height = (int)0;
	HX_STACK_LINE(101)
	this->m_aniso = (int)0;
	HX_STACK_LINE(102)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::haxor::context::TextureContext tmp4 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		::haxor::context::UID _this = tmp4->tid;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(102)
		int tmp5 = _this->m_cache->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		if ((tmp6)){
			HX_STACK_LINE(102)
			tmp3 = (_this->m_id)++;
		}
		else{
			HX_STACK_LINE(102)
			tmp3 = _this->m_cache->shift();
		}
	}
	HX_STACK_LINE(102)
	this->__cid = tmp3;
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new()
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct();
	return _result_;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct();
	return _result_;}

int Texture_obj::get_width( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_width",0x4ba3bbe0,"haxor.graphics.texture.Texture.get_width","haxor/graphics/texture/Texture.hx",21,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	int tmp = this->m_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_width,return )

int Texture_obj::get_height( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_height",0x99f020cd,"haxor.graphics.texture.Texture.get_height","haxor/graphics/texture/Texture.hx",28,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	int tmp = this->m_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_height,return )

int Texture_obj::get_format( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_format",0x9532a81d,"haxor.graphics.texture.Texture.get_format","haxor/graphics/texture/Texture.hx",35,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	int tmp = this->m_format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_format,return )

int Texture_obj::get_wrap( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_wrap",0x7b332d30,"haxor.graphics.texture.Texture.get_wrap","haxor/graphics/texture/Texture.hx",42,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	int tmp = this->m_wrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_wrap,return )

int Texture_obj::set_wrap( int v){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","set_wrap",0x299086a4,"haxor.graphics.texture.Texture.set_wrap","haxor/graphics/texture/Texture.hx",43,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(43)
	int tmp = this->m_wrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	if ((tmp2)){
		HX_STACK_LINE(43)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		return tmp3;
	}
	HX_STACK_LINE(43)
	this->m_wrap = v;
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::haxor::core::TextureType tmp3 = this->get_type();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		bool tmp4 = (tmp3 == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		if ((tmp4)){
			HX_STACK_LINE(43)
			tmp5 = (int)3553;
		}
		else{
			HX_STACK_LINE(43)
			::haxor::core::TextureType tmp6 = this->get_type();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			bool tmp7 = (tmp6 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			if ((tmp7)){
				HX_STACK_LINE(43)
				tmp5 = (int)3553;
			}
			else{
				HX_STACK_LINE(43)
				::haxor::core::TextureType tmp8 = this->get_type();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(43)
				bool tmp9 = (tmp8 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(43)
				if ((tmp9)){
					HX_STACK_LINE(43)
					tmp5 = (int)34067;
				}
				else{
					HX_STACK_LINE(43)
					tmp5 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(43)
		int target = tmp5;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(43)
		::haxor::context::TextureContext tmp6 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		tmp6->Bind(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			int tmp9 = this->m_wrap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			int tmp10 = (int(tmp9) & int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(43)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			if ((tmp11)){
				HX_STACK_LINE(43)
				tmp12 = (int)33071;
			}
			else{
				HX_STACK_LINE(43)
				tmp12 = (int)10497;
			}
			HX_STACK_LINE(43)
			tmp7->TexParameteri(tmp8,(int)10242,tmp12);
		}
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			int tmp9 = this->m_wrap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			int tmp10 = (int(tmp9) & int((int)4));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(43)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			if ((tmp11)){
				HX_STACK_LINE(43)
				tmp12 = (int)33071;
			}
			else{
				HX_STACK_LINE(43)
				tmp12 = (int)10497;
			}
			HX_STACK_LINE(43)
			tmp7->TexParameteri(tmp8,(int)10243,tmp12);
		}
		HX_STACK_LINE(43)
		bool tmp7 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY_ENABLED;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		if ((tmp7)){
			HX_STACK_LINE(43)
			int tmp8 = this->m_aniso;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			Float tmp9 = ::Math_obj::max((int)1,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			Float p_value = tmp9;		HX_STACK_VAR(p_value,"p_value");
			HX_STACK_LINE(43)
			::haxor::platform::graphics::OpenGL tmp10 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(43)
			int tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			int tmp12 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			Float tmp13 = p_value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			tmp10->TexParameterf(tmp11,tmp12,tmp13);
		}
		HX_STACK_LINE(43)
		int tmp8 = this->m_minFilter;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		int minf = tmp8;		HX_STACK_VAR(minf,"minf");
		HX_STACK_LINE(43)
		int tmp9 = this->m_magFilter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		int magf = tmp9;		HX_STACK_VAR(magf,"magf");
		HX_STACK_LINE(43)
		bool is_half = false;		HX_STACK_VAR(is_half,"is_half");
		HX_STACK_LINE(43)
		int tmp10 = this->m_format;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		int tmp11 = ::haxor::core::PixelFormat_obj::Half;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(43)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(43)
		if ((tmp12)){
			HX_STACK_LINE(43)
			is_half = true;
		}
		HX_STACK_LINE(43)
		int tmp13 = this->m_format;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(43)
		int tmp14 = ::haxor::core::PixelFormat_obj::Half3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(43)
		bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(43)
		if ((tmp15)){
			HX_STACK_LINE(43)
			is_half = true;
		}
		HX_STACK_LINE(43)
		int tmp16 = this->m_format;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(43)
		int tmp17 = ::haxor::core::PixelFormat_obj::Half4;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(43)
		bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(43)
		if ((tmp18)){
			HX_STACK_LINE(43)
			is_half = true;
		}
		HX_STACK_LINE(43)
		bool is_float = false;		HX_STACK_VAR(is_float,"is_float");
		HX_STACK_LINE(43)
		int tmp19 = this->m_format;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(43)
		int tmp20 = ::haxor::core::PixelFormat_obj::_Float;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(43)
		bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		if ((tmp21)){
			HX_STACK_LINE(43)
			is_float = true;
		}
		HX_STACK_LINE(43)
		int tmp22 = this->m_format;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(43)
		int tmp23 = ::haxor::core::PixelFormat_obj::Float3;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(43)
		bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(43)
		if ((tmp24)){
			HX_STACK_LINE(43)
			is_float = true;
		}
		HX_STACK_LINE(43)
		int tmp25 = this->m_format;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(43)
		int tmp26 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(43)
		bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(43)
		if ((tmp27)){
			HX_STACK_LINE(43)
			is_float = true;
		}
		HX_STACK_LINE(43)
		bool tmp28 = is_half;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(43)
		if ((tmp28)){
			HX_STACK_LINE(43)
			bool tmp29 = ::haxor::graphics::GL_obj::TEXTURE_HALF_LINEAR;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(43)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(43)
			if ((tmp30)){
				HX_STACK_LINE(43)
				minf = (int)0;
				HX_STACK_LINE(43)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(43)
		bool tmp29 = is_float;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(43)
		if ((tmp29)){
			HX_STACK_LINE(43)
			bool tmp30 = ::haxor::graphics::GL_obj::TEXTURE_FLOAT_LINEAR;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(43)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(43)
			if ((tmp31)){
				HX_STACK_LINE(43)
				minf = (int)0;
				HX_STACK_LINE(43)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(43)
		int tmp30 = minf;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(43)
		switch( (int)(tmp30)){
			case (int)0: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(43)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(43)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9986);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(43)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(43)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(43)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(43)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(43)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9985);
			}
			;break;
		}
		HX_STACK_LINE(43)
		int tmp31 = magf;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(43)
		switch( (int)(tmp31)){
			case (int)0: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(43)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(43)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(43)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(43)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(43)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(43)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(43)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(43)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
		}
	}
	HX_STACK_LINE(43)
	int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_wrap,return )

int Texture_obj::get_aniso( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_aniso",0xa424d452,"haxor.graphics.texture.Texture.get_aniso","haxor/graphics/texture/Texture.hx",50,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	int tmp = this->m_aniso;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_aniso,return )

int Texture_obj::set_aniso( int v){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","set_aniso",0x8775c05e,"haxor.graphics.texture.Texture.set_aniso","haxor/graphics/texture/Texture.hx",51,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(51)
	int tmp = this->m_aniso;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	if ((tmp2)){
		HX_STACK_LINE(51)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		return tmp3;
	}
	HX_STACK_LINE(51)
	this->m_aniso = v;
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::haxor::core::TextureType tmp3 = this->get_type();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		bool tmp4 = (tmp3 == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		if ((tmp4)){
			HX_STACK_LINE(51)
			tmp5 = (int)3553;
		}
		else{
			HX_STACK_LINE(51)
			::haxor::core::TextureType tmp6 = this->get_type();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			bool tmp7 = (tmp6 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			if ((tmp7)){
				HX_STACK_LINE(51)
				tmp5 = (int)3553;
			}
			else{
				HX_STACK_LINE(51)
				::haxor::core::TextureType tmp8 = this->get_type();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				bool tmp9 = (tmp8 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(51)
				if ((tmp9)){
					HX_STACK_LINE(51)
					tmp5 = (int)34067;
				}
				else{
					HX_STACK_LINE(51)
					tmp5 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(51)
		int target = tmp5;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(51)
		::haxor::context::TextureContext tmp6 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		tmp6->Bind(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			int tmp9 = this->m_wrap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			int tmp10 = (int(tmp9) & int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(51)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			if ((tmp11)){
				HX_STACK_LINE(51)
				tmp12 = (int)33071;
			}
			else{
				HX_STACK_LINE(51)
				tmp12 = (int)10497;
			}
			HX_STACK_LINE(51)
			tmp7->TexParameteri(tmp8,(int)10242,tmp12);
		}
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			int tmp9 = this->m_wrap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			int tmp10 = (int(tmp9) & int((int)4));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(51)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			if ((tmp11)){
				HX_STACK_LINE(51)
				tmp12 = (int)33071;
			}
			else{
				HX_STACK_LINE(51)
				tmp12 = (int)10497;
			}
			HX_STACK_LINE(51)
			tmp7->TexParameteri(tmp8,(int)10243,tmp12);
		}
		HX_STACK_LINE(51)
		bool tmp7 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY_ENABLED;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		if ((tmp7)){
			HX_STACK_LINE(51)
			int tmp8 = this->m_aniso;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			Float tmp9 = ::Math_obj::max((int)1,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			Float p_value = tmp9;		HX_STACK_VAR(p_value,"p_value");
			HX_STACK_LINE(51)
			::haxor::platform::graphics::OpenGL tmp10 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			int tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(51)
			int tmp12 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			Float tmp13 = p_value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(51)
			tmp10->TexParameterf(tmp11,tmp12,tmp13);
		}
		HX_STACK_LINE(51)
		int tmp8 = this->m_minFilter;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		int minf = tmp8;		HX_STACK_VAR(minf,"minf");
		HX_STACK_LINE(51)
		int tmp9 = this->m_magFilter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		int magf = tmp9;		HX_STACK_VAR(magf,"magf");
		HX_STACK_LINE(51)
		bool is_half = false;		HX_STACK_VAR(is_half,"is_half");
		HX_STACK_LINE(51)
		int tmp10 = this->m_format;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		int tmp11 = ::haxor::core::PixelFormat_obj::Half;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		if ((tmp12)){
			HX_STACK_LINE(51)
			is_half = true;
		}
		HX_STACK_LINE(51)
		int tmp13 = this->m_format;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		int tmp14 = ::haxor::core::PixelFormat_obj::Half3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(51)
		if ((tmp15)){
			HX_STACK_LINE(51)
			is_half = true;
		}
		HX_STACK_LINE(51)
		int tmp16 = this->m_format;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(51)
		int tmp17 = ::haxor::core::PixelFormat_obj::Half4;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(51)
		bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(51)
		if ((tmp18)){
			HX_STACK_LINE(51)
			is_half = true;
		}
		HX_STACK_LINE(51)
		bool is_float = false;		HX_STACK_VAR(is_float,"is_float");
		HX_STACK_LINE(51)
		int tmp19 = this->m_format;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(51)
		int tmp20 = ::haxor::core::PixelFormat_obj::_Float;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(51)
		bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(51)
		if ((tmp21)){
			HX_STACK_LINE(51)
			is_float = true;
		}
		HX_STACK_LINE(51)
		int tmp22 = this->m_format;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(51)
		int tmp23 = ::haxor::core::PixelFormat_obj::Float3;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(51)
		bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(51)
		if ((tmp24)){
			HX_STACK_LINE(51)
			is_float = true;
		}
		HX_STACK_LINE(51)
		int tmp25 = this->m_format;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(51)
		int tmp26 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(51)
		bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(51)
		if ((tmp27)){
			HX_STACK_LINE(51)
			is_float = true;
		}
		HX_STACK_LINE(51)
		bool tmp28 = is_half;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(51)
		if ((tmp28)){
			HX_STACK_LINE(51)
			bool tmp29 = ::haxor::graphics::GL_obj::TEXTURE_HALF_LINEAR;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(51)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(51)
			if ((tmp30)){
				HX_STACK_LINE(51)
				minf = (int)0;
				HX_STACK_LINE(51)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(51)
		bool tmp29 = is_float;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(51)
		if ((tmp29)){
			HX_STACK_LINE(51)
			bool tmp30 = ::haxor::graphics::GL_obj::TEXTURE_FLOAT_LINEAR;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(51)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(51)
			if ((tmp31)){
				HX_STACK_LINE(51)
				minf = (int)0;
				HX_STACK_LINE(51)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(51)
		int tmp30 = minf;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(51)
		switch( (int)(tmp30)){
			case (int)0: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(51)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(51)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9986);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(51)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(51)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(51)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(51)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(51)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9985);
			}
			;break;
		}
		HX_STACK_LINE(51)
		int tmp31 = magf;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(51)
		switch( (int)(tmp31)){
			case (int)0: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(51)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(51)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(51)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(51)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(51)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(51)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(51)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(51)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
		}
	}
	HX_STACK_LINE(51)
	int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_aniso,return )

int Texture_obj::get_minFilter( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_minFilter",0x1a7f19c4,"haxor.graphics.texture.Texture.get_minFilter","haxor/graphics/texture/Texture.hx",59,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	int tmp = this->m_minFilter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_minFilter,return )

int Texture_obj::set_minFilter( int v){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","set_minFilter",0x5f84fbd0,"haxor.graphics.texture.Texture.set_minFilter","haxor/graphics/texture/Texture.hx",60,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(60)
	int tmp = this->m_minFilter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	if ((tmp2)){
		HX_STACK_LINE(60)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		return tmp3;
	}
	HX_STACK_LINE(60)
	this->m_minFilter = v;
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::haxor::core::TextureType tmp3 = this->get_type();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		bool tmp4 = (tmp3 == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		if ((tmp4)){
			HX_STACK_LINE(60)
			tmp5 = (int)3553;
		}
		else{
			HX_STACK_LINE(60)
			::haxor::core::TextureType tmp6 = this->get_type();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			bool tmp7 = (tmp6 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			if ((tmp7)){
				HX_STACK_LINE(60)
				tmp5 = (int)3553;
			}
			else{
				HX_STACK_LINE(60)
				::haxor::core::TextureType tmp8 = this->get_type();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				bool tmp9 = (tmp8 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(60)
				if ((tmp9)){
					HX_STACK_LINE(60)
					tmp5 = (int)34067;
				}
				else{
					HX_STACK_LINE(60)
					tmp5 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(60)
		int target = tmp5;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(60)
		::haxor::context::TextureContext tmp6 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		tmp6->Bind(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			int tmp9 = this->m_wrap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			int tmp10 = (int(tmp9) & int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			if ((tmp11)){
				HX_STACK_LINE(60)
				tmp12 = (int)33071;
			}
			else{
				HX_STACK_LINE(60)
				tmp12 = (int)10497;
			}
			HX_STACK_LINE(60)
			tmp7->TexParameteri(tmp8,(int)10242,tmp12);
		}
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			int tmp9 = this->m_wrap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			int tmp10 = (int(tmp9) & int((int)4));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			if ((tmp11)){
				HX_STACK_LINE(60)
				tmp12 = (int)33071;
			}
			else{
				HX_STACK_LINE(60)
				tmp12 = (int)10497;
			}
			HX_STACK_LINE(60)
			tmp7->TexParameteri(tmp8,(int)10243,tmp12);
		}
		HX_STACK_LINE(60)
		bool tmp7 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY_ENABLED;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		if ((tmp7)){
			HX_STACK_LINE(60)
			int tmp8 = this->m_aniso;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			Float tmp9 = ::Math_obj::max((int)1,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			Float p_value = tmp9;		HX_STACK_VAR(p_value,"p_value");
			HX_STACK_LINE(60)
			::haxor::platform::graphics::OpenGL tmp10 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			int tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			int tmp12 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			Float tmp13 = p_value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			tmp10->TexParameterf(tmp11,tmp12,tmp13);
		}
		HX_STACK_LINE(60)
		int tmp8 = this->m_minFilter;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		int minf = tmp8;		HX_STACK_VAR(minf,"minf");
		HX_STACK_LINE(60)
		int tmp9 = this->m_magFilter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		int magf = tmp9;		HX_STACK_VAR(magf,"magf");
		HX_STACK_LINE(60)
		bool is_half = false;		HX_STACK_VAR(is_half,"is_half");
		HX_STACK_LINE(60)
		int tmp10 = this->m_format;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(60)
		int tmp11 = ::haxor::core::PixelFormat_obj::Half;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(60)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(60)
		if ((tmp12)){
			HX_STACK_LINE(60)
			is_half = true;
		}
		HX_STACK_LINE(60)
		int tmp13 = this->m_format;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(60)
		int tmp14 = ::haxor::core::PixelFormat_obj::Half3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(60)
		bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(60)
		if ((tmp15)){
			HX_STACK_LINE(60)
			is_half = true;
		}
		HX_STACK_LINE(60)
		int tmp16 = this->m_format;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(60)
		int tmp17 = ::haxor::core::PixelFormat_obj::Half4;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(60)
		bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(60)
		if ((tmp18)){
			HX_STACK_LINE(60)
			is_half = true;
		}
		HX_STACK_LINE(60)
		bool is_float = false;		HX_STACK_VAR(is_float,"is_float");
		HX_STACK_LINE(60)
		int tmp19 = this->m_format;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(60)
		int tmp20 = ::haxor::core::PixelFormat_obj::_Float;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(60)
		bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(60)
		if ((tmp21)){
			HX_STACK_LINE(60)
			is_float = true;
		}
		HX_STACK_LINE(60)
		int tmp22 = this->m_format;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(60)
		int tmp23 = ::haxor::core::PixelFormat_obj::Float3;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(60)
		bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(60)
		if ((tmp24)){
			HX_STACK_LINE(60)
			is_float = true;
		}
		HX_STACK_LINE(60)
		int tmp25 = this->m_format;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(60)
		int tmp26 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(60)
		bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(60)
		if ((tmp27)){
			HX_STACK_LINE(60)
			is_float = true;
		}
		HX_STACK_LINE(60)
		bool tmp28 = is_half;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(60)
		if ((tmp28)){
			HX_STACK_LINE(60)
			bool tmp29 = ::haxor::graphics::GL_obj::TEXTURE_HALF_LINEAR;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(60)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(60)
			if ((tmp30)){
				HX_STACK_LINE(60)
				minf = (int)0;
				HX_STACK_LINE(60)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(60)
		bool tmp29 = is_float;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(60)
		if ((tmp29)){
			HX_STACK_LINE(60)
			bool tmp30 = ::haxor::graphics::GL_obj::TEXTURE_FLOAT_LINEAR;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(60)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(60)
			if ((tmp31)){
				HX_STACK_LINE(60)
				minf = (int)0;
				HX_STACK_LINE(60)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(60)
		int tmp30 = minf;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(60)
		switch( (int)(tmp30)){
			case (int)0: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(60)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(60)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9986);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(60)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(60)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(60)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(60)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(60)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9985);
			}
			;break;
		}
		HX_STACK_LINE(60)
		int tmp31 = magf;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(60)
		switch( (int)(tmp31)){
			case (int)0: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(60)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(60)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(60)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(60)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(60)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(60)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(60)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(60)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
		}
	}
	HX_STACK_LINE(60)
	int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_minFilter,return )

int Texture_obj::get_magFilter( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_magFilter",0x2dd54985,"haxor.graphics.texture.Texture.get_magFilter","haxor/graphics/texture/Texture.hx",67,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	int tmp = this->m_magFilter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_magFilter,return )

int Texture_obj::set_magFilter( int v){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","set_magFilter",0x72db2b91,"haxor.graphics.texture.Texture.set_magFilter","haxor/graphics/texture/Texture.hx",68,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(68)
	int tmp = this->m_magFilter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	if ((tmp2)){
		HX_STACK_LINE(68)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		return tmp3;
	}
	HX_STACK_LINE(68)
	this->m_magFilter = v;
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::haxor::core::TextureType tmp3 = this->get_type();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		bool tmp4 = (tmp3 == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		if ((tmp4)){
			HX_STACK_LINE(68)
			tmp5 = (int)3553;
		}
		else{
			HX_STACK_LINE(68)
			::haxor::core::TextureType tmp6 = this->get_type();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			bool tmp7 = (tmp6 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			if ((tmp7)){
				HX_STACK_LINE(68)
				tmp5 = (int)3553;
			}
			else{
				HX_STACK_LINE(68)
				::haxor::core::TextureType tmp8 = this->get_type();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				bool tmp9 = (tmp8 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(68)
				if ((tmp9)){
					HX_STACK_LINE(68)
					tmp5 = (int)34067;
				}
				else{
					HX_STACK_LINE(68)
					tmp5 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(68)
		int target = tmp5;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(68)
		::haxor::context::TextureContext tmp6 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		tmp6->Bind(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			int tmp9 = this->m_wrap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			int tmp10 = (int(tmp9) & int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			if ((tmp11)){
				HX_STACK_LINE(68)
				tmp12 = (int)33071;
			}
			else{
				HX_STACK_LINE(68)
				tmp12 = (int)10497;
			}
			HX_STACK_LINE(68)
			tmp7->TexParameteri(tmp8,(int)10242,tmp12);
		}
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			int tmp9 = this->m_wrap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			int tmp10 = (int(tmp9) & int((int)4));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			if ((tmp11)){
				HX_STACK_LINE(68)
				tmp12 = (int)33071;
			}
			else{
				HX_STACK_LINE(68)
				tmp12 = (int)10497;
			}
			HX_STACK_LINE(68)
			tmp7->TexParameteri(tmp8,(int)10243,tmp12);
		}
		HX_STACK_LINE(68)
		bool tmp7 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY_ENABLED;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		if ((tmp7)){
			HX_STACK_LINE(68)
			int tmp8 = this->m_aniso;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			Float tmp9 = ::Math_obj::max((int)1,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			Float p_value = tmp9;		HX_STACK_VAR(p_value,"p_value");
			HX_STACK_LINE(68)
			::haxor::platform::graphics::OpenGL tmp10 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			int tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			int tmp12 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			Float tmp13 = p_value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			tmp10->TexParameterf(tmp11,tmp12,tmp13);
		}
		HX_STACK_LINE(68)
		int tmp8 = this->m_minFilter;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		int minf = tmp8;		HX_STACK_VAR(minf,"minf");
		HX_STACK_LINE(68)
		int tmp9 = this->m_magFilter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		int magf = tmp9;		HX_STACK_VAR(magf,"magf");
		HX_STACK_LINE(68)
		bool is_half = false;		HX_STACK_VAR(is_half,"is_half");
		HX_STACK_LINE(68)
		int tmp10 = this->m_format;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		int tmp11 = ::haxor::core::PixelFormat_obj::Half;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(68)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(68)
		if ((tmp12)){
			HX_STACK_LINE(68)
			is_half = true;
		}
		HX_STACK_LINE(68)
		int tmp13 = this->m_format;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(68)
		int tmp14 = ::haxor::core::PixelFormat_obj::Half3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(68)
		bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(68)
		if ((tmp15)){
			HX_STACK_LINE(68)
			is_half = true;
		}
		HX_STACK_LINE(68)
		int tmp16 = this->m_format;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(68)
		int tmp17 = ::haxor::core::PixelFormat_obj::Half4;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(68)
		bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(68)
		if ((tmp18)){
			HX_STACK_LINE(68)
			is_half = true;
		}
		HX_STACK_LINE(68)
		bool is_float = false;		HX_STACK_VAR(is_float,"is_float");
		HX_STACK_LINE(68)
		int tmp19 = this->m_format;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(68)
		int tmp20 = ::haxor::core::PixelFormat_obj::_Float;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(68)
		bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(68)
		if ((tmp21)){
			HX_STACK_LINE(68)
			is_float = true;
		}
		HX_STACK_LINE(68)
		int tmp22 = this->m_format;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(68)
		int tmp23 = ::haxor::core::PixelFormat_obj::Float3;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(68)
		bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(68)
		if ((tmp24)){
			HX_STACK_LINE(68)
			is_float = true;
		}
		HX_STACK_LINE(68)
		int tmp25 = this->m_format;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(68)
		int tmp26 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(68)
		bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(68)
		if ((tmp27)){
			HX_STACK_LINE(68)
			is_float = true;
		}
		HX_STACK_LINE(68)
		bool tmp28 = is_half;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(68)
		if ((tmp28)){
			HX_STACK_LINE(68)
			bool tmp29 = ::haxor::graphics::GL_obj::TEXTURE_HALF_LINEAR;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(68)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(68)
			if ((tmp30)){
				HX_STACK_LINE(68)
				minf = (int)0;
				HX_STACK_LINE(68)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(68)
		bool tmp29 = is_float;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(68)
		if ((tmp29)){
			HX_STACK_LINE(68)
			bool tmp30 = ::haxor::graphics::GL_obj::TEXTURE_FLOAT_LINEAR;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(68)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(68)
			if ((tmp31)){
				HX_STACK_LINE(68)
				minf = (int)0;
				HX_STACK_LINE(68)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(68)
		int tmp30 = minf;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(68)
		switch( (int)(tmp30)){
			case (int)0: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(68)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(68)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9986);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(68)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(68)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(68)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(68)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(68)
				int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				tmp31->TexParameteri(tmp32,(int)10241,(int)9985);
			}
			;break;
		}
		HX_STACK_LINE(68)
		int tmp31 = magf;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(68)
		switch( (int)(tmp31)){
			case (int)0: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(68)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(68)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(68)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(68)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(68)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(68)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(68)
				::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(68)
				tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
			}
			;break;
		}
	}
	HX_STACK_LINE(68)
	int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_magFilter,return )

bool Texture_obj::get_mipmaps( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_mipmaps",0x8d455a45,"haxor.graphics.texture.Texture.get_mipmaps","haxor/graphics/texture/Texture.hx",75,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	bool tmp = this->m_mipmaps;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_mipmaps,return )

::haxor::core::TextureType Texture_obj::get_type( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture","get_type",0x793ce620,"haxor.graphics.texture.Texture.get_type","haxor/graphics/texture/Texture.hx",82,0x91e47a4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	return ::haxor::core::TextureType_obj::None;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_type,return )

Void Texture_obj::Apply( ){
{
		HX_STACK_FRAME("haxor.graphics.texture.Texture","Apply",0x6766e151,"haxor.graphics.texture.Texture.Apply","haxor/graphics/texture/Texture.hx",109,0x91e47a4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		::haxor::context::TextureContext tmp = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		tmp->Update(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,Apply,(void))

Void Texture_obj::GenerateMipmaps( ){
{
		HX_STACK_FRAME("haxor.graphics.texture.Texture","GenerateMipmaps",0xad5228d9,"haxor.graphics.texture.Texture.GenerateMipmaps","haxor/graphics/texture/Texture.hx",116,0x91e47a4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		bool tmp = this->m_mipmaps;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		if ((tmp)){
			HX_STACK_LINE(116)
			return null();
		}
		HX_STACK_LINE(116)
		this->m_mipmaps = true;
		HX_STACK_LINE(116)
		::haxor::context::TextureContext tmp1 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		tmp1->UpdateMipmaps(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,GenerateMipmaps,(void))

Void Texture_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.graphics.texture.Texture","OnDestroy",0xdb9b6efe,"haxor.graphics.texture.Texture.OnDestroy","haxor/graphics/texture/Texture.hx",122,0x91e47a4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		this->super::OnDestroy();
		HX_STACK_LINE(124)
		::haxor::context::TextureContext tmp = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		tmp->Destroy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}



Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(m_width,"m_width");
	HX_MARK_MEMBER_NAME(m_height,"m_height");
	HX_MARK_MEMBER_NAME(m_format,"m_format");
	HX_MARK_MEMBER_NAME(m_wrap,"m_wrap");
	HX_MARK_MEMBER_NAME(m_aniso,"m_aniso");
	HX_MARK_MEMBER_NAME(m_minFilter,"m_minFilter");
	HX_MARK_MEMBER_NAME(m_magFilter,"m_magFilter");
	HX_MARK_MEMBER_NAME(mipmaps,"mipmaps");
	HX_MARK_MEMBER_NAME(m_mipmaps,"m_mipmaps");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(__slot,"__slot");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_width,"m_width");
	HX_VISIT_MEMBER_NAME(m_height,"m_height");
	HX_VISIT_MEMBER_NAME(m_format,"m_format");
	HX_VISIT_MEMBER_NAME(m_wrap,"m_wrap");
	HX_VISIT_MEMBER_NAME(m_aniso,"m_aniso");
	HX_VISIT_MEMBER_NAME(m_minFilter,"m_minFilter");
	HX_VISIT_MEMBER_NAME(m_magFilter,"m_magFilter");
	HX_VISIT_MEMBER_NAME(mipmaps,"mipmaps");
	HX_VISIT_MEMBER_NAME(m_mipmaps,"m_mipmaps");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(__slot,"__slot");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { if (inCallProp == hx::paccAlways) return get_wrap(); }
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp == hx::paccAlways ? get_type() : type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"aniso") ) { if (inCallProp == hx::paccAlways) return get_aniso(); }
		if (HX_FIELD_EQ(inName,"Apply") ) { return Apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return get_format(); }
		if (HX_FIELD_EQ(inName,"m_wrap") ) { return m_wrap; }
		if (HX_FIELD_EQ(inName,"__slot") ) { return __slot; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_width") ) { return m_width; }
		if (HX_FIELD_EQ(inName,"m_aniso") ) { return m_aniso; }
		if (HX_FIELD_EQ(inName,"mipmaps") ) { return inCallProp == hx::paccAlways ? get_mipmaps() : mipmaps; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_height") ) { return m_height; }
		if (HX_FIELD_EQ(inName,"m_format") ) { return m_format; }
		if (HX_FIELD_EQ(inName,"get_wrap") ) { return get_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrap") ) { return set_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_aniso") ) { return get_aniso_dyn(); }
		if (HX_FIELD_EQ(inName,"set_aniso") ) { return set_aniso_dyn(); }
		if (HX_FIELD_EQ(inName,"minFilter") ) { if (inCallProp == hx::paccAlways) return get_minFilter(); }
		if (HX_FIELD_EQ(inName,"magFilter") ) { if (inCallProp == hx::paccAlways) return get_magFilter(); }
		if (HX_FIELD_EQ(inName,"m_mipmaps") ) { return m_mipmaps; }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return get_format_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_minFilter") ) { return m_minFilter; }
		if (HX_FIELD_EQ(inName,"m_magFilter") ) { return m_magFilter; }
		if (HX_FIELD_EQ(inName,"get_mipmaps") ) { return get_mipmaps_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_minFilter") ) { return get_minFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minFilter") ) { return set_minFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_magFilter") ) { return get_magFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_magFilter") ) { return set_magFilter_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"GenerateMipmaps") ) { return GenerateMipmaps_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { if (inCallProp == hx::paccAlways) return set_wrap(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxor::core::TextureType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"aniso") ) { if (inCallProp == hx::paccAlways) return set_aniso(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_wrap") ) { m_wrap=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__slot") ) { __slot=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_width") ) { m_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_aniso") ) { m_aniso=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mipmaps") ) { mipmaps=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_height") ) { m_height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_format") ) { m_format=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minFilter") ) { if (inCallProp == hx::paccAlways) return set_minFilter(inValue); }
		if (HX_FIELD_EQ(inName,"magFilter") ) { if (inCallProp == hx::paccAlways) return set_magFilter(inValue); }
		if (HX_FIELD_EQ(inName,"m_mipmaps") ) { m_mipmaps=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_minFilter") ) { m_minFilter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_magFilter") ) { m_magFilter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("m_format","\x09","\x38","\x80","\xc6"));
	outFields->push(HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"));
	outFields->push(HX_HCSTRING("m_wrap","\x1c","\xaa","\xf6","\x96"));
	outFields->push(HX_HCSTRING("aniso","\x78","\xce","\xe3","\x22"));
	outFields->push(HX_HCSTRING("m_aniso","\xe6","\xa5","\x6e","\xd3"));
	outFields->push(HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"));
	outFields->push(HX_HCSTRING("m_minFilter","\x58","\x45","\xd3","\x18"));
	outFields->push(HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"));
	outFields->push(HX_HCSTRING("m_magFilter","\x19","\x75","\x29","\x2c"));
	outFields->push(HX_HCSTRING("mipmaps","\xeb","\xa9","\x53","\x75"));
	outFields->push(HX_HCSTRING("m_mipmaps","\xd9","\xb8","\xd5","\x7f"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("__slot","\x1e","\x41","\x4e","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Texture_obj,m_width),HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a")},
	{hx::fsInt,(int)offsetof(Texture_obj,m_height),HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb")},
	{hx::fsInt,(int)offsetof(Texture_obj,m_format),HX_HCSTRING("m_format","\x09","\x38","\x80","\xc6")},
	{hx::fsInt,(int)offsetof(Texture_obj,m_wrap),HX_HCSTRING("m_wrap","\x1c","\xaa","\xf6","\x96")},
	{hx::fsInt,(int)offsetof(Texture_obj,m_aniso),HX_HCSTRING("m_aniso","\xe6","\xa5","\x6e","\xd3")},
	{hx::fsInt,(int)offsetof(Texture_obj,m_minFilter),HX_HCSTRING("m_minFilter","\x58","\x45","\xd3","\x18")},
	{hx::fsInt,(int)offsetof(Texture_obj,m_magFilter),HX_HCSTRING("m_magFilter","\x19","\x75","\x29","\x2c")},
	{hx::fsBool,(int)offsetof(Texture_obj,mipmaps),HX_HCSTRING("mipmaps","\xeb","\xa9","\x53","\x75")},
	{hx::fsBool,(int)offsetof(Texture_obj,m_mipmaps),HX_HCSTRING("m_mipmaps","\xd9","\xb8","\xd5","\x7f")},
	{hx::fsObject /*::haxor::core::TextureType*/ ,(int)offsetof(Texture_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Texture_obj,__slot),HX_HCSTRING("__slot","\x1e","\x41","\x4e","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("m_format","\x09","\x38","\x80","\xc6"),
	HX_HCSTRING("get_wrap","\x53","\xf5","\xb9","\xce"),
	HX_HCSTRING("set_wrap","\xc7","\x4e","\x17","\x7d"),
	HX_HCSTRING("m_wrap","\x1c","\xaa","\xf6","\x96"),
	HX_HCSTRING("get_aniso","\xcf","\x2a","\x8d","\x66"),
	HX_HCSTRING("set_aniso","\xdb","\x16","\xde","\x49"),
	HX_HCSTRING("m_aniso","\xe6","\xa5","\x6e","\xd3"),
	HX_HCSTRING("get_minFilter","\xc1","\xf2","\xe0","\x9f"),
	HX_HCSTRING("set_minFilter","\xcd","\xd4","\xe6","\xe4"),
	HX_HCSTRING("m_minFilter","\x58","\x45","\xd3","\x18"),
	HX_HCSTRING("get_magFilter","\x82","\x22","\x37","\xb3"),
	HX_HCSTRING("set_magFilter","\x8e","\x04","\x3d","\xf8"),
	HX_HCSTRING("m_magFilter","\x19","\x75","\x29","\x2c"),
	HX_HCSTRING("mipmaps","\xeb","\xa9","\x53","\x75"),
	HX_HCSTRING("get_mipmaps","\x02","\x0a","\x4e","\xfb"),
	HX_HCSTRING("m_mipmaps","\xd9","\xb8","\xd5","\x7f"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("__slot","\x1e","\x41","\x4e","\xfb"),
	HX_HCSTRING("Apply","\x4e","\xf5","\x68","\xb7"),
	HX_HCSTRING("GenerateMipmaps","\x16","\xfb","\x99","\xb1"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#endif

hx::Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.texture.Texture","\x31","\x98","\xb5","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
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
} // end namespace graphics
} // end namespace texture
