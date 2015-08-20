#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace math{

Void Color_obj::__construct(hx::Null< Float >  __o_p_r,hx::Null< Float >  __o_p_g,hx::Null< Float >  __o_p_b,hx::Null< Float >  __o_p_a)
{
HX_STACK_FRAME("haxor.math.Color","new",0x176a4e3b,"haxor.math.Color.new","haxor/math/Color.hx",297,0x18984df5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_r,"p_r")
HX_STACK_ARG(__o_p_g,"p_g")
HX_STACK_ARG(__o_p_b,"p_b")
HX_STACK_ARG(__o_p_a,"p_a")
Float p_r = __o_p_r.Default(0);
Float p_g = __o_p_g.Default(0);
Float p_b = __o_p_b.Default(0);
Float p_a = __o_p_a.Default(1);
{
	HX_STACK_LINE(298)
	this->r = p_r;
	HX_STACK_LINE(299)
	this->g = p_g;
	HX_STACK_LINE(300)
	this->b = p_b;
	HX_STACK_LINE(301)
	this->a = p_a;
}
;
	return null();
}

//Color_obj::~Color_obj() { }

Dynamic Color_obj::__CreateEmpty() { return  new Color_obj; }
hx::ObjectPtr< Color_obj > Color_obj::__new(hx::Null< Float >  __o_p_r,hx::Null< Float >  __o_p_g,hx::Null< Float >  __o_p_b,hx::Null< Float >  __o_p_a)
{  hx::ObjectPtr< Color_obj > _result_ = new Color_obj();
	_result_->__construct(__o_p_r,__o_p_g,__o_p_b,__o_p_a);
	return _result_;}

Dynamic Color_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color_obj > _result_ = new Color_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::haxor::math::Color Color_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.Color","get_clone",0xa57b43cf,"haxor.math.Color.get_clone","haxor/math/Color.hx",173,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	Float tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	::haxor::math::Color tmp4 = ::haxor::math::Color_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_clone,return )

