#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
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
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_RenderTexture
#include <haxor/graphics/texture/RenderTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_TextureCube
#include <haxor/graphics/texture/TextureCube.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
namespace haxor{
namespace context{

Void TextureContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.TextureContext","new",0x0513df31,"haxor.context.TextureContext.new","haxor/context/TextureContext.hx",86,0x7978261d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(87)
	::haxor::context::UID tmp = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	this->tid = tmp;
	HX_STACK_LINE(88)
	this->bind = null();
	HX_STACK_LINE(89)
	this->target = null();
	HX_STACK_LINE(90)
	this->active = (int)-1;
	HX_STACK_LINE(91)
	this->next_slot = (int)0;
	HX_STACK_LINE(92)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	this->bind = tmp1;
	HX_STACK_LINE(93)
	Array< int > tmp2 = Array_obj< int >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	this->ids = tmp2;
	HX_STACK_LINE(95)
	Array< int > tmp3 = Array_obj< int >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	this->framebuffers = tmp3;
	HX_STACK_LINE(96)
	Array< int > tmp4 = Array_obj< int >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	this->renderbuffers = tmp4;
}
;
	return null();
}

//TextureContext_obj::~TextureContext_obj() { }

Dynamic TextureContext_obj::__CreateEmpty() { return  new TextureContext_obj; }
hx::ObjectPtr< TextureContext_obj > TextureContext_obj::__new()
{  hx::ObjectPtr< TextureContext_obj > _result_ = new TextureContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureContext_obj > _result_ = new TextureContext_obj();
	_result_->__construct();
	return _result_;}

