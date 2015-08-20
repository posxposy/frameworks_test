#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
namespace haxor{
namespace io{

Void Buffer_obj::__construct(int p_length)
{
HX_STACK_FRAME("haxor.io.Buffer","new",0xda1b4a6e,"haxor.io.Buffer.new","haxor/io/Buffer.hx",76,0x07055222)
HX_STACK_THIS(this)
HX_STACK_ARG(p_length,"p_length")
{
	HX_STACK_LINE(77)
	int tmp = p_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	this->Resize(tmp);
}
;
	return null();
}

//Buffer_obj::~Buffer_obj() { }

Dynamic Buffer_obj::__CreateEmpty() { return  new Buffer_obj; }
hx::ObjectPtr< Buffer_obj > Buffer_obj::__new(int p_length)
{  hx::ObjectPtr< Buffer_obj > _result_ = new Buffer_obj();
	_result_->__construct(p_length);
	return _result_;}

Dynamic Buffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Buffer_obj > _result_ = new Buffer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxe::io::Bytes Buffer_obj::get_buffer( ){
	HX_STACK_FRAME("haxor.io.Buffer","get_buffer",0xe95a307b,"haxor.io.Buffer.get_buffer","haxor/io/Buffer.hx",40,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,get_buffer,return )

int Buffer_obj::get_byteLength( ){
	HX_STACK_FRAME("haxor.io.Buffer","get_byteLength",0xbd506b09,"haxor.io.Buffer.get_byteLength","haxor/io/Buffer.hx",49,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	int tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	int tmp1 = this->get_bytesPerElement();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,get_byteLength,return )

int Buffer_obj::get_bytesPerElement( ){
	HX_STACK_FRAME("haxor.io.Buffer","get_bytesPerElement",0x16c52ccf,"haxor.io.Buffer.get_bytesPerElement","haxor/io/Buffer.hx",55,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,get_bytesPerElement,return )

int Buffer_obj::get_length( ){
	HX_STACK_FRAME("haxor.io.Buffer","get_length",0xb7cd0861,"haxor.io.Buffer.get_length","haxor/io/Buffer.hx",62,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	int tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,get_length,return )

Void Buffer_obj::Resize( int p_length){
{
		HX_STACK_FRAME("haxor.io.Buffer","Resize",0x26f190c6,"haxor.io.Buffer.Resize","haxor/io/Buffer.hx",85,0x07055222)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_length,"p_length")
		HX_STACK_LINE(86)
		this->m_length = p_length;
		HX_STACK_LINE(87)
		int tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		int tmp1 = this->get_bytesPerElement();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		int len = tmp2;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(88)
		this->m_offset = (int)0;
		HX_STACK_LINE(96)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::alloc(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		this->m_buffer = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,Resize,(void))

int Buffer_obj::GetByte( int p_index){
	HX_STACK_FRAME("haxor.io.Buffer","GetByte",0x9c9f8fac,"haxor.io.Buffer.GetByte","haxor/io/Buffer.hx",110,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_LINE(116)
	::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	Array< unsigned char > tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	int tmp2 = p_index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	int tmp3 = tmp1->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	return tmp3;
	HX_STACK_LINE(123)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,GetByte,return )

Void Buffer_obj::SetByte( int p_index,int p_value){
{
		HX_STACK_FRAME("haxor.io.Buffer","SetByte",0x8fa120b8,"haxor.io.Buffer.SetByte","haxor/io/Buffer.hx",138,0x07055222)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_index,"p_index")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(138)
		::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		Array< unsigned char > tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		int tmp2 = p_index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		int tmp3 = p_value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		tmp1[tmp2] = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Buffer_obj,SetByte,(void))

Void Buffer_obj::SetBytes( Array< int > p_list,hx::Null< int >  __o_p_offset){
int p_offset = __o_p_offset.Default(0);
	HX_STACK_FRAME("haxor.io.Buffer","SetBytes",0x1d5b80bb,"haxor.io.Buffer.SetBytes","haxor/io/Buffer.hx",152,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_list,"p_list")
	HX_STACK_ARG(p_offset,"p_offset")
{
		HX_STACK_LINE(152)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		while((true)){
			HX_STACK_LINE(152)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(152)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			if ((tmp1)){
				HX_STACK_LINE(152)
				break;
			}
			HX_STACK_LINE(152)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(152)
			int tmp3 = (i + p_offset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			int tmp4 = p_list->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			this->SetByte(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Buffer_obj,SetBytes,(void))

Void Buffer_obj::SetBuffer( ::haxor::io::Buffer p_target,hx::Null< int >  __o_p_offset){
int p_offset = __o_p_offset.Default(0);
	HX_STACK_FRAME("haxor.io.Buffer","SetBuffer",0x3bda8ab0,"haxor.io.Buffer.SetBuffer","haxor/io/Buffer.hx",161,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_target,"p_target")
	HX_STACK_ARG(p_offset,"p_offset")
{
		HX_STACK_LINE(161)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(161)
		int tmp = p_target->m_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		int tmp1 = p_target->get_bytesPerElement();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		while((true)){
			HX_STACK_LINE(161)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			if ((tmp4)){
				HX_STACK_LINE(161)
				break;
			}
			HX_STACK_LINE(161)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(161)
			int tmp6 = (i + p_offset);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			int tmp8 = p_target->GetByte(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			this->SetByte(tmp6,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Buffer_obj,SetBuffer,(void))

::String Buffer_obj::EncodeBase64( ){
	HX_STACK_FRAME("haxor.io.Buffer","EncodeBase64",0x6b983897,"haxor.io.Buffer.EncodeBase64","haxor/io/Buffer.hx",169,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	int tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	int tmp1 = this->get_bytesPerElement();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	::haxe::io::Bytes b = tmp3;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		int _g = b->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		while((true)){
			HX_STACK_LINE(171)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			if ((tmp5)){
				HX_STACK_LINE(171)
				break;
			}
			HX_STACK_LINE(171)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(171)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			int tmp8 = this->GetByte(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			int v = tmp8;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(171)
			int tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(171)
			b->b[i] = tmp9;
		}
	}
	HX_STACK_LINE(172)
	::haxe::io::Bytes tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	::String tmp5 = ::haxe::crypto::Base64_obj::encode(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(172)
	::String res = tmp5;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(173)
	int tmp6 = res.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(173)
	int tmp7 = this->get_bytesPerElement();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(173)
	Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(173)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(173)
	int new_len = tmp9;		HX_STACK_VAR(new_len,"new_len");
	HX_STACK_LINE(174)
	int tmp10 = new_len;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(174)
	this->Resize(tmp10);
	HX_STACK_LINE(175)
	::String tmp11 = res;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(175)
	this->SetString(tmp11,null());
	HX_STACK_LINE(176)
	::String tmp12 = res;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(176)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,EncodeBase64,return )

Void Buffer_obj::DecodeBase64( ){
{
		HX_STACK_FRAME("haxor.io.Buffer","DecodeBase64",0xa20705af,"haxor.io.Buffer.DecodeBase64","haxor/io/Buffer.hx",184,0x07055222)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		::String tmp = this->GetString(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		::String b64 = tmp;		HX_STACK_VAR(b64,"b64");
		HX_STACK_LINE(186)
		::String tmp1 = b64;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		::haxe::io::Bytes tmp2 = ::haxe::crypto::Base64_obj::decode(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		::haxe::io::Bytes b = tmp2;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(187)
		int tmp3 = b->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		int tmp4 = this->get_bytesPerElement();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		int new_len = tmp6;		HX_STACK_VAR(new_len,"new_len");
		HX_STACK_LINE(188)
		int tmp7 = new_len;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		this->Resize(tmp7);
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(189)
			int _g = b->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(189)
			while((true)){
				HX_STACK_LINE(189)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(189)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(189)
				if ((tmp9)){
					HX_STACK_LINE(189)
					break;
				}
				HX_STACK_LINE(189)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(189)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(189)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(189)
				int tmp12 = b->b->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(189)
				this->SetByte(tmp11,tmp12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,DecodeBase64,(void))

::String Buffer_obj::GetString( hx::Null< int >  __o_p_offset,hx::Null< int >  __o_p_length){
int p_offset = __o_p_offset.Default(0);
int p_length = __o_p_length.Default(0);
	HX_STACK_FRAME("haxor.io.Buffer","GetString",0x99250a75,"haxor.io.Buffer.GetString","haxor/io/Buffer.hx",199,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_offset,"p_offset")
	HX_STACK_ARG(p_length,"p_length")
{
		HX_STACK_LINE(200)
		bool tmp = (p_length <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		if ((tmp)){
			HX_STACK_LINE(200)
			int tmp2 = this->m_length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			int tmp3 = this->get_bytesPerElement();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			tmp1 = (tmp2 * tmp3);
		}
		else{
			HX_STACK_LINE(200)
			tmp1 = p_length;
		}
		HX_STACK_LINE(200)
		int len = tmp1;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(201)
		::StringBuf tmp2 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		::StringBuf s = tmp2;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			while((true)){
				HX_STACK_LINE(202)
				bool tmp3 = (_g < len);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(202)
				if ((tmp4)){
					HX_STACK_LINE(202)
					break;
				}
				HX_STACK_LINE(202)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(202)
				int tmp6 = (i + p_offset);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(202)
				int tmp7 = this->GetByte(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(202)
				int tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(202)
				::String tmp9 = ::String::fromCharCode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(202)
				s->b->push(tmp9);
			}
		}
		HX_STACK_LINE(203)
		::String tmp3 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Buffer_obj,GetString,return )

Void Buffer_obj::SetString( ::String p_string,hx::Null< int >  __o_p_offset){
int p_offset = __o_p_offset.Default(0);
	HX_STACK_FRAME("haxor.io.Buffer","SetString",0x7c75f681,"haxor.io.Buffer.SetString","haxor/io/Buffer.hx",213,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_string,"p_string")
	HX_STACK_ARG(p_offset,"p_offset")
{
		HX_STACK_LINE(213)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(213)
		int _g = p_string.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(213)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			if ((tmp1)){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(213)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(213)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(215)
			int tmp3 = (i + p_offset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(215)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			Dynamic tmp5 = p_string.charCodeAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			this->SetByte(tmp3,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Buffer_obj,SetString,(void))

Array< int > Buffer_obj::ToByteArray( ){
	HX_STACK_FRAME("haxor.io.Buffer","ToByteArray",0x14e18464,"haxor.io.Buffer.ToByteArray","haxor/io/Buffer.hx",224,0x07055222)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	Array< int > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(226)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(226)
		int tmp1 = this->m_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		int tmp2 = this->get_bytesPerElement();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(226)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(226)
			if ((tmp5)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(226)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(226)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(226)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(226)
			int tmp8 = this->GetByte(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(226)
			res->push(tmp8);
		}
	}
	HX_STACK_LINE(227)
	Array< int > tmp1 = res;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,ToByteArray,return )

Void Buffer_obj::SetViewSlice( int p_start,int p_length){
{
		HX_STACK_FRAME("haxor.io.Buffer","SetViewSlice",0xe24a13fd,"haxor.io.Buffer.SetViewSlice","haxor/io/Buffer.hx",236,0x07055222)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_start,"p_start")
		HX_STACK_ARG(p_length,"p_length")
		HX_STACK_LINE(237)
		int tmp = p_start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		int tmp1 = this->get_bytesPerElement();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		int i0 = tmp2;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(238)
		int tmp3 = i0;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		int tmp4 = p_length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		int tmp5 = this->get_bytesPerElement();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(238)
		int tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(238)
		int i1 = tmp7;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(250)
		this->m_offset = i0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Buffer_obj,SetViewSlice,(void))

Void Buffer_obj::ResetSlice( ){
{
		HX_STACK_FRAME("haxor.io.Buffer","ResetSlice",0x865303d5,"haxor.io.Buffer.ResetSlice","haxor/io/Buffer.hx",272,0x07055222)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		this->m_offset = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,ResetSlice,(void))

::haxor::io::Buffer Buffer_obj::FromString( ::String p_string){
	HX_STACK_FRAME("haxor.io.Buffer","FromString",0x736335ad,"haxor.io.Buffer.FromString","haxor/io/Buffer.hx",30,0x07055222)
	HX_STACK_ARG(p_string,"p_string")
	HX_STACK_LINE(31)
	::haxor::io::Buffer tmp = ::haxor::io::Buffer_obj::__new(p_string.length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::haxor::io::Buffer b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(32)
	::String tmp1 = p_string;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	b->SetString(tmp1,null());
	HX_STACK_LINE(33)
	::haxor::io::Buffer tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,FromString,return )

::haxor::io::Buffer Buffer_obj::Parse( ::String p_data,::String __o_p_delimiter,hx::Null< bool >  __o_p_is_byte){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
bool p_is_byte = __o_p_is_byte.Default(false);
	HX_STACK_FRAME("haxor.io.Buffer","Parse",0xc6a799a1,"haxor.io.Buffer.Parse","haxor/io/Buffer.hx",286,0x07055222)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
	HX_STACK_ARG(p_is_byte,"p_is_byte")
{
		HX_STACK_LINE(287)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(288)
		int len = tk->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(289)
		::haxor::io::Buffer tmp2 = ::haxor::io::Buffer_obj::__new(len);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		::haxor::io::Buffer res = tmp2;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(290)
			while((true)){
				HX_STACK_LINE(290)
				bool tmp3 = (_g < len);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(290)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(290)
				if ((tmp4)){
					HX_STACK_LINE(290)
					break;
				}
				HX_STACK_LINE(290)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(290)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(292)
				::String tmp6 = tk->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(292)
				::String tmp7 = ::StringTools_obj::trim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(292)
				Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(292)
				int v = tmp8;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(293)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				int tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(293)
				res->SetByte(tmp9,tmp10);
			}
		}
		HX_STACK_LINE(295)
		::haxor::io::Buffer tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Buffer_obj,Parse,return )


Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(m_buffer,"m_buffer");
	HX_MARK_MEMBER_NAME(m_original,"m_original");
	HX_MARK_MEMBER_NAME(m_offset,"m_offset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(bytesPerElement,"bytesPerElement");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(m_length,"m_length");
	HX_MARK_END_CLASS();
}

void Buffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(m_buffer,"m_buffer");
	HX_VISIT_MEMBER_NAME(m_original,"m_original");
	HX_VISIT_MEMBER_NAME(m_offset,"m_offset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(bytesPerElement,"bytesPerElement");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(m_length,"m_length");
}

Dynamic Buffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return inCallProp == hx::paccAlways ? get_buffer() : buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"Resize") ) { return Resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GetByte") ) { return GetByte_dyn(); }
		if (HX_FIELD_EQ(inName,"SetByte") ) { return SetByte_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_buffer") ) { return m_buffer; }
		if (HX_FIELD_EQ(inName,"m_offset") ) { return m_offset; }
		if (HX_FIELD_EQ(inName,"m_length") ) { return m_length; }
		if (HX_FIELD_EQ(inName,"SetBytes") ) { return SetBytes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SetBuffer") ) { return SetBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"GetString") ) { return GetString_dyn(); }
		if (HX_FIELD_EQ(inName,"SetString") ) { return SetString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_buffer") ) { return get_buffer_dyn(); }
		if (HX_FIELD_EQ(inName,"m_original") ) { return m_original; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp == hx::paccAlways ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"ResetSlice") ) { return ResetSlice_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ToByteArray") ) { return ToByteArray_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"EncodeBase64") ) { return EncodeBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"DecodeBase64") ) { return DecodeBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"SetViewSlice") ) { return SetViewSlice_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { return inCallProp == hx::paccAlways ? get_bytesPerElement() : bytesPerElement; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_bytesPerElement") ) { return get_bytesPerElement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Buffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FromString") ) { outValue = FromString_dyn(); return true;  }
	}
	return false;
}

Dynamic Buffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_buffer") ) { m_buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_offset") ) { m_offset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_length") ) { m_length=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_original") ) { m_original=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { bytesPerElement=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Buffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("m_buffer","\xd2","\x65","\x86","\x99"));
	outFields->push(HX_HCSTRING("m_original","\xa3","\x35","\x33","\x08"));
	outFields->push(HX_HCSTRING("m_offset","\x65","\x40","\x31","\x29"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Buffer_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Buffer_obj,m_buffer),HX_HCSTRING("m_buffer","\xd2","\x65","\x86","\x99")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Buffer_obj,m_original),HX_HCSTRING("m_original","\xa3","\x35","\x33","\x08")},
	{hx::fsInt,(int)offsetof(Buffer_obj,m_offset),HX_HCSTRING("m_offset","\x65","\x40","\x31","\x29")},
	{hx::fsInt,(int)offsetof(Buffer_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsInt,(int)offsetof(Buffer_obj,bytesPerElement),HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18")},
	{hx::fsInt,(int)offsetof(Buffer_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(Buffer_obj,m_length),HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("get_buffer","\xc9","\x2c","\x1c","\xc1"),
	HX_HCSTRING("m_buffer","\xd2","\x65","\x86","\x99"),
	HX_HCSTRING("m_original","\xa3","\x35","\x33","\x08"),
	HX_HCSTRING("m_offset","\x65","\x40","\x31","\x29"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("get_byteLength","\x57","\xa6","\x01","\xed"),
	HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"),
	HX_HCSTRING("get_bytesPerElement","\xc1","\x36","\x94","\xa3"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	HX_HCSTRING("GetByte","\x9e","\xf6","\xf6","\xe0"),
	HX_HCSTRING("SetByte","\xaa","\x87","\xf8","\xd3"),
	HX_HCSTRING("SetBytes","\x89","\x2d","\x7e","\xa5"),
	HX_HCSTRING("SetBuffer","\x22","\x12","\x0f","\xd2"),
	HX_HCSTRING("EncodeBase64","\x65","\x64","\x0c","\x35"),
	HX_HCSTRING("DecodeBase64","\x7d","\x31","\x7b","\x6b"),
	HX_HCSTRING("GetString","\xe7","\x91","\x59","\x2f"),
	HX_HCSTRING("SetString","\xf3","\x7d","\xaa","\x12"),
	HX_HCSTRING("ToByteArray","\x56","\x4c","\xdc","\x06"),
	HX_HCSTRING("SetViewSlice","\xcb","\x3f","\xbe","\xab"),
	HX_HCSTRING("ResetSlice","\x23","\x00","\x15","\x5e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Buffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Buffer_obj::__mClass,"__mClass");
};

#endif

hx::Class Buffer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FromString","\xfb","\x31","\x25","\x4b"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void Buffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.Buffer","\x7c","\x3b","\x76","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Buffer_obj::__GetStatic;
	__mClass->mSetStaticField = &Buffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Buffer_obj >;
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
} // end namespace io
