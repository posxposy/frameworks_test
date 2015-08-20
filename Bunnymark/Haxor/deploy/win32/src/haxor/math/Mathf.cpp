#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_math_Mathf
#include <haxor/math/Mathf.h>
#endif
namespace haxor{
namespace math{

Void Mathf_obj::__construct()
{
	return null();
}

//Mathf_obj::~Mathf_obj() { }

Dynamic Mathf_obj::__CreateEmpty() { return  new Mathf_obj; }
hx::ObjectPtr< Mathf_obj > Mathf_obj::__new()
{  hx::ObjectPtr< Mathf_obj > _result_ = new Mathf_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mathf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mathf_obj > _result_ = new Mathf_obj();
	_result_->__construct();
	return _result_;}

Float Mathf_obj::Epsilon;

Float Mathf_obj::NaN;

Float Mathf_obj::Infinity;

Float Mathf_obj::NegativeInfinity;

Float Mathf_obj::E;

Float Mathf_obj::PI;

Float Mathf_obj::HalfPI;

Float Mathf_obj::PI2;

Float Mathf_obj::PI4;

Float Mathf_obj::InvPI;

Float Mathf_obj::Rad2Deg;

Float Mathf_obj::Deg2Rad;

Float Mathf_obj::Px2Em;

Float Mathf_obj::Em2Px;

Float Mathf_obj::Byte2Float;

Float Mathf_obj::Short2Float;

Float Mathf_obj::Long2Float;

Float Mathf_obj::Float2Byte;

Float Mathf_obj::Float2Short;

Float Mathf_obj::Float2Long;

bool Mathf_obj::IsPOT( int p_v){
	HX_STACK_FRAME("haxor.math.Mathf","IsPOT",0xd55d00c1,"haxor.math.Mathf.IsPOT","haxor/math/Mathf.hx",117,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(117)
	bool tmp = (p_v > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	if ((tmp)){
		HX_STACK_LINE(117)
		int tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		int tmp3 = (p_v - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		int tmp5 = (int(tmp2) & int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		tmp1 = (tmp6 == (int)0);
	}
	else{
		HX_STACK_LINE(117)
		tmp1 = false;
	}
	HX_STACK_LINE(117)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,IsPOT,return )

int Mathf_obj::NextPOT( int p_v){
	HX_STACK_FRAME("haxor.math.Mathf","NextPOT",0xfe950cd8,"haxor.math.Mathf.NextPOT","haxor/math/Mathf.hx",125,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(126)
	--(p_v);
	HX_STACK_LINE(127)
	int tmp = (int(p_v) >> int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	hx::OrEq(p_v,tmp);
	HX_STACK_LINE(127)
	int tmp1 = (int(p_v) >> int((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	hx::OrEq(p_v,tmp1);
	HX_STACK_LINE(128)
	int tmp2 = (int(p_v) >> int((int)4));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	hx::OrEq(p_v,tmp2);
	HX_STACK_LINE(128)
	int tmp3 = (int(p_v) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	hx::OrEq(p_v,tmp3);
	HX_STACK_LINE(129)
	int tmp4 = (int(p_v) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(129)
	hx::OrEq(p_v,tmp4);
	HX_STACK_LINE(130)
	int tmp5 = ++(p_v);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(130)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,NextPOT,return )

Float Mathf_obj::Sign( Float p_a){
	HX_STACK_FRAME("haxor.math.Mathf","Sign",0x27ae4c07,"haxor.math.Mathf.Sign","haxor/math/Mathf.hx",138,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_LINE(138)
	bool tmp = (p_a < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	if ((tmp)){
		HX_STACK_LINE(138)
		tmp1 = ((Float)-1.0);
	}
	else{
		HX_STACK_LINE(138)
		tmp1 = ((Float)1.0);
	}
	HX_STACK_LINE(138)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Sign,return )

int Mathf_obj::SignInt( int p_a){
	HX_STACK_FRAME("haxor.math.Mathf","SignInt",0x9a217728,"haxor.math.Mathf.SignInt","haxor/math/Mathf.hx",145,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_LINE(145)
	bool tmp = (p_a < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	if ((tmp)){
		HX_STACK_LINE(145)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(145)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(145)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,SignInt,return )

Float Mathf_obj::Abs( Float p_a){
	HX_STACK_FRAME("haxor.math.Mathf","Abs",0xcb513be8,"haxor.math.Mathf.Abs","haxor/math/Mathf.hx",152,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_LINE(152)
	bool tmp = (p_a < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	if ((tmp)){
		HX_STACK_LINE(152)
		Float tmp2 = p_a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		tmp1 = -(tmp2);
	}
	else{
		HX_STACK_LINE(152)
		tmp1 = p_a;
	}
	HX_STACK_LINE(152)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Abs,return )

int Mathf_obj::AbsInt( int p_a){
	HX_STACK_FRAME("haxor.math.Mathf","AbsInt",0xf676e9e7,"haxor.math.Mathf.AbsInt","haxor/math/Mathf.hx",159,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_LINE(159)
	bool tmp = (p_a < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	if ((tmp)){
		HX_STACK_LINE(159)
		int tmp2 = p_a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		tmp1 = -(tmp2);
	}
	else{
		HX_STACK_LINE(159)
		tmp1 = p_a;
	}
	HX_STACK_LINE(159)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,AbsInt,return )

Float Mathf_obj::Clamp( Float p_v,Float p_min,Float p_max){
	HX_STACK_FRAME("haxor.math.Mathf","Clamp",0x5c6207f1,"haxor.math.Mathf.Clamp","haxor/math/Mathf.hx",168,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_ARG(p_min,"p_min")
	HX_STACK_ARG(p_max,"p_max")
	HX_STACK_LINE(168)
	bool tmp = (p_v <= p_min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	if ((tmp)){
		HX_STACK_LINE(168)
		tmp1 = p_min;
	}
	else{
		HX_STACK_LINE(168)
		bool tmp2 = (p_v >= p_max);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		if ((tmp2)){
			HX_STACK_LINE(168)
			tmp1 = p_max;
		}
		else{
			HX_STACK_LINE(168)
			tmp1 = p_v;
		}
	}
	HX_STACK_LINE(168)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,Clamp,return )

Float Mathf_obj::Clamp01( Float p_v){
	HX_STACK_FRAME("haxor.math.Mathf","Clamp01",0xbee8d032,"haxor.math.Mathf.Clamp01","haxor/math/Mathf.hx",175,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(175)
	bool tmp = (p_v <= ((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	if ((tmp)){
		HX_STACK_LINE(175)
		tmp1 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(175)
		bool tmp2 = (p_v >= ((Float)1.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		if ((tmp2)){
			HX_STACK_LINE(175)
			tmp1 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(175)
			tmp1 = p_v;
		}
	}
	HX_STACK_LINE(175)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Clamp01,return )

int Mathf_obj::ClampInt( int p_v,int p_min,int p_max){
	HX_STACK_FRAME("haxor.math.Mathf","ClampInt",0x4ce0897e,"haxor.math.Mathf.ClampInt","haxor/math/Mathf.hx",184,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_ARG(p_min,"p_min")
	HX_STACK_ARG(p_max,"p_max")
	HX_STACK_LINE(184)
	bool tmp = (p_v <= p_min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	if ((tmp)){
		HX_STACK_LINE(184)
		tmp1 = p_min;
	}
	else{
		HX_STACK_LINE(184)
		bool tmp2 = (p_v >= p_max);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		if ((tmp2)){
			HX_STACK_LINE(184)
			tmp1 = p_max;
		}
		else{
			HX_STACK_LINE(184)
			tmp1 = p_v;
		}
	}
	HX_STACK_LINE(184)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,ClampInt,return )

Float Mathf_obj::Min( Float a,Float b){
	HX_STACK_FRAME("haxor.math.Mathf","Min",0xcb5a5d08,"haxor.math.Mathf.Min","haxor/math/Mathf.hx",192,0x3182889a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(192)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathf_obj,Min,return )

Float Mathf_obj::MinRange( Array< Float > v){
	HX_STACK_FRAME("haxor.math.Mathf","MinRange",0xa91c7b95,"haxor.math.Mathf.MinRange","haxor/math/Mathf.hx",199,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(199)
	bool tmp = (v->length <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	if ((tmp)){
		HX_STACK_LINE(199)
		return ((Float)0.0);
	}
	HX_STACK_LINE(199)
	Float tmp1 = v->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	Float n = tmp1;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(199)
		int _g = v->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		while((true)){
			HX_STACK_LINE(199)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			if ((tmp3)){
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(199)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(199)
			Float tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			Float tmp6 = v->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(199)
			Float tmp7 = ::Math_obj::min(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(199)
			n = tmp7;
		}
	}
	HX_STACK_LINE(199)
	Float tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,MinRange,return )

Float Mathf_obj::Max( Float a,Float b){
	HX_STACK_FRAME("haxor.math.Mathf","Max",0xcb5a561a,"haxor.math.Mathf.Max","haxor/math/Mathf.hx",207,0x3182889a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(207)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	Float tmp2 = ::Math_obj::max(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathf_obj,Max,return )

Float Mathf_obj::MaxRange( Array< Float > v){
	HX_STACK_FRAME("haxor.math.Mathf","MaxRange",0x5c026143,"haxor.math.Mathf.MaxRange","haxor/math/Mathf.hx",214,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(214)
	bool tmp = (v->length <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	if ((tmp)){
		HX_STACK_LINE(214)
		return ((Float)0.0);
	}
	HX_STACK_LINE(214)
	Float tmp1 = v->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	Float n = tmp1;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(214)
		int _g = v->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		while((true)){
			HX_STACK_LINE(214)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			if ((tmp3)){
				HX_STACK_LINE(214)
				break;
			}
			HX_STACK_LINE(214)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(214)
			Float tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(214)
			Float tmp6 = v->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(214)
			Float tmp7 = ::Math_obj::max(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(214)
			n = tmp7;
		}
	}
	HX_STACK_LINE(214)
	Float tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,MaxRange,return )

int Mathf_obj::MinInt( int a,int b){
	HX_STACK_FRAME("haxor.math.Mathf","MinInt",0xc73f3cc7,"haxor.math.Mathf.MinInt","haxor/math/Mathf.hx",222,0x3182889a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(222)
	Float tmp = ((Float)(a));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	Float tmp1 = ((Float)(b));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	int tmp3 = ((int)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathf_obj,MinInt,return )

int Mathf_obj::MaxInt( int a,int b){
	HX_STACK_FRAME("haxor.math.Mathf","MaxInt",0x32a6baf5,"haxor.math.Mathf.MaxInt","haxor/math/Mathf.hx",230,0x3182889a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(230)
	Float tmp = ((Float)(a));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	Float tmp1 = ((Float)(b));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	Float tmp2 = ::Math_obj::max(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	int tmp3 = ((int)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathf_obj,MaxInt,return )

Float Mathf_obj::Sin( Float v){
	HX_STACK_FRAME("haxor.math.Mathf","Sin",0xcb5eea8e,"haxor.math.Mathf.Sin","haxor/math/Mathf.hx",237,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(237)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	Float tmp1 = ::Math_obj::sin(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Sin,return )

Float Mathf_obj::Cos( Float v){
	HX_STACK_FRAME("haxor.math.Mathf","Cos",0xcb52cbbd,"haxor.math.Mathf.Cos","haxor/math/Mathf.hx",244,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(244)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Cos,return )

Float Mathf_obj::Asin( Float v){
	HX_STACK_FRAME("haxor.math.Mathf","Asin",0x1bd00d21,"haxor.math.Mathf.Asin","haxor/math/Mathf.hx",251,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(251)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	Float tmp1 = ::Math_obj::asin(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Asin,return )

Float Mathf_obj::Acos( Float v){
	HX_STACK_FRAME("haxor.math.Mathf","Acos",0x1bc3ee50,"haxor.math.Mathf.Acos","haxor/math/Mathf.hx",258,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(258)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	Float tmp1 = ::Math_obj::acos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Acos,return )

Float Mathf_obj::Tan( Float v){
	HX_STACK_FRAME("haxor.math.Mathf","Tan",0xcb5fa5d7,"haxor.math.Mathf.Tan","haxor/math/Mathf.hx",265,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(265)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	Float tmp1 = ::Math_obj::tan(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Tan,return )

Float Mathf_obj::ATan( Float v){
	HX_STACK_FRAME("haxor.math.Mathf","ATan",0x1bb8804a,"haxor.math.Mathf.ATan","haxor/math/Mathf.hx",272,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(272)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	Float tmp1 = ::Math_obj::atan(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,ATan,return )

Float Mathf_obj::ATan2( Float y,Float x){
	HX_STACK_FRAME("haxor.math.Mathf","ATan2",0x25b7c0a8,"haxor.math.Mathf.ATan2","haxor/math/Mathf.hx",279,0x3182889a)
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(279)
	Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	Float tmp2 = ::Math_obj::atan2(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathf_obj,ATan2,return )

Float Mathf_obj::Sqrt( Float v){
	HX_STACK_FRAME("haxor.math.Mathf","Sqrt",0x27b467aa,"haxor.math.Mathf.Sqrt","haxor/math/Mathf.hx",286,0x3182889a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(286)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	Float tmp1 = ::Math_obj::sqrt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Sqrt,return )

Float Mathf_obj::Pow( Float b,Float exp){
	HX_STACK_FRAME("haxor.math.Mathf","Pow",0xcb5ca90e,"haxor.math.Mathf.Pow","haxor/math/Mathf.hx",294,0x3182889a)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(exp,"exp")
	HX_STACK_LINE(294)
	Float tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	Float tmp1 = exp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	Float tmp2 = ::Math_obj::pow(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathf_obj,Pow,return )

Float Mathf_obj::Floor( Float p_v){
	HX_STACK_FRAME("haxor.math.Mathf","Floor",0x16a066c2,"haxor.math.Mathf.Floor","haxor/math/Mathf.hx",301,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(301)
	Float tmp = p_v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	Float tmp2 = ((Float)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Floor,return )

Float Mathf_obj::Ceil( Float p_v){
	HX_STACK_FRAME("haxor.math.Mathf","Ceil",0x1d17dacf,"haxor.math.Mathf.Ceil","haxor/math/Mathf.hx",308,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(308)
	Float tmp = p_v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	bool tmp1 = (p_v < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(308)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(308)
	if ((tmp1)){
		HX_STACK_LINE(308)
		tmp2 = ((Float)-0.9999999);
	}
	else{
		HX_STACK_LINE(308)
		tmp2 = ((Float)0.9999999);
	}
	HX_STACK_LINE(308)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(308)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(308)
	Float tmp5 = ((Float)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(308)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Ceil,return )

Float Mathf_obj::Inverse( Float p_v){
	HX_STACK_FRAME("haxor.math.Mathf","Inverse",0x97428a26,"haxor.math.Mathf.Inverse","haxor/math/Mathf.hx",315,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(315)
	bool tmp = (p_v < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	if ((tmp)){
		HX_STACK_LINE(315)
		Float tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		tmp1 = -(tmp2);
	}
	else{
		HX_STACK_LINE(315)
		tmp1 = p_v;
	}
	HX_STACK_LINE(315)
	bool tmp2 = (tmp1 <= ((Float)0.0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(315)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(315)
	if ((tmp2)){
		HX_STACK_LINE(315)
		tmp3 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(315)
		tmp3 = (Float(((Float)1.0)) / Float(p_v));
	}
	HX_STACK_LINE(315)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Inverse,return )

Float Mathf_obj::Round( Float p_v){
	HX_STACK_FRAME("haxor.math.Mathf","Round",0x016f8d44,"haxor.math.Mathf.Round","haxor/math/Mathf.hx",322,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(322)
	Float tmp = p_v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	bool tmp1 = (p_v < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	if ((tmp1)){
		HX_STACK_LINE(322)
		tmp2 = ((Float)-0.5);
	}
	else{
		HX_STACK_LINE(322)
		tmp2 = ((Float)0.5);
	}
	HX_STACK_LINE(322)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(322)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(322)
	Float tmp5 = ((Float)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(322)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Round,return )

Float Mathf_obj::RoundPlaces( Float p_v,hx::Null< int >  __o_p_decimal_places){
int p_decimal_places = __o_p_decimal_places.Default(2);
	HX_STACK_FRAME("haxor.math.Mathf","RoundPlaces",0x09078630,"haxor.math.Mathf.RoundPlaces","haxor/math/Mathf.hx",331,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_ARG(p_decimal_places,"p_decimal_places")
{
		HX_STACK_LINE(332)
		int tmp = p_decimal_places;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		Float tmp1 = ::Math_obj::pow((int)10,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		Float d = tmp1;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(333)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			Float tmp3 = (p_v * d);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			Float p_v1 = tmp3;		HX_STACK_VAR(p_v1,"p_v1");
			HX_STACK_LINE(333)
			Float tmp4 = p_v1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			bool tmp5 = (p_v1 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(333)
			if ((tmp5)){
				HX_STACK_LINE(333)
				tmp6 = ((Float)-0.5);
			}
			else{
				HX_STACK_LINE(333)
				tmp6 = ((Float)0.5);
			}
			HX_STACK_LINE(333)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(333)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(333)
			tmp2 = ((Float)(tmp8));
		}
		HX_STACK_LINE(333)
		Float tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(333)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathf_obj,RoundPlaces,return )

Float Mathf_obj::Lerp( Float p_a,Float p_b,Float p_ratio){
	HX_STACK_FRAME("haxor.math.Mathf","Lerp",0x230ace41,"haxor.math.Mathf.Lerp","haxor/math/Mathf.hx",343,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_LINE(343)
	Float tmp = p_a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	Float tmp1 = (p_b - p_a);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(343)
	Float tmp2 = p_ratio;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(343)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(343)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(343)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,Lerp,return )

Float Mathf_obj::SmoothStep( Float p_a,Float p_b,Float p_ratio){
	HX_STACK_FRAME("haxor.math.Mathf","SmoothStep",0x59bb79e4,"haxor.math.Mathf.SmoothStep","haxor/math/Mathf.hx",354,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_LINE(355)
	Float tmp = p_a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	Float tmp1 = (p_b - p_a);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	Float tmp2 = (p_ratio * p_ratio);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	Float tmp3 = (((Float)2.0) * p_ratio);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	Float tmp4 = (((Float)3.0) - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(355)
	Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(355)
	Float tmp6 = (tmp1 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(355)
	Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(355)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,SmoothStep,return )

Float Mathf_obj::PerlinStep( Float p_a,Float p_b,Float p_ratio){
	HX_STACK_FRAME("haxor.math.Mathf","PerlinStep",0xbea23f4a,"haxor.math.Mathf.PerlinStep","haxor/math/Mathf.hx",367,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_LINE(368)
	Float tmp = p_a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	Float tmp1 = (p_b - p_a);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	Float tmp2 = (p_ratio * p_ratio);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(368)
	Float tmp3 = p_ratio;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(368)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(368)
	Float tmp5 = p_ratio;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(368)
	Float tmp6 = (p_ratio * (int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(368)
	Float tmp7 = (tmp6 - (int)15);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(368)
	Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(368)
	Float tmp9 = (tmp8 + (int)10);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(368)
	Float tmp10 = (tmp4 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(368)
	Float tmp11 = (tmp1 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(368)
	Float tmp12 = (tmp + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(368)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,PerlinStep,return )

Float Mathf_obj::Hermite( Float p_a,Float p_b,Float p_ma,Float p_mb,Float p_ratio){
	HX_STACK_FRAME("haxor.math.Mathf","Hermite",0x8c1f6398,"haxor.math.Mathf.Hermite","haxor/math/Mathf.hx",381,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ma,"p_ma")
	HX_STACK_ARG(p_mb,"p_mb")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_LINE(382)
	Float r = p_ratio;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(383)
	Float tmp = (r * r);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(383)
	Float r2 = tmp;		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(384)
	Float tmp1 = (r2 * r);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(384)
	Float r3 = tmp1;		HX_STACK_VAR(r3,"r3");
	HX_STACK_LINE(385)
	Float tmp2 = (((Float)2.0) * r3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(385)
	Float r32 = tmp2;		HX_STACK_VAR(r32,"r32");
	HX_STACK_LINE(386)
	Float tmp3 = (((Float)3.0) * r2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(386)
	Float r23 = tmp3;		HX_STACK_VAR(r23,"r23");
	HX_STACK_LINE(387)
	Float tmp4 = (r32 - r23);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(387)
	Float tmp5 = (tmp4 + ((Float)1.0));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(387)
	Float tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(387)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(387)
	Float tmp8 = r3;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(387)
	Float tmp9 = (((Float)2.0) * r2);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(387)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(387)
	Float tmp11 = r;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(387)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(387)
	Float tmp13 = p_ma;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(387)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(387)
	Float tmp15 = (tmp7 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(387)
	Float tmp16 = r32;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(387)
	Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(387)
	Float tmp18 = r23;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(387)
	Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(387)
	Float tmp20 = p_b;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(387)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(387)
	Float tmp22 = (tmp15 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(387)
	Float tmp23 = (r3 - r2);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(387)
	Float tmp24 = p_mb;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(387)
	Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(387)
	Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(387)
	return tmp26;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Mathf_obj,Hermite,return )

int Mathf_obj::LerpInt( int p_a,int p_b,Float p_ratio){
	HX_STACK_FRAME("haxor.math.Mathf","LerpInt",0x3458952e,"haxor.math.Mathf.LerpInt","haxor/math/Mathf.hx",398,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_LINE(398)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(398)
	{
		HX_STACK_LINE(398)
		Float p_a1 = ((Float)(p_a));		HX_STACK_VAR(p_a1,"p_a1");
		HX_STACK_LINE(398)
		Float tmp1 = p_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		Float tmp2 = (((Float)(p_b)) - p_a1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		Float tmp3 = p_ratio;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(398)
		tmp = (tmp1 + tmp4);
	}
	HX_STACK_LINE(398)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(398)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,LerpInt,return )

int Mathf_obj::SmoothStepInt( int p_a,int p_b,Float p_ratio){
	HX_STACK_FRAME("haxor.math.Mathf","SmoothStepInt",0xbee2916b,"haxor.math.Mathf.SmoothStepInt","haxor/math/Mathf.hx",407,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_LINE(407)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	{
		HX_STACK_LINE(407)
		Float p_a1 = ((Float)(p_a));		HX_STACK_VAR(p_a1,"p_a1");
		HX_STACK_LINE(407)
		Float tmp1 = p_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(407)
		Float tmp2 = (((Float)(p_b)) - p_a1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(407)
		Float tmp3 = (p_ratio * p_ratio);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(407)
		Float tmp4 = (((Float)2.0) * p_ratio);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(407)
		Float tmp5 = (((Float)3.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(407)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(407)
		Float tmp7 = (tmp2 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(407)
		tmp = (tmp1 + tmp7);
	}
	HX_STACK_LINE(407)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(407)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,SmoothStepInt,return )

int Mathf_obj::PerlinStepInt( int p_a,int p_b,Float p_ratio){
	HX_STACK_FRAME("haxor.math.Mathf","PerlinStepInt",0x6830afc5,"haxor.math.Mathf.PerlinStepInt","haxor/math/Mathf.hx",416,0x3182889a)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_ratio,"p_ratio")
	HX_STACK_LINE(416)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		Float p_a1 = ((Float)(p_a));		HX_STACK_VAR(p_a1,"p_a1");
		HX_STACK_LINE(416)
		Float tmp1 = p_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		Float tmp2 = (((Float)(p_b)) - p_a1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		Float tmp3 = (p_ratio * p_ratio);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		Float tmp4 = p_ratio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(416)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		Float tmp6 = p_ratio;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(416)
		Float tmp7 = (p_ratio * (int)6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(416)
		Float tmp8 = (tmp7 - (int)15);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(416)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(416)
		Float tmp10 = (tmp9 + (int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(416)
		Float tmp11 = (tmp5 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(416)
		Float tmp12 = (tmp2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(416)
		tmp = (tmp1 + tmp12);
	}
	HX_STACK_LINE(416)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(416)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,PerlinStepInt,return )

Float Mathf_obj::Frac( Float p_v,hx::Null< bool >  __o_p_signed){
bool p_signed = __o_p_signed.Default(false);
	HX_STACK_FRAME("haxor.math.Mathf","Frac",0x1f1d54f8,"haxor.math.Mathf.Frac","haxor/math/Mathf.hx",423,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_ARG(p_signed,"p_signed")
{
		HX_STACK_LINE(423)
		bool tmp = (p_v < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(423)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		if ((tmp)){
			HX_STACK_LINE(423)
			Float tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(423)
			tmp1 = -(tmp2);
		}
		else{
			HX_STACK_LINE(423)
			tmp1 = p_v;
		}
		HX_STACK_LINE(423)
		bool tmp2 = (p_v < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(423)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(423)
		if ((tmp2)){
			HX_STACK_LINE(423)
			Float tmp4 = p_v;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(423)
			tmp3 = -(tmp4);
		}
		else{
			HX_STACK_LINE(423)
			tmp3 = p_v;
		}
		HX_STACK_LINE(423)
		Float tmp4 = ::Math_obj::ffloor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(423)
		Float tmp5 = (tmp1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(423)
		Float f = tmp5;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(423)
		bool tmp6 = p_signed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(423)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(423)
		if ((tmp6)){
			HX_STACK_LINE(423)
			bool tmp8 = (p_v < ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(423)
			if ((tmp8)){
				HX_STACK_LINE(423)
				Float tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(423)
				tmp7 = -(tmp9);
			}
			else{
				HX_STACK_LINE(423)
				tmp7 = f;
			}
		}
		else{
			HX_STACK_LINE(423)
			tmp7 = f;
		}
		HX_STACK_LINE(423)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathf_obj,Frac,return )

Float Mathf_obj::Loop( Float p_v,Float p_v0,Float p_v1){
	HX_STACK_FRAME("haxor.math.Mathf","Loop",0x2312622e,"haxor.math.Mathf.Loop","haxor/math/Mathf.hx",433,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_ARG(p_v0,"p_v0")
	HX_STACK_ARG(p_v1,"p_v1")
	HX_STACK_LINE(434)
	Float tmp = p_v0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	Float tmp1 = p_v1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	Float vv0 = tmp2;		HX_STACK_VAR(vv0,"vv0");
	HX_STACK_LINE(435)
	Float tmp3 = p_v0;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(435)
	Float tmp4 = p_v1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(435)
	Float tmp5 = ::Math_obj::max(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(435)
	Float vv1 = tmp5;		HX_STACK_VAR(vv1,"vv1");
	HX_STACK_LINE(436)
	Float tmp6 = (vv1 - vv0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(436)
	Float dv = tmp6;		HX_STACK_VAR(dv,"dv");
	HX_STACK_LINE(437)
	bool tmp7 = (dv <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(437)
	if ((tmp7)){
		HX_STACK_LINE(437)
		Float tmp8 = vv0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(437)
		return tmp8;
	}
	HX_STACK_LINE(438)
	Float tmp8 = (p_v - p_v0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(438)
	Float tmp9 = dv;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(438)
	Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(438)
	Float n = tmp10;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(439)
	bool tmp11 = (p_v < p_v0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(439)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(439)
	if ((tmp11)){
		HX_STACK_LINE(439)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			bool p_signed = false;		HX_STACK_VAR(p_signed,"p_signed");
			HX_STACK_LINE(439)
			bool tmp14 = (n < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(439)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(439)
			if ((tmp14)){
				HX_STACK_LINE(439)
				Float tmp16 = n;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(439)
				tmp15 = -(tmp16);
			}
			else{
				HX_STACK_LINE(439)
				tmp15 = n;
			}
			HX_STACK_LINE(439)
			bool tmp16 = (n < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(439)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(439)
			if ((tmp16)){
				HX_STACK_LINE(439)
				Float tmp18 = n;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(439)
				tmp17 = -(tmp18);
			}
			else{
				HX_STACK_LINE(439)
				tmp17 = n;
			}
			HX_STACK_LINE(439)
			Float tmp18 = ::Math_obj::ffloor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(439)
			Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(439)
			Float f = tmp19;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(439)
			bool tmp20 = p_signed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(439)
			if ((tmp20)){
				HX_STACK_LINE(439)
				bool tmp21 = (n < ((Float)0.0));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(439)
				if ((tmp21)){
					HX_STACK_LINE(439)
					Float tmp22 = f;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(439)
					tmp13 = -(tmp22);
				}
				else{
					HX_STACK_LINE(439)
					tmp13 = f;
				}
			}
			else{
				HX_STACK_LINE(439)
				tmp13 = f;
			}
		}
		HX_STACK_LINE(439)
		tmp12 = (((Float)1.0) - tmp13);
	}
	else{
		HX_STACK_LINE(439)
		bool p_signed = false;		HX_STACK_VAR(p_signed,"p_signed");
		HX_STACK_LINE(439)
		bool tmp13 = (n < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(439)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(439)
		if ((tmp13)){
			HX_STACK_LINE(439)
			Float tmp15 = n;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(439)
			tmp14 = -(tmp15);
		}
		else{
			HX_STACK_LINE(439)
			tmp14 = n;
		}
		HX_STACK_LINE(439)
		bool tmp15 = (n < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(439)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(439)
		if ((tmp15)){
			HX_STACK_LINE(439)
			Float tmp17 = n;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(439)
			tmp16 = -(tmp17);
		}
		else{
			HX_STACK_LINE(439)
			tmp16 = n;
		}
		HX_STACK_LINE(439)
		Float tmp17 = ::Math_obj::ffloor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(439)
		Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(439)
		Float f = tmp18;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(439)
		bool tmp19 = p_signed;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(439)
		if ((tmp19)){
			HX_STACK_LINE(439)
			bool tmp20 = (n < ((Float)0.0));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(439)
			if ((tmp20)){
				HX_STACK_LINE(439)
				Float tmp21 = f;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(439)
				tmp12 = -(tmp21);
			}
			else{
				HX_STACK_LINE(439)
				tmp12 = f;
			}
		}
		else{
			HX_STACK_LINE(439)
			tmp12 = f;
		}
	}
	HX_STACK_LINE(439)
	Float r = tmp12;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(440)
	Float tmp13 = p_v0;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(440)
	Float tmp14 = (p_v1 - p_v0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(440)
	Float tmp15 = r;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(440)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(440)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(440)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,Loop,return )

Float Mathf_obj::Linear2Gamma( Float p_v){
	HX_STACK_FRAME("haxor.math.Mathf","Linear2Gamma",0x512ce304,"haxor.math.Mathf.Linear2Gamma","haxor/math/Mathf.hx",448,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(448)
	Float tmp = p_v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(448)
	Float tmp1 = ::Math_obj::pow(tmp,((Float)2.2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(448)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,Linear2Gamma,return )

Float Mathf_obj::Oscilate( Float p_v,Float p_v0,Float p_v1){
	HX_STACK_FRAME("haxor.math.Mathf","Oscilate",0x9adde9ba,"haxor.math.Mathf.Oscilate","haxor/math/Mathf.hx",457,0x3182889a)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_ARG(p_v0,"p_v0")
	HX_STACK_ARG(p_v1,"p_v1")
	HX_STACK_LINE(458)
	Float tmp = p_v0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	Float tmp1 = p_v1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(458)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(458)
	Float vv0 = tmp2;		HX_STACK_VAR(vv0,"vv0");
	HX_STACK_LINE(459)
	Float tmp3 = p_v0;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(459)
	Float tmp4 = p_v1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(459)
	Float tmp5 = ::Math_obj::max(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(459)
	Float vv1 = tmp5;		HX_STACK_VAR(vv1,"vv1");
	HX_STACK_LINE(460)
	Float tmp6 = (vv1 - vv0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(460)
	Float dv = tmp6;		HX_STACK_VAR(dv,"dv");
	HX_STACK_LINE(461)
	bool tmp7 = (dv <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(461)
	if ((tmp7)){
		HX_STACK_LINE(461)
		Float tmp8 = vv0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(461)
		return tmp8;
	}
	HX_STACK_LINE(462)
	Float tmp8 = (p_v - p_v0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(462)
	Float tmp9 = dv;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(462)
	Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(462)
	Float n = tmp10;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(463)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		Float tmp12 = (n - ((Float)1.0));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(463)
		Float tmp13 = ::haxor::math::Mathf_obj::Loop(tmp12,((Float)-1.0),((Float)1.0));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(463)
		Float p_a = tmp13;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(463)
		bool tmp14 = (p_a < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(463)
		if ((tmp14)){
			HX_STACK_LINE(463)
			Float tmp15 = p_a;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(463)
			tmp11 = -(tmp15);
		}
		else{
			HX_STACK_LINE(463)
			tmp11 = p_a;
		}
	}
	HX_STACK_LINE(463)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(463)
	Float tmp13 = (tmp12 + ((Float)1.0));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(463)
	Float r = tmp13;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(464)
	Float tmp14 = p_v0;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(464)
	Float tmp15 = (p_v1 - p_v0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(464)
	Float tmp16 = r;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(464)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(464)
	Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(464)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathf_obj,Oscilate,return )

Float Mathf_obj::WrapAngle( Float p_angle){
	HX_STACK_FRAME("haxor.math.Mathf","WrapAngle",0x054f059f,"haxor.math.Mathf.WrapAngle","haxor/math/Mathf.hx",473,0x3182889a)
	HX_STACK_ARG(p_angle,"p_angle")
	HX_STACK_LINE(474)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(474)
	{
		HX_STACK_LINE(474)
		Float tmp1 = (Float(p_angle) / Float(((Float)360.0)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(474)
		Float p_v = tmp1;		HX_STACK_VAR(p_v,"p_v");
		HX_STACK_LINE(474)
		bool tmp2 = (p_v < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(474)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(474)
		if ((tmp2)){
			HX_STACK_LINE(474)
			Float tmp4 = p_v;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(474)
			tmp3 = -(tmp4);
		}
		else{
			HX_STACK_LINE(474)
			tmp3 = p_v;
		}
		HX_STACK_LINE(474)
		bool tmp4 = (p_v < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(474)
		if ((tmp4)){
			HX_STACK_LINE(474)
			Float tmp6 = p_v;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(474)
			tmp5 = -(tmp6);
		}
		else{
			HX_STACK_LINE(474)
			tmp5 = p_v;
		}
		HX_STACK_LINE(474)
		Float tmp6 = ::Math_obj::ffloor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(474)
		Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(474)
		Float f = tmp7;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			bool tmp8 = (p_v < ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(474)
			if ((tmp8)){
				HX_STACK_LINE(474)
				Float tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(474)
				tmp = -(tmp9);
			}
			else{
				HX_STACK_LINE(474)
				tmp = f;
			}
		}
	}
	HX_STACK_LINE(474)
	Float tmp1 = (tmp * ((Float)360.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(474)
	Float a = tmp1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(475)
	Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(475)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathf_obj,WrapAngle,return )


Mathf_obj::Mathf_obj()
{
}

bool Mathf_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"NaN") ) { outValue = NaN; return true;  }
		if (HX_FIELD_EQ(inName,"Abs") ) { outValue = Abs_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Min") ) { outValue = Min_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Max") ) { outValue = Max_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Sin") ) { outValue = Sin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Cos") ) { outValue = Cos_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Tan") ) { outValue = Tan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Pow") ) { outValue = Pow_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Sign") ) { outValue = Sign_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Asin") ) { outValue = Asin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Acos") ) { outValue = Acos_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ATan") ) { outValue = ATan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Sqrt") ) { outValue = Sqrt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Ceil") ) { outValue = Ceil_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Lerp") ) { outValue = Lerp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Frac") ) { outValue = Frac_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Loop") ) { outValue = Loop_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"IsPOT") ) { outValue = IsPOT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Clamp") ) { outValue = Clamp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ATan2") ) { outValue = ATan2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Floor") ) { outValue = Floor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Round") ) { outValue = Round_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"AbsInt") ) { outValue = AbsInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"MinInt") ) { outValue = MinInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"MaxInt") ) { outValue = MaxInt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"NextPOT") ) { outValue = NextPOT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"SignInt") ) { outValue = SignInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Clamp01") ) { outValue = Clamp01_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Inverse") ) { outValue = Inverse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Hermite") ) { outValue = Hermite_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LerpInt") ) { outValue = LerpInt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Infinity") ) { outValue = Infinity; return true;  }
		if (HX_FIELD_EQ(inName,"ClampInt") ) { outValue = ClampInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"MinRange") ) { outValue = MinRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"MaxRange") ) { outValue = MaxRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Oscilate") ) { outValue = Oscilate_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"WrapAngle") ) { outValue = WrapAngle_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SmoothStep") ) { outValue = SmoothStep_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PerlinStep") ) { outValue = PerlinStep_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RoundPlaces") ) { outValue = RoundPlaces_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"Linear2Gamma") ) { outValue = Linear2Gamma_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SmoothStepInt") ) { outValue = SmoothStepInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PerlinStepInt") ) { outValue = PerlinStepInt_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NegativeInfinity") ) { outValue = NegativeInfinity; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Mathf_obj::Epsilon,HX_HCSTRING("Epsilon","\x4a","\xdd","\x0f","\x7a")},
	{hx::fsFloat,(void *) &Mathf_obj::NaN,HX_HCSTRING("NaN","\x9b","\x84","\x3b","\x00")},
	{hx::fsFloat,(void *) &Mathf_obj::Infinity,HX_HCSTRING("Infinity","\x08","\xd3","\x1a","\xb4")},
	{hx::fsFloat,(void *) &Mathf_obj::NegativeInfinity,HX_HCSTRING("NegativeInfinity","\x9d","\xd2","\x42","\x6f")},
	{hx::fsFloat,(void *) &Mathf_obj::E,HX_HCSTRING("E","\x45","\x00","\x00","\x00")},
	{hx::fsFloat,(void *) &Mathf_obj::PI,HX_HCSTRING("PI","\xf9","\x45","\x00","\x00")},
	{hx::fsFloat,(void *) &Mathf_obj::HalfPI,HX_HCSTRING("HalfPI","\x8c","\xf6","\x40","\xeb")},
	{hx::fsFloat,(void *) &Mathf_obj::PI2,HX_HCSTRING("PI2","\x19","\xf4","\x3c","\x00")},
	{hx::fsFloat,(void *) &Mathf_obj::PI4,HX_HCSTRING("PI4","\x1b","\xf4","\x3c","\x00")},
	{hx::fsFloat,(void *) &Mathf_obj::InvPI,HX_HCSTRING("InvPI","\x0a","\xa1","\x4f","\x51")},
	{hx::fsFloat,(void *) &Mathf_obj::Rad2Deg,HX_HCSTRING("Rad2Deg","\xe9","\xa8","\xd0","\xcf")},
	{hx::fsFloat,(void *) &Mathf_obj::Deg2Rad,HX_HCSTRING("Deg2Rad","\x69","\xf5","\x4f","\xdd")},
	{hx::fsFloat,(void *) &Mathf_obj::Px2Em,HX_HCSTRING("Px2Em","\x12","\x30","\x86","\x5f")},
	{hx::fsFloat,(void *) &Mathf_obj::Em2Px,HX_HCSTRING("Em2Px","\x52","\x7f","\xd8","\x02")},
	{hx::fsFloat,(void *) &Mathf_obj::Byte2Float,HX_HCSTRING("Byte2Float","\x32","\x59","\xbd","\x2d")},
	{hx::fsFloat,(void *) &Mathf_obj::Short2Float,HX_HCSTRING("Short2Float","\x66","\xe1","\xd6","\x40")},
	{hx::fsFloat,(void *) &Mathf_obj::Long2Float,HX_HCSTRING("Long2Float","\xa6","\x2e","\x34","\x6f")},
	{hx::fsFloat,(void *) &Mathf_obj::Float2Byte,HX_HCSTRING("Float2Byte","\x5e","\xb5","\x21","\x78")},
	{hx::fsFloat,(void *) &Mathf_obj::Float2Short,HX_HCSTRING("Float2Short","\x66","\x79","\xec","\x63")},
	{hx::fsFloat,(void *) &Mathf_obj::Float2Long,HX_HCSTRING("Float2Long","\xd2","\x3b","\xb6","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mathf_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mathf_obj::Epsilon,"Epsilon");
	HX_MARK_MEMBER_NAME(Mathf_obj::NaN,"NaN");
	HX_MARK_MEMBER_NAME(Mathf_obj::Infinity,"Infinity");
	HX_MARK_MEMBER_NAME(Mathf_obj::NegativeInfinity,"NegativeInfinity");
	HX_MARK_MEMBER_NAME(Mathf_obj::E,"E");
	HX_MARK_MEMBER_NAME(Mathf_obj::PI,"PI");
	HX_MARK_MEMBER_NAME(Mathf_obj::HalfPI,"HalfPI");
	HX_MARK_MEMBER_NAME(Mathf_obj::PI2,"PI2");
	HX_MARK_MEMBER_NAME(Mathf_obj::PI4,"PI4");
	HX_MARK_MEMBER_NAME(Mathf_obj::InvPI,"InvPI");
	HX_MARK_MEMBER_NAME(Mathf_obj::Rad2Deg,"Rad2Deg");
	HX_MARK_MEMBER_NAME(Mathf_obj::Deg2Rad,"Deg2Rad");
	HX_MARK_MEMBER_NAME(Mathf_obj::Px2Em,"Px2Em");
	HX_MARK_MEMBER_NAME(Mathf_obj::Em2Px,"Em2Px");
	HX_MARK_MEMBER_NAME(Mathf_obj::Byte2Float,"Byte2Float");
	HX_MARK_MEMBER_NAME(Mathf_obj::Short2Float,"Short2Float");
	HX_MARK_MEMBER_NAME(Mathf_obj::Long2Float,"Long2Float");
	HX_MARK_MEMBER_NAME(Mathf_obj::Float2Byte,"Float2Byte");
	HX_MARK_MEMBER_NAME(Mathf_obj::Float2Short,"Float2Short");
	HX_MARK_MEMBER_NAME(Mathf_obj::Float2Long,"Float2Long");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mathf_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Epsilon,"Epsilon");
	HX_VISIT_MEMBER_NAME(Mathf_obj::NaN,"NaN");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Infinity,"Infinity");
	HX_VISIT_MEMBER_NAME(Mathf_obj::NegativeInfinity,"NegativeInfinity");
	HX_VISIT_MEMBER_NAME(Mathf_obj::E,"E");
	HX_VISIT_MEMBER_NAME(Mathf_obj::PI,"PI");
	HX_VISIT_MEMBER_NAME(Mathf_obj::HalfPI,"HalfPI");
	HX_VISIT_MEMBER_NAME(Mathf_obj::PI2,"PI2");
	HX_VISIT_MEMBER_NAME(Mathf_obj::PI4,"PI4");
	HX_VISIT_MEMBER_NAME(Mathf_obj::InvPI,"InvPI");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Rad2Deg,"Rad2Deg");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Deg2Rad,"Deg2Rad");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Px2Em,"Px2Em");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Em2Px,"Em2Px");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Byte2Float,"Byte2Float");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Short2Float,"Short2Float");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Long2Float,"Long2Float");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Float2Byte,"Float2Byte");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Float2Short,"Float2Short");
	HX_VISIT_MEMBER_NAME(Mathf_obj::Float2Long,"Float2Long");
};

#endif

hx::Class Mathf_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Epsilon","\x4a","\xdd","\x0f","\x7a"),
	HX_HCSTRING("NaN","\x9b","\x84","\x3b","\x00"),
	HX_HCSTRING("Infinity","\x08","\xd3","\x1a","\xb4"),
	HX_HCSTRING("NegativeInfinity","\x9d","\xd2","\x42","\x6f"),
	HX_HCSTRING("E","\x45","\x00","\x00","\x00"),
	HX_HCSTRING("PI","\xf9","\x45","\x00","\x00"),
	HX_HCSTRING("HalfPI","\x8c","\xf6","\x40","\xeb"),
	HX_HCSTRING("PI2","\x19","\xf4","\x3c","\x00"),
	HX_HCSTRING("PI4","\x1b","\xf4","\x3c","\x00"),
	HX_HCSTRING("InvPI","\x0a","\xa1","\x4f","\x51"),
	HX_HCSTRING("Rad2Deg","\xe9","\xa8","\xd0","\xcf"),
	HX_HCSTRING("Deg2Rad","\x69","\xf5","\x4f","\xdd"),
	HX_HCSTRING("Px2Em","\x12","\x30","\x86","\x5f"),
	HX_HCSTRING("Em2Px","\x52","\x7f","\xd8","\x02"),
	HX_HCSTRING("Byte2Float","\x32","\x59","\xbd","\x2d"),
	HX_HCSTRING("Short2Float","\x66","\xe1","\xd6","\x40"),
	HX_HCSTRING("Long2Float","\xa6","\x2e","\x34","\x6f"),
	HX_HCSTRING("Float2Byte","\x5e","\xb5","\x21","\x78"),
	HX_HCSTRING("Float2Short","\x66","\x79","\xec","\x63"),
	HX_HCSTRING("Float2Long","\xd2","\x3b","\xb6","\x7e"),
	HX_HCSTRING("IsPOT","\xab","\xdb","\x80","\x54"),
	HX_HCSTRING("NextPOT","\x42","\xf6","\x94","\x72"),
	HX_HCSTRING("Sign","\x5d","\xbc","\x2c","\x37"),
	HX_HCSTRING("SignInt","\x92","\x60","\x21","\x0e"),
	HX_HCSTRING("Abs","\x52","\xa8","\x31","\x00"),
	HX_HCSTRING("AbsInt","\xbd","\x9b","\xb2","\xb6"),
	HX_HCSTRING("Clamp","\xdb","\xe2","\x85","\xdb"),
	HX_HCSTRING("Clamp01","\x9c","\xb9","\xe8","\x32"),
	HX_HCSTRING("ClampInt","\xd4","\xdc","\xcc","\x58"),
	HX_HCSTRING("Min","\x72","\xc9","\x3a","\x00"),
	HX_HCSTRING("MinRange","\xeb","\xce","\x08","\xb5"),
	HX_HCSTRING("Max","\x84","\xc2","\x3a","\x00"),
	HX_HCSTRING("MaxRange","\x99","\xb4","\xee","\x67"),
	HX_HCSTRING("MinInt","\x9d","\xee","\x7a","\x87"),
	HX_HCSTRING("MaxInt","\xcb","\x6c","\xe2","\xf2"),
	HX_HCSTRING("Sin","\xf8","\x56","\x3f","\x00"),
	HX_HCSTRING("Cos","\x27","\x38","\x33","\x00"),
	HX_HCSTRING("Asin","\x77","\x7d","\x4e","\x2b"),
	HX_HCSTRING("Acos","\xa6","\x5e","\x42","\x2b"),
	HX_HCSTRING("Tan","\x41","\x12","\x40","\x00"),
	HX_HCSTRING("ATan","\xa0","\xf0","\x36","\x2b"),
	HX_HCSTRING("ATan2","\x92","\x9b","\xdb","\xa4"),
	HX_HCSTRING("Sqrt","\x00","\xd8","\x32","\x37"),
	HX_HCSTRING("Pow","\x78","\x15","\x3d","\x00"),
	HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"),
	HX_HCSTRING("Ceil","\x25","\x4b","\x96","\x2c"),
	HX_HCSTRING("Inverse","\x90","\x73","\x42","\x0b"),
	HX_HCSTRING("Round","\x2e","\x68","\x93","\x80"),
	HX_HCSTRING("RoundPlaces","\x9a","\x6c","\x29","\x4e"),
	HX_HCSTRING("Lerp","\x97","\x3e","\x89","\x32"),
	HX_HCSTRING("SmoothStep","\xba","\xce","\xe3","\x77"),
	HX_HCSTRING("PerlinStep","\x20","\x94","\xca","\xdc"),
	HX_HCSTRING("Hermite","\x02","\x4d","\x1f","\x00"),
	HX_HCSTRING("LerpInt","\x98","\x7e","\x58","\xa8"),
	HX_HCSTRING("SmoothStepInt","\x55","\x66","\x1a","\xfd"),
	HX_HCSTRING("PerlinStepInt","\xaf","\x84","\x68","\xa6"),
	HX_HCSTRING("Frac","\x4e","\xc5","\x9b","\x2e"),
	HX_HCSTRING("Loop","\x84","\xd2","\x90","\x32"),
	HX_HCSTRING("Linear2Gamma","\x5a","\x99","\xb4","\x89"),
	HX_HCSTRING("Oscilate","\x10","\x3d","\xca","\xa6"),
	HX_HCSTRING("WrapAngle","\x89","\x9d","\x2b","\x68"),
	String(null()) };

void Mathf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.math.Mathf","\x04","\xf1","\x50","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mathf_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mathf_obj >;
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

void Mathf_obj::__boot()
{
	Epsilon= ((Float)0.0001);
	NaN= ::Math_obj::NaN;
	Infinity= ::Math_obj::POSITIVE_INFINITY;
	NegativeInfinity= ::Math_obj::NEGATIVE_INFINITY;
	E= ((Float)2.7182818284590452353602874713527);
	PI= ((Float)3.1415926535897932384626433832795028841971693993751058);
	HalfPI= ((Float)1.5707963267948966192313216916398);
	PI2= ((Float)6.283185307179586476925286766559);
	PI4= ((Float)12.566370614359172953850573533118);
	InvPI= ((Float)0.31830988618379067153776752674503);
	Rad2Deg= ((Float)57.295779513082320876798154814105);
	Deg2Rad= ((Float)0.01745329251994329576923690768489);
	Px2Em= ((Float)0.063);
	Em2Px= ((Float)15.87301587301587);
	Byte2Float= ((Float)0.00392156863);
	Short2Float= ((Float)0.0000152587890625);
	Long2Float= ((Float)0.00000000023283064365386962890625);
	Float2Byte= ((Float)255.0);
	Float2Short= ((Float)65536.0);
	Float2Long= ((Float)4294967296.0);
}

} // end namespace haxor
} // end namespace math