::haxor::math::Vector3 Color_obj::get_xyz( ){
	HX_STACK_FRAME("haxor.math.Color","get_xyz",0xb02a484b,"haxor.math.Color.get_xyz","haxor/math/Color.hx",179,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	Float tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_xyz,return )

::haxor::math::Vector4 Color_obj::get_xyzw( ){
	HX_STACK_FRAME("haxor.math.Color","get_xyzw",0x74d4f9cc,"haxor.math.Color.get_xyzw","haxor/math/Color.hx",185,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	Float tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	::haxor::math::Vector4 tmp4 = ::haxor::math::Vector4_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(185)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_xyzw,return )

int Color_obj::get_argb( ){
	HX_STACK_FRAME("haxor.math.Color","get_argb",0x659bb11a,"haxor.math.Color.get_argb","haxor/math/Color.hx",192,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	Float tmp1 = (tmp * ((Float)255.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	int rb = ((int)(tmp1));		HX_STACK_VAR(rb,"rb");
	HX_STACK_LINE(194)
	Float tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	Float tmp3 = (tmp2 * ((Float)255.0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	int gb = ((int)(tmp3));		HX_STACK_VAR(gb,"gb");
	HX_STACK_LINE(195)
	Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(195)
	Float tmp5 = (tmp4 * ((Float)255.0));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(195)
	int bb = ((int)(tmp5));		HX_STACK_VAR(bb,"bb");
	HX_STACK_LINE(196)
	Float tmp6 = this->a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(196)
	Float tmp7 = (tmp6 * ((Float)255.0));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(196)
	int ab = ((int)(tmp7));		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(197)
	int tmp8 = (int(ab) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(197)
	int tmp9 = (int(rb) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(197)
	int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(197)
	int tmp11 = (int(gb) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(197)
	int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(197)
	int tmp13 = bb;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(197)
	int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(197)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_argb,return )

int Color_obj::set_argb( int v){
	HX_STACK_FRAME("haxor.math.Color","set_argb",0x13f90a8e,"haxor.math.Color.set_argb","haxor/math/Color.hx",200,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(201)
	int tmp = (int(v) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	Float tmp2 = (tmp1 * ((Float)0.00392156863));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	this->a = tmp2;
	HX_STACK_LINE(202)
	int tmp3 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	Float tmp5 = (tmp4 * ((Float)0.00392156863));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(202)
	this->r = tmp5;
	HX_STACK_LINE(203)
	int tmp6 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(203)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(203)
	Float tmp8 = (tmp7 * ((Float)0.00392156863));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(203)
	this->g = tmp8;
	HX_STACK_LINE(204)
	int tmp9 = (int(v) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(204)
	Float tmp10 = (tmp9 * ((Float)0.00392156863));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(204)
	this->b = tmp10;
	HX_STACK_LINE(205)
	int tmp11 = v;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(205)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_argb,return )

::String Color_obj::get_css( ){
	HX_STACK_FRAME("haxor.math.Color","get_css",0xb01a53b5,"haxor.math.Color.get_css","haxor/math/Color.hx",214,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	::String tmp3 = (HX_HCSTRING("rgba(","\xf4","\xcc","\x0d","\xe8") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	::String tmp4 = (tmp3 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(214)
	Float tmp5 = this->g;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(214)
	Float tmp6 = (tmp5 * (int)255);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(214)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(214)
	::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(214)
	::String tmp9 = (tmp8 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(214)
	Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(214)
	Float tmp11 = (tmp10 * (int)255);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(214)
	int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(214)
	::String tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(214)
	::String tmp14 = (tmp13 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(214)
	Float tmp15 = this->a;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(214)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(214)
	::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(214)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_css,return )

int Color_obj::get_rgba( ){
	HX_STACK_FRAME("haxor.math.Color","get_rgba",0x70cff482,"haxor.math.Color.get_rgba","haxor/math/Color.hx",221,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	Float tmp1 = (tmp * ((Float)255.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	int rb = ((int)(tmp1));		HX_STACK_VAR(rb,"rb");
	HX_STACK_LINE(223)
	Float tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	Float tmp3 = (tmp2 * ((Float)255.0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(223)
	int gb = ((int)(tmp3));		HX_STACK_VAR(gb,"gb");
	HX_STACK_LINE(224)
	Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(224)
	Float tmp5 = (tmp4 * ((Float)255.0));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(224)
	int bb = ((int)(tmp5));		HX_STACK_VAR(bb,"bb");
	HX_STACK_LINE(225)
	Float tmp6 = this->a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(225)
	Float tmp7 = (tmp6 * ((Float)255.0));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(225)
	int ab = ((int)(tmp7));		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(226)
	int tmp8 = (int(rb) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(226)
	int tmp9 = (int(gb) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(226)
	int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(226)
	int tmp11 = (int(bb) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(226)
	int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(226)
	int tmp13 = ab;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(226)
	int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(226)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_rgba,return )

int Color_obj::set_rgba( int v){
	HX_STACK_FRAME("haxor.math.Color","set_rgba",0x1f2d4df6,"haxor.math.Color.set_rgba","haxor/math/Color.hx",229,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(230)
	int tmp = (int(v) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	Float tmp2 = (tmp1 * ((Float)0.00392156863));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	this->r = tmp2;
	HX_STACK_LINE(231)
	int tmp3 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(231)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(231)
	Float tmp5 = (tmp4 * ((Float)0.00392156863));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(231)
	this->g = tmp5;
	HX_STACK_LINE(232)
	int tmp6 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(232)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(232)
	Float tmp8 = (tmp7 * ((Float)0.00392156863));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(232)
	this->b = tmp8;
	HX_STACK_LINE(233)
	int tmp9 = (int(v) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(233)
	Float tmp10 = (tmp9 * ((Float)0.00392156863));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(233)
	this->a = tmp10;
	HX_STACK_LINE(234)
	int tmp11 = v;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(234)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_rgba,return )

int Color_obj::get_rgb( ){
	HX_STACK_FRAME("haxor.math.Color","get_rgb",0xb025aaff,"haxor.math.Color.get_rgb","haxor/math/Color.hx",242,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	Float tmp1 = (tmp * ((Float)255.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	int rb = ((int)(tmp1));		HX_STACK_VAR(rb,"rb");
	HX_STACK_LINE(244)
	Float tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	Float tmp3 = (tmp2 * ((Float)255.0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	int gb = ((int)(tmp3));		HX_STACK_VAR(gb,"gb");
	HX_STACK_LINE(245)
	Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(245)
	Float tmp5 = (tmp4 * ((Float)255.0));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(245)
	int bb = ((int)(tmp5));		HX_STACK_VAR(bb,"bb");
	HX_STACK_LINE(246)
	int tmp6 = (int(rb) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(246)
	int tmp7 = (int(gb) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(246)
	int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(246)
	int tmp9 = bb;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(246)
	int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(246)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_rgb,return )

int Color_obj::set_rgb( int v){
	HX_STACK_FRAME("haxor.math.Color","set_rgb",0xa3273c0b,"haxor.math.Color.set_rgb","haxor/math/Color.hx",249,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(250)
	int tmp = (int(v) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	Float tmp2 = (tmp1 * ((Float)0.00392156863));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	this->r = tmp2;
	HX_STACK_LINE(251)
	int tmp3 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(251)
	Float tmp5 = (tmp4 * ((Float)0.00392156863));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(251)
	this->g = tmp5;
	HX_STACK_LINE(252)
	int tmp6 = (int(v) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(252)
	Float tmp7 = (tmp6 * ((Float)0.00392156863));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(252)
	this->b = tmp7;
	HX_STACK_LINE(253)
	int tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(253)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_rgb,return )

Float Color_obj::get_luminance( ){
	HX_STACK_FRAME("haxor.math.Color","get_luminance",0x1126896a,"haxor.math.Color.get_luminance","haxor/math/Color.hx",260,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	Float tmp1 = (tmp * ((Float)0.3));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	Float tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(260)
	Float tmp3 = (tmp2 * ((Float)0.59));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(260)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	Float tmp5 = this->b;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(260)
	Float tmp6 = (tmp5 * ((Float)0.11));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(260)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(260)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_luminance,return )

::haxor::math::Color Color_obj::get_negative( ){
	HX_STACK_FRAME("haxor.math.Color","get_negative",0x38c24943,"haxor.math.Color.get_negative","haxor/math/Color.hx",266,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	Float tmp1 = (((Float)1.0) - tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	Float tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	Float tmp3 = (((Float)1.0) - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(266)
	Float tmp5 = (((Float)1.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(266)
	Float tmp6 = this->a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(266)
	Float tmp7 = (((Float)1.0) - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(266)
	::haxor::math::Color tmp8 = ::haxor::math::Color_obj::__new(tmp1,tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(266)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_negative,return )

::haxor::math::Color Color_obj::Set( hx::Null< Float >  __o_p_r,hx::Null< Float >  __o_p_g,hx::Null< Float >  __o_p_b,hx::Null< Float >  __o_p_a){
Float p_r = __o_p_r.Default(0);
Float p_g = __o_p_g.Default(0);
Float p_b = __o_p_b.Default(0);
Float p_a = __o_p_a.Default(1);
	HX_STACK_FRAME("haxor.math.Color","Set",0x1755d15d,"haxor.math.Color.Set","haxor/math/Color.hx",314,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_r,"p_r")
	HX_STACK_ARG(p_g,"p_g")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_a,"p_a")
{
		HX_STACK_LINE(315)
		this->r = p_r;
		HX_STACK_LINE(316)
		this->g = p_g;
		HX_STACK_LINE(317)
		this->b = p_b;
		HX_STACK_LINE(318)
		this->a = p_a;
		HX_STACK_LINE(319)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Color_obj,Set,return )

::haxor::math::Color Color_obj::Set3( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.Color","Set3",0x53c16036,"haxor.math.Color.Set3","haxor/math/Color.hx",327,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(327)
	this->r = v->x;
	HX_STACK_LINE(327)
	this->g = v->y;
	HX_STACK_LINE(327)
	this->b = v->z;
	HX_STACK_LINE(327)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,Set3,return )

::haxor::math::Color Color_obj::Set4( ::haxor::math::Vector4 v){
	HX_STACK_FRAME("haxor.math.Color","Set4",0x53c16037,"haxor.math.Color.Set4","haxor/math/Color.hx",334,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(334)
	this->r = v->x;
	HX_STACK_LINE(334)
	this->g = v->y;
	HX_STACK_LINE(334)
	this->b = v->z;
	HX_STACK_LINE(334)
	this->a = v->w;
	HX_STACK_LINE(334)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,Set4,return )

::haxor::math::Color Color_obj::SetColor( ::haxor::math::Color p_color){
	HX_STACK_FRAME("haxor.math.Color","SetColor",0xd7aefec6,"haxor.math.Color.SetColor","haxor/math/Color.hx",341,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_color,"p_color")
	HX_STACK_LINE(341)
	this->r = p_color->r;
	HX_STACK_LINE(341)
	this->g = p_color->g;
	HX_STACK_LINE(341)
	this->b = p_color->b;
	HX_STACK_LINE(341)
	this->a = p_color->a;
	HX_STACK_LINE(341)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,SetColor,return )

::haxor::math::Color Color_obj::SetRGB( ::haxor::math::Color p_color){
	HX_STACK_FRAME("haxor.math.Color","SetRGB",0xcf1a1db0,"haxor.math.Color.SetRGB","haxor/math/Color.hx",348,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_color,"p_color")
	HX_STACK_LINE(348)
	this->r = p_color->r;
	HX_STACK_LINE(348)
	this->g = p_color->g;
	HX_STACK_LINE(348)
	this->b = p_color->b;
	HX_STACK_LINE(348)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,SetRGB,return )

::haxor::math::Color Color_obj::SetAlpha( ::haxor::math::Color p_color){
	HX_STACK_FRAME("haxor.math.Color","SetAlpha",0xaee934c1,"haxor.math.Color.SetAlpha","haxor/math/Color.hx",355,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_color,"p_color")
	HX_STACK_LINE(355)
	this->a = p_color->a;
	HX_STACK_LINE(355)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,SetAlpha,return )

Float Color_obj::Get( int p){
	HX_STACK_FRAME("haxor.math.Color","Get",0x174cb651,"haxor.math.Color.Get","haxor/math/Color.hx",362,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(362)
	bool tmp = (p == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	if ((tmp)){
		HX_STACK_LINE(362)
		tmp1 = this->r;
	}
	else{
		HX_STACK_LINE(362)
		bool tmp2 = (p == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(362)
		if ((tmp2)){
			HX_STACK_LINE(362)
			tmp1 = this->g;
		}
		else{
			HX_STACK_LINE(362)
			bool tmp3 = (p == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(362)
			if ((tmp3)){
				HX_STACK_LINE(362)
				tmp1 = this->b;
			}
			else{
				HX_STACK_LINE(362)
				tmp1 = this->a;
			}
		}
	}
	HX_STACK_LINE(362)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,Get,return )

::haxor::math::Color Color_obj::Add( ::haxor::math::Color p_v){
	HX_STACK_FRAME("haxor.math.Color","Add",0x174827dc,"haxor.math.Color.Add","haxor/math/Color.hx",369,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(369)
	hx::AddEq(this->r,p_v->r);
	HX_STACK_LINE(369)
	hx::AddEq(this->g,p_v->g);
	HX_STACK_LINE(369)
	hx::AddEq(this->b,p_v->b);
	HX_STACK_LINE(369)
	hx::AddEq(this->a,p_v->a);
	HX_STACK_LINE(369)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,Add,return )

::haxor::math::Color Color_obj::Sub( ::haxor::math::Color p_v){
	HX_STACK_FRAME("haxor.math.Color","Sub",0x1755df3b,"haxor.math.Color.Sub","haxor/math/Color.hx",376,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(376)
	hx::SubEq(this->r,p_v->r);
	HX_STACK_LINE(376)
	hx::SubEq(this->g,p_v->g);
	HX_STACK_LINE(376)
	hx::SubEq(this->b,p_v->b);
	HX_STACK_LINE(376)
	hx::SubEq(this->a,p_v->a);
	HX_STACK_LINE(376)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,Sub,return )

::haxor::math::Color Color_obj::Multiply( ::haxor::math::Color p_v){
	HX_STACK_FRAME("haxor.math.Color","Multiply",0x19ab0689,"haxor.math.Color.Multiply","haxor/math/Color.hx",383,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(383)
	hx::MultEq(this->r,p_v->r);
	HX_STACK_LINE(383)
	hx::MultEq(this->g,p_v->g);
	HX_STACK_LINE(383)
	hx::MultEq(this->b,p_v->b);
	HX_STACK_LINE(383)
	hx::MultEq(this->a,p_v->a);
	HX_STACK_LINE(383)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,Multiply,return )

::haxor::math::Color Color_obj::MultiplyRGB( ::haxor::math::Color p_v){
	HX_STACK_FRAME("haxor.math.Color","MultiplyRGB",0x55496c04,"haxor.math.Color.MultiplyRGB","haxor/math/Color.hx",390,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(390)
	hx::MultEq(this->r,p_v->r);
	HX_STACK_LINE(390)
	hx::MultEq(this->g,p_v->g);
	HX_STACK_LINE(390)
	hx::MultEq(this->b,p_v->b);
	HX_STACK_LINE(390)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,MultiplyRGB,return )

::haxor::math::Color Color_obj::Scale( Float p_s){
	HX_STACK_FRAME("haxor.math.Color","Scale",0xf4122905,"haxor.math.Color.Scale","haxor/math/Color.hx",397,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_s,"p_s")
	HX_STACK_LINE(397)
	hx::MultEq(this->r,p_s);
	HX_STACK_LINE(397)
	hx::MultEq(this->g,p_s);
	HX_STACK_LINE(397)
	hx::MultEq(this->b,p_s);
	HX_STACK_LINE(397)
	hx::MultEq(this->a,p_s);
	HX_STACK_LINE(397)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,Scale,return )

::haxor::math::Color Color_obj::ScaleRGB( Float p_s){
	HX_STACK_FRAME("haxor.math.Color","ScaleRGB",0x8079ff08,"haxor.math.Color.ScaleRGB","haxor/math/Color.hx",404,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_s,"p_s")
	HX_STACK_LINE(404)
	hx::MultEq(this->r,p_s);
	HX_STACK_LINE(404)
	hx::MultEq(this->g,p_s);
	HX_STACK_LINE(404)
	hx::MultEq(this->b,p_s);
	HX_STACK_LINE(404)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,ScaleRGB,return )

Array< Float > Color_obj::ToArray( ){
	HX_STACK_FRAME("haxor.math.Color","ToArray",0x48bee959,"haxor.math.Color.ToArray","haxor/math/Color.hx",410,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(410)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(410)
	Float tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(410)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(410)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(410)
	Array< Float > tmp4 = Array_obj< Float >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(410)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,ToArray,return )

::String Color_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.Color","ToString",0xb78cf511,"haxor.math.Color.ToString","haxor/math/Color.hx",416,0x18984df5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(416)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int tmp1 = p_places;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(416)
			Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(416)
			Float d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(416)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				Float tmp4 = this->r;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(416)
				Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(416)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(416)
				Float p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(416)
				Float tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(416)
				bool tmp8 = (p_v < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(416)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(416)
				if ((tmp8)){
					HX_STACK_LINE(416)
					tmp9 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(416)
					tmp9 = ((Float)0.5);
				}
				HX_STACK_LINE(416)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(416)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				tmp3 = ((Float)(tmp11));
			}
			HX_STACK_LINE(416)
			Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		HX_STACK_LINE(416)
		::String tmp1 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		::String tmp2 = (tmp1 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int tmp4 = p_places;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			Float tmp5 = ::Math_obj::pow((int)10,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			Float d = tmp5;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(416)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				Float tmp7 = this->g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(416)
				Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(416)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(416)
				Float p_v = tmp9;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(416)
				Float tmp10 = p_v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(416)
				bool tmp11 = (p_v < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(416)
				if ((tmp11)){
					HX_STACK_LINE(416)
					tmp12 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(416)
					tmp12 = ((Float)0.5);
				}
				HX_STACK_LINE(416)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(416)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(416)
				tmp6 = ((Float)(tmp14));
			}
			HX_STACK_LINE(416)
			Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			tmp3 = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(416)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(416)
		::String tmp5 = (tmp4 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int tmp7 = p_places;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			Float tmp8 = ::Math_obj::pow((int)10,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			Float d = tmp8;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(416)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(416)
				Float tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(416)
				Float p_v = tmp12;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(416)
				Float tmp13 = p_v;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(416)
				bool tmp14 = (p_v < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(416)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(416)
				if ((tmp14)){
					HX_STACK_LINE(416)
					tmp15 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(416)
					tmp15 = ((Float)0.5);
				}
				HX_STACK_LINE(416)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(416)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(416)
				tmp9 = ((Float)(tmp17));
			}
			HX_STACK_LINE(416)
			Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			tmp6 = (Float(tmp9) / Float(tmp10));
		}
		HX_STACK_LINE(416)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(416)
		::String tmp8 = (tmp7 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(416)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int tmp10 = p_places;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			Float tmp11 = ::Math_obj::pow((int)10,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			Float d = tmp11;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(416)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				Float tmp13 = this->a;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(416)
				Float tmp14 = d;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(416)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(416)
				Float p_v = tmp15;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(416)
				Float tmp16 = p_v;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(416)
				bool tmp17 = (p_v < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(416)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(416)
				if ((tmp17)){
					HX_STACK_LINE(416)
					tmp18 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(416)
					tmp18 = ((Float)0.5);
				}
				HX_STACK_LINE(416)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(416)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(416)
				tmp12 = ((Float)(tmp20));
			}
			HX_STACK_LINE(416)
			Float tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(416)
			tmp9 = (Float(tmp12) / Float(tmp13));
		}
		HX_STACK_LINE(416)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(416)
		::String tmp11 = (tmp10 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(416)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,ToString,return )

::haxor::math::Color Color_obj::temp;

::haxor::math::Color Color_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.Color","get_temp",0x7220e6e2,"haxor.math.Color.get_temp","haxor/math/Color.hx",15,0x18984df5)
	HX_STACK_LINE(15)
	::haxor::math::Color tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		Array< ::Dynamic > tmp2 = _this->m_c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		int tmp4 = _this->m_c->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		int tmp6 = _this->m_nc = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Color >();
	}
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_temp,return )

::haxor::math::Color Color_obj::red;

::haxor::math::Color Color_obj::get_red( ){
	HX_STACK_FRAME("haxor.math.Color","get_red",0xb025a943,"haxor.math.Color.get_red","haxor/math/Color.hx",20,0x18984df5)
	HX_STACK_LINE(20)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)1.0),(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_red,return )

::haxor::math::Color Color_obj::yellow;

::haxor::math::Color Color_obj::get_yellow( ){
	HX_STACK_FRAME("haxor.math.Color","get_yellow",0xe86ed2c2,"haxor.math.Color.get_yellow","haxor/math/Color.hx",24,0x18984df5)
	HX_STACK_LINE(24)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)1,(int)1,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_yellow,return )

::haxor::math::Color Color_obj::green;

::haxor::math::Color Color_obj::get_green( ){
	HX_STACK_FRAME("haxor.math.Color","get_green",0xf7053f35,"haxor.math.Color.get_green","haxor/math/Color.hx",28,0x18984df5)
	HX_STACK_LINE(28)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)0,(int)1,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_green,return )

::haxor::math::Color Color_obj::cyan;

::haxor::math::Color Color_obj::get_cyan( ){
	HX_STACK_FRAME("haxor.math.Color","get_cyan",0x66f368f1,"haxor.math.Color.get_cyan","haxor/math/Color.hx",32,0x18984df5)
	HX_STACK_LINE(32)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)0,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_cyan,return )

::haxor::math::Color Color_obj::blue;

::haxor::math::Color Color_obj::get_blue( ){
	HX_STACK_FRAME("haxor.math.Color","get_blue",0x66406668,"haxor.math.Color.get_blue","haxor/math/Color.hx",36,0x18984df5)
	HX_STACK_LINE(36)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_blue,return )

::haxor::math::Color Color_obj::magenta;

::haxor::math::Color Color_obj::get_magenta( ){
	HX_STACK_FRAME("haxor.math.Color","get_magenta",0x06786b1b,"haxor.math.Color.get_magenta","haxor/math/Color.hx",40,0x18984df5)
	HX_STACK_LINE(40)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)1,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_magenta,return )

::haxor::math::Color Color_obj::black;

::haxor::math::Color Color_obj::get_black( ){
	HX_STACK_FRAME("haxor.math.Color","get_black",0x120a0631,"haxor.math.Color.get_black","haxor/math/Color.hx",44,0x18984df5)
	HX_STACK_LINE(44)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_black,return )

::haxor::math::Color Color_obj::white;

::haxor::math::Color Color_obj::get_white( ){
	HX_STACK_FRAME("haxor.math.Color","get_white",0x26d57b1b,"haxor.math.Color.get_white","haxor/math/Color.hx",48,0x18984df5)
	HX_STACK_LINE(48)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_white,return )

::haxor::math::Color Color_obj::transparent;

::haxor::math::Color Color_obj::get_transparent( ){
	HX_STACK_FRAME("haxor.math.Color","get_transparent",0xeca53d44,"haxor.math.Color.get_transparent","haxor/math/Color.hx",52,0x18984df5)
	HX_STACK_LINE(52)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_transparent,return )

::haxor::math::Color Color_obj::gray10;

::haxor::math::Color Color_obj::get_gray10( ){
	HX_STACK_FRAME("haxor.math.Color","get_gray10",0x2afc2cd0,"haxor.math.Color.get_gray10","haxor/math/Color.hx",56,0x18984df5)
	HX_STACK_LINE(56)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.1),((Float)0.1),((Float)0.1),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_gray10,return )

::haxor::math::Color Color_obj::gray25;

::haxor::math::Color Color_obj::get_gray25( ){
	HX_STACK_FRAME("haxor.math.Color","get_gray25",0x2afc2db4,"haxor.math.Color.get_gray25","haxor/math/Color.hx",60,0x18984df5)
	HX_STACK_LINE(60)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.25),((Float)0.25),((Float)0.25),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_gray25,return )

::haxor::math::Color Color_obj::gray50;

::haxor::math::Color Color_obj::get_gray50( ){
	HX_STACK_FRAME("haxor.math.Color","get_gray50",0x2afc304c,"haxor.math.Color.get_gray50","haxor/math/Color.hx",64,0x18984df5)
	HX_STACK_LINE(64)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.5),((Float)0.5),((Float)0.5),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_gray50,return )

::haxor::math::Color Color_obj::gray75;

::haxor::math::Color Color_obj::get_gray75( ){
	HX_STACK_FRAME("haxor.math.Color","get_gray75",0x2afc320f,"haxor.math.Color.get_gray75","haxor/math/Color.hx",68,0x18984df5)
	HX_STACK_LINE(68)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.75),((Float)0.75),((Float)0.75),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_gray75,return )

::haxor::math::Color Color_obj::gray90;

::haxor::math::Color Color_obj::get_gray90( ){
	HX_STACK_FRAME("haxor.math.Color","get_gray90",0x2afc33c8,"haxor.math.Color.get_gray90","haxor/math/Color.hx",72,0x18984df5)
	HX_STACK_LINE(72)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.9),((Float)0.9),((Float)0.9),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_gray90,return )

::haxor::math::Color Color_obj::red50;

::haxor::math::Color Color_obj::get_red50( ){
	HX_STACK_FRAME("haxor.math.Color","get_red50",0x43d4ee5e,"haxor.math.Color.get_red50","haxor/math/Color.hx",77,0x18984df5)
	HX_STACK_LINE(77)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.9),((Float)0.5),((Float)0.5),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_red50,return )

::haxor::math::Color Color_obj::green50;

::haxor::math::Color Color_obj::get_green50( ){
	HX_STACK_FRAME("haxor.math.Color","get_green50",0xb23b64d0,"haxor.math.Color.get_green50","haxor/math/Color.hx",82,0x18984df5)
	HX_STACK_LINE(82)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.5),((Float)0.9),((Float)0.5),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_green50,return )

::haxor::math::Color Color_obj::blue50;

::haxor::math::Color Color_obj::get_blue50( ){
	HX_STACK_FRAME("haxor.math.Color","get_blue50",0xc3f4fec3,"haxor.math.Color.get_blue50","haxor/math/Color.hx",87,0x18984df5)
	HX_STACK_LINE(87)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.5),((Float)0.5),((Float)0.9),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_blue50,return )

::haxor::math::Color Color_obj::yellow50;

::haxor::math::Color Color_obj::get_yellow50( ){
	HX_STACK_FRAME("haxor.math.Color","get_yellow50",0xffdab59d,"haxor.math.Color.get_yellow50","haxor/math/Color.hx",92,0x18984df5)
	HX_STACK_LINE(92)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.9),((Float)0.9),((Float)0.5),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_yellow50,return )

::haxor::math::Color Color_obj::magenta50;

::haxor::math::Color Color_obj::get_magenta50( ){
	HX_STACK_FRAME("haxor.math.Color","get_magenta50",0xe5bdd636,"haxor.math.Color.get_magenta50","haxor/math/Color.hx",97,0x18984df5)
	HX_STACK_LINE(97)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.9),((Float)0.5),((Float)0.9),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_magenta50,return )

::haxor::math::Color Color_obj::red30;

::haxor::math::Color Color_obj::get_red30( ){
	HX_STACK_FRAME("haxor.math.Color","get_red30",0x43d4eca0,"haxor.math.Color.get_red30","haxor/math/Color.hx",102,0x18984df5)
	HX_STACK_LINE(102)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.9),((Float)0.3),((Float)0.3),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_red30,return )

::haxor::math::Color Color_obj::green30;

::haxor::math::Color Color_obj::get_green30( ){
	HX_STACK_FRAME("haxor.math.Color","get_green30",0xb23b6312,"haxor.math.Color.get_green30","haxor/math/Color.hx",107,0x18984df5)
	HX_STACK_LINE(107)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.3),((Float)0.9),((Float)0.3),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_green30,return )

::haxor::math::Color Color_obj::blue30;

::haxor::math::Color Color_obj::get_blue30( ){
	HX_STACK_FRAME("haxor.math.Color","get_blue30",0xc3f4fd05,"haxor.math.Color.get_blue30","haxor/math/Color.hx",112,0x18984df5)
	HX_STACK_LINE(112)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(((Float)0.3),((Float)0.3),((Float)0.9),(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_blue30,return )

::haxor::math::Color Color_obj::FromHex( ::String p_hex){
	HX_STACK_FRAME("haxor.math.Color","FromHex",0xaea542cc,"haxor.math.Color.FromHex","haxor/math/Color.hx",120,0x18984df5)
	HX_STACK_ARG(p_hex,"p_hex")
	HX_STACK_LINE(121)
	::haxor::math::Color tmp = ::haxor::math::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::haxor::math::Color c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(122)
	bool tmp1 = (p_hex.length == (int)10);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	if ((tmp1)){
		HX_STACK_LINE(122)
		::String tmp2 = p_hex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		c->set_argb(tmp3);
	}
	else{
		HX_STACK_LINE(122)
		::String tmp2 = p_hex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		c->set_rgb(tmp3);
	}
	HX_STACK_LINE(123)
	::haxor::math::Color tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_obj,FromHex,return )

::haxor::math::Color Color_obj::FromBytes( hx::Null< Float >  __o_p_r,hx::Null< Float >  __o_p_g,hx::Null< Float >  __o_p_b,hx::Null< Float >  __o_p_a){
Float p_r = __o_p_r.Default(0);
Float p_g = __o_p_g.Default(0);
Float p_b = __o_p_b.Default(0);
Float p_a = __o_p_a.Default(((Float)255.0));
	HX_STACK_FRAME("haxor.math.Color","FromBytes",0x2d62a69c,"haxor.math.Color.FromBytes","haxor/math/Color.hx",135,0x18984df5)
	HX_STACK_ARG(p_r,"p_r")
	HX_STACK_ARG(p_g,"p_g")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_a,"p_a")
{
		HX_STACK_LINE(136)
		Float tmp = (p_r * ((Float)0.00392156863));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		Float tmp1 = (p_g * ((Float)0.00392156863));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		Float tmp2 = (p_b * ((Float)0.00392156863));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		Float tmp3 = (p_a * ((Float)0.00392156863));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		::haxor::math::Color tmp4 = ::haxor::math::Color_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Color_obj,FromBytes,return )

::haxor::math::Color Color_obj::Lerp( ::haxor::math::Color a,::haxor::math::Color b,Float r){
	HX_STACK_FRAME("haxor.math.Color","Lerp",0x4f20e05c,"haxor.math.Color.Lerp","haxor/math/Color.hx",147,0x18984df5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(148)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		Float p_a = a->r;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(148)
		Float tmp1 = p_a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		Float tmp2 = (b->r - p_a);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		Float tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		tmp = (tmp1 + tmp4);
	}
	HX_STACK_LINE(148)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		Float p_a = a->g;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(148)
		Float tmp2 = p_a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		Float tmp3 = (b->g - p_a);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		Float tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		tmp1 = (tmp2 + tmp5);
	}
	HX_STACK_LINE(148)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		Float p_a = a->b;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(148)
		Float tmp3 = p_a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		Float tmp4 = (b->b - p_a);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		Float tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		tmp2 = (tmp3 + tmp6);
	}
	HX_STACK_LINE(148)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		Float p_a = a->a;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(148)
		Float tmp4 = p_a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		Float tmp5 = (b->a - p_a);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		Float tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		tmp3 = (tmp4 + tmp7);
	}
	HX_STACK_LINE(148)
	::haxor::math::Color tmp4 = ::haxor::math::Color_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(148)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Color_obj,Lerp,return )

::haxor::math::Color Color_obj::Sample( Array< ::Dynamic > g,Float r){
	HX_STACK_FRAME("haxor.math.Color","Sample",0x7cf6314f,"haxor.math.Color.Sample","haxor/math/Color.hx",158,0x18984df5)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(159)
	int tmp = (g->length - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	Float pos = ((Float)(tmp));		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(160)
	Float tmp1 = (r * ((Float)0.9999));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	hx::MultEq(pos,tmp1);
	HX_STACK_LINE(161)
	Float tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	int i0 = tmp3;		HX_STACK_VAR(i0,"i0");
	HX_STACK_LINE(162)
	int tmp4 = (i0 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(162)
	int tmp5 = g->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(162)
	int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(162)
	int i1 = tmp6;		HX_STACK_VAR(i1,"i1");
	HX_STACK_LINE(163)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		bool p_signed = false;		HX_STACK_VAR(p_signed,"p_signed");
		HX_STACK_LINE(163)
		bool tmp8 = (pos < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		if ((tmp8)){
			HX_STACK_LINE(163)
			Float tmp10 = pos;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(163)
			tmp9 = -(tmp10);
		}
		else{
			HX_STACK_LINE(163)
			tmp9 = pos;
		}
		HX_STACK_LINE(163)
		bool tmp10 = (pos < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(163)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(163)
		if ((tmp10)){
			HX_STACK_LINE(163)
			Float tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(163)
			tmp11 = -(tmp12);
		}
		else{
			HX_STACK_LINE(163)
			tmp11 = pos;
		}
		HX_STACK_LINE(163)
		Float tmp12 = ::Math_obj::ffloor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(163)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(163)
		Float f = tmp13;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(163)
		bool tmp14 = p_signed;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(163)
		if ((tmp14)){
			HX_STACK_LINE(163)
			bool tmp15 = (pos < ((Float)0.0));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(163)
			if ((tmp15)){
				HX_STACK_LINE(163)
				Float tmp16 = f;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(163)
				tmp7 = -(tmp16);
			}
			else{
				HX_STACK_LINE(163)
				tmp7 = f;
			}
		}
		else{
			HX_STACK_LINE(163)
			tmp7 = f;
		}
	}
	HX_STACK_LINE(163)
	r = tmp7;
	HX_STACK_LINE(164)
	::haxor::math::Color tmp8 = g->__get(i0).StaticCast< ::haxor::math::Color >();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	::haxor::math::Color c0 = tmp8;		HX_STACK_VAR(c0,"c0");
	HX_STACK_LINE(165)
	::haxor::math::Color tmp9 = g->__get(i1).StaticCast< ::haxor::math::Color >();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(165)
	::haxor::math::Color c1 = tmp9;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(166)
	::haxor::math::Color tmp10 = c0;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(166)
	::haxor::math::Color tmp11 = c1;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(166)
	Float tmp12 = r;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(166)
	::haxor::math::Color tmp13 = ::haxor::math::Color_obj::Lerp(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(166)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_obj,Sample,return )

::haxor::math::Color Color_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.math.Color","Parse",0x3898eaae,"haxor.math.Color.Parse","haxor/math/Color.hx",424,0x18984df5)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(425)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(425)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(425)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(426)
		::haxor::math::Color tmp2 = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(427)
		::String tmp3 = tk->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(427)
		::String tmp4 = ::StringTools_obj::trim(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(427)
		Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(428)
		::String tmp6 = tk->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(428)
		::String tmp7 = ::StringTools_obj::trim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(428)
		Float tmp8 = ::Std_obj::parseFloat(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(429)
		::String tmp9 = tk->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(429)
		::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(429)
		Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(430)
		::String tmp12 = tk->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(430)
		::String tmp13 = ::StringTools_obj::trim(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(430)
		Float tmp14 = ::Std_obj::parseFloat(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(426)
		::haxor::math::Color tmp15 = tmp2->Set(tmp5,tmp8,tmp11,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(426)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_obj,Parse,return )


Color_obj::Color_obj()
{
}

void Color_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Color);
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(xyz,"xyz");
	HX_MARK_MEMBER_NAME(xyzw,"xyzw");
	HX_MARK_MEMBER_NAME(luminance,"luminance");
	HX_MARK_MEMBER_NAME(negative,"negative");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void Color_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(xyz,"xyz");
	HX_VISIT_MEMBER_NAME(xyzw,"xyzw");
	HX_VISIT_MEMBER_NAME(luminance,"luminance");
	HX_VISIT_MEMBER_NAME(negative,"negative");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic Color_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xyz") ) { return inCallProp == hx::paccAlways ? get_xyz() : xyz; }
		if (HX_FIELD_EQ(inName,"css") ) { if (inCallProp == hx::paccAlways) return get_css(); }
		if (HX_FIELD_EQ(inName,"rgb") ) { if (inCallProp == hx::paccAlways) return get_rgb(); }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Sub") ) { return Sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xyzw") ) { return inCallProp == hx::paccAlways ? get_xyzw() : xyzw; }
		if (HX_FIELD_EQ(inName,"argb") ) { if (inCallProp == hx::paccAlways) return get_argb(); }
		if (HX_FIELD_EQ(inName,"rgba") ) { if (inCallProp == hx::paccAlways) return get_rgba(); }
		if (HX_FIELD_EQ(inName,"Set3") ) { return Set3_dyn(); }
		if (HX_FIELD_EQ(inName,"Set4") ) { return Set4_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return inCallProp == hx::paccAlways ? get_clone() : clone; }
		if (HX_FIELD_EQ(inName,"Scale") ) { return Scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SetRGB") ) { return SetRGB_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_xyz") ) { return get_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"get_css") ) { return get_css_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rgb") ) { return get_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rgb") ) { return set_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"ToArray") ) { return ToArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_xyzw") ) { return get_xyzw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_argb") ) { return get_argb_dyn(); }
		if (HX_FIELD_EQ(inName,"set_argb") ) { return set_argb_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rgba") ) { return get_rgba_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rgba") ) { return set_rgba_dyn(); }
		if (HX_FIELD_EQ(inName,"negative") ) { return inCallProp == hx::paccAlways ? get_negative() : negative; }
		if (HX_FIELD_EQ(inName,"SetColor") ) { return SetColor_dyn(); }
		if (HX_FIELD_EQ(inName,"SetAlpha") ) { return SetAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"ScaleRGB") ) { return ScaleRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_clone") ) { return get_clone_dyn(); }
		if (HX_FIELD_EQ(inName,"luminance") ) { return inCallProp == hx::paccAlways ? get_luminance() : luminance; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MultiplyRGB") ) { return MultiplyRGB_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_negative") ) { return get_negative_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_luminance") ) { return get_luminance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Color_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { outValue = inCallProp == hx::paccAlways ? get_red() : red; return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = inCallProp == hx::paccAlways ? get_temp() : temp; return true; }
		if (HX_FIELD_EQ(inName,"cyan") ) { outValue = inCallProp == hx::paccAlways ? get_cyan() : cyan; return true; }
		if (HX_FIELD_EQ(inName,"blue") ) { outValue = inCallProp == hx::paccAlways ? get_blue() : blue; return true; }
		if (HX_FIELD_EQ(inName,"Lerp") ) { outValue = Lerp_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"green") ) { outValue = inCallProp == hx::paccAlways ? get_green() : green; return true; }
		if (HX_FIELD_EQ(inName,"black") ) { outValue = inCallProp == hx::paccAlways ? get_black() : black; return true; }
		if (HX_FIELD_EQ(inName,"white") ) { outValue = inCallProp == hx::paccAlways ? get_white() : white; return true; }
		if (HX_FIELD_EQ(inName,"red50") ) { outValue = inCallProp == hx::paccAlways ? get_red50() : red50; return true; }
		if (HX_FIELD_EQ(inName,"red30") ) { outValue = inCallProp == hx::paccAlways ? get_red30() : red30; return true; }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"yellow") ) { outValue = inCallProp == hx::paccAlways ? get_yellow() : yellow; return true; }
		if (HX_FIELD_EQ(inName,"gray10") ) { outValue = inCallProp == hx::paccAlways ? get_gray10() : gray10; return true; }
		if (HX_FIELD_EQ(inName,"gray25") ) { outValue = inCallProp == hx::paccAlways ? get_gray25() : gray25; return true; }
		if (HX_FIELD_EQ(inName,"gray50") ) { outValue = inCallProp == hx::paccAlways ? get_gray50() : gray50; return true; }
		if (HX_FIELD_EQ(inName,"gray75") ) { outValue = inCallProp == hx::paccAlways ? get_gray75() : gray75; return true; }
		if (HX_FIELD_EQ(inName,"gray90") ) { outValue = inCallProp == hx::paccAlways ? get_gray90() : gray90; return true; }
		if (HX_FIELD_EQ(inName,"blue50") ) { outValue = inCallProp == hx::paccAlways ? get_blue50() : blue50; return true; }
		if (HX_FIELD_EQ(inName,"blue30") ) { outValue = inCallProp == hx::paccAlways ? get_blue30() : blue30; return true; }
		if (HX_FIELD_EQ(inName,"Sample") ) { outValue = Sample_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_red") ) { outValue = get_red_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"magenta") ) { outValue = inCallProp == hx::paccAlways ? get_magenta() : magenta; return true; }
		if (HX_FIELD_EQ(inName,"green50") ) { outValue = inCallProp == hx::paccAlways ? get_green50() : green50; return true; }
		if (HX_FIELD_EQ(inName,"green30") ) { outValue = inCallProp == hx::paccAlways ? get_green30() : green30; return true; }
		if (HX_FIELD_EQ(inName,"FromHex") ) { outValue = FromHex_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { outValue = get_temp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_cyan") ) { outValue = get_cyan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_blue") ) { outValue = get_blue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"yellow50") ) { outValue = inCallProp == hx::paccAlways ? get_yellow50() : yellow50; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_green") ) { outValue = get_green_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_black") ) { outValue = get_black_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_white") ) { outValue = get_white_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_red50") ) { outValue = get_red50_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"magenta50") ) { outValue = inCallProp == hx::paccAlways ? get_magenta50() : magenta50; return true; }
		if (HX_FIELD_EQ(inName,"get_red30") ) { outValue = get_red30_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FromBytes") ) { outValue = FromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_yellow") ) { outValue = get_yellow_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_gray10") ) { outValue = get_gray10_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_gray25") ) { outValue = get_gray25_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_gray50") ) { outValue = get_gray50_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_gray75") ) { outValue = get_gray75_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_gray90") ) { outValue = get_gray90_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_blue50") ) { outValue = get_blue50_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_blue30") ) { outValue = get_blue30_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_magenta") ) { outValue = get_magenta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transparent") ) { outValue = inCallProp == hx::paccAlways ? get_transparent() : transparent; return true; }
		if (HX_FIELD_EQ(inName,"get_green50") ) { outValue = get_green50_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_green30") ) { outValue = get_green30_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_yellow50") ) { outValue = get_yellow50_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_magenta50") ) { outValue = get_magenta50_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_transparent") ) { outValue = get_transparent_dyn(); return true;  }
	}
	return false;
}

Dynamic Color_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xyz") ) { xyz=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rgb") ) { if (inCallProp == hx::paccAlways) return set_rgb(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xyzw") ) { xyzw=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"argb") ) { if (inCallProp == hx::paccAlways) return set_argb(inValue); }
		if (HX_FIELD_EQ(inName,"rgba") ) { if (inCallProp == hx::paccAlways) return set_rgba(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"negative") ) { negative=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"luminance") ) { luminance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Color_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { red=ioValue.Cast< ::haxor::math::Color >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"cyan") ) { cyan=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"blue") ) { blue=ioValue.Cast< ::haxor::math::Color >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"green") ) { green=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"black") ) { black=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"white") ) { white=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"red50") ) { red50=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"red30") ) { red30=ioValue.Cast< ::haxor::math::Color >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"yellow") ) { yellow=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"gray10") ) { gray10=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"gray25") ) { gray25=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"gray50") ) { gray50=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"gray75") ) { gray75=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"gray90") ) { gray90=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"blue50") ) { blue50=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"blue30") ) { blue30=ioValue.Cast< ::haxor::math::Color >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { magenta=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"green50") ) { green50=ioValue.Cast< ::haxor::math::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"green30") ) { green30=ioValue.Cast< ::haxor::math::Color >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yellow50") ) { yellow50=ioValue.Cast< ::haxor::math::Color >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magenta50") ) { magenta50=ioValue.Cast< ::haxor::math::Color >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=ioValue.Cast< ::haxor::math::Color >(); return true; }
	}
	return false;
}

void Color_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("xyz","\x59","\x78","\x5b","\x00"));
	outFields->push(HX_HCSTRING("xyzw","\xfe","\xd5","\xad","\x4f"));
	outFields->push(HX_HCSTRING("argb","\x4c","\x8d","\x74","\x40"));
	outFields->push(HX_HCSTRING("css","\xc3","\x83","\x4b","\x00"));
	outFields->push(HX_HCSTRING("rgba","\xb4","\xd0","\xa8","\x4b"));
	outFields->push(HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"));
	outFields->push(HX_HCSTRING("luminance","\xf8","\x37","\x88","\x68"));
	outFields->push(HX_HCSTRING("negative","\x75","\x26","\x42","\x51"));
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Color_obj,clone),HX_HCSTRING("clone","\x5d","\x13","\x63","\x48")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Color_obj,xyz),HX_HCSTRING("xyz","\x59","\x78","\x5b","\x00")},
	{hx::fsObject /*::haxor::math::Vector4*/ ,(int)offsetof(Color_obj,xyzw),HX_HCSTRING("xyzw","\xfe","\xd5","\xad","\x4f")},
	{hx::fsFloat,(int)offsetof(Color_obj,luminance),HX_HCSTRING("luminance","\xf8","\x37","\x88","\x68")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Color_obj,negative),HX_HCSTRING("negative","\x75","\x26","\x42","\x51")},
	{hx::fsFloat,(int)offsetof(Color_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Color_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Color_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Color_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::red,HX_HCSTRING("red","\x51","\xd9","\x56","\x00")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::yellow,HX_HCSTRING("yellow","\x74","\x9f","\x5c","\xd0")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::green,HX_HCSTRING("green","\xc3","\x0e","\xed","\x99")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::cyan,HX_HCSTRING("cyan","\x23","\x45","\xcc","\x41")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::blue,HX_HCSTRING("blue","\x9a","\x42","\x19","\x41")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::magenta,HX_HCSTRING("magenta","\x29","\xba","\x9d","\x0e")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::black,HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::white,HX_HCSTRING("white","\xa9","\x4a","\xbd","\xc9")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::transparent,HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::gray10,HX_HCSTRING("gray10","\x82","\xf9","\xe9","\x12")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::gray25,HX_HCSTRING("gray25","\x66","\xfa","\xe9","\x12")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::gray50,HX_HCSTRING("gray50","\xfe","\xfc","\xe9","\x12")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::gray75,HX_HCSTRING("gray75","\xc1","\xfe","\xe9","\x12")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::gray90,HX_HCSTRING("gray90","\x7a","\x00","\xea","\x12")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::red50,HX_HCSTRING("red50","\xec","\xbd","\xbc","\xe6")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::green50,HX_HCSTRING("green50","\xde","\xb3","\x60","\xba")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::blue50,HX_HCSTRING("blue50","\x75","\xcb","\xe2","\xab")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::yellow50,HX_HCSTRING("yellow50","\xcf","\x92","\x5a","\x18")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::magenta50,HX_HCSTRING("magenta50","\xc4","\x84","\x1f","\x3d")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::red30,HX_HCSTRING("red30","\x2e","\xbc","\xbc","\xe6")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::green30,HX_HCSTRING("green30","\x20","\xb2","\x60","\xba")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Color_obj::blue30,HX_HCSTRING("blue30","\xb7","\xc9","\xe2","\xab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_clone","\xb4","\x6f","\x0c","\x8c"),
	HX_HCSTRING("xyz","\x59","\x78","\x5b","\x00"),
	HX_HCSTRING("get_xyz","\xf0","\x40","\xd0","\x26"),
	HX_HCSTRING("xyzw","\xfe","\xd5","\xad","\x4f"),
	HX_HCSTRING("get_xyzw","\x87","\x91","\x68","\xcf"),
	HX_HCSTRING("get_argb","\xd5","\x48","\x2f","\xc0"),
	HX_HCSTRING("set_argb","\x49","\xa2","\x8c","\x6e"),
	HX_HCSTRING("get_css","\x5a","\x4c","\xc0","\x26"),
	HX_HCSTRING("get_rgba","\x3d","\x8c","\x63","\xcb"),
	HX_HCSTRING("set_rgba","\xb1","\xe5","\xc0","\x79"),
	HX_HCSTRING("get_rgb","\xa4","\xa3","\xcb","\x26"),
	HX_HCSTRING("set_rgb","\xb0","\x34","\xcd","\x19"),
	HX_HCSTRING("luminance","\xf8","\x37","\x88","\x68"),
	HX_HCSTRING("get_luminance","\xcf","\x0b","\xec","\x29"),
	HX_HCSTRING("negative","\x75","\x26","\x42","\x51"),
	HX_HCSTRING("get_negative","\x7e","\xda","\x5b","\x06"),
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("Set3","\x71","\xbe","\x29","\x37"),
	HX_HCSTRING("Set4","\x72","\xbe","\x29","\x37"),
	HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32"),
	HX_HCSTRING("SetRGB","\xab","\xc0","\x02","\xa4"),
	HX_HCSTRING("SetAlpha","\x7c","\xcc","\x7c","\x09"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Sub","\x60","\x61","\x3f","\x00"),
	HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74"),
	HX_HCSTRING("MultiplyRGB","\x29","\x1b","\x69","\xe3"),
	HX_HCSTRING("Scale","\x6a","\x3e","\xfc","\x0b"),
	HX_HCSTRING("ScaleRGB","\xc3","\x96","\x0d","\xdb"),
	HX_HCSTRING("ToArray","\xfe","\xe1","\x64","\xbf"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Color_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(Color_obj::red,"red");
	HX_MARK_MEMBER_NAME(Color_obj::yellow,"yellow");
	HX_MARK_MEMBER_NAME(Color_obj::green,"green");
	HX_MARK_MEMBER_NAME(Color_obj::cyan,"cyan");
	HX_MARK_MEMBER_NAME(Color_obj::blue,"blue");
	HX_MARK_MEMBER_NAME(Color_obj::magenta,"magenta");
	HX_MARK_MEMBER_NAME(Color_obj::black,"black");
	HX_MARK_MEMBER_NAME(Color_obj::white,"white");
	HX_MARK_MEMBER_NAME(Color_obj::transparent,"transparent");
	HX_MARK_MEMBER_NAME(Color_obj::gray10,"gray10");
	HX_MARK_MEMBER_NAME(Color_obj::gray25,"gray25");
	HX_MARK_MEMBER_NAME(Color_obj::gray50,"gray50");
	HX_MARK_MEMBER_NAME(Color_obj::gray75,"gray75");
	HX_MARK_MEMBER_NAME(Color_obj::gray90,"gray90");
	HX_MARK_MEMBER_NAME(Color_obj::red50,"red50");
	HX_MARK_MEMBER_NAME(Color_obj::green50,"green50");
	HX_MARK_MEMBER_NAME(Color_obj::blue50,"blue50");
	HX_MARK_MEMBER_NAME(Color_obj::yellow50,"yellow50");
	HX_MARK_MEMBER_NAME(Color_obj::magenta50,"magenta50");
	HX_MARK_MEMBER_NAME(Color_obj::red30,"red30");
	HX_MARK_MEMBER_NAME(Color_obj::green30,"green30");
	HX_MARK_MEMBER_NAME(Color_obj::blue30,"blue30");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Color_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(Color_obj::red,"red");
	HX_VISIT_MEMBER_NAME(Color_obj::yellow,"yellow");
	HX_VISIT_MEMBER_NAME(Color_obj::green,"green");
	HX_VISIT_MEMBER_NAME(Color_obj::cyan,"cyan");
	HX_VISIT_MEMBER_NAME(Color_obj::blue,"blue");
	HX_VISIT_MEMBER_NAME(Color_obj::magenta,"magenta");
	HX_VISIT_MEMBER_NAME(Color_obj::black,"black");
	HX_VISIT_MEMBER_NAME(Color_obj::white,"white");
	HX_VISIT_MEMBER_NAME(Color_obj::transparent,"transparent");
	HX_VISIT_MEMBER_NAME(Color_obj::gray10,"gray10");
	HX_VISIT_MEMBER_NAME(Color_obj::gray25,"gray25");
	HX_VISIT_MEMBER_NAME(Color_obj::gray50,"gray50");
	HX_VISIT_MEMBER_NAME(Color_obj::gray75,"gray75");
	HX_VISIT_MEMBER_NAME(Color_obj::gray90,"gray90");
	HX_VISIT_MEMBER_NAME(Color_obj::red50,"red50");
	HX_VISIT_MEMBER_NAME(Color_obj::green50,"green50");
	HX_VISIT_MEMBER_NAME(Color_obj::blue50,"blue50");
	HX_VISIT_MEMBER_NAME(Color_obj::yellow50,"yellow50");
	HX_VISIT_MEMBER_NAME(Color_obj::magenta50,"magenta50");
	HX_VISIT_MEMBER_NAME(Color_obj::red30,"red30");
	HX_VISIT_MEMBER_NAME(Color_obj::green30,"green30");
	HX_VISIT_MEMBER_NAME(Color_obj::blue30,"blue30");
};

#endif

hx::Class Color_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c"),
	HX_HCSTRING("get_temp","\x9d","\x7e","\xb4","\xcc"),
	HX_HCSTRING("red","\x51","\xd9","\x56","\x00"),
	HX_HCSTRING("get_red","\xe8","\xa1","\xcb","\x26"),
	HX_HCSTRING("yellow","\x74","\x9f","\x5c","\xd0"),
	HX_HCSTRING("get_yellow","\x3d","\x0f","\xe4","\xc0"),
	HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"),
	HX_HCSTRING("get_green","\x1a","\x6b","\x96","\xdd"),
	HX_HCSTRING("cyan","\x23","\x45","\xcc","\x41"),
	HX_HCSTRING("get_cyan","\xac","\x00","\x87","\xc1"),
	HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"),
	HX_HCSTRING("get_blue","\x23","\xfe","\xd3","\xc0"),
	HX_HCSTRING("magenta","\x29","\xba","\x9d","\x0e"),
	HX_HCSTRING("get_magenta","\x40","\x1a","\x98","\x94"),
	HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4"),
	HX_HCSTRING("get_black","\x16","\x32","\x9b","\xf8"),
	HX_HCSTRING("white","\xa9","\x4a","\xbd","\xc9"),
	HX_HCSTRING("get_white","\x00","\xa7","\x66","\x0d"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("get_transparent","\xe9","\xe2","\x9b","\xe3"),
	HX_HCSTRING("gray10","\x82","\xf9","\xe9","\x12"),
	HX_HCSTRING("get_gray10","\x4b","\x69","\x71","\x03"),
	HX_HCSTRING("gray25","\x66","\xfa","\xe9","\x12"),
	HX_HCSTRING("get_gray25","\x2f","\x6a","\x71","\x03"),
	HX_HCSTRING("gray50","\xfe","\xfc","\xe9","\x12"),
	HX_HCSTRING("get_gray50","\xc7","\x6c","\x71","\x03"),
	HX_HCSTRING("gray75","\xc1","\xfe","\xe9","\x12"),
	HX_HCSTRING("get_gray75","\x8a","\x6e","\x71","\x03"),
	HX_HCSTRING("gray90","\x7a","\x00","\xea","\x12"),
	HX_HCSTRING("get_gray90","\x43","\x70","\x71","\x03"),
	HX_HCSTRING("red50","\xec","\xbd","\xbc","\xe6"),
	HX_HCSTRING("get_red50","\x43","\x1a","\x66","\x2a"),
	HX_HCSTRING("green50","\xde","\xb3","\x60","\xba"),
	HX_HCSTRING("get_green50","\xf5","\x13","\x5b","\x40"),
	HX_HCSTRING("blue50","\x75","\xcb","\xe2","\xab"),
	HX_HCSTRING("get_blue50","\x3e","\x3b","\x6a","\x9c"),
	HX_HCSTRING("yellow50","\xcf","\x92","\x5a","\x18"),
	HX_HCSTRING("get_yellow50","\xd8","\x46","\x74","\xcd"),
	HX_HCSTRING("magenta50","\xc4","\x84","\x1f","\x3d"),
	HX_HCSTRING("get_magenta50","\x9b","\x58","\x83","\xfe"),
	HX_HCSTRING("red30","\x2e","\xbc","\xbc","\xe6"),
	HX_HCSTRING("get_red30","\x85","\x18","\x66","\x2a"),
	HX_HCSTRING("green30","\x20","\xb2","\x60","\xba"),
	HX_HCSTRING("get_green30","\x37","\x12","\x5b","\x40"),
	HX_HCSTRING("blue30","\xb7","\xc9","\xe2","\xab"),
	HX_HCSTRING("get_blue30","\x80","\x39","\x6a","\x9c"),
	HX_HCSTRING("FromHex","\x71","\x3b","\x4b","\x25"),
	HX_HCSTRING("FromBytes","\x81","\xd2","\xf3","\x13"),
	HX_HCSTRING("Lerp","\x97","\x3e","\x89","\x32"),
	HX_HCSTRING("Sample","\x4a","\xd4","\xde","\x51"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void Color_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.Color","\xc9","\x14","\x8a","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_obj::__GetStatic;
	__mClass->mSetStaticField = &Color_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Color_obj >;
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
} // end namespace math
