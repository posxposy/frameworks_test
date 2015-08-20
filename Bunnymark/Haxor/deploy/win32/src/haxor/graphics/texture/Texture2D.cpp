#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
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
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
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
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
namespace haxor{
namespace graphics{
namespace texture{

Void Texture2D_obj::__construct(int p_width,int p_height,int p_format)
{
HX_STACK_FRAME("haxor.graphics.texture.Texture2D","new",0x8f6670b5,"haxor.graphics.texture.Texture2D.new","haxor/graphics/texture/Texture2D.hx",162,0x654901bc)
HX_STACK_THIS(this)
HX_STACK_ARG(p_width,"p_width")
HX_STACK_ARG(p_height,"p_height")
HX_STACK_ARG(p_format,"p_format")
{
	HX_STACK_LINE(163)
	super::__construct();
	HX_STACK_LINE(164)
	this->m_format = p_format;
	HX_STACK_LINE(165)
	this->m_width = p_width;
	HX_STACK_LINE(166)
	this->m_height = p_height;
	HX_STACK_LINE(167)
	bool tmp = (p_width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	if ((tmp)){
		HX_STACK_LINE(167)
		return null();
	}
	HX_STACK_LINE(168)
	bool tmp1 = (p_height <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	if ((tmp1)){
		HX_STACK_LINE(168)
		return null();
	}
	HX_STACK_LINE(169)
	::haxor::graphics::Bitmap tmp2 = ::haxor::graphics::Bitmap_obj::__new(p_width,p_height,p_format);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	this->m_data = tmp2;
	HX_STACK_LINE(170)
	::haxor::context::TextureContext tmp3 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	tmp3->Create(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Texture2D_obj::~Texture2D_obj() { }

Dynamic Texture2D_obj::__CreateEmpty() { return  new Texture2D_obj; }
hx::ObjectPtr< Texture2D_obj > Texture2D_obj::__new(int p_width,int p_height,int p_format)
{  hx::ObjectPtr< Texture2D_obj > _result_ = new Texture2D_obj();
	_result_->__construct(p_width,p_height,p_format);
	return _result_;}

Dynamic Texture2D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture2D_obj > _result_ = new Texture2D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::haxor::graphics::Bitmap Texture2D_obj::get_data( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_data",0x67dd1d3e,"haxor.graphics.texture.Texture2D.get_data","haxor/graphics/texture/Texture2D.hx",146,0x654901bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	::haxor::graphics::Bitmap tmp = this->m_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture2D_obj,get_data,return )

::haxor::core::TextureType Texture2D_obj::get_type( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_type",0x7282b9ce,"haxor.graphics.texture.Texture2D.get_type","haxor/graphics/texture/Texture2D.hx",153,0x654901bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return ::haxor::core::TextureType_obj::Texture2D;
}


Void Texture2D_obj::Upload( hx::Null< int >  __o_p_steps,Dynamic p_on_complete){
int p_steps = __o_p_steps.Default(200);
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","Upload",0x636ec0ec,"haxor.graphics.texture.Texture2D.Upload","haxor/graphics/texture/Texture2D.hx",179,0x654901bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_steps,"p_steps")
	HX_STACK_ARG(p_on_complete,"p_on_complete")
{
		HX_STACK_LINE(180)
		::haxor::context::TextureContext tmp = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		int tmp1 = this->m_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		int tmp2 = this->m_height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		int tmp3 = p_steps;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		Dynamic tmp4 = p_on_complete;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		tmp->UploadTexture(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture2D_obj,Upload,(void))

::haxor::graphics::texture::Texture2D Texture2D_obj::get_random( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_random",0x8457d617,"haxor.graphics.texture.Texture2D.get_random","haxor/graphics/texture/Texture2D.hx",21,0x654901bc)
	HX_STACK_LINE(22)
	::haxor::graphics::texture::Texture2D tmp = ::haxor::graphics::texture::Texture2D_obj::m_random;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	if ((tmp1)){
		HX_STACK_LINE(22)
		::haxor::graphics::texture::Texture2D tmp2 = ::haxor::graphics::texture::Texture2D_obj::m_random;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		return tmp2;
	}
	HX_STACK_LINE(23)
	int tmp2 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::haxor::graphics::texture::Texture2D tmp3 = ::haxor::graphics::texture::Texture2D_obj::__new((int)128,(int)128,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::haxor::graphics::texture::Texture2D_obj::m_random = tmp3;
	HX_STACK_LINE(24)
	::haxor::graphics::texture::Texture2D tmp4 = ::haxor::graphics::texture::Texture2D_obj::m_random;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	tmp4->set_name(HX_HCSTRING("Random","\x23","\x96","\x23","\xec"));
	HX_STACK_LINE(25)
	::haxor::graphics::texture::Texture2D tmp5 = ::haxor::graphics::texture::Texture2D_obj::m_random;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	int tmp6 = (int)10;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	int tmp7 = (int(tmp6) | int((int)32));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(25)
	tmp5->set_wrap(tmp7);
	HX_STACK_LINE(26)
	::haxor::graphics::texture::Texture2D tmp8 = ::haxor::graphics::texture::Texture2D_obj::m_random;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	::haxor::io::Buffer tmp9 = tmp8->m_data->get_buffer();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(26)
	::haxor::io::FloatArray f32 = ((::haxor::io::FloatArray)(tmp9));		HX_STACK_VAR(f32,"f32");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		int _g = f32->m_length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(27)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(27)
			if ((tmp11)){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(27)
			int i = tmp12;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(27)
			int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(27)
			Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(27)
			f32->Set(tmp13,tmp14);
		}
	}
	HX_STACK_LINE(28)
	::haxor::graphics::texture::Texture2D tmp10 = ::haxor::graphics::texture::Texture2D_obj::m_random;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(28)
	tmp10->Upload((int)10,null());
	HX_STACK_LINE(29)
	::haxor::graphics::texture::Texture2D tmp11 = ::haxor::graphics::texture::Texture2D_obj::m_random;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(29)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture2D_obj,get_random,return )

::haxor::graphics::texture::Texture2D Texture2D_obj::m_random;

::haxor::graphics::texture::Texture2D Texture2D_obj::get_white( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_white",0x6ed1b515,"haxor.graphics.texture.Texture2D.get_white","haxor/graphics/texture/Texture2D.hx",38,0x654901bc)
	HX_STACK_LINE(39)
	::haxor::graphics::texture::Texture2D tmp = ::haxor::graphics::texture::Texture2D_obj::m_white;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp1)){
		HX_STACK_LINE(39)
		::haxor::graphics::texture::Texture2D tmp2 = ::haxor::graphics::texture::Texture2D_obj::m_white;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		return tmp2;
	}
	HX_STACK_LINE(40)
	int tmp2 = ::haxor::core::PixelFormat_obj::RGB8;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	::haxor::graphics::texture::Texture2D tmp3 = ::haxor::graphics::texture::Texture2D_obj::__new((int)1,(int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	::haxor::graphics::texture::Texture2D_obj::m_white = tmp3;
	HX_STACK_LINE(41)
	::haxor::graphics::texture::Texture2D tmp4 = ::haxor::graphics::texture::Texture2D_obj::m_white;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	tmp4->set_name(HX_HCSTRING("White","\x89","\xba","\xea","\x5c"));
	HX_STACK_LINE(42)
	::haxor::graphics::texture::Texture2D tmp5 = ::haxor::graphics::texture::Texture2D_obj::m_white;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	::haxor::math::Color tmp6 = ::haxor::math::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	tmp5->m_data->Fill(tmp6);
	HX_STACK_LINE(43)
	::haxor::graphics::texture::Texture2D tmp7 = ::haxor::graphics::texture::Texture2D_obj::m_white;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	tmp7->Apply();
	HX_STACK_LINE(44)
	::haxor::graphics::texture::Texture2D tmp8 = ::haxor::graphics::texture::Texture2D_obj::m_white;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture2D_obj,get_white,return )

::haxor::graphics::texture::Texture2D Texture2D_obj::m_white;

::haxor::graphics::texture::Texture2D Texture2D_obj::get_black( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_black",0x5a06402b,"haxor.graphics.texture.Texture2D.get_black","haxor/graphics/texture/Texture2D.hx",53,0x654901bc)
	HX_STACK_LINE(54)
	::haxor::graphics::texture::Texture2D tmp = ::haxor::graphics::texture::Texture2D_obj::m_black;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	if ((tmp1)){
		HX_STACK_LINE(54)
		::haxor::graphics::texture::Texture2D tmp2 = ::haxor::graphics::texture::Texture2D_obj::m_black;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		return tmp2;
	}
	HX_STACK_LINE(55)
	int tmp2 = ::haxor::core::PixelFormat_obj::RGB8;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	::haxor::graphics::texture::Texture2D tmp3 = ::haxor::graphics::texture::Texture2D_obj::__new((int)1,(int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	::haxor::graphics::texture::Texture2D_obj::m_black = tmp3;
	HX_STACK_LINE(56)
	::haxor::graphics::texture::Texture2D tmp4 = ::haxor::graphics::texture::Texture2D_obj::m_black;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	tmp4->set_name(HX_HCSTRING("Black","\x9f","\x45","\x1f","\x48"));
	HX_STACK_LINE(57)
	::haxor::graphics::texture::Texture2D tmp5 = ::haxor::graphics::texture::Texture2D_obj::m_black;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	::haxor::math::Color tmp6 = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	tmp5->m_data->Fill(tmp6);
	HX_STACK_LINE(58)
	::haxor::graphics::texture::Texture2D tmp7 = ::haxor::graphics::texture::Texture2D_obj::m_black;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(58)
	tmp7->Apply();
	HX_STACK_LINE(59)
	::haxor::graphics::texture::Texture2D tmp8 = ::haxor::graphics::texture::Texture2D_obj::m_black;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(59)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture2D_obj,get_black,return )

::haxor::graphics::texture::Texture2D Texture2D_obj::m_black;

::haxor::graphics::texture::Texture2D Texture2D_obj::get_gray50( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_gray50",0xdfb2b112,"haxor.graphics.texture.Texture2D.get_gray50","haxor/graphics/texture/Texture2D.hx",68,0x654901bc)
	HX_STACK_LINE(69)
	::haxor::graphics::texture::Texture2D tmp = ::haxor::graphics::texture::Texture2D_obj::m_gray50;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	if ((tmp1)){
		HX_STACK_LINE(69)
		::haxor::graphics::texture::Texture2D tmp2 = ::haxor::graphics::texture::Texture2D_obj::m_gray50;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		return tmp2;
	}
	HX_STACK_LINE(70)
	int tmp2 = ::haxor::core::PixelFormat_obj::RGB8;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	::haxor::graphics::texture::Texture2D tmp3 = ::haxor::graphics::texture::Texture2D_obj::__new((int)1,(int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	::haxor::graphics::texture::Texture2D_obj::m_gray50 = tmp3;
	HX_STACK_LINE(71)
	::haxor::graphics::texture::Texture2D tmp4 = ::haxor::graphics::texture::Texture2D_obj::m_gray50;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	tmp4->set_name(HX_HCSTRING("Gray50","\x1e","\x71","\x7e","\x47"));
	HX_STACK_LINE(72)
	::haxor::graphics::texture::Texture2D tmp5 = ::haxor::graphics::texture::Texture2D_obj::m_gray50;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	::haxor::math::Color tmp6 = ::haxor::math::Color_obj::__new(((Float)0.5),((Float)0.5),((Float)0.5),(int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(72)
	tmp5->m_data->Fill(tmp6);
	HX_STACK_LINE(73)
	::haxor::graphics::texture::Texture2D tmp7 = ::haxor::graphics::texture::Texture2D_obj::m_gray50;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(73)
	tmp7->Apply();
	HX_STACK_LINE(74)
	::haxor::graphics::texture::Texture2D tmp8 = ::haxor::graphics::texture::Texture2D_obj::m_gray50;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(74)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture2D_obj,get_gray50,return )

::haxor::graphics::texture::Texture2D Texture2D_obj::m_gray50;

::haxor::graphics::texture::Texture2D Texture2D_obj::get_gray25( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_gray25",0xdfb2ae7a,"haxor.graphics.texture.Texture2D.get_gray25","haxor/graphics/texture/Texture2D.hx",83,0x654901bc)
	HX_STACK_LINE(84)
	::haxor::graphics::texture::Texture2D tmp = ::haxor::graphics::texture::Texture2D_obj::m_gray25;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	if ((tmp1)){
		HX_STACK_LINE(84)
		::haxor::graphics::texture::Texture2D tmp2 = ::haxor::graphics::texture::Texture2D_obj::m_gray25;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		return tmp2;
	}
	HX_STACK_LINE(85)
	int tmp2 = ::haxor::core::PixelFormat_obj::RGB8;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	::haxor::graphics::texture::Texture2D tmp3 = ::haxor::graphics::texture::Texture2D_obj::__new((int)1,(int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	::haxor::graphics::texture::Texture2D_obj::m_gray25 = tmp3;
	HX_STACK_LINE(86)
	::haxor::graphics::texture::Texture2D tmp4 = ::haxor::graphics::texture::Texture2D_obj::m_gray25;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	tmp4->set_name(HX_HCSTRING("Gray25","\x86","\x6e","\x7e","\x47"));
	HX_STACK_LINE(87)
	::haxor::graphics::texture::Texture2D tmp5 = ::haxor::graphics::texture::Texture2D_obj::m_gray25;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(87)
	::haxor::math::Color tmp6 = ::haxor::math::Color_obj::__new(((Float)0.25),((Float)0.25),((Float)0.25),(int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	tmp5->m_data->Fill(tmp6);
	HX_STACK_LINE(88)
	::haxor::graphics::texture::Texture2D tmp7 = ::haxor::graphics::texture::Texture2D_obj::m_gray25;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	tmp7->Apply();
	HX_STACK_LINE(89)
	::haxor::graphics::texture::Texture2D tmp8 = ::haxor::graphics::texture::Texture2D_obj::m_gray25;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(89)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture2D_obj,get_gray25,return )

::haxor::graphics::texture::Texture2D Texture2D_obj::m_gray25;

::haxor::graphics::texture::Texture2D Texture2D_obj::get_red( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_red",0xb4bd90bd,"haxor.graphics.texture.Texture2D.get_red","haxor/graphics/texture/Texture2D.hx",100,0x654901bc)
	HX_STACK_LINE(101)
	::haxor::graphics::texture::Texture2D tmp = ::haxor::graphics::texture::Texture2D_obj::m_red;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	if ((tmp1)){
		HX_STACK_LINE(101)
		::haxor::graphics::texture::Texture2D tmp2 = ::haxor::graphics::texture::Texture2D_obj::m_red;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		return tmp2;
	}
	HX_STACK_LINE(102)
	int tmp2 = ::haxor::core::PixelFormat_obj::RGB8;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	::haxor::graphics::texture::Texture2D tmp3 = ::haxor::graphics::texture::Texture2D_obj::__new((int)1,(int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	::haxor::graphics::texture::Texture2D_obj::m_red = tmp3;
	HX_STACK_LINE(103)
	::haxor::graphics::texture::Texture2D tmp4 = ::haxor::graphics::texture::Texture2D_obj::m_red;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	tmp4->set_name(HX_HCSTRING("Red","\x31","\x91","\x3e","\x00"));
	HX_STACK_LINE(104)
	::haxor::graphics::texture::Texture2D tmp5 = ::haxor::graphics::texture::Texture2D_obj::m_red;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	::haxor::math::Color tmp6 = ::haxor::math::Color_obj::__new(((Float)1.0),(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	tmp5->m_data->Fill(tmp6);
	HX_STACK_LINE(105)
	::haxor::graphics::texture::Texture2D tmp7 = ::haxor::graphics::texture::Texture2D_obj::m_red;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	tmp7->Apply();
	HX_STACK_LINE(106)
	::haxor::graphics::texture::Texture2D tmp8 = ::haxor::graphics::texture::Texture2D_obj::m_red;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(106)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture2D_obj,get_red,return )

::haxor::graphics::texture::Texture2D Texture2D_obj::m_red;

::haxor::graphics::texture::Texture2D Texture2D_obj::get_green( ){
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","get_green",0x3f01792f,"haxor.graphics.texture.Texture2D.get_green","haxor/graphics/texture/Texture2D.hx",115,0x654901bc)
	HX_STACK_LINE(116)
	::haxor::graphics::texture::Texture2D tmp = ::haxor::graphics::texture::Texture2D_obj::m_green;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	if ((tmp1)){
		HX_STACK_LINE(116)
		::haxor::graphics::texture::Texture2D tmp2 = ::haxor::graphics::texture::Texture2D_obj::m_green;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		return tmp2;
	}
	HX_STACK_LINE(117)
	int tmp2 = ::haxor::core::PixelFormat_obj::RGB8;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	::haxor::graphics::texture::Texture2D tmp3 = ::haxor::graphics::texture::Texture2D_obj::__new((int)1,(int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(117)
	::haxor::graphics::texture::Texture2D_obj::m_green = tmp3;
	HX_STACK_LINE(118)
	::haxor::graphics::texture::Texture2D tmp4 = ::haxor::graphics::texture::Texture2D_obj::m_green;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	tmp4->set_name(HX_HCSTRING("Green","\xa3","\x7e","\x1a","\x2d"));
	HX_STACK_LINE(119)
	::haxor::graphics::texture::Texture2D tmp5 = ::haxor::graphics::texture::Texture2D_obj::m_green;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(119)
	::haxor::math::Color tmp6 = ::haxor::math::Color_obj::__new((int)0,(int)1,(int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(119)
	tmp5->m_data->Fill(tmp6);
	HX_STACK_LINE(120)
	::haxor::graphics::texture::Texture2D tmp7 = ::haxor::graphics::texture::Texture2D_obj::m_green;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(120)
	tmp7->Apply();
	HX_STACK_LINE(121)
	::haxor::graphics::texture::Texture2D tmp8 = ::haxor::graphics::texture::Texture2D_obj::m_green;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(121)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture2D_obj,get_green,return )

::haxor::graphics::texture::Texture2D Texture2D_obj::m_green;

::haxor::graphics::texture::Texture2D Texture2D_obj::FromBitmap( ::haxor::graphics::Bitmap p_bitmap,hx::Null< bool >  __o_p_apply){
bool p_apply = __o_p_apply.Default(true);
	HX_STACK_FRAME("haxor.graphics.texture.Texture2D","FromBitmap",0x07425d64,"haxor.graphics.texture.Texture2D.FromBitmap","haxor/graphics/texture/Texture2D.hx",132,0x654901bc)
	HX_STACK_ARG(p_bitmap,"p_bitmap")
	HX_STACK_ARG(p_apply,"p_apply")
{
		HX_STACK_LINE(133)
		::haxor::graphics::texture::Texture2D tmp = ::haxor::graphics::texture::Texture2D_obj::__new((int)0,(int)0,p_bitmap->m_format);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::haxor::graphics::texture::Texture2D t = tmp;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(134)
		t->m_data = p_bitmap;
		HX_STACK_LINE(135)
		t->m_width = p_bitmap->m_width;
		HX_STACK_LINE(136)
		t->m_height = p_bitmap->m_height;
		HX_STACK_LINE(137)
		::haxor::context::TextureContext tmp1 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		::haxor::graphics::texture::Texture2D tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		tmp1->Create(tmp2);
		HX_STACK_LINE(138)
		t->Apply();
		HX_STACK_LINE(139)
		::haxor::graphics::texture::Texture2D tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Texture2D_obj,FromBitmap,return )


Texture2D_obj::Texture2D_obj()
{
}

void Texture2D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture2D);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(m_data,"m_data");
	::haxor::graphics::texture::Texture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture2D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(m_data,"m_data");
	::haxor::graphics::texture::Texture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Texture2D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return inCallProp == hx::paccAlways ? get_data() : data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_data") ) { return m_data; }
		if (HX_FIELD_EQ(inName,"Upload") ) { return Upload_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture2D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { if (inCallProp == hx::paccAlways) { outValue = get_red(); return true; } }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"white") ) { if (inCallProp == hx::paccAlways) { outValue = get_white(); return true; } }
		if (HX_FIELD_EQ(inName,"black") ) { if (inCallProp == hx::paccAlways) { outValue = get_black(); return true; } }
		if (HX_FIELD_EQ(inName,"m_red") ) { outValue = m_red; return true;  }
		if (HX_FIELD_EQ(inName,"green") ) { if (inCallProp == hx::paccAlways) { outValue = get_green(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { if (inCallProp == hx::paccAlways) { outValue = get_random(); return true; } }
		if (HX_FIELD_EQ(inName,"gray50") ) { if (inCallProp == hx::paccAlways) { outValue = get_gray50(); return true; } }
		if (HX_FIELD_EQ(inName,"gray25") ) { if (inCallProp == hx::paccAlways) { outValue = get_gray25(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_white") ) { outValue = m_white; return true;  }
		if (HX_FIELD_EQ(inName,"m_black") ) { outValue = m_black; return true;  }
		if (HX_FIELD_EQ(inName,"get_red") ) { outValue = get_red_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_green") ) { outValue = m_green; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_random") ) { outValue = m_random; return true;  }
		if (HX_FIELD_EQ(inName,"m_gray50") ) { outValue = m_gray50; return true;  }
		if (HX_FIELD_EQ(inName,"m_gray25") ) { outValue = m_gray25; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_white") ) { outValue = get_white_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_black") ) { outValue = get_black_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_green") ) { outValue = get_green_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_random") ) { outValue = get_random_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_gray50") ) { outValue = get_gray50_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_gray25") ) { outValue = get_gray25_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FromBitmap") ) { outValue = FromBitmap_dyn(); return true;  }
	}
	return false;
}

Dynamic Texture2D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxor::graphics::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_data") ) { m_data=inValue.Cast< ::haxor::graphics::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture2D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"m_red") ) { m_red=ioValue.Cast< ::haxor::graphics::texture::Texture2D >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_white") ) { m_white=ioValue.Cast< ::haxor::graphics::texture::Texture2D >(); return true; }
		if (HX_FIELD_EQ(inName,"m_black") ) { m_black=ioValue.Cast< ::haxor::graphics::texture::Texture2D >(); return true; }
		if (HX_FIELD_EQ(inName,"m_green") ) { m_green=ioValue.Cast< ::haxor::graphics::texture::Texture2D >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_random") ) { m_random=ioValue.Cast< ::haxor::graphics::texture::Texture2D >(); return true; }
		if (HX_FIELD_EQ(inName,"m_gray50") ) { m_gray50=ioValue.Cast< ::haxor::graphics::texture::Texture2D >(); return true; }
		if (HX_FIELD_EQ(inName,"m_gray25") ) { m_gray25=ioValue.Cast< ::haxor::graphics::texture::Texture2D >(); return true; }
	}
	return false;
}

void Texture2D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("m_data","\x7c","\xc6","\x5a","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::Bitmap*/ ,(int)offsetof(Texture2D_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::haxor::graphics::Bitmap*/ ,(int)offsetof(Texture2D_obj,m_data),HX_HCSTRING("m_data","\x7c","\xc6","\x5a","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::texture::Texture2D*/ ,(void *) &Texture2D_obj::m_random,HX_HCSTRING("m_random","\xd5","\xca","\x80","\x80")},
	{hx::fsObject /*::haxor::graphics::texture::Texture2D*/ ,(void *) &Texture2D_obj::m_white,HX_HCSTRING("m_white","\x17","\x22","\x48","\x7a")},
	{hx::fsObject /*::haxor::graphics::texture::Texture2D*/ ,(void *) &Texture2D_obj::m_black,HX_HCSTRING("m_black","\x2d","\xad","\x7c","\x65")},
	{hx::fsObject /*::haxor::graphics::texture::Texture2D*/ ,(void *) &Texture2D_obj::m_gray50,HX_HCSTRING("m_gray50","\xd0","\xa5","\xdb","\xdb")},
	{hx::fsObject /*::haxor::graphics::texture::Texture2D*/ ,(void *) &Texture2D_obj::m_gray25,HX_HCSTRING("m_gray25","\x38","\xa3","\xdb","\xdb")},
	{hx::fsObject /*::haxor::graphics::texture::Texture2D*/ ,(void *) &Texture2D_obj::m_red,HX_HCSTRING("m_red","\x3f","\x59","\xcf","\x01")},
	{hx::fsObject /*::haxor::graphics::texture::Texture2D*/ ,(void *) &Texture2D_obj::m_green,HX_HCSTRING("m_green","\x31","\xe6","\x77","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("m_data","\x7c","\xc6","\x5a","\x8a"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("Upload","\x21","\x3e","\xee","\xc0"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture2D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture2D_obj::m_random,"m_random");
	HX_MARK_MEMBER_NAME(Texture2D_obj::m_white,"m_white");
	HX_MARK_MEMBER_NAME(Texture2D_obj::m_black,"m_black");
	HX_MARK_MEMBER_NAME(Texture2D_obj::m_gray50,"m_gray50");
	HX_MARK_MEMBER_NAME(Texture2D_obj::m_gray25,"m_gray25");
	HX_MARK_MEMBER_NAME(Texture2D_obj::m_red,"m_red");
	HX_MARK_MEMBER_NAME(Texture2D_obj::m_green,"m_green");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture2D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture2D_obj::m_random,"m_random");
	HX_VISIT_MEMBER_NAME(Texture2D_obj::m_white,"m_white");
	HX_VISIT_MEMBER_NAME(Texture2D_obj::m_black,"m_black");
	HX_VISIT_MEMBER_NAME(Texture2D_obj::m_gray50,"m_gray50");
	HX_VISIT_MEMBER_NAME(Texture2D_obj::m_gray25,"m_gray25");
	HX_VISIT_MEMBER_NAME(Texture2D_obj::m_red,"m_red");
	HX_VISIT_MEMBER_NAME(Texture2D_obj::m_green,"m_green");
};

#endif

hx::Class Texture2D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_random","\xcc","\x91","\x16","\xa8"),
	HX_HCSTRING("m_random","\xd5","\xca","\x80","\x80"),
	HX_HCSTRING("get_white","\x00","\xa7","\x66","\x0d"),
	HX_HCSTRING("m_white","\x17","\x22","\x48","\x7a"),
	HX_HCSTRING("get_black","\x16","\x32","\x9b","\xf8"),
	HX_HCSTRING("m_black","\x2d","\xad","\x7c","\x65"),
	HX_HCSTRING("get_gray50","\xc7","\x6c","\x71","\x03"),
	HX_HCSTRING("m_gray50","\xd0","\xa5","\xdb","\xdb"),
	HX_HCSTRING("get_gray25","\x2f","\x6a","\x71","\x03"),
	HX_HCSTRING("m_gray25","\x38","\xa3","\xdb","\xdb"),
	HX_HCSTRING("get_red","\xe8","\xa1","\xcb","\x26"),
	HX_HCSTRING("m_red","\x3f","\x59","\xcf","\x01"),
	HX_HCSTRING("get_green","\x1a","\x6b","\x96","\xdd"),
	HX_HCSTRING("m_green","\x31","\xe6","\x77","\x4a"),
	HX_HCSTRING("FromBitmap","\x19","\x19","\x01","\x2b"),
	String(null()) };

void Texture2D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.texture.Texture2D","\x43","\xf2","\x70","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture2D_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture2D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture2D_obj >;
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