Void TextureContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.TextureContext","Initialize",0x6b1912bf,"haxor.context.TextureContext.Initialize","haxor/context/TextureContext.hx",103,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			int tmp = ::haxor::graphics::GL_obj::MAX_ACTIVE_TEXTURE;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(104)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(104)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				if ((tmp2)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(104)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(104)
				Array< ::Dynamic > tmp4 = this->bind;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				tmp4->push(null());
			}
		}
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp = (_g < (int)2048);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(105)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(105)
				if ((tmp1)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				Array< int > tmp3 = this->ids;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(107)
				int tmp4 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(107)
				tmp3->push(tmp4);
				HX_STACK_LINE(108)
				Array< int > tmp5 = this->framebuffers;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(108)
				int tmp6 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				tmp5->push(tmp6);
				HX_STACK_LINE(109)
				Array< int > tmp7 = this->renderbuffers;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				int tmp8 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				tmp7->push(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureContext_obj,Initialize,(void))

Void TextureContext_obj::Alloc( ::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.context.TextureContext","Alloc",0x74bf3966,"haxor.context.TextureContext.Alloc","haxor/context/TextureContext.hx",118,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(119)
		int w = p_texture->m_width;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(120)
		int h = p_texture->m_height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(121)
		int tmp = p_texture->m_format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		int tmp1 = ::haxor::context::TextureContext_obj::FormatToChannelLayout(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		int chn_fmt = tmp1;		HX_STACK_VAR(chn_fmt,"chn_fmt");
		HX_STACK_LINE(122)
		int tmp2 = p_texture->m_format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		int tmp3 = ::haxor::context::TextureContext_obj::FormatToChannelBits(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		int chn_bit = tmp3;		HX_STACK_VAR(chn_bit,"chn_bit");
		HX_STACK_LINE(123)
		int tmp4 = p_texture->m_format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		int tmp5 = ::haxor::context::TextureContext_obj::FormatToChannelType(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		int chn_type = tmp5;		HX_STACK_VAR(chn_type,"chn_type");
		HX_STACK_LINE(124)
		::haxor::core::TextureType tmp6 = p_texture->get_type();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		bool tmp7 = (tmp6 == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		if ((tmp7)){
			HX_STACK_LINE(124)
			tmp8 = (int)3553;
		}
		else{
			HX_STACK_LINE(124)
			::haxor::core::TextureType tmp9 = p_texture->get_type();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			bool tmp10 = (tmp9 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(124)
			if ((tmp10)){
				HX_STACK_LINE(124)
				tmp8 = (int)3553;
			}
			else{
				HX_STACK_LINE(124)
				::haxor::core::TextureType tmp11 = p_texture->get_type();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				bool tmp12 = (tmp11 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				if ((tmp12)){
					HX_STACK_LINE(124)
					tmp8 = (int)34067;
				}
				else{
					HX_STACK_LINE(124)
					tmp8 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(124)
		int tex_type = tmp8;		HX_STACK_VAR(tex_type,"tex_type");
		HX_STACK_LINE(126)
		::haxor::graphics::texture::Texture tmp9 = p_texture;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		this->Bind(tmp9,null());
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::haxor::platform::graphics::OpenGL tmp10 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			int tmp11 = tex_type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			int tmp12 = chn_fmt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			int tmp13 = w;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			int tmp14 = h;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			int tmp15 = chn_bit;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(127)
			int tmp16 = chn_type;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			tmp10->TexImage2DAlloc(tmp11,(int)0,tmp12,tmp13,tmp14,(int)0,tmp15,tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,Alloc,(void))

Void TextureContext_obj::Create( ::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.context.TextureContext","Create",0xef0624eb,"haxor.context.TextureContext.Create","haxor/context/TextureContext.hx",136,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(137)
		p_texture->__slot = (int)-1;
		HX_STACK_LINE(140)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		int tmp1 = tmp->CreateTexture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		int id = tmp1;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(142)
		Array< int > tmp2 = this->ids;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		int tmp3 = p_texture->__cid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		int tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		tmp2[tmp3] = tmp4;
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			::haxor::core::TextureType tmp5 = p_texture->get_type();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			bool tmp6 = (tmp5 == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			if ((tmp6)){
				HX_STACK_LINE(144)
				tmp7 = (int)3553;
			}
			else{
				HX_STACK_LINE(144)
				::haxor::core::TextureType tmp8 = p_texture->get_type();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(144)
				bool tmp9 = (tmp8 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(144)
				if ((tmp9)){
					HX_STACK_LINE(144)
					tmp7 = (int)3553;
				}
				else{
					HX_STACK_LINE(144)
					::haxor::core::TextureType tmp10 = p_texture->get_type();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(144)
					bool tmp11 = (tmp10 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(144)
					if ((tmp11)){
						HX_STACK_LINE(144)
						tmp7 = (int)34067;
					}
					else{
						HX_STACK_LINE(144)
						tmp7 = (int)3553;
					}
				}
			}
			HX_STACK_LINE(144)
			int target = tmp7;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(144)
			::haxor::graphics::texture::Texture tmp8 = p_texture;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			this->Bind(tmp8,null());
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(144)
				int tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(144)
				int tmp11 = (int(p_texture->m_wrap) & int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(144)
				bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(144)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(144)
				if ((tmp12)){
					HX_STACK_LINE(144)
					tmp13 = (int)33071;
				}
				else{
					HX_STACK_LINE(144)
					tmp13 = (int)10497;
				}
				HX_STACK_LINE(144)
				tmp9->TexParameteri(tmp10,(int)10242,tmp13);
			}
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(144)
				int tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(144)
				int tmp11 = (int(p_texture->m_wrap) & int((int)4));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(144)
				bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(144)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(144)
				if ((tmp12)){
					HX_STACK_LINE(144)
					tmp13 = (int)33071;
				}
				else{
					HX_STACK_LINE(144)
					tmp13 = (int)10497;
				}
				HX_STACK_LINE(144)
				tmp9->TexParameteri(tmp10,(int)10243,tmp13);
			}
			HX_STACK_LINE(144)
			bool tmp9 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY_ENABLED;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			if ((tmp9)){
				HX_STACK_LINE(144)
				int tmp10 = p_texture->m_aniso;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(144)
				Float tmp11 = ::Math_obj::max((int)1,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(144)
				Float p_value = tmp11;		HX_STACK_VAR(p_value,"p_value");
				HX_STACK_LINE(144)
				::haxor::platform::graphics::OpenGL tmp12 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(144)
				int tmp13 = target;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(144)
				int tmp14 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(144)
				Float tmp15 = p_value;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(144)
				tmp12->TexParameterf(tmp13,tmp14,tmp15);
			}
			HX_STACK_LINE(144)
			int minf = p_texture->m_minFilter;		HX_STACK_VAR(minf,"minf");
			HX_STACK_LINE(144)
			int magf = p_texture->m_magFilter;		HX_STACK_VAR(magf,"magf");
			HX_STACK_LINE(144)
			bool is_half = false;		HX_STACK_VAR(is_half,"is_half");
			HX_STACK_LINE(144)
			int tmp10 = p_texture->m_format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			int tmp11 = ::haxor::core::PixelFormat_obj::Half;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(144)
			if ((tmp12)){
				HX_STACK_LINE(144)
				is_half = true;
			}
			HX_STACK_LINE(144)
			int tmp13 = p_texture->m_format;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(144)
			int tmp14 = ::haxor::core::PixelFormat_obj::Half3;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(144)
			bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(144)
			if ((tmp15)){
				HX_STACK_LINE(144)
				is_half = true;
			}
			HX_STACK_LINE(144)
			int tmp16 = p_texture->m_format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(144)
			int tmp17 = ::haxor::core::PixelFormat_obj::Half4;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(144)
			bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(144)
			if ((tmp18)){
				HX_STACK_LINE(144)
				is_half = true;
			}
			HX_STACK_LINE(144)
			bool is_float = false;		HX_STACK_VAR(is_float,"is_float");
			HX_STACK_LINE(144)
			int tmp19 = p_texture->m_format;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(144)
			int tmp20 = ::haxor::core::PixelFormat_obj::_Float;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(144)
			bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(144)
			if ((tmp21)){
				HX_STACK_LINE(144)
				is_float = true;
			}
			HX_STACK_LINE(144)
			int tmp22 = p_texture->m_format;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(144)
			int tmp23 = ::haxor::core::PixelFormat_obj::Float3;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(144)
			bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(144)
			if ((tmp24)){
				HX_STACK_LINE(144)
				is_float = true;
			}
			HX_STACK_LINE(144)
			int tmp25 = p_texture->m_format;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(144)
			int tmp26 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(144)
			bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(144)
			if ((tmp27)){
				HX_STACK_LINE(144)
				is_float = true;
			}
			HX_STACK_LINE(144)
			bool tmp28 = is_half;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(144)
			if ((tmp28)){
				HX_STACK_LINE(144)
				bool tmp29 = ::haxor::graphics::GL_obj::TEXTURE_HALF_LINEAR;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(144)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(144)
				if ((tmp30)){
					HX_STACK_LINE(144)
					minf = (int)0;
					HX_STACK_LINE(144)
					magf = (int)0;
				}
			}
			HX_STACK_LINE(144)
			bool tmp29 = is_float;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(144)
			if ((tmp29)){
				HX_STACK_LINE(144)
				bool tmp30 = ::haxor::graphics::GL_obj::TEXTURE_FLOAT_LINEAR;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(144)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(144)
				if ((tmp31)){
					HX_STACK_LINE(144)
					minf = (int)0;
					HX_STACK_LINE(144)
					magf = (int)0;
				}
			}
			HX_STACK_LINE(144)
			int tmp30 = minf;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(144)
			switch( (int)(tmp30)){
				case (int)0: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(144)
					int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					tmp31->TexParameteri(tmp32,(int)10241,(int)9728);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(144)
					int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					tmp31->TexParameteri(tmp32,(int)10241,(int)9986);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(144)
					int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					tmp31->TexParameteri(tmp32,(int)10241,(int)9984);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(144)
					int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					tmp31->TexParameteri(tmp32,(int)10241,(int)9729);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(144)
					int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(144)
					int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					tmp31->TexParameteri(tmp32,(int)10241,(int)9987);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp31 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(144)
					int tmp32 = target;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					tmp31->TexParameteri(tmp32,(int)10241,(int)9985);
				}
				;break;
			}
			HX_STACK_LINE(144)
			int tmp31 = magf;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(144)
			switch( (int)(tmp31)){
				case (int)0: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(144)
					tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(144)
					tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(144)
					tmp32->TexParameteri(tmp33,(int)10240,(int)9728);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(144)
					tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(144)
					tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(144)
					tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(144)
					::haxor::platform::graphics::OpenGL tmp32 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					int tmp33 = target;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(144)
					tmp32->TexParameteri(tmp33,(int)10240,(int)9729);
				}
				;break;
			}
		}
		HX_STACK_LINE(146)
		::haxor::core::TextureType tmp5 = p_texture->get_type();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		bool tmp6 = (tmp5 != ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		if ((tmp6)){
			HX_STACK_LINE(149)
			::haxor::graphics::texture::Texture tmp7 = p_texture;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			this->Alloc(tmp7);
		}
		HX_STACK_LINE(152)
		::haxor::core::TextureType tmp7 = p_texture->get_type();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		bool tmp8 = (tmp7 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(152)
		if ((tmp8)){
			HX_STACK_LINE(154)
			::haxor::graphics::texture::RenderTexture rt = ((::haxor::graphics::texture::RenderTexture)(p_texture));		HX_STACK_VAR(rt,"rt");
			HX_STACK_LINE(156)
			::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			int tmp10 = tmp9->CreateFramebuffer();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			int fb_id = tmp10;		HX_STACK_VAR(fb_id,"fb_id");
			HX_STACK_LINE(157)
			Array< int > tmp11 = this->framebuffers;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(157)
			int tmp12 = p_texture->__cid;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(157)
			int tmp13 = fb_id;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(157)
			tmp11[tmp12] = tmp13;
			HX_STACK_LINE(159)
			{
				HX_STACK_LINE(159)
				::haxor::platform::graphics::OpenGL tmp14 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(159)
				int tmp15 = fb_id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(159)
				tmp14->BindFramebuffer((int)36160,tmp15);
			}
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::haxor::platform::graphics::OpenGL tmp14 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(163)
				int tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(163)
				tmp14->FramebufferTexture2D((int)36160,(int)36064,(int)3553,tmp15,(int)0);
			}
			HX_STACK_LINE(165)
			bool tmp14 = (rt->m_depth != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(165)
			if ((tmp14)){
				HX_STACK_LINE(167)
				Array< int > tmp15 = this->ids;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(167)
				int tmp16 = rt->m_depth->__cid;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(167)
				int tmp17 = tmp15->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(167)
				int depth_id = tmp17;		HX_STACK_VAR(depth_id,"depth_id");
				HX_STACK_LINE(168)
				{
					HX_STACK_LINE(168)
					::haxor::platform::graphics::OpenGL tmp18 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(168)
					int tmp19 = depth_id;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(168)
					tmp18->FramebufferTexture2D((int)36160,(int)36096,(int)3553,tmp19,(int)0);
				}
			}
			else{
				HX_STACK_LINE(172)
				::haxor::platform::graphics::OpenGL tmp15 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(172)
				int tmp16 = tmp15->CreateRenderbuffer();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(172)
				int rb_id = tmp16;		HX_STACK_VAR(rb_id,"rb_id");
				HX_STACK_LINE(173)
				Array< int > tmp17 = this->renderbuffers;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(173)
				int tmp18 = p_texture->__cid;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(173)
				int tmp19 = rb_id;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(173)
				tmp17[tmp18] = tmp19;
				HX_STACK_LINE(174)
				{
					HX_STACK_LINE(174)
					::haxor::platform::graphics::OpenGL tmp20 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(174)
					int tmp21 = rb_id;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(174)
					tmp20->BindRenderbuffer((int)36161,tmp21);
				}
				HX_STACK_LINE(175)
				{
					HX_STACK_LINE(175)
					::haxor::platform::graphics::OpenGL tmp20 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(175)
					int tmp21 = rt->m_width;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(175)
					int tmp22 = rt->m_height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(175)
					tmp20->RenderbufferStorage((int)36161,(int)33189,tmp21,tmp22);
				}
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::haxor::platform::graphics::OpenGL tmp20 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					int tmp21 = rb_id;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(176)
					tmp20->FramebufferRenderbuffer((int)36160,(int)36096,(int)36161,tmp21);
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::haxor::platform::graphics::OpenGL tmp15 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(179)
				int tmp16 = ::haxor::graphics::GL_obj::_NULL;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(179)
				tmp15->BindFramebuffer((int)36160,tmp16);
			}
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				::haxor::platform::graphics::OpenGL tmp15 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(180)
				int tmp16 = ::haxor::graphics::GL_obj::_NULL;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(180)
				tmp15->BindRenderbuffer((int)36161,tmp16);
			}
			HX_STACK_LINE(181)
			this->Unbind();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,Create,(void))

Void TextureContext_obj::Bind( ::haxor::graphics::texture::Texture p_texture,hx::Null< int >  __o_p_slot){
int p_slot = __o_p_slot.Default(-1);
	HX_STACK_FRAME("haxor.context.TextureContext","Bind",0x4f3d09ec,"haxor.context.TextureContext.Bind","haxor/context/TextureContext.hx",191,0x7978261d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_texture,"p_texture")
	HX_STACK_ARG(p_slot,"p_slot")
{
		HX_STACK_LINE(192)
		bool tmp = (p_slot < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		if ((tmp)){
			HX_STACK_LINE(194)
			::haxor::graphics::texture::Texture tmp1 = p_texture;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(194)
			this->ApplyBind(tmp1,false);
		}
		else{
			HX_STACK_LINE(198)
			Array< ::Dynamic > tmp1 = this->bind;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(198)
			int tmp2 = p_slot;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			::haxor::graphics::texture::Texture tmp3 = tmp1->__get(tmp2).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			::haxor::graphics::texture::Texture tmp4 = p_texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			if ((tmp5)){
				HX_STACK_LINE(200)
				int tmp6 = this->active;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				int tmp7 = p_slot;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				if ((tmp8)){
					HX_STACK_LINE(202)
					{
						HX_STACK_LINE(202)
						::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(202)
						int tmp10 = ((int)33984 + p_slot);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(202)
						tmp9->ActiveTexture(tmp10);
					}
					HX_STACK_LINE(203)
					this->active = p_slot;
				}
				HX_STACK_LINE(205)
				::haxor::graphics::texture::Texture tmp9 = p_texture;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(205)
				this->ApplyBind(tmp9,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureContext_obj,Bind,(void))

Void TextureContext_obj::ApplyBind( ::haxor::graphics::texture::Texture p_texture,bool p_force){
{
		HX_STACK_FRAME("haxor.context.TextureContext","ApplyBind",0x00fd57bc,"haxor.context.TextureContext.ApplyBind","haxor/context/TextureContext.hx",215,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_ARG(p_force,"p_force")
		HX_STACK_LINE(216)
		::haxor::graphics::texture::Texture tmp = this->bound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		::haxor::graphics::texture::Texture tmp1 = p_texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		if ((tmp3)){
			HX_STACK_LINE(216)
			tmp4 = p_force;
		}
		else{
			HX_STACK_LINE(216)
			tmp4 = true;
		}
		HX_STACK_LINE(216)
		if ((tmp4)){
			HX_STACK_LINE(218)
			Array< ::Dynamic > tmp5 = this->bind;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			int tmp6 = this->active;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			::haxor::graphics::texture::Texture tmp7 = p_texture;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			tmp5[tmp6] = tmp7;
			HX_STACK_LINE(219)
			Array< int > tmp8 = this->ids;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			int tmp9 = p_texture->__cid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(219)
			int tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(219)
			int id = tmp10;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(220)
			::haxor::core::TextureType tmp11 = p_texture->get_type();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			bool tmp12 = (tmp11 == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(220)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(220)
			if ((tmp12)){
				HX_STACK_LINE(220)
				tmp13 = (int)3553;
			}
			else{
				HX_STACK_LINE(220)
				::haxor::core::TextureType tmp14 = p_texture->get_type();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(220)
				bool tmp15 = (tmp14 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(220)
				if ((tmp15)){
					HX_STACK_LINE(220)
					tmp13 = (int)3553;
				}
				else{
					HX_STACK_LINE(220)
					::haxor::core::TextureType tmp16 = p_texture->get_type();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(220)
					bool tmp17 = (tmp16 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(220)
					if ((tmp17)){
						HX_STACK_LINE(220)
						tmp13 = (int)34067;
					}
					else{
						HX_STACK_LINE(220)
						tmp13 = (int)3553;
					}
				}
			}
			HX_STACK_LINE(220)
			int target = tmp13;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				::haxor::platform::graphics::OpenGL tmp14 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(221)
				int tmp15 = target;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(221)
				int tmp16 = id;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(221)
				tmp14->BindTexture(tmp15,tmp16);
			}
			HX_STACK_LINE(222)
			this->bound = p_texture;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureContext_obj,ApplyBind,(void))

Void TextureContext_obj::Unbind( ){
{
		HX_STACK_FRAME("haxor.context.TextureContext","Unbind",0xd1e2ba85,"haxor.context.TextureContext.Unbind","haxor/context/TextureContext.hx",230,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		::haxor::graphics::texture::Texture tmp = this->bound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(233)
			this->bound = null();
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				::haxor::platform::graphics::OpenGL tmp2 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(234)
				int tmp3 = ::haxor::graphics::GL_obj::_NULL;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(234)
				tmp2->BindTexture((int)3553,tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureContext_obj,Unbind,(void))

Void TextureContext_obj::BindTarget( ::haxor::graphics::texture::RenderTexture rt){
{
		HX_STACK_FRAME("haxor.context.TextureContext","BindTarget",0x2d74aa5d,"haxor.context.TextureContext.BindTarget","haxor/context/TextureContext.hx",244,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rt,"rt")
		HX_STACK_LINE(245)
		bool tmp = (rt == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		if ((tmp)){
			HX_STACK_LINE(247)
			::haxor::graphics::texture::RenderTexture tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(247)
			::haxor::graphics::texture::RenderTexture tmp2 = rt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(247)
			if ((tmp3)){
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					::haxor::platform::graphics::OpenGL tmp4 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(249)
					int tmp5 = ::haxor::graphics::GL_obj::_NULL;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(249)
					tmp4->BindFramebuffer((int)36160,tmp5);
				}
				HX_STACK_LINE(250)
				{
					HX_STACK_LINE(250)
					::haxor::platform::graphics::OpenGL tmp4 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(250)
					int tmp5 = ::haxor::graphics::GL_obj::_NULL;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(250)
					tmp4->BindRenderbuffer((int)36161,tmp5);
				}
				HX_STACK_LINE(251)
				this->target = null();
			}
		}
		else{
			HX_STACK_LINE(256)
			::haxor::graphics::texture::RenderTexture tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			::haxor::graphics::texture::RenderTexture tmp2 = rt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			if ((tmp3)){
				HX_STACK_LINE(258)
				Array< int > tmp4 = this->framebuffers;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(258)
				int tmp5 = rt->__cid;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(258)
				int tmp6 = tmp4->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(258)
				int fb_id = tmp6;		HX_STACK_VAR(fb_id,"fb_id");
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(259)
					int tmp8 = fb_id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(259)
					tmp7->BindFramebuffer((int)36160,tmp8);
				}
				HX_STACK_LINE(260)
				bool tmp7 = (rt->m_depth == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(260)
				if ((tmp7)){
					HX_STACK_LINE(262)
					Array< int > tmp8 = this->renderbuffers;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(262)
					int tmp9 = rt->__cid;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(262)
					int tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(262)
					int rb_id = tmp10;		HX_STACK_VAR(rb_id,"rb_id");
					HX_STACK_LINE(263)
					{
						HX_STACK_LINE(263)
						::haxor::platform::graphics::OpenGL tmp11 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(263)
						int tmp12 = rb_id;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(263)
						tmp11->BindRenderbuffer((int)36161,tmp12);
					}
				}
				HX_STACK_LINE(265)
				this->target = rt;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,BindTarget,(void))

Void TextureContext_obj::UpdateParameters( ::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.context.TextureContext","UpdateParameters",0x22b5acc2,"haxor.context.TextureContext.UpdateParameters","haxor/context/TextureContext.hx",277,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(278)
		::haxor::core::TextureType tmp = p_texture->get_type();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		bool tmp1 = (tmp == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		if ((tmp1)){
			HX_STACK_LINE(278)
			tmp2 = (int)3553;
		}
		else{
			HX_STACK_LINE(278)
			::haxor::core::TextureType tmp3 = p_texture->get_type();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(278)
			bool tmp4 = (tmp3 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			if ((tmp4)){
				HX_STACK_LINE(278)
				tmp2 = (int)3553;
			}
			else{
				HX_STACK_LINE(278)
				::haxor::core::TextureType tmp5 = p_texture->get_type();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(278)
				bool tmp6 = (tmp5 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(278)
				if ((tmp6)){
					HX_STACK_LINE(278)
					tmp2 = (int)34067;
				}
				else{
					HX_STACK_LINE(278)
					tmp2 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(278)
		int target = tmp2;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(280)
		::haxor::graphics::texture::Texture tmp3 = p_texture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(280)
		this->Bind(tmp3,null());
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			::haxor::platform::graphics::OpenGL tmp4 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(282)
			int tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(282)
			int tmp6 = (int(p_texture->m_wrap) & int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(282)
			bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(282)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(282)
			if ((tmp7)){
				HX_STACK_LINE(282)
				tmp8 = (int)33071;
			}
			else{
				HX_STACK_LINE(282)
				tmp8 = (int)10497;
			}
			HX_STACK_LINE(282)
			tmp4->TexParameteri(tmp5,(int)10242,tmp8);
		}
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			::haxor::platform::graphics::OpenGL tmp4 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(283)
			int tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(283)
			int tmp6 = (int(p_texture->m_wrap) & int((int)4));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(283)
			bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(283)
			if ((tmp7)){
				HX_STACK_LINE(283)
				tmp8 = (int)33071;
			}
			else{
				HX_STACK_LINE(283)
				tmp8 = (int)10497;
			}
			HX_STACK_LINE(283)
			tmp4->TexParameteri(tmp5,(int)10243,tmp8);
		}
		HX_STACK_LINE(286)
		bool tmp4 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY_ENABLED;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(286)
		if ((tmp4)){
			HX_STACK_LINE(286)
			int tmp5 = p_texture->m_aniso;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			Float tmp6 = ::Math_obj::max((int)1,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(286)
			Float p_value = tmp6;		HX_STACK_VAR(p_value,"p_value");
			HX_STACK_LINE(286)
			::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(286)
			int tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(286)
			int tmp9 = ::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(286)
			Float tmp10 = p_value;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(286)
			tmp7->TexParameterf(tmp8,tmp9,tmp10);
		}
		HX_STACK_LINE(288)
		int minf = p_texture->m_minFilter;		HX_STACK_VAR(minf,"minf");
		HX_STACK_LINE(289)
		int magf = p_texture->m_magFilter;		HX_STACK_VAR(magf,"magf");
		HX_STACK_LINE(291)
		bool is_half = false;		HX_STACK_VAR(is_half,"is_half");
		HX_STACK_LINE(292)
		int tmp5 = p_texture->m_format;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(292)
		int tmp6 = ::haxor::core::PixelFormat_obj::Half;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		if ((tmp7)){
			HX_STACK_LINE(292)
			is_half = true;
		}
		HX_STACK_LINE(293)
		int tmp8 = p_texture->m_format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(293)
		int tmp9 = ::haxor::core::PixelFormat_obj::Half3;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(293)
		bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		if ((tmp10)){
			HX_STACK_LINE(293)
			is_half = true;
		}
		HX_STACK_LINE(294)
		int tmp11 = p_texture->m_format;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(294)
		int tmp12 = ::haxor::core::PixelFormat_obj::Half4;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(294)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(294)
		if ((tmp13)){
			HX_STACK_LINE(294)
			is_half = true;
		}
		HX_STACK_LINE(296)
		bool is_float = false;		HX_STACK_VAR(is_float,"is_float");
		HX_STACK_LINE(297)
		int tmp14 = p_texture->m_format;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(297)
		int tmp15 = ::haxor::core::PixelFormat_obj::_Float;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(297)
		bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(297)
		if ((tmp16)){
			HX_STACK_LINE(297)
			is_float = true;
		}
		HX_STACK_LINE(298)
		int tmp17 = p_texture->m_format;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(298)
		int tmp18 = ::haxor::core::PixelFormat_obj::Float3;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(298)
		bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(298)
		if ((tmp19)){
			HX_STACK_LINE(298)
			is_float = true;
		}
		HX_STACK_LINE(299)
		int tmp20 = p_texture->m_format;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(299)
		int tmp21 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(299)
		bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(299)
		if ((tmp22)){
			HX_STACK_LINE(299)
			is_float = true;
		}
		HX_STACK_LINE(301)
		bool tmp23 = is_half;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(301)
		if ((tmp23)){
			HX_STACK_LINE(302)
			bool tmp24 = ::haxor::graphics::GL_obj::TEXTURE_HALF_LINEAR;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(302)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(302)
			if ((tmp25)){
				HX_STACK_LINE(304)
				minf = (int)0;
				HX_STACK_LINE(305)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(308)
		bool tmp24 = is_float;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(308)
		if ((tmp24)){
			HX_STACK_LINE(309)
			bool tmp25 = ::haxor::graphics::GL_obj::TEXTURE_FLOAT_LINEAR;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(309)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(309)
			if ((tmp26)){
				HX_STACK_LINE(311)
				minf = (int)0;
				HX_STACK_LINE(312)
				magf = (int)0;
			}
		}
		HX_STACK_LINE(315)
		int tmp25 = minf;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(315)
		switch( (int)(tmp25)){
			case (int)0: {
				HX_STACK_LINE(317)
				::haxor::platform::graphics::OpenGL tmp26 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(317)
				int tmp27 = target;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(317)
				tmp26->TexParameteri(tmp27,(int)10241,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(318)
				::haxor::platform::graphics::OpenGL tmp26 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(318)
				int tmp27 = target;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(318)
				tmp26->TexParameteri(tmp27,(int)10241,(int)9986);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(319)
				::haxor::platform::graphics::OpenGL tmp26 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(319)
				int tmp27 = target;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(319)
				tmp26->TexParameteri(tmp27,(int)10241,(int)9984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(320)
				::haxor::platform::graphics::OpenGL tmp26 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(320)
				int tmp27 = target;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(320)
				tmp26->TexParameteri(tmp27,(int)10241,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(321)
				::haxor::platform::graphics::OpenGL tmp26 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(321)
				int tmp27 = target;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(321)
				tmp26->TexParameteri(tmp27,(int)10241,(int)9987);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(322)
				::haxor::platform::graphics::OpenGL tmp26 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(322)
				int tmp27 = target;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(322)
				tmp26->TexParameteri(tmp27,(int)10241,(int)9987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(323)
				::haxor::platform::graphics::OpenGL tmp26 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(323)
				int tmp27 = target;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(323)
				tmp26->TexParameteri(tmp27,(int)10241,(int)9985);
			}
			;break;
		}
		HX_STACK_LINE(328)
		int tmp26 = magf;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(328)
		switch( (int)(tmp26)){
			case (int)0: {
				HX_STACK_LINE(330)
				::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(330)
				int tmp28 = target;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(330)
				tmp27->TexParameteri(tmp28,(int)10240,(int)9728);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(331)
				::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(331)
				int tmp28 = target;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(331)
				tmp27->TexParameteri(tmp28,(int)10240,(int)9728);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(332)
				::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(332)
				int tmp28 = target;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(332)
				tmp27->TexParameteri(tmp28,(int)10240,(int)9728);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(333)
				::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(333)
				int tmp28 = target;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(333)
				tmp27->TexParameteri(tmp28,(int)10240,(int)9729);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(334)
				::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(334)
				int tmp28 = target;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(334)
				tmp27->TexParameteri(tmp28,(int)10240,(int)9729);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(335)
				::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(335)
				int tmp28 = target;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(335)
				tmp27->TexParameteri(tmp28,(int)10240,(int)9729);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(336)
				::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(336)
				int tmp28 = target;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(336)
				tmp27->TexParameteri(tmp28,(int)10240,(int)9729);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,UpdateParameters,(void))

Void TextureContext_obj::Update( ::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.context.TextureContext","Update",0xf9fc43f8,"haxor.context.TextureContext.Update","haxor/context/TextureContext.hx",347,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(348)
		::haxor::core::TextureType tmp = p_texture->get_type();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		bool tmp1 = (tmp == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(348)
		if ((tmp1)){
			HX_STACK_LINE(348)
			tmp2 = (int)3553;
		}
		else{
			HX_STACK_LINE(348)
			::haxor::core::TextureType tmp3 = p_texture->get_type();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(348)
			bool tmp4 = (tmp3 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(348)
			if ((tmp4)){
				HX_STACK_LINE(348)
				tmp2 = (int)3553;
			}
			else{
				HX_STACK_LINE(348)
				::haxor::core::TextureType tmp5 = p_texture->get_type();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(348)
				bool tmp6 = (tmp5 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(348)
				if ((tmp6)){
					HX_STACK_LINE(348)
					tmp2 = (int)34067;
				}
				else{
					HX_STACK_LINE(348)
					tmp2 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(348)
		int target = tmp2;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(350)
		::haxor::graphics::texture::Texture tmp3 = p_texture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(350)
		this->Bind(tmp3,null());
		HX_STACK_LINE(351)
		bool tmp4 = (target == (int)34067);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(351)
		if ((tmp4)){
			HX_STACK_LINE(353)
			::haxor::graphics::texture::TextureCube tc = ((::haxor::graphics::texture::TextureCube)(p_texture));		HX_STACK_VAR(tc,"tc");
			HX_STACK_LINE(354)
			::haxor::graphics::texture::Texture tmp5 = tc->m_faces->__get((int)0).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(354)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(354)
			if ((tmp6)){
				HX_STACK_LINE(354)
				::haxor::graphics::texture::Texture tmp7 = tc->m_faces->__get((int)0).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(354)
				this->WriteTexture((int)34069,tmp7);
			}
			HX_STACK_LINE(355)
			::haxor::graphics::texture::Texture tmp7 = tc->m_faces->__get((int)1).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(355)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(355)
			if ((tmp8)){
				HX_STACK_LINE(355)
				int tmp9 = (int)34070;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(355)
				::haxor::graphics::texture::Texture tmp10 = tc->m_faces->__get((int)1).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(355)
				this->WriteTexture(tmp9,tmp10);
			}
			HX_STACK_LINE(356)
			::haxor::graphics::texture::Texture tmp9 = tc->m_faces->__get((int)2).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(356)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(356)
			if ((tmp10)){
				HX_STACK_LINE(356)
				int tmp11 = (int)34071;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(356)
				::haxor::graphics::texture::Texture tmp12 = tc->m_faces->__get((int)2).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(356)
				this->WriteTexture(tmp11,tmp12);
			}
			HX_STACK_LINE(357)
			::haxor::graphics::texture::Texture tmp11 = tc->m_faces->__get((int)3).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(357)
			bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(357)
			if ((tmp12)){
				HX_STACK_LINE(357)
				int tmp13 = (int)34072;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(357)
				::haxor::graphics::texture::Texture tmp14 = tc->m_faces->__get((int)3).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(357)
				this->WriteTexture(tmp13,tmp14);
			}
			HX_STACK_LINE(358)
			::haxor::graphics::texture::Texture tmp13 = tc->m_faces->__get((int)4).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(358)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(358)
			if ((tmp14)){
				HX_STACK_LINE(358)
				int tmp15 = (int)34073;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(358)
				::haxor::graphics::texture::Texture tmp16 = tc->m_faces->__get((int)4).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(358)
				this->WriteTexture(tmp15,tmp16);
			}
			HX_STACK_LINE(359)
			::haxor::graphics::texture::Texture tmp15 = tc->m_faces->__get((int)5).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(359)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(359)
			if ((tmp16)){
				HX_STACK_LINE(359)
				int tmp17 = (int)34074;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(359)
				::haxor::graphics::texture::Texture tmp18 = tc->m_faces->__get((int)5).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(359)
				this->WriteTexture(tmp17,tmp18);
			}
		}
		else{
			HX_STACK_LINE(363)
			int tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(363)
			::haxor::graphics::texture::Texture tmp6 = p_texture;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			this->WriteTexture(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,Update,(void))

Void TextureContext_obj::UploadTexture( ::haxor::graphics::texture::Texture2D p_texture,int p_x,int p_y,int p_width,int p_height,int p_steps,Dynamic p_on_complete){
{
		HX_STACK_FRAME("haxor.context.TextureContext","UploadTexture",0x305b46cb,"haxor.context.TextureContext.UploadTexture","haxor/context/TextureContext.hx",373,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_steps,"p_steps")
		HX_STACK_ARG(p_on_complete,"p_on_complete")
		HX_STACK_LINE(372)
		::haxor::context::TextureContext _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(374)
		::haxor::graphics::Bitmap b = p_texture->m_data;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(375)
		Array< int > py = Array_obj< int >::__new().Add(p_y);		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(376)
		int tmp = p_texture->m_format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		int tmp1 = ::haxor::context::TextureContext_obj::FormatToChannelLayout(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		int chn_fmt = tmp1;		HX_STACK_VAR(chn_fmt,"chn_fmt");
		HX_STACK_LINE(377)
		int tmp2 = p_texture->m_format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		int tmp3 = ::haxor::context::TextureContext_obj::FormatToChannelBits(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		int chn_bit = tmp3;		HX_STACK_VAR(chn_bit,"chn_bit");
		HX_STACK_LINE(378)
		int tmp4 = p_texture->m_format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(378)
		int tmp5 = ::haxor::context::TextureContext_obj::FormatToChannelType(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(378)
		int chn_type = tmp5;		HX_STACK_VAR(chn_type,"chn_type");
		HX_STACK_LINE(379)
		Float tmp6 = (Float(p_height) / Float(p_steps));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(379)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(379)
		int steps = tmp7;		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(380)
		bool tmp8 = (steps <= (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(380)
		if ((tmp8)){
			HX_STACK_LINE(380)
			steps = (int)1;
		}

		HX_BEGIN_LOCAL_FUNC_S11(hx::LocalFunc,_Function_1_1,int,steps,int,p_x,int,p_height,::haxor::context::TextureContext,_g,int,chn_fmt,::haxor::graphics::texture::Texture2D,p_texture,::haxor::graphics::Bitmap,b,int,chn_type,Dynamic,p_on_complete,Array< int >,py,int,p_width)
		int __ArgCount() const { return 1; }
		bool run(Float t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/context/TextureContext.hx",382,0x7978261d)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(383)
				bool tmp9 = (py->__get((int)0) >= p_height);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(383)
				if ((tmp9)){
					HX_STACK_LINE(383)
					bool tmp10 = (p_on_complete != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(383)
					if ((tmp10)){
						HX_STACK_LINE(383)
						p_on_complete().Cast< Void >();
					}
					HX_STACK_LINE(383)
					return false;
				}
				HX_STACK_LINE(384)
				::haxor::graphics::texture::Texture2D tmp10 = p_texture;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(384)
				_g->Bind(tmp10,null());
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(385)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(385)
					while((true)){
						HX_STACK_LINE(385)
						bool tmp11 = (_g1 < steps);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(385)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(385)
						if ((tmp12)){
							HX_STACK_LINE(385)
							break;
						}
						HX_STACK_LINE(385)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(385)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(387)
						bool tmp14 = (py->__get((int)0) < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(387)
						if ((tmp14)){
							HX_STACK_LINE(387)
							(py[(int)0])++;
							HX_STACK_LINE(387)
							continue;
						}
						HX_STACK_LINE(388)
						bool tmp15 = (py->__get((int)0) >= b->m_height);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(388)
						if ((tmp15)){
							HX_STACK_LINE(388)
							bool tmp16 = (p_on_complete != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(388)
							if ((tmp16)){
								HX_STACK_LINE(388)
								p_on_complete().Cast< Void >();
							}
							HX_STACK_LINE(388)
							return false;
						}
						HX_STACK_LINE(389)
						int tmp16 = p_x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(389)
						int tmp17 = (py->__get((int)0) * p_width);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(389)
						int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(389)
						int tmp19 = b->m_channels;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(389)
						int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(389)
						int pos = tmp20;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(390)
						int tmp21 = (p_width * b->m_channels);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(390)
						int len = tmp21;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(391)
						::haxor::io::Buffer tmp22 = b->get_buffer();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(391)
						int tmp23 = pos;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(391)
						int tmp24 = len;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(391)
						tmp22->SetViewSlice(tmp23,tmp24);
						HX_STACK_LINE(392)
						{
							HX_STACK_LINE(392)
							::haxor::io::Buffer tmp25 = b->get_buffer();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(392)
							::haxor::io::Buffer p_data = tmp25;		HX_STACK_VAR(p_data,"p_data");
							HX_STACK_LINE(392)
							::haxor::platform::graphics::OpenGL tmp26 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(392)
							int tmp27 = p_x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(392)
							int tmp28 = py->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(392)
							int tmp29 = p_width;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(392)
							int tmp30 = chn_fmt;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(392)
							int tmp31 = chn_type;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(392)
							::haxor::io::Buffer tmp32 = p_data;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(392)
							tmp26->TexSubImage2D((int)3553,(int)0,tmp27,tmp28,tmp29,(int)1,tmp30,tmp31,tmp32);
						}
						HX_STACK_LINE(393)
						::haxor::io::Buffer tmp25 = b->get_buffer();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(393)
						tmp25->ResetSlice();
						HX_STACK_LINE(394)
						(py[(int)0])++;
					}
				}
				HX_STACK_LINE(396)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(381)
		::haxor::thread::Activity tmp9 = ::haxor::thread::Activity_obj::__new( Dynamic(new _Function_1_1(steps,p_x,p_height,_g,chn_fmt,p_texture,b,chn_type,p_on_complete,py,p_width)),false,true);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(381)
		::haxor::thread::Activity ua = tmp9;		HX_STACK_VAR(ua,"ua");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(TextureContext_obj,UploadTexture,(void))

Void TextureContext_obj::WriteTexture( int p_target,::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.context.TextureContext","WriteTexture",0x9ebbc8eb,"haxor.context.TextureContext.WriteTexture","haxor/context/TextureContext.hx",406,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(407)
		int w = p_texture->m_width;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(408)
		int h = p_texture->m_height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(409)
		int tmp = p_texture->m_format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(409)
		int tmp1 = ::haxor::context::TextureContext_obj::FormatToChannelLayout(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(409)
		int chn_fmt = tmp1;		HX_STACK_VAR(chn_fmt,"chn_fmt");
		HX_STACK_LINE(410)
		int tmp2 = p_texture->m_format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(410)
		int tmp3 = ::haxor::context::TextureContext_obj::FormatToChannelBits(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(410)
		int chn_bit = tmp3;		HX_STACK_VAR(chn_bit,"chn_bit");
		HX_STACK_LINE(411)
		int tmp4 = p_texture->m_format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		int tmp5 = ::haxor::context::TextureContext_obj::FormatToChannelType(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(411)
		int chn_type = tmp5;		HX_STACK_VAR(chn_type,"chn_type");
		HX_STACK_LINE(413)
		int tmp6 = p_texture->m_format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(413)
		int tmp7 = ::haxor::core::PixelFormat_obj::Depth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(413)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(413)
		if ((tmp8)){
			HX_STACK_LINE(415)
			::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(415)
			int tmp10 = p_target;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			int tmp11 = chn_fmt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(415)
			int tmp12 = w;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(415)
			int tmp13 = h;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(415)
			int tmp14 = chn_fmt;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(415)
			int tmp15 = chn_type;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(415)
			tmp9->TexImage2DAlloc(tmp10,(int)0,tmp11,tmp12,tmp13,(int)0,tmp14,tmp15);
		}
		else{
			HX_STACK_LINE(419)
			::haxor::core::TextureType tmp9 = p_texture->get_type();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(419)
			bool tmp10 = (tmp9 == ::haxor::core::TextureType_obj::Compute);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(419)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(419)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(419)
			if ((tmp11)){
				HX_STACK_LINE(419)
				::haxor::core::TextureType tmp13 = p_texture->get_type();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(419)
				::haxor::core::TextureType tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(419)
				tmp12 = (tmp14 == ::haxor::core::TextureType_obj::Texture2D);
			}
			else{
				HX_STACK_LINE(419)
				tmp12 = true;
			}
			HX_STACK_LINE(419)
			bool is_ti2d = tmp12;		HX_STACK_VAR(is_ti2d,"is_ti2d");
			HX_STACK_LINE(420)
			bool tmp13 = is_ti2d;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(420)
			if ((tmp13)){
				HX_STACK_LINE(422)
				::haxor::graphics::texture::Texture2D t2d = ((::haxor::graphics::texture::Texture2D)(p_texture));		HX_STACK_VAR(t2d,"t2d");
				HX_STACK_LINE(423)
				{
					HX_STACK_LINE(423)
					::haxor::io::Buffer tmp14 = t2d->m_data->get_buffer();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(423)
					::haxor::io::Buffer p_data = tmp14;		HX_STACK_VAR(p_data,"p_data");
					HX_STACK_LINE(423)
					::haxor::platform::graphics::OpenGL tmp15 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(423)
					int tmp16 = p_target;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(423)
					int tmp17 = chn_fmt;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(423)
					int tmp18 = w;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(423)
					int tmp19 = h;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(423)
					int tmp20 = chn_bit;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(423)
					int tmp21 = chn_type;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(423)
					::haxor::io::Buffer tmp22 = p_data;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(423)
					tmp15->TexImage2D(tmp16,(int)0,tmp17,tmp18,tmp19,(int)0,tmp20,tmp21,tmp22);
				}
			}
			else{
				HX_STACK_LINE(426)
				::haxor::core::TextureType tmp14 = p_texture->get_type();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(426)
				bool tmp15 = (tmp14 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(426)
				if ((tmp15)){
					HX_STACK_LINE(428)
					::haxor::graphics::texture::RenderTexture rt = ((::haxor::graphics::texture::RenderTexture)(p_texture));		HX_STACK_VAR(rt,"rt");
					HX_STACK_LINE(429)
					Array< int > tmp16 = this->ids;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(429)
					int tmp17 = rt->__cid;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(429)
					int tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(429)
					int id = tmp18;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(430)
					{
						HX_STACK_LINE(430)
						::haxor::platform::graphics::OpenGL tmp19 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(430)
						int tmp20 = p_target;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(430)
						int tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(430)
						tmp19->FramebufferTexture2D((int)36160,(int)36064,tmp20,tmp21,(int)0);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureContext_obj,WriteTexture,(void))

Void TextureContext_obj::CrossToCubemap( ::haxor::graphics::texture::TextureCube tc,::haxor::graphics::texture::Texture2D cross){
{
		HX_STACK_FRAME("haxor.context.TextureContext","CrossToCubemap",0x014a21db,"haxor.context.TextureContext.CrossToCubemap","haxor/context/TextureContext.hx",441,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tc,"tc")
		HX_STACK_ARG(cross,"cross")
		HX_STACK_LINE(440)
		::haxor::context::TextureContext _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(442)
		::haxor::core::TextureType tmp = tc->get_type();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		bool tmp1 = (tmp == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		if ((tmp1)){
			HX_STACK_LINE(442)
			tmp2 = (int)3553;
		}
		else{
			HX_STACK_LINE(442)
			::haxor::core::TextureType tmp3 = tc->get_type();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(442)
			bool tmp4 = (tmp3 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(442)
			if ((tmp4)){
				HX_STACK_LINE(442)
				tmp2 = (int)3553;
			}
			else{
				HX_STACK_LINE(442)
				::haxor::core::TextureType tmp5 = tc->get_type();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(442)
				bool tmp6 = (tmp5 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(442)
				if ((tmp6)){
					HX_STACK_LINE(442)
					tmp2 = (int)34067;
				}
				else{
					HX_STACK_LINE(442)
					tmp2 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(442)
		int target = tmp2;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(443)
		int tmp3 = tc->m_format;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		int tmp4 = ::haxor::context::TextureContext_obj::FormatToChannelLayout(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		int chn_fmt = tmp4;		HX_STACK_VAR(chn_fmt,"chn_fmt");
		HX_STACK_LINE(444)
		int tmp5 = tc->m_format;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		int tmp6 = ::haxor::context::TextureContext_obj::FormatToChannelBits(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(444)
		int chn_bit = tmp6;		HX_STACK_VAR(chn_bit,"chn_bit");
		HX_STACK_LINE(445)
		int tmp7 = tc->m_format;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(445)
		int tmp8 = ::haxor::context::TextureContext_obj::FormatToChannelType(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		int chn_type = tmp8;		HX_STACK_VAR(chn_type,"chn_type");
		HX_STACK_LINE(446)
		Array< int > tmp9 = Array_obj< int >::__new().Add((int)1).Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)9);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(446)
		Array< int > cells = tmp9;		HX_STACK_VAR(cells,"cells");
		HX_STACK_LINE(448)
		Array< int > tmp10 = Array_obj< int >::__new().Add((int)34072).Add((int)34070).Add((int)34073).Add((int)34069).Add((int)34074).Add((int)34071);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(448)
		Array< int > sides = tmp10;		HX_STACK_VAR(sides,"sides");
		HX_STACK_LINE(456)
		Float tmp11 = (Float(cross->m_width) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(456)
		int cw = ((int)(tmp11));		HX_STACK_VAR(cw,"cw");
		HX_STACK_LINE(457)
		Float tmp12 = (Float(cross->m_height) / Float((int)3));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(457)
		int ch = ((int)(tmp12));		HX_STACK_VAR(ch,"ch");
		HX_STACK_LINE(458)
		int tmp13 = cross->m_data->m_channels;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(458)
		::haxor::io::Buffer tmp14 = cross->m_data->get_buffer();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(458)
		int tmp15 = tmp14->get_bytesPerElement();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(458)
		int tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(458)
		int bpp = tmp16;		HX_STACK_VAR(bpp,"bpp");
		HX_STACK_LINE(459)
		int tmp17 = (cw * bpp);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(459)
		int line_bytes = tmp17;		HX_STACK_VAR(line_bytes,"line_bytes");
		HX_STACK_LINE(460)
		int tmp18 = (cross->m_width * bpp);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(460)
		int line_offset = tmp18;		HX_STACK_VAR(line_offset,"line_offset");

		HX_BEGIN_LOCAL_FUNC_S12(hx::LocalFunc,_Function_1_1,int,chn_bit,::haxor::graphics::texture::TextureCube,tc,Array< int >,sides,int,ch,::haxor::context::TextureContext,_g,int,cw,int,chn_fmt,int,bpp,int,chn_type,int,line_bytes,::haxor::graphics::texture::Texture2D,cross,Array< int >,cells)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/context/TextureContext.hx",463,0x7978261d)
			{
				HX_STACK_LINE(464)
				::haxor::graphics::texture::TextureCube tmp19 = tc;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(464)
				_g->Bind(tmp19,null());
				HX_STACK_LINE(465)
				{
					HX_STACK_LINE(465)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(465)
					int _g1 = cells->length;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(465)
					while((true)){
						HX_STACK_LINE(465)
						bool tmp20 = (_g2 < _g1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(465)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(465)
						if ((tmp21)){
							HX_STACK_LINE(465)
							break;
						}
						HX_STACK_LINE(465)
						int tmp22 = (_g2)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(465)
						int i = tmp22;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(467)
						int tmp23 = cells->__get(i);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(467)
						int cid = tmp23;		HX_STACK_VAR(cid,"cid");
						HX_STACK_LINE(468)
						int tmp24 = sides->__get(i);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(468)
						int sid = tmp24;		HX_STACK_VAR(sid,"sid");
						HX_STACK_LINE(469)
						int tmp25 = hx::Mod(cid,(int)4);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(469)
						int tmp26 = cw;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(469)
						int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(469)
						int px = tmp27;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(470)
						Float tmp28 = (Float(cid) / Float((int)4));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(470)
						int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(470)
						Float tmp30 = ((Float)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(470)
						int tmp31 = ch;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(470)
						Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(470)
						int py = ((int)(tmp32));		HX_STACK_VAR(py,"py");
						HX_STACK_LINE(471)
						int tmp33 = px;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(471)
						int tmp34 = (py * cross->m_width);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(471)
						int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(471)
						int pos = tmp35;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(472)
						{
							HX_STACK_LINE(472)
							::haxor::platform::graphics::OpenGL tmp36 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(472)
							int tmp37 = sid;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(472)
							int tmp38 = chn_fmt;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(472)
							int tmp39 = cw;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(472)
							int tmp40 = ch;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(472)
							int tmp41 = chn_bit;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(472)
							int tmp42 = chn_type;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(472)
							tmp36->TexImage2DAlloc(tmp37,(int)0,tmp38,tmp39,tmp40,(int)0,tmp41,tmp42);
						}
						HX_STACK_LINE(473)
						{
							HX_STACK_LINE(473)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(473)
							while((true)){
								HX_STACK_LINE(473)
								bool tmp36 = (_g3 < ch);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(473)
								bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(473)
								if ((tmp37)){
									HX_STACK_LINE(473)
									break;
								}
								HX_STACK_LINE(473)
								int tmp38 = (_g3)++;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(473)
								int j = tmp38;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(475)
								::haxor::io::Buffer tmp39 = cross->m_data->get_buffer();		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(475)
								int tmp40 = (pos * bpp);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(475)
								int tmp41 = line_bytes;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(475)
								tmp39->SetViewSlice(tmp40,tmp41);
								HX_STACK_LINE(476)
								{
									HX_STACK_LINE(476)
									::haxor::io::Buffer tmp42 = cross->m_data->get_buffer();		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(476)
									::haxor::io::Buffer p_data = tmp42;		HX_STACK_VAR(p_data,"p_data");
									HX_STACK_LINE(476)
									::haxor::platform::graphics::OpenGL tmp43 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(476)
									int tmp44 = sid;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(476)
									int tmp45 = (ch - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(476)
									int tmp46 = j;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(476)
									int tmp47 = (tmp45 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(476)
									int tmp48 = cw;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(476)
									int tmp49 = chn_fmt;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(476)
									int tmp50 = chn_type;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(476)
									::haxor::io::Buffer tmp51 = p_data;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(476)
									tmp43->TexSubImage2D(tmp44,(int)0,(int)0,tmp47,tmp48,(int)1,tmp49,tmp50,tmp51);
								}
								HX_STACK_LINE(477)
								::haxor::io::Buffer tmp42 = cross->m_data->get_buffer();		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(477)
								tmp42->ResetSlice();
								HX_STACK_LINE(478)
								hx::AddEq(pos,cross->m_width);
							}
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(461)
		::haxor::thread::Activity_obj::RunOnce( Dynamic(new _Function_1_1(chn_bit,tc,sides,ch,_g,cw,chn_fmt,bpp,chn_type,line_bytes,cross,cells)),false,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureContext_obj,CrossToCubemap,(void))

Void TextureContext_obj::UpdateMipmaps( ::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.context.TextureContext","UpdateMipmaps",0x5ce57cd3,"haxor.context.TextureContext.UpdateMipmaps","haxor/context/TextureContext.hx",493,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(494)
		::haxor::graphics::texture::Texture tmp = p_texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(494)
		this->Bind(tmp,null());
		HX_STACK_LINE(495)
		::haxor::core::TextureType tmp1 = p_texture->get_type();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		bool tmp2 = (tmp1 == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(495)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(495)
		if ((tmp2)){
			HX_STACK_LINE(495)
			tmp3 = (int)3553;
		}
		else{
			HX_STACK_LINE(495)
			::haxor::core::TextureType tmp4 = p_texture->get_type();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(495)
			bool tmp5 = (tmp4 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(495)
			if ((tmp5)){
				HX_STACK_LINE(495)
				tmp3 = (int)3553;
			}
			else{
				HX_STACK_LINE(495)
				::haxor::core::TextureType tmp6 = p_texture->get_type();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(495)
				bool tmp7 = (tmp6 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(495)
				if ((tmp7)){
					HX_STACK_LINE(495)
					tmp3 = (int)34067;
				}
				else{
					HX_STACK_LINE(495)
					tmp3 = (int)3553;
				}
			}
		}
		HX_STACK_LINE(495)
		int target = tmp3;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			::haxor::platform::graphics::OpenGL tmp4 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(496)
			int tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(496)
			tmp4->GenerateMipmap(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,UpdateMipmaps,(void))

Void TextureContext_obj::Destroy( ::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.context.TextureContext","Destroy",0x4975a02b,"haxor.context.TextureContext.Destroy","haxor/context/TextureContext.hx",504,0x7978261d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(505)
		Array< int > tmp = this->ids;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(505)
		int tmp1 = p_texture->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		int tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(505)
		int tex_id = tmp2;		HX_STACK_VAR(tex_id,"tex_id");
		HX_STACK_LINE(506)
		int tmp3 = tex_id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		int tmp4 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(506)
		if ((tmp5)){
			HX_STACK_LINE(506)
			::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(506)
			int tmp7 = tex_id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(506)
			tmp6->DeleteTexture(tmp7);
		}
		HX_STACK_LINE(507)
		::haxor::core::TextureType tmp6 = p_texture->get_type();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(507)
		bool tmp7 = (tmp6 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(507)
		if ((tmp7)){
			HX_STACK_LINE(509)
			Array< int > tmp8 = this->framebuffers;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(509)
			int tmp9 = p_texture->__cid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(509)
			int tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(509)
			int fb_id = tmp10;		HX_STACK_VAR(fb_id,"fb_id");
			HX_STACK_LINE(510)
			Array< int > tmp11 = this->renderbuffers;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(510)
			int tmp12 = p_texture->__cid;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(510)
			int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(510)
			int rb_id = tmp13;		HX_STACK_VAR(rb_id,"rb_id");
			HX_STACK_LINE(511)
			int tmp14 = fb_id;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(511)
			int tmp15 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(511)
			bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(511)
			if ((tmp16)){
				HX_STACK_LINE(511)
				::haxor::platform::graphics::OpenGL tmp17 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(511)
				int tmp18 = fb_id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(511)
				tmp17->DeleteFramebuffer(tmp18);
			}
			HX_STACK_LINE(512)
			int tmp17 = rb_id;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(512)
			int tmp18 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(512)
			bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(512)
			if ((tmp19)){
				HX_STACK_LINE(512)
				::haxor::platform::graphics::OpenGL tmp20 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(512)
				int tmp21 = rb_id;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(512)
				tmp20->DeleteRenderbuffer(tmp21);
			}
		}
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			int v = p_texture->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(514)
			::haxor::context::TextureContext tmp8 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			Array< int > tmp9 = tmp8->tid->m_cache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(514)
			int tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(514)
			tmp9->push(tmp10);
			HX_STACK_LINE(514)
			v;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,Destroy,(void))

int TextureContext_obj::TextureToTarget( ::haxor::graphics::texture::Texture p_texture){
	HX_STACK_FRAME("haxor.context.TextureContext","TextureToTarget",0x139a7f58,"haxor.context.TextureContext.TextureToTarget","haxor/context/TextureContext.hx",523,0x7978261d)
	HX_STACK_ARG(p_texture,"p_texture")
	HX_STACK_LINE(524)
	::haxor::core::TextureType tmp = p_texture->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	bool tmp1 = (tmp == ::haxor::core::TextureType_obj::Texture2D);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(524)
	if ((tmp1)){
		HX_STACK_LINE(524)
		return (int)3553;
	}
	HX_STACK_LINE(525)
	::haxor::core::TextureType tmp2 = p_texture->get_type();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(525)
	bool tmp3 = (tmp2 == ::haxor::core::TextureType_obj::RenderTexture);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(525)
	if ((tmp3)){
		HX_STACK_LINE(525)
		return (int)3553;
	}
	HX_STACK_LINE(526)
	::haxor::core::TextureType tmp4 = p_texture->get_type();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(526)
	bool tmp5 = (tmp4 == ::haxor::core::TextureType_obj::TextureCube);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(526)
	if ((tmp5)){
		HX_STACK_LINE(526)
		return (int)34067;
	}
	HX_STACK_LINE(527)
	return (int)3553;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,TextureToTarget,return )

int TextureContext_obj::FormatToChannelBits( int p_format){
	HX_STACK_FRAME("haxor.context.TextureContext","FormatToChannelBits",0x426a86a8,"haxor.context.TextureContext.FormatToChannelBits","haxor/context/TextureContext.hx",536,0x7978261d)
	HX_STACK_ARG(p_format,"p_format")
	HX_STACK_LINE(537)
	int tmp = p_format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(539)
			return (int)6406;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(540)
			return (int)6407;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(541)
			return (int)6408;
		}
		;break;
		case (int)7: case (int)4: {
			HX_STACK_LINE(542)
			return (int)6409;
		}
		;break;
		case (int)8: case (int)5: {
			HX_STACK_LINE(543)
			return (int)6407;
		}
		;break;
		case (int)9: case (int)6: {
			HX_STACK_LINE(544)
			return (int)6408;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(545)
			return (int)6409;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(546)
			return (int)6402;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(547)
			bool tmp1 = ::haxor::graphics::GL_obj::TEXTURE_SRGB;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(547)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(547)
			if ((tmp1)){
				HX_STACK_LINE(547)
				tmp2 = ::haxor::graphics::GL_obj::SRGB;
			}
			else{
				HX_STACK_LINE(547)
				tmp2 = (int)6407;
			}
			HX_STACK_LINE(547)
			return tmp2;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(548)
			bool tmp1 = ::haxor::graphics::GL_obj::TEXTURE_SRGB;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(548)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(548)
			if ((tmp1)){
				HX_STACK_LINE(548)
				tmp2 = ::haxor::graphics::GL_obj::SRGB_ALPHA;
			}
			else{
				HX_STACK_LINE(548)
				tmp2 = (int)6408;
			}
			HX_STACK_LINE(548)
			return tmp2;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(549)
			bool tmp1 = ::haxor::graphics::GL_obj::TEXTURE_SRGB;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(549)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(549)
			if ((tmp1)){
				HX_STACK_LINE(549)
				tmp2 = ::haxor::graphics::GL_obj::SRGB8_ALPHA8;
			}
			else{
				HX_STACK_LINE(549)
				tmp2 = (int)6408;
			}
			HX_STACK_LINE(549)
			return tmp2;
		}
		;break;
	}
	HX_STACK_LINE(551)
	return (int)6408;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,FormatToChannelBits,return )

int TextureContext_obj::FormatToChannelType( int p_format){
	HX_STACK_FRAME("haxor.context.TextureContext","FormatToChannelType",0x4e5c7e5c,"haxor.context.TextureContext.FormatToChannelType","haxor/context/TextureContext.hx",560,0x7978261d)
	HX_STACK_ARG(p_format,"p_format")
	HX_STACK_LINE(561)
	int tmp = p_format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(561)
	switch( (int)(tmp)){
		case (int)4: case (int)5: case (int)6: {
			HX_STACK_LINE(563)
			int tmp1 = ::haxor::graphics::GL_obj::HALF_FLOAT;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(563)
			return tmp1;
		}
		;break;
		case (int)7: case (int)8: case (int)9: {
			HX_STACK_LINE(564)
			return (int)5126;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(565)
			return (int)5123;
		}
		;break;
		case (int)3: case (int)2: case (int)1: case (int)0: {
			HX_STACK_LINE(566)
			return (int)5121;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(567)
			return (int)5121;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(568)
			return (int)5121;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(569)
			return (int)5121;
		}
		;break;
	}
	HX_STACK_LINE(571)
	return (int)5121;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,FormatToChannelType,return )

int TextureContext_obj::FormatToChannelLayout( int p_format){
	HX_STACK_FRAME("haxor.context.TextureContext","FormatToChannelLayout",0xfebfe6cc,"haxor.context.TextureContext.FormatToChannelLayout","haxor/context/TextureContext.hx",580,0x7978261d)
	HX_STACK_ARG(p_format,"p_format")
	HX_STACK_LINE(583)
	int tmp = p_format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(585)
			return (int)6406;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(586)
			return (int)6407;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(587)
			return (int)6408;
		}
		;break;
		case (int)1: case (int)4: case (int)7: {
			HX_STACK_LINE(588)
			return (int)6409;
		}
		;break;
		case (int)8: case (int)5: {
			HX_STACK_LINE(589)
			return (int)6407;
		}
		;break;
		case (int)9: case (int)6: {
			HX_STACK_LINE(590)
			return (int)6408;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(591)
			return (int)6402;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(593)
			bool tmp1 = ::haxor::graphics::GL_obj::TEXTURE_SRGB;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(593)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(593)
			if ((tmp1)){
				HX_STACK_LINE(593)
				tmp2 = ::haxor::graphics::GL_obj::SRGB;
			}
			else{
				HX_STACK_LINE(593)
				tmp2 = (int)6407;
			}
			HX_STACK_LINE(593)
			return tmp2;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(594)
			bool tmp1 = ::haxor::graphics::GL_obj::TEXTURE_SRGB;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(594)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(594)
			if ((tmp1)){
				HX_STACK_LINE(594)
				tmp2 = ::haxor::graphics::GL_obj::SRGB_ALPHA;
			}
			else{
				HX_STACK_LINE(594)
				tmp2 = (int)6408;
			}
			HX_STACK_LINE(594)
			return tmp2;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(595)
			bool tmp1 = ::haxor::graphics::GL_obj::TEXTURE_SRGB;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(595)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(595)
			if ((tmp1)){
				HX_STACK_LINE(595)
				tmp2 = ::haxor::graphics::GL_obj::SRGB8_ALPHA8;
			}
			else{
				HX_STACK_LINE(595)
				tmp2 = (int)6408;
			}
			HX_STACK_LINE(595)
			return tmp2;
		}
		;break;
	}
	HX_STACK_LINE(598)
	return (int)6408;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureContext_obj,FormatToChannelLayout,return )


TextureContext_obj::TextureContext_obj()
{
}

void TextureContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureContext);
	HX_MARK_MEMBER_NAME(tid,"tid");
	HX_MARK_MEMBER_NAME(ids,"ids");
	HX_MARK_MEMBER_NAME(framebuffers,"framebuffers");
	HX_MARK_MEMBER_NAME(renderbuffers,"renderbuffers");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(bind,"bind");
	HX_MARK_MEMBER_NAME(bound,"bound");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(next_slot,"next_slot");
	HX_MARK_MEMBER_NAME(is_flip_y,"is_flip_y");
	HX_MARK_END_CLASS();
}

void TextureContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tid,"tid");
	HX_VISIT_MEMBER_NAME(ids,"ids");
	HX_VISIT_MEMBER_NAME(framebuffers,"framebuffers");
	HX_VISIT_MEMBER_NAME(renderbuffers,"renderbuffers");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(bind,"bind");
	HX_VISIT_MEMBER_NAME(bound,"bound");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(next_slot,"next_slot");
	HX_VISIT_MEMBER_NAME(is_flip_y,"is_flip_y");
}

Dynamic TextureContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tid") ) { return tid; }
		if (HX_FIELD_EQ(inName,"ids") ) { return ids; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind; }
		if (HX_FIELD_EQ(inName,"Bind") ) { return Bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound; }
		if (HX_FIELD_EQ(inName,"Alloc") ) { return Alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"Create") ) { return Create_dyn(); }
		if (HX_FIELD_EQ(inName,"Unbind") ) { return Unbind_dyn(); }
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Destroy") ) { return Destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"next_slot") ) { return next_slot; }
		if (HX_FIELD_EQ(inName,"is_flip_y") ) { return is_flip_y; }
		if (HX_FIELD_EQ(inName,"ApplyBind") ) { return ApplyBind_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"BindTarget") ) { return BindTarget_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framebuffers") ) { return framebuffers; }
		if (HX_FIELD_EQ(inName,"WriteTexture") ) { return WriteTexture_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderbuffers") ) { return renderbuffers; }
		if (HX_FIELD_EQ(inName,"UploadTexture") ) { return UploadTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateMipmaps") ) { return UpdateMipmaps_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CrossToCubemap") ) { return CrossToCubemap_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"UpdateParameters") ) { return UpdateParameters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextureContext_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"TextureToTarget") ) { outValue = TextureToTarget_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"FormatToChannelBits") ) { outValue = FormatToChannelBits_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FormatToChannelType") ) { outValue = FormatToChannelType_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FormatToChannelLayout") ) { outValue = FormatToChannelLayout_dyn(); return true;  }
	}
	return false;
}

Dynamic TextureContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tid") ) { tid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ids") ) { ids=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { bind=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { bound=inValue.Cast< ::haxor::graphics::texture::Texture >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::haxor::graphics::texture::RenderTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"next_slot") ) { next_slot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"is_flip_y") ) { is_flip_y=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framebuffers") ) { framebuffers=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderbuffers") ) { renderbuffers=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextureContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tid","\x4f","\x61","\x58","\x00"));
	outFields->push(HX_HCSTRING("ids","\x38","\x04","\x50","\x00"));
	outFields->push(HX_HCSTRING("framebuffers","\xe6","\x3a","\xca","\x84"));
	outFields->push(HX_HCSTRING("renderbuffers","\xdd","\xee","\x2c","\xe0"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"));
	outFields->push(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("next_slot","\x0a","\xa4","\x7e","\x13"));
	outFields->push(HX_HCSTRING("is_flip_y","\x1c","\x92","\x8e","\xe2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(TextureContext_obj,tid),HX_HCSTRING("tid","\x4f","\x61","\x58","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextureContext_obj,ids),HX_HCSTRING("ids","\x38","\x04","\x50","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextureContext_obj,framebuffers),HX_HCSTRING("framebuffers","\xe6","\x3a","\xca","\x84")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextureContext_obj,renderbuffers),HX_HCSTRING("renderbuffers","\xdd","\xee","\x2c","\xe0")},
	{hx::fsObject /*::haxor::graphics::texture::RenderTexture*/ ,(int)offsetof(TextureContext_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextureContext_obj,bind),HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41")},
	{hx::fsObject /*::haxor::graphics::texture::Texture*/ ,(int)offsetof(TextureContext_obj,bound),HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6")},
	{hx::fsInt,(int)offsetof(TextureContext_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsInt,(int)offsetof(TextureContext_obj,next_slot),HX_HCSTRING("next_slot","\x0a","\xa4","\x7e","\x13")},
	{hx::fsBool,(int)offsetof(TextureContext_obj,is_flip_y),HX_HCSTRING("is_flip_y","\x1c","\x92","\x8e","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tid","\x4f","\x61","\x58","\x00"),
	HX_HCSTRING("ids","\x38","\x04","\x50","\x00"),
	HX_HCSTRING("framebuffers","\xe6","\x3a","\xca","\x84"),
	HX_HCSTRING("renderbuffers","\xdd","\xee","\x2c","\xe0"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("next_slot","\x0a","\xa4","\x7e","\x13"),
	HX_HCSTRING("is_flip_y","\x1c","\x92","\x8e","\xe2"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Alloc","\x55","\x14","\xc1","\xb4"),
	HX_HCSTRING("Create","\x1c","\xdb","\xa3","\xb0"),
	HX_HCSTRING("Bind","\xdd","\x21","\xf0","\x2b"),
	HX_HCSTRING("ApplyBind","\x2b","\xd6","\xb8","\xcc"),
	HX_HCSTRING("Unbind","\xb6","\x70","\x80","\x93"),
	HX_HCSTRING("BindTarget","\x0e","\xcd","\xc7","\xa5"),
	HX_HCSTRING("UpdateParameters","\x33","\x6a","\x65","\xb5"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("UploadTexture","\xba","\x28","\x28","\x5c"),
	HX_HCSTRING("WriteTexture","\xdc","\xb9","\x21","\x2c"),
	HX_HCSTRING("CrossToCubemap","\x0c","\xf1","\xc2","\x28"),
	HX_HCSTRING("UpdateMipmaps","\xc2","\x5e","\xb2","\x88"),
	HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureContext_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureContext_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TextureToTarget","\x07","\xfb","\xd6","\x75"),
	HX_HCSTRING("FormatToChannelBits","\xd7","\x05","\x20","\x7f"),
	HX_HCSTRING("FormatToChannelType","\x8b","\xfd","\x11","\x8b"),
	HX_HCSTRING("FormatToChannelLayout","\xbb","\xcf","\x36","\xf3"),
	String(null()) };

void TextureContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.TextureContext","\xbf","\x72","\xae","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureContext_obj::__GetStatic;
	__mClass->mSetStaticField = &TextureContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureContext_obj >;
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
