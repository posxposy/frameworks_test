#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
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

Void Bitmap_obj::__construct(int p_width,int p_height,int p_format)
{
HX_STACK_FRAME("haxor.graphics.Bitmap","new",0x4a098b18,"haxor.graphics.Bitmap.new","haxor/graphics/Bitmap.hx",74,0xb7e5eb78)
HX_STACK_THIS(this)
HX_STACK_ARG(p_width,"p_width")
HX_STACK_ARG(p_height,"p_height")
HX_STACK_ARG(p_format,"p_format")
{
	HX_STACK_LINE(75)
	super::__construct(null());
	HX_STACK_LINE(76)
	int tmp = p_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	int tmp1 = p_height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	int tmp2 = p_format;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	this->Resize(tmp,tmp1,tmp2);
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(int p_width,int p_height,int p_format)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(p_width,p_height,p_format);
	return _result_;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::haxor::io::Buffer Bitmap_obj::get_buffer( ){
	HX_STACK_FRAME("haxor.graphics.Bitmap","get_buffer",0x0b33b911,"haxor.graphics.Bitmap.get_buffer","haxor/graphics/Bitmap.hx",21,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	::haxor::io::Buffer tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_buffer,return )

bool Bitmap_obj::get_float( ){
	HX_STACK_FRAME("haxor.graphics.Bitmap","get_float",0xc16ab6ab,"haxor.graphics.Bitmap.get_float","haxor/graphics/Bitmap.hx",28,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	bool tmp = this->m_float;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_float,return )

bool Bitmap_obj::get_half( ){
	HX_STACK_FRAME("haxor.graphics.Bitmap","get_half",0x1db54f84,"haxor.graphics.Bitmap.get_half","haxor/graphics/Bitmap.hx",35,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	bool tmp = this->m_half;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_half,return )

int Bitmap_obj::get_width( ){
	HX_STACK_FRAME("haxor.graphics.Bitmap","get_width",0x8936a715,"haxor.graphics.Bitmap.get_width","haxor/graphics/Bitmap.hx",42,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	int tmp = this->m_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_width,return )

int Bitmap_obj::get_height( ){
	HX_STACK_FRAME("haxor.graphics.Bitmap","get_height",0x3ceb03f8,"haxor.graphics.Bitmap.get_height","haxor/graphics/Bitmap.hx",49,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	int tmp = this->m_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_height,return )

int Bitmap_obj::get_channels( ){
	HX_STACK_FRAME("haxor.graphics.Bitmap","get_channels",0xc8518ca1,"haxor.graphics.Bitmap.get_channels","haxor/graphics/Bitmap.hx",56,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	int tmp = this->m_channels;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_channels,return )

int Bitmap_obj::get_format( ){
	HX_STACK_FRAME("haxor.graphics.Bitmap","get_format",0x382d8b48,"haxor.graphics.Bitmap.get_format","haxor/graphics/Bitmap.hx",63,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	int tmp = this->m_format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_format,return )

Void Bitmap_obj::Resize( int p_width,int p_height,int p_format){
{
		HX_STACK_FRAME("haxor.graphics.Bitmap","Resize",0x9dc9965c,"haxor.graphics.Bitmap.Resize","haxor/graphics/Bitmap.hx",86,0xb7e5eb78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_LINE(87)
		this->m_width = p_width;
		HX_STACK_LINE(88)
		this->m_height = p_height;
		HX_STACK_LINE(89)
		this->m_format = p_format;
		HX_STACK_LINE(90)
		this->m_float = false;
		HX_STACK_LINE(91)
		this->m_half = false;
		HX_STACK_LINE(92)
		this->m_channels = (int)1;
		HX_STACK_LINE(93)
		int tmp = p_format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(95)
				this->m_channels = (int)1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(96)
				this->m_channels = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(97)
				this->m_channels = (int)3;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(98)
				this->m_channels = (int)4;
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(99)
				this->m_channels = (int)1;
				HX_STACK_LINE(99)
				this->m_float = true;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(100)
				this->m_channels = (int)1;
				HX_STACK_LINE(100)
				this->m_float = true;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(101)
				this->m_channels = (int)1;
				HX_STACK_LINE(101)
				bool tmp1 = this->m_float = true;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				this->m_half = tmp1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(102)
				this->m_channels = (int)3;
				HX_STACK_LINE(102)
				this->m_float = true;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(103)
				this->m_channels = (int)3;
				HX_STACK_LINE(103)
				bool tmp1 = this->m_float = true;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(103)
				this->m_half = tmp1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(104)
				this->m_channels = (int)4;
				HX_STACK_LINE(104)
				this->m_float = true;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(105)
				this->m_channels = (int)4;
				HX_STACK_LINE(105)
				bool tmp1 = this->m_float = true;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(105)
				this->m_half = tmp1;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(106)
				this->m_channels = (int)3;
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(107)
				this->m_channels = (int)4;
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(108)
				this->m_channels = (int)4;
			}
			;break;
		}
		HX_STACK_LINE(111)
		int tmp1 = this->m_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		int tmp2 = this->m_height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		int tmp4 = this->m_channels;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		int len = tmp5;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(112)
		bool tmp6 = this->m_float;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		::haxor::io::Buffer tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		if ((tmp6)){
			HX_STACK_LINE(112)
			tmp7 = ::haxor::io::FloatArray_obj::__new(len);
		}
		else{
			HX_STACK_LINE(112)
			tmp7 = ::haxor::io::Buffer_obj::__new(len);
		}
		HX_STACK_LINE(112)
		this->m_buffer = tmp7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Bitmap_obj,Resize,(void))

::haxor::math::Color Bitmap_obj::GetPixel( int p_x,int p_y){
	HX_STACK_FRAME("haxor.graphics.Bitmap","GetPixel",0x551efc78,"haxor.graphics.Bitmap.GetPixel","haxor/graphics/Bitmap.hx",122,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_LINE(123)
	bool tmp = (p_x < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	if ((tmp)){
		HX_STACK_LINE(123)
		::haxor::math::Color tmp1 = ::haxor::math::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		return tmp1;
	}
	HX_STACK_LINE(124)
	bool tmp1 = (p_y < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	if ((tmp1)){
		HX_STACK_LINE(124)
		::haxor::math::Color tmp2 = ::haxor::math::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		return tmp2;
	}
	HX_STACK_LINE(125)
	int tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	int tmp3 = this->m_width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	if ((tmp4)){
		HX_STACK_LINE(125)
		::haxor::math::Color tmp5 = ::haxor::math::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		return tmp5;
	}
	HX_STACK_LINE(126)
	int tmp5 = p_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(126)
	int tmp6 = this->m_height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(126)
	bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(126)
	if ((tmp7)){
		HX_STACK_LINE(126)
		::haxor::math::Color tmp8 = ::haxor::math::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		return tmp8;
	}
	HX_STACK_LINE(129)
	int tmp8 = this->m_height;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(129)
	int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(129)
	int tmp10 = p_y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(129)
	int tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(129)
	p_y = tmp11;
	HX_STACK_LINE(131)
	int tmp12 = this->m_channels;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(131)
	int cc = tmp12;		HX_STACK_VAR(cc,"cc");
	HX_STACK_LINE(132)
	int tmp13 = p_x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(132)
	int tmp14 = p_y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(132)
	int tmp15 = this->m_width;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(132)
	int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(132)
	int tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(132)
	int tmp18 = cc;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(132)
	int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(132)
	int pos = tmp19;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(133)
	bool tmp20 = this->m_float;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(133)
	if ((tmp20)){
		HX_STACK_LINE(135)
		::haxor::math::Color tmp21 = ::haxor::math::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(135)
		::haxor::math::Color c = tmp21;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(136)
		::haxor::io::Buffer tmp22 = this->m_buffer;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(136)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp22));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(137)
		int tmp23 = cc;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(137)
		switch( (int)(tmp23)){
			case (int)1: {
				HX_STACK_LINE(139)
				int tmp24 = pos;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(139)
				Float tmp25 = b->Get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(139)
				c->r = tmp25;
				HX_STACK_LINE(139)
				c->g = c->r;
				HX_STACK_LINE(139)
				c->b = c->r;
				HX_STACK_LINE(139)
				c->a = ((Float)1.0);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(140)
				int tmp24 = pos;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(140)
				Float tmp25 = b->Get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(140)
				c->r = tmp25;
				HX_STACK_LINE(140)
				int tmp26 = (pos + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(140)
				Float tmp27 = b->Get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(140)
				c->g = tmp27;
				HX_STACK_LINE(140)
				c->b = c->r;
				HX_STACK_LINE(140)
				c->a = ((Float)1.0);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(141)
				int tmp24 = pos;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(141)
				Float tmp25 = b->Get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(141)
				c->r = tmp25;
				HX_STACK_LINE(141)
				int tmp26 = (pos + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(141)
				Float tmp27 = b->Get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(141)
				c->g = tmp27;
				HX_STACK_LINE(141)
				int tmp28 = (pos + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(141)
				Float tmp29 = b->Get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(141)
				c->b = tmp29;
				HX_STACK_LINE(141)
				c->a = ((Float)1.0);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(142)
				int tmp24 = pos;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(142)
				Float tmp25 = b->Get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(142)
				c->r = tmp25;
				HX_STACK_LINE(142)
				int tmp26 = (pos + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(142)
				Float tmp27 = b->Get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(142)
				c->g = tmp27;
				HX_STACK_LINE(142)
				int tmp28 = (pos + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(142)
				Float tmp29 = b->Get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(142)
				c->b = tmp29;
				HX_STACK_LINE(142)
				int tmp30 = (pos + (int)3);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(142)
				Float tmp31 = b->Get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(142)
				c->a = tmp31;
			}
			;break;
		}
		HX_STACK_LINE(144)
		::haxor::math::Color tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(144)
		return tmp24;
	}
	HX_STACK_LINE(146)
	::haxor::io::Buffer tmp21 = this->m_buffer;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(146)
	::haxor::io::Buffer b = tmp21;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(147)
	int tmp22 = pos;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(147)
	int tmp23 = b->GetByte(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(147)
	int rb = tmp23;		HX_STACK_VAR(rb,"rb");
	HX_STACK_LINE(148)
	bool tmp24 = (cc >= (int)2);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(148)
	int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(148)
	if ((tmp24)){
		HX_STACK_LINE(148)
		int tmp26 = (pos + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(148)
		tmp25 = b->GetByte(tmp26);
	}
	else{
		HX_STACK_LINE(148)
		tmp25 = rb;
	}
	HX_STACK_LINE(148)
	int gb = tmp25;		HX_STACK_VAR(gb,"gb");
	HX_STACK_LINE(149)
	bool tmp26 = (cc >= (int)3);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(149)
	int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(149)
	if ((tmp26)){
		HX_STACK_LINE(149)
		int tmp28 = (pos + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(149)
		tmp27 = b->GetByte(tmp28);
	}
	else{
		HX_STACK_LINE(149)
		tmp27 = rb;
	}
	HX_STACK_LINE(149)
	int bb = tmp27;		HX_STACK_VAR(bb,"bb");
	HX_STACK_LINE(150)
	bool tmp28 = (cc >= (int)4);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(150)
	int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(150)
	if ((tmp28)){
		HX_STACK_LINE(150)
		int tmp30 = (pos + (int)3);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(150)
		tmp29 = b->GetByte(tmp30);
	}
	else{
		HX_STACK_LINE(150)
		tmp29 = rb;
	}
	HX_STACK_LINE(150)
	int ab = tmp29;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(151)
	int tmp30 = rb;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(151)
	int tmp31 = gb;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(151)
	int tmp32 = bb;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(151)
	int tmp33 = ab;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(151)
	::haxor::math::Color tmp34 = ::haxor::math::Color_obj::FromBytes(tmp30,tmp31,tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(151)
	return tmp34;
}


HX_DEFINE_DYNAMIC_FUNC2(Bitmap_obj,GetPixel,return )

Void Bitmap_obj::SetPixel( int p_x,int p_y,::haxor::math::Color p_color){
{
		HX_STACK_FRAME("haxor.graphics.Bitmap","SetPixel",0x037c55ec,"haxor.graphics.Bitmap.SetPixel","haxor/graphics/Bitmap.hx",161,0xb7e5eb78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_LINE(162)
		bool tmp = (p_x < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		if ((tmp)){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(163)
		bool tmp1 = (p_y < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		if ((tmp1)){
			HX_STACK_LINE(163)
			return null();
		}
		HX_STACK_LINE(164)
		int tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		int tmp3 = this->m_width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		if ((tmp4)){
			HX_STACK_LINE(164)
			return null();
		}
		HX_STACK_LINE(165)
		int tmp5 = p_y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		int tmp6 = this->m_height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(165)
		bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(165)
		if ((tmp7)){
			HX_STACK_LINE(165)
			return null();
		}
		HX_STACK_LINE(168)
		int tmp8 = this->m_height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(168)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(168)
		int tmp10 = p_y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(168)
		int tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(168)
		p_y = tmp11;
		HX_STACK_LINE(170)
		int tmp12 = this->m_channels;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(170)
		int cc = tmp12;		HX_STACK_VAR(cc,"cc");
		HX_STACK_LINE(171)
		int tmp13 = p_x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(171)
		int tmp14 = p_y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(171)
		int tmp15 = this->m_width;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(171)
		int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(171)
		int tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(171)
		int tmp18 = cc;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(171)
		int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(171)
		int pos = tmp19;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(172)
		bool tmp20 = this->m_float;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(172)
		if ((tmp20)){
			HX_STACK_LINE(174)
			::haxor::io::Buffer tmp21 = this->m_buffer;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(174)
			::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp21));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(175)
			int tmp22 = pos;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(175)
			Float tmp23 = p_color->r;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(175)
			b->Set(tmp22,tmp23);
			HX_STACK_LINE(176)
			bool tmp24 = (cc >= (int)2);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(176)
			if ((tmp24)){
				HX_STACK_LINE(176)
				int tmp25 = (pos + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(176)
				Float tmp26 = p_color->g;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(176)
				b->Set(tmp25,tmp26);
			}
			HX_STACK_LINE(177)
			bool tmp25 = (cc >= (int)3);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(177)
			if ((tmp25)){
				HX_STACK_LINE(177)
				int tmp26 = (pos + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(177)
				Float tmp27 = p_color->b;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(177)
				b->Set(tmp26,tmp27);
			}
			HX_STACK_LINE(178)
			bool tmp26 = (cc >= (int)4);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(178)
			if ((tmp26)){
				HX_STACK_LINE(178)
				int tmp27 = (pos + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(178)
				Float tmp28 = p_color->a;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(178)
				b->Set(tmp27,tmp28);
			}
			HX_STACK_LINE(179)
			return null();
		}
		HX_STACK_LINE(181)
		::haxor::io::Buffer tmp21 = this->m_buffer;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(181)
		::haxor::io::Buffer b = tmp21;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(182)
		int tmp22 = pos;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(182)
		Float tmp23 = (p_color->r * ((Float)255.0));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(182)
		int tmp24 = ((int)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(182)
		b->SetByte(tmp22,tmp24);
		HX_STACK_LINE(183)
		bool tmp25 = (cc >= (int)2);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(183)
		if ((tmp25)){
			HX_STACK_LINE(183)
			int tmp26 = (pos + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(183)
			Float tmp27 = (p_color->g * ((Float)255.0));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(183)
			int tmp28 = ((int)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(183)
			b->SetByte(tmp26,tmp28);
		}
		HX_STACK_LINE(184)
		bool tmp26 = (cc >= (int)3);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(184)
		if ((tmp26)){
			HX_STACK_LINE(184)
			int tmp27 = (pos + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(184)
			Float tmp28 = (p_color->b * ((Float)255.0));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(184)
			int tmp29 = ((int)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(184)
			b->SetByte(tmp27,tmp29);
		}
		HX_STACK_LINE(185)
		bool tmp27 = (cc >= (int)4);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(185)
		if ((tmp27)){
			HX_STACK_LINE(185)
			int tmp28 = (pos + (int)3);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(185)
			Float tmp29 = (p_color->a * ((Float)255.0));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(185)
			int tmp30 = ((int)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(185)
			b->SetByte(tmp28,tmp30);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Bitmap_obj,SetPixel,(void))

Void Bitmap_obj::SetPixels( Array< ::Dynamic > p_colors,hx::Null< int >  __o_p_x,hx::Null< int >  __o_p_y,hx::Null< int >  __o_p_width,hx::Null< int >  __o_p_height){
int p_x = __o_p_x.Default(0);
int p_y = __o_p_y.Default(0);
int p_width = __o_p_width.Default(-1);
int p_height = __o_p_height.Default(-1);
	HX_STACK_FRAME("haxor.graphics.Bitmap","SetPixels",0x094ed907,"haxor.graphics.Bitmap.SetPixels","haxor/graphics/Bitmap.hx",197,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_colors,"p_colors")
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
{
		HX_STACK_LINE(198)
		bool tmp = (p_width < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp)){
			HX_STACK_LINE(198)
			tmp1 = this->m_width;
		}
		else{
			HX_STACK_LINE(198)
			tmp1 = p_width;
		}
		HX_STACK_LINE(198)
		int rw = tmp1;		HX_STACK_VAR(rw,"rw");
		HX_STACK_LINE(199)
		bool tmp2 = (p_height < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		if ((tmp2)){
			HX_STACK_LINE(199)
			tmp3 = this->m_height;
		}
		else{
			HX_STACK_LINE(199)
			tmp3 = p_height;
		}
		HX_STACK_LINE(199)
		int rh = tmp3;		HX_STACK_VAR(rh,"rh");
		HX_STACK_LINE(200)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			int _g1 = p_x;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			int tmp4 = (p_x + rw);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				if ((tmp6)){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(201)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					int _g3 = p_y;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(203)
					int tmp8 = (p_y + rh);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(203)
					int _g2 = tmp8;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(203)
					while((true)){
						HX_STACK_LINE(203)
						bool tmp9 = (_g3 < _g2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(203)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(203)
						if ((tmp10)){
							HX_STACK_LINE(203)
							break;
						}
						HX_STACK_LINE(203)
						int tmp11 = (_g3)++;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(203)
						int j = tmp11;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(205)
						int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(205)
						int tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(205)
						Array< ::Dynamic > tmp14 = p_colors;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(205)
						int tmp15 = (k)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(205)
						::haxor::math::Color tmp16 = tmp14->__get(tmp15).StaticCast< ::haxor::math::Color >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(205)
						this->SetPixel(tmp12,tmp13,tmp16);
						HX_STACK_LINE(206)
						bool tmp17 = (k >= p_colors->length);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(206)
						if ((tmp17)){
							HX_STACK_LINE(206)
							break;
						}
					}
				}
				HX_STACK_LINE(208)
				bool tmp8 = (k >= p_colors->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				if ((tmp8)){
					HX_STACK_LINE(208)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Bitmap_obj,SetPixels,(void))

Void Bitmap_obj::Fill( ::haxor::math::Color p_color){
{
		HX_STACK_FRAME("haxor.graphics.Bitmap","Fill",0x63e2a0eb,"haxor.graphics.Bitmap.Fill","haxor/graphics/Bitmap.hx",218,0xb7e5eb78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_LINE(218)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(218)
		int tmp = this->m_width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(218)
		while((true)){
			HX_STACK_LINE(218)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(218)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(218)
			if ((tmp2)){
				HX_STACK_LINE(218)
				break;
			}
			HX_STACK_LINE(218)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			int ix = tmp3;		HX_STACK_VAR(ix,"ix");
			HX_STACK_LINE(218)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(218)
			int tmp4 = this->m_height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(218)
			while((true)){
				HX_STACK_LINE(218)
				bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(218)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(218)
				if ((tmp6)){
					HX_STACK_LINE(218)
					break;
				}
				HX_STACK_LINE(218)
				int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(218)
				int iy = tmp7;		HX_STACK_VAR(iy,"iy");
				HX_STACK_LINE(218)
				int tmp8 = ix;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(218)
				int tmp9 = iy;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(218)
				::haxor::math::Color tmp10 = p_color;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(218)
				this->SetPixel(tmp8,tmp9,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,Fill,(void))

Void Bitmap_obj::Set( int p_x,int p_y,hx::Null< Float >  __o_p_v0,hx::Null< Float >  __o_p_v1,hx::Null< Float >  __o_p_v2,hx::Null< Float >  __o_p_v3){
Float p_v0 = __o_p_v0.Default(((Float)0.0));
Float p_v1 = __o_p_v1.Default(((Float)0.0));
Float p_v2 = __o_p_v2.Default(((Float)0.0));
Float p_v3 = __o_p_v3.Default(((Float)0.0));
	HX_STACK_FRAME("haxor.graphics.Bitmap","Set",0x49f50e3a,"haxor.graphics.Bitmap.Set","haxor/graphics/Bitmap.hx",229,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_v0,"p_v0")
	HX_STACK_ARG(p_v1,"p_v1")
	HX_STACK_ARG(p_v2,"p_v2")
	HX_STACK_ARG(p_v3,"p_v3")
{
		HX_STACK_LINE(230)
		int tmp = this->m_channels;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		int cc = tmp;		HX_STACK_VAR(cc,"cc");
		HX_STACK_LINE(233)
		int tmp1 = this->m_height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		int tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		p_y = tmp4;
		HX_STACK_LINE(235)
		int tmp5 = p_x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		int tmp6 = p_y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		int tmp7 = this->m_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(235)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(235)
		int tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(235)
		int tmp10 = cc;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(235)
		int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(235)
		int pos = tmp11;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(236)
		bool tmp12 = this->m_float;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(236)
		if ((tmp12)){
			HX_STACK_LINE(238)
			::haxor::io::Buffer tmp13 = this->m_buffer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(238)
			::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp13));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(239)
			int tmp14 = pos;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(239)
			Float tmp15 = p_v0;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(239)
			b->Set(tmp14,tmp15);
			HX_STACK_LINE(240)
			bool tmp16 = (cc >= (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(240)
			if ((tmp16)){
				HX_STACK_LINE(240)
				int tmp17 = (pos + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(240)
				Float tmp18 = p_v1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(240)
				b->Set(tmp17,tmp18);
			}
			HX_STACK_LINE(241)
			bool tmp17 = (cc >= (int)3);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(241)
			if ((tmp17)){
				HX_STACK_LINE(241)
				int tmp18 = (pos + (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(241)
				Float tmp19 = p_v2;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(241)
				b->Set(tmp18,tmp19);
			}
			HX_STACK_LINE(242)
			bool tmp18 = (cc >= (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(242)
			if ((tmp18)){
				HX_STACK_LINE(242)
				int tmp19 = (pos + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(242)
				Float tmp20 = p_v3;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(242)
				b->Set(tmp19,tmp20);
			}
			HX_STACK_LINE(243)
			return null();
		}
		HX_STACK_LINE(245)
		::haxor::io::Buffer tmp13 = this->m_buffer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(245)
		::haxor::io::Buffer b = tmp13;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(246)
		int tmp14 = pos;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(246)
		Float tmp15 = (p_v0 * ((Float)255.0));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(246)
		int tmp16 = ((int)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(246)
		b->SetByte(tmp14,tmp16);
		HX_STACK_LINE(247)
		bool tmp17 = (cc >= (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(247)
		if ((tmp17)){
			HX_STACK_LINE(247)
			int tmp18 = (pos + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(247)
			Float tmp19 = (p_v1 * ((Float)255.0));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(247)
			int tmp20 = ((int)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(247)
			b->SetByte(tmp18,tmp20);
		}
		HX_STACK_LINE(248)
		bool tmp18 = (cc >= (int)3);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(248)
		if ((tmp18)){
			HX_STACK_LINE(248)
			int tmp19 = (pos + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(248)
			Float tmp20 = (p_v2 * ((Float)255.0));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(248)
			int tmp21 = ((int)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(248)
			b->SetByte(tmp19,tmp21);
		}
		HX_STACK_LINE(249)
		bool tmp19 = (cc >= (int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(249)
		if ((tmp19)){
			HX_STACK_LINE(249)
			int tmp20 = (pos + (int)3);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(249)
			Float tmp21 = (p_v3 * ((Float)255.0));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(249)
			int tmp22 = ((int)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(249)
			b->SetByte(tmp20,tmp22);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Bitmap_obj,Set,(void))

Void Bitmap_obj::SetRange( Array< Float > p_values,hx::Null< int >  __o_p_x,hx::Null< int >  __o_p_y,hx::Null< int >  __o_p_width,hx::Null< int >  __o_p_height){
int p_x = __o_p_x.Default(0);
int p_y = __o_p_y.Default(0);
int p_width = __o_p_width.Default(-1);
int p_height = __o_p_height.Default(-1);
	HX_STACK_FRAME("haxor.graphics.Bitmap","SetRange",0x24f83523,"haxor.graphics.Bitmap.SetRange","haxor/graphics/Bitmap.hx",263,0xb7e5eb78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_values,"p_values")
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
{
		HX_STACK_LINE(265)
		int tmp = this->m_height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		int tmp2 = p_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		p_y = tmp3;
		HX_STACK_LINE(267)
		int tmp4 = this->m_channels;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		int cc = tmp4;		HX_STACK_VAR(cc,"cc");
		HX_STACK_LINE(268)
		int len = p_values->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(269)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(270)
		int px = p_x;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(271)
		int py = p_y;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(272)
		Float v0 = ((Float)0.0);		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(273)
		Float v1 = ((Float)0.0);		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(274)
		Float v2 = ((Float)0.0);		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(275)
		Float v3 = ((Float)0.0);		HX_STACK_VAR(v3,"v3");
		HX_STACK_LINE(276)
		bool tmp5 = (p_width < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(276)
		if ((tmp5)){
			HX_STACK_LINE(276)
			tmp6 = this->m_width;
		}
		else{
			HX_STACK_LINE(276)
			tmp6 = p_width;
		}
		HX_STACK_LINE(276)
		int rw = tmp6;		HX_STACK_VAR(rw,"rw");
		HX_STACK_LINE(277)
		bool tmp7 = (p_height < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		if ((tmp7)){
			HX_STACK_LINE(277)
			tmp8 = this->m_height;
		}
		else{
			HX_STACK_LINE(277)
			tmp8 = p_height;
		}
		HX_STACK_LINE(277)
		int rh = tmp8;		HX_STACK_VAR(rh,"rh");
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(279)
			while((true)){
				HX_STACK_LINE(279)
				bool tmp9 = (_g < len);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(279)
				if ((tmp10)){
					HX_STACK_LINE(279)
					break;
				}
				HX_STACK_LINE(279)
				int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(279)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(281)
				int tmp12 = px;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(281)
				int tmp13 = py;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(281)
				int tmp14 = this->m_width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(281)
				int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(281)
				int tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(281)
				int tmp17 = cc;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(281)
				int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(281)
				int pos = tmp18;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(282)
				(px)++;
				HX_STACK_LINE(283)
				int tmp19 = px;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(283)
				int tmp20 = (p_x + rw);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(283)
				bool tmp21 = (tmp19 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(283)
				if ((tmp21)){
					HX_STACK_LINE(283)
					px = p_x;
					HX_STACK_LINE(283)
					(py)++;
					HX_STACK_LINE(283)
					int tmp22 = py;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(283)
					int tmp23 = (p_y + rh);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(283)
					bool tmp24 = (tmp22 >= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(283)
					if ((tmp24)){
						HX_STACK_LINE(283)
						break;
					}
				}
				HX_STACK_LINE(285)
				Array< Float > tmp22 = p_values;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(285)
				int tmp23 = (k)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(285)
				Float tmp24 = tmp22->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(285)
				v0 = tmp24;
				HX_STACK_LINE(286)
				bool tmp25 = (cc >= (int)2);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(286)
				if ((tmp25)){
					HX_STACK_LINE(286)
					Array< Float > tmp26 = p_values;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(286)
					int tmp27 = (k)++;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(286)
					Float tmp28 = tmp26->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(286)
					v1 = tmp28;
				}
				HX_STACK_LINE(287)
				bool tmp26 = (cc >= (int)3);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(287)
				if ((tmp26)){
					HX_STACK_LINE(287)
					Array< Float > tmp27 = p_values;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(287)
					int tmp28 = (k)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(287)
					Float tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(287)
					v2 = tmp29;
				}
				HX_STACK_LINE(288)
				bool tmp27 = (cc >= (int)4);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(288)
				if ((tmp27)){
					HX_STACK_LINE(288)
					Array< Float > tmp28 = p_values;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(288)
					int tmp29 = (k)++;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(288)
					Float tmp30 = tmp28->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(288)
					v3 = tmp30;
				}
				HX_STACK_LINE(290)
				bool tmp28 = this->m_float;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(290)
				if ((tmp28)){
					HX_STACK_LINE(292)
					::haxor::io::Buffer tmp29 = this->m_buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(292)
					::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp29));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(293)
					int tmp30 = pos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(293)
					Float tmp31 = v0;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(293)
					b->Set(tmp30,tmp31);
					HX_STACK_LINE(294)
					bool tmp32 = (cc >= (int)2);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(294)
					if ((tmp32)){
						HX_STACK_LINE(294)
						int tmp33 = (pos + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(294)
						Float tmp34 = v1;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(294)
						b->Set(tmp33,tmp34);
					}
					HX_STACK_LINE(295)
					bool tmp33 = (cc >= (int)3);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(295)
					if ((tmp33)){
						HX_STACK_LINE(295)
						int tmp34 = (pos + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(295)
						Float tmp35 = v2;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(295)
						b->Set(tmp34,tmp35);
					}
					HX_STACK_LINE(296)
					bool tmp34 = (cc >= (int)4);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(296)
					if ((tmp34)){
						HX_STACK_LINE(296)
						int tmp35 = (pos + (int)3);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(296)
						Float tmp36 = v3;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(296)
						b->Set(tmp35,tmp36);
					}
					HX_STACK_LINE(297)
					continue;
				}
				HX_STACK_LINE(299)
				::haxor::io::Buffer tmp29 = this->m_buffer;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(299)
				::haxor::io::Buffer b = tmp29;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(300)
				int tmp30 = pos;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(300)
				Float tmp31 = (v0 * ((Float)255.0));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(300)
				int tmp32 = ((int)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(300)
				b->SetByte(tmp30,tmp32);
				HX_STACK_LINE(301)
				bool tmp33 = (cc >= (int)2);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(301)
				if ((tmp33)){
					HX_STACK_LINE(301)
					int tmp34 = (pos + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(301)
					Float tmp35 = (v1 * ((Float)255.0));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(301)
					int tmp36 = ((int)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(301)
					b->SetByte(tmp34,tmp36);
				}
				HX_STACK_LINE(302)
				bool tmp34 = (cc >= (int)3);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(302)
				if ((tmp34)){
					HX_STACK_LINE(302)
					int tmp35 = (pos + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(302)
					Float tmp36 = (v2 * ((Float)255.0));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(302)
					int tmp37 = ((int)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(302)
					b->SetByte(tmp35,tmp37);
				}
				HX_STACK_LINE(303)
				bool tmp35 = (cc >= (int)4);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(303)
				if ((tmp35)){
					HX_STACK_LINE(303)
					int tmp36 = (pos + (int)3);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(303)
					Float tmp37 = (v3 * ((Float)255.0));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(303)
					int tmp38 = ((int)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(303)
					b->SetByte(tmp36,tmp38);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Bitmap_obj,SetRange,(void))


Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(m_buffer,"m_buffer");
	HX_MARK_MEMBER_NAME(_float,"float");
	HX_MARK_MEMBER_NAME(m_float,"m_float");
	HX_MARK_MEMBER_NAME(half,"half");
	HX_MARK_MEMBER_NAME(m_half,"m_half");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(m_width,"m_width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(m_height,"m_height");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(m_channels,"m_channels");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(m_format,"m_format");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(m_buffer,"m_buffer");
	HX_VISIT_MEMBER_NAME(_float,"float");
	HX_VISIT_MEMBER_NAME(m_float,"m_float");
	HX_VISIT_MEMBER_NAME(half,"half");
	HX_VISIT_MEMBER_NAME(m_half,"m_half");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(m_width,"m_width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(m_height,"m_height");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(m_channels,"m_channels");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(m_format,"m_format");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"half") ) { return inCallProp == hx::paccAlways ? get_half() : half; }
		if (HX_FIELD_EQ(inName,"Fill") ) { return Fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return inCallProp == hx::paccAlways ? get_float() : _float; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return inCallProp == hx::paccAlways ? get_buffer() : buffer; }
		if (HX_FIELD_EQ(inName,"m_half") ) { return m_half; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"format") ) { return inCallProp == hx::paccAlways ? get_format() : format; }
		if (HX_FIELD_EQ(inName,"Resize") ) { return Resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_float") ) { return m_float; }
		if (HX_FIELD_EQ(inName,"m_width") ) { return m_width; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_buffer") ) { return m_buffer; }
		if (HX_FIELD_EQ(inName,"get_half") ) { return get_half_dyn(); }
		if (HX_FIELD_EQ(inName,"m_height") ) { return m_height; }
		if (HX_FIELD_EQ(inName,"channels") ) { return inCallProp == hx::paccAlways ? get_channels() : channels; }
		if (HX_FIELD_EQ(inName,"m_format") ) { return m_format; }
		if (HX_FIELD_EQ(inName,"GetPixel") ) { return GetPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"SetPixel") ) { return SetPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"SetRange") ) { return SetRange_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_float") ) { return get_float_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"SetPixels") ) { return SetPixels_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_buffer") ) { return get_buffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"m_channels") ) { return m_channels; }
		if (HX_FIELD_EQ(inName,"get_format") ) { return get_format_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_channels") ) { return get_channels_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"half") ) { half=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { _float=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxor::io::Buffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_half") ) { m_half=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_float") ) { m_float=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_width") ) { m_width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_buffer") ) { m_buffer=inValue.Cast< ::haxor::io::Buffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_height") ) { m_height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_format") ) { m_format=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_channels") ) { m_channels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bitmap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("m_buffer","\xd2","\x65","\x86","\x99"));
	outFields->push(HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"));
	outFields->push(HX_HCSTRING("m_float","\x0a","\x9d","\x21","\xb3"));
	outFields->push(HX_HCSTRING("half","\xb3","\x29","\x08","\x45"));
	outFields->push(HX_HCSTRING("m_half","\x05","\x9a","\xff","\x8c"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("m_channels","\xa2","\xab","\x39","\x92"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("m_format","\x09","\x38","\x80","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::io::Buffer*/ ,(int)offsetof(Bitmap_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*::haxor::io::Buffer*/ ,(int)offsetof(Bitmap_obj,m_buffer),HX_HCSTRING("m_buffer","\xd2","\x65","\x86","\x99")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,_float),HX_HCSTRING("float","\x9c","\xc5","\x96","\x02")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,m_float),HX_HCSTRING("m_float","\x0a","\x9d","\x21","\xb3")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,half),HX_HCSTRING("half","\xb3","\x29","\x08","\x45")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,m_half),HX_HCSTRING("m_half","\x05","\x9a","\xff","\x8c")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,m_width),HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,m_height),HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,m_channels),HX_HCSTRING("m_channels","\xa2","\xab","\x39","\x92")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,m_format),HX_HCSTRING("m_format","\x09","\x38","\x80","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("get_buffer","\xc9","\x2c","\x1c","\xc1"),
	HX_HCSTRING("m_buffer","\xd2","\x65","\x86","\x99"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("get_float","\xf3","\x21","\x40","\x46"),
	HX_HCSTRING("m_float","\x0a","\x9d","\x21","\xb3"),
	HX_HCSTRING("half","\xb3","\x29","\x08","\x45"),
	HX_HCSTRING("get_half","\x3c","\xe5","\xc2","\xc4"),
	HX_HCSTRING("m_half","\x05","\x9a","\xff","\x8c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("get_channels","\x59","\x5e","\x08","\x20"),
	HX_HCSTRING("m_channels","\xa2","\xab","\x39","\x92"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("m_format","\x09","\x38","\x80","\xc6"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	HX_HCSTRING("GetPixel","\x30","\x92","\x2c","\xfc"),
	HX_HCSTRING("SetPixel","\xa4","\xeb","\x89","\xaa"),
	HX_HCSTRING("SetPixels","\x4f","\x44","\x24","\x8e"),
	HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("SetRange","\xdb","\xca","\x05","\xcc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.Bitmap","\x26","\x5f","\xf8","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bitmap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
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
