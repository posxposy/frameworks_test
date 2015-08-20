#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_component_animation_ClipTrack
#include <haxor/component/animation/ClipTrack.h>
#endif
#ifndef INCLUDED_haxor_component_animation_FloatKeyFrame
#include <haxor/component/animation/FloatKeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_QuaternionKeyFrame
#include <haxor/component/animation/QuaternionKeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Vector3KeyFrame
#include <haxor/component/animation/Vector3KeyFrame.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace component{
namespace animation{

Void ClipTrack_obj::__construct()
{
HX_STACK_FRAME("haxor.component.animation.ClipTrack","new",0x3cd5a926,"haxor.component.animation.ClipTrack.new","haxor/component/animation/ClipTrack.hx",44,0x6f03274d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(45)
	this->target = null();
	HX_STACK_LINE(46)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	this->keyframes = tmp;
	HX_STACK_LINE(47)
	this->property = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(48)
	this->m_head = (int)0;
	HX_STACK_LINE(49)
	this->m_length = (int)0;
}
;
	return null();
}

//ClipTrack_obj::~ClipTrack_obj() { }

Dynamic ClipTrack_obj::__CreateEmpty() { return  new ClipTrack_obj; }
hx::ObjectPtr< ClipTrack_obj > ClipTrack_obj::__new()
{  hx::ObjectPtr< ClipTrack_obj > _result_ = new ClipTrack_obj();
	_result_->__construct();
	return _result_;}

Dynamic ClipTrack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClipTrack_obj > _result_ = new ClipTrack_obj();
	_result_->__construct();
	return _result_;}

Float ClipTrack_obj::get_length( ){
	HX_STACK_FRAME("haxor.component.animation.ClipTrack","get_length",0x227c70a9,"haxor.component.animation.ClipTrack.get_length","haxor/component/animation/ClipTrack.hx",35,0x6f03274d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	Float tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ClipTrack_obj,get_length,return )

::haxor::component::animation::KeyFrame ClipTrack_obj::Add( Float p_time,Dynamic p_value){
	HX_STACK_FRAME("haxor.component.animation.ClipTrack","Add",0x3cb382c7,"haxor.component.animation.ClipTrack.Add","haxor/component/animation/ClipTrack.hx",59,0x6f03274d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_time,"p_time")
	HX_STACK_ARG(p_value,"p_value")
	HX_STACK_LINE(60)
	::haxor::component::animation::KeyFrame k = null();		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(61)
	Dynamic tmp = p_value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	if ((tmp1)){
		HX_STACK_LINE(61)
		::haxor::component::animation::FloatKeyFrame tmp2 = ::haxor::component::animation::FloatKeyFrame_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		::haxor::component::animation::KeyFrame tmp3 = k = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		::haxor::component::animation::FloatKeyFrame nk = ((::haxor::component::animation::FloatKeyFrame)(tmp3));		HX_STACK_VAR(nk,"nk");
		HX_STACK_LINE(61)
		nk->time = p_time;
		HX_STACK_LINE(61)
		nk->value = p_value;
	}
	else{
		HX_STACK_LINE(62)
		Dynamic tmp2 = p_value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxor::math::Vector3 >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		if ((tmp3)){
			HX_STACK_LINE(62)
			::haxor::component::animation::Vector3KeyFrame tmp4 = ::haxor::component::animation::Vector3KeyFrame_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			::haxor::component::animation::KeyFrame tmp5 = k = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			::haxor::component::animation::Vector3KeyFrame nk = ((::haxor::component::animation::Vector3KeyFrame)(tmp5));		HX_STACK_VAR(nk,"nk");
			HX_STACK_LINE(62)
			nk->time = p_time;
			HX_STACK_LINE(62)
			nk->value = p_value;
		}
		else{
			HX_STACK_LINE(63)
			Dynamic tmp4 = p_value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxor::math::Quaternion >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			if ((tmp5)){
				HX_STACK_LINE(63)
				::haxor::component::animation::QuaternionKeyFrame tmp6 = ::haxor::component::animation::QuaternionKeyFrame_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				::haxor::component::animation::KeyFrame tmp7 = k = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(63)
				::haxor::component::animation::QuaternionKeyFrame nk = ((::haxor::component::animation::QuaternionKeyFrame)(tmp7));		HX_STACK_VAR(nk,"nk");
				HX_STACK_LINE(63)
				nk->time = p_time;
				HX_STACK_LINE(63)
				nk->value = p_value;
			}
		}
	}
	HX_STACK_LINE(65)
	bool tmp2 = (k != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	if ((tmp2)){
		HX_STACK_LINE(67)
		Array< ::Dynamic > tmp3 = this->keyframes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::haxor::component::animation::KeyFrame tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		tmp3->push(tmp4);
		HX_STACK_LINE(68)
		Float tmp5 = k->time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		Float tmp6 = this->m_length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		Float tmp7 = ::Math_obj::max(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		this->m_length = tmp7;
	}
	HX_STACK_LINE(71)
	::haxor::component::animation::KeyFrame tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ClipTrack_obj,Add,return )

int ClipTrack_obj::Sample( Float p_time,hx::Null< Float >  __o_p_weight){
Float p_weight = __o_p_weight.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.component.animation.ClipTrack","Sample",0x64f43b44,"haxor.component.animation.ClipTrack.Sample","haxor/component/animation/ClipTrack.hx",81,0x6f03274d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_time,"p_time")
	HX_STACK_ARG(p_weight,"p_weight")
{
		HX_STACK_LINE(82)
		Array< ::Dynamic > tmp = this->keyframes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		bool tmp2 = (tmp1 <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		if ((tmp2)){
			HX_STACK_LINE(82)
			return (int)0;
		}
		HX_STACK_LINE(83)
		Array< ::Dynamic > tmp3 = this->keyframes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		bool tmp5 = (tmp4 <= (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		if ((tmp5)){
			HX_STACK_LINE(83)
			Dynamic tmp6 = this->target;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			::String tmp7 = this->property;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			Array< ::Dynamic > tmp8 = this->keyframes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			::haxor::component::animation::KeyFrame tmp9 = tmp8->__get((int)0).StaticCast< ::haxor::component::animation::KeyFrame >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			Dynamic tmp10 = tmp9->Sample(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			::Reflect_obj::setProperty(tmp6,tmp7,tmp10);
			HX_STACK_LINE(83)
			return (int)0;
		}
		HX_STACK_LINE(85)
		Array< ::Dynamic > tmp6 = this->keyframes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		int mid = tmp9;		HX_STACK_VAR(mid,"mid");
		HX_STACK_LINE(86)
		Array< ::Dynamic > tmp10 = this->keyframes;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(86)
		int tmp11 = tmp10->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(86)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(86)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(86)
		int step = tmp13;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(87)
		int i0 = (int)-1;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(90)
			Array< ::Dynamic > tmp14 = this->keyframes;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(90)
			int _g = tmp14->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(90)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(90)
				if ((tmp16)){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(90)
				int i = tmp17;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(93)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					Array< ::Dynamic > tmp19 = this->keyframes;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					int tmp20 = tmp19->length;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(93)
					int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(93)
					int p_max = tmp21;		HX_STACK_VAR(p_max,"p_max");
					HX_STACK_LINE(93)
					bool tmp22 = (mid <= (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(93)
					Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(93)
					if ((tmp22)){
						HX_STACK_LINE(93)
						tmp23 = (int)0;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp24 = (mid >= p_max);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(93)
						if ((tmp24)){
							HX_STACK_LINE(93)
							tmp23 = p_max;
						}
						else{
							HX_STACK_LINE(93)
							tmp23 = mid;
						}
					}
					HX_STACK_LINE(93)
					tmp18 = ::Std_obj::_int(tmp23);
				}
				HX_STACK_LINE(93)
				i0 = tmp18;
				HX_STACK_LINE(94)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					int tmp20 = (mid + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(94)
					int p_v = tmp20;		HX_STACK_VAR(p_v,"p_v");
					HX_STACK_LINE(94)
					Array< ::Dynamic > tmp21 = this->keyframes;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(94)
					int tmp22 = tmp21->length;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(94)
					int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(94)
					int p_max = tmp23;		HX_STACK_VAR(p_max,"p_max");
					HX_STACK_LINE(94)
					bool tmp24 = (p_v <= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(94)
					Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(94)
					if ((tmp24)){
						HX_STACK_LINE(94)
						tmp25 = (int)0;
					}
					else{
						HX_STACK_LINE(94)
						bool tmp26 = (p_v >= p_max);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(94)
						if ((tmp26)){
							HX_STACK_LINE(94)
							tmp25 = p_max;
						}
						else{
							HX_STACK_LINE(94)
							tmp25 = p_v;
						}
					}
					HX_STACK_LINE(94)
					tmp19 = ::Std_obj::_int(tmp25);
				}
				HX_STACK_LINE(94)
				int i1 = tmp19;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(95)
				Array< ::Dynamic > tmp20 = this->keyframes;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(95)
				int tmp21 = i0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(95)
				::haxor::component::animation::KeyFrame tmp22 = tmp20->__get(tmp21).StaticCast< ::haxor::component::animation::KeyFrame >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(95)
				::haxor::component::animation::KeyFrame k0 = tmp22;		HX_STACK_VAR(k0,"k0");
				HX_STACK_LINE(96)
				Array< ::Dynamic > tmp23 = this->keyframes;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(96)
				int tmp24 = i1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(96)
				::haxor::component::animation::KeyFrame tmp25 = tmp23->__get(tmp24).StaticCast< ::haxor::component::animation::KeyFrame >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(96)
				::haxor::component::animation::KeyFrame k1 = tmp25;		HX_STACK_VAR(k1,"k1");
				HX_STACK_LINE(98)
				bool tmp26 = (p_time < k0->time);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(98)
				if ((tmp26)){
					HX_STACK_LINE(98)
					Float tmp27 = (Float(step) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(98)
					step = ((int)(tmp27));
					HX_STACK_LINE(98)
					hx::SubEq(mid,step);
					HX_STACK_LINE(98)
					continue;
				}
				HX_STACK_LINE(99)
				bool tmp27 = (p_time > k1->time);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(99)
				if ((tmp27)){
					HX_STACK_LINE(99)
					Float tmp28 = (Float(step) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(99)
					step = ((int)(tmp28));
					HX_STACK_LINE(99)
					hx::AddEq(mid,step);
					HX_STACK_LINE(99)
					continue;
				}
				HX_STACK_LINE(101)
				Float tmp28 = (k1->time - k0->time);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(101)
				Float dt = tmp28;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(102)
				bool tmp29 = (dt <= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(102)
				Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(102)
				if ((tmp29)){
					HX_STACK_LINE(102)
					tmp30 = ((Float)0.0);
				}
				else{
					HX_STACK_LINE(102)
					Float tmp31 = (p_time - k0->time);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(102)
					Float tmp32 = dt;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(102)
					tmp30 = (Float(tmp31) / Float(tmp32));
				}
				HX_STACK_LINE(102)
				Float r = tmp30;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(103)
				bool tmp31 = (r <= ((Float)0.0));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(103)
				Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(103)
				if ((tmp31)){
					HX_STACK_LINE(103)
					tmp32 = ((Float)0.0);
				}
				else{
					HX_STACK_LINE(103)
					bool tmp33 = (r >= ((Float)1.0));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(103)
					if ((tmp33)){
						HX_STACK_LINE(103)
						tmp32 = ((Float)1.0);
					}
					else{
						HX_STACK_LINE(103)
						tmp32 = r;
					}
				}
				HX_STACK_LINE(103)
				r = tmp32;
				HX_STACK_LINE(104)
				::haxor::component::animation::KeyFrame tmp33 = k1;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(104)
				Float tmp34 = r;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(104)
				::haxor::component::animation::KeyFrame tmp35 = k0->Blend(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(104)
				::haxor::component::animation::KeyFrame nk = tmp35;		HX_STACK_VAR(nk,"nk");
				HX_STACK_LINE(105)
				bool tmp36 = nk->changed;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(105)
				if ((tmp36)){
					HX_STACK_LINE(107)
					Dynamic tmp37 = this->target;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(107)
					::String tmp38 = this->property;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(107)
					Dynamic tmp39 = ::Reflect_obj::getProperty(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(107)
					Dynamic v = tmp39;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(108)
					Dynamic tmp40 = this->target;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(108)
					::String tmp41 = this->property;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(108)
					Dynamic tmp42 = v;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(108)
					Float tmp43 = p_weight;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(108)
					Dynamic tmp44 = nk->Sample(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(108)
					::Reflect_obj::setProperty(tmp40,tmp41,tmp44);
				}
				HX_STACK_LINE(110)
				break;
			}
		}
		HX_STACK_LINE(112)
		int tmp14 = i0;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(112)
		return tmp14;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ClipTrack_obj,Sample,return )

::haxor::component::animation::ClipTrack ClipTrack_obj::Split( int p_start,int p_end){
	HX_STACK_FRAME("haxor.component.animation.ClipTrack","Split",0xd7da7100,"haxor.component.animation.ClipTrack.Split","haxor/component/animation/ClipTrack.hx",122,0x6f03274d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_start,"p_start")
	HX_STACK_ARG(p_end,"p_end")
	HX_STACK_LINE(123)
	::haxor::component::animation::ClipTrack tmp = ::haxor::component::animation::ClipTrack_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	::haxor::component::animation::ClipTrack nct = tmp;		HX_STACK_VAR(nct,"nct");
	HX_STACK_LINE(124)
	Dynamic tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	nct->target = tmp1;
	HX_STACK_LINE(125)
	::String tmp2 = this->property;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	nct->property = tmp2;
	HX_STACK_LINE(126)
	Float tmp3 = ((Float)(p_start));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	Array< ::Dynamic > tmp4 = this->keyframes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(126)
	int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(126)
	Float tmp7 = ((Float)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(126)
	Float tmp8 = ::Math_obj::min(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(126)
	int i0 = ((int)(tmp8));		HX_STACK_VAR(i0,"i0");
	HX_STACK_LINE(127)
	Float tmp9 = ((Float)(p_end));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(127)
	Array< ::Dynamic > tmp10 = this->keyframes;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(127)
	int tmp11 = tmp10->length;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(127)
	int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(127)
	Float tmp13 = ((Float)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(127)
	Float tmp14 = ::Math_obj::min(tmp9,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(127)
	int i1 = ((int)(tmp14));		HX_STACK_VAR(i1,"i1");
	HX_STACK_LINE(128)
	Array< ::Dynamic > tmp15 = this->keyframes;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(128)
	int tmp16 = i0;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(128)
	::haxor::component::animation::KeyFrame tmp17 = tmp15->__get(tmp16).StaticCast< ::haxor::component::animation::KeyFrame >();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(128)
	::haxor::component::animation::KeyFrame kf = tmp17;		HX_STACK_VAR(kf,"kf");
	HX_STACK_LINE(129)
	bool tmp18 = (kf == null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(129)
	if ((tmp18)){
		HX_STACK_LINE(129)
		::haxor::component::animation::ClipTrack tmp19 = nct;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(129)
		return tmp19;
	}
	HX_STACK_LINE(130)
	Float t0 = kf->time;		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		int _g = i0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp19 = (_g < i1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(131)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(131)
			if ((tmp20)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(131)
			int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(131)
			int i = tmp21;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(133)
			Array< ::Dynamic > tmp22 = this->keyframes;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(133)
			int tmp23 = i;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(133)
			::haxor::component::animation::KeyFrame tmp24 = tmp22->__get(tmp23).StaticCast< ::haxor::component::animation::KeyFrame >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(133)
			kf = tmp24;
			HX_STACK_LINE(134)
			bool tmp25 = (kf != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(134)
			if ((tmp25)){
				HX_STACK_LINE(134)
				Float tmp26 = (kf->time - t0);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(134)
				Dynamic tmp27 = kf->Sample(null(),null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(134)
				nct->Add(tmp26,tmp27);
			}
		}
	}
	HX_STACK_LINE(136)
	::haxor::component::animation::ClipTrack tmp19 = nct;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(136)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC2(ClipTrack_obj,Split,return )

Void ClipTrack_obj::Clear( ){
{
		HX_STACK_FRAME("haxor.component.animation.ClipTrack","Clear",0x9ec6f7b3,"haxor.component.animation.ClipTrack.Clear","haxor/component/animation/ClipTrack.hx",143,0x6f03274d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		this->keyframes = tmp;
		HX_STACK_LINE(145)
		this->m_length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClipTrack_obj,Clear,(void))


ClipTrack_obj::ClipTrack_obj()
{
}

void ClipTrack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClipTrack);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(property,"property");
	HX_MARK_MEMBER_NAME(keyframes,"keyframes");
	HX_MARK_MEMBER_NAME(m_length,"m_length");
	HX_MARK_MEMBER_NAME(m_head,"m_head");
	HX_MARK_END_CLASS();
}

void ClipTrack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(property,"property");
	HX_VISIT_MEMBER_NAME(keyframes,"keyframes");
	HX_VISIT_MEMBER_NAME(m_length,"m_length");
	HX_VISIT_MEMBER_NAME(m_head,"m_head");
}

Dynamic ClipTrack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Split") ) { return Split_dyn(); }
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"m_head") ) { return m_head; }
		if (HX_FIELD_EQ(inName,"Sample") ) { return Sample_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"property") ) { return property; }
		if (HX_FIELD_EQ(inName,"m_length") ) { return m_length; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyframes") ) { return keyframes; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClipTrack_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_head") ) { m_head=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"property") ) { property=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_length") ) { m_length=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyframes") ) { keyframes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ClipTrack_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ClipTrack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("property","\x55","\x48","\x38","\xac"));
	outFields->push(HX_HCSTRING("keyframes","\x85","\xba","\xf8","\x0f"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"));
	outFields->push(HX_HCSTRING("m_head","\x72","\x99","\x02","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ClipTrack_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsString,(int)offsetof(ClipTrack_obj,property),HX_HCSTRING("property","\x55","\x48","\x38","\xac")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ClipTrack_obj,keyframes),HX_HCSTRING("keyframes","\x85","\xba","\xf8","\x0f")},
	{hx::fsFloat,(int)offsetof(ClipTrack_obj,m_length),HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67")},
	{hx::fsInt,(int)offsetof(ClipTrack_obj,m_head),HX_HCSTRING("m_head","\x72","\x99","\x02","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("property","\x55","\x48","\x38","\xac"),
	HX_HCSTRING("keyframes","\x85","\xba","\xf8","\x0f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"),
	HX_HCSTRING("m_head","\x72","\x99","\x02","\x8d"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Sample","\x4a","\xd4","\xde","\x51"),
	HX_HCSTRING("Split","\xba","\x5a","\x9c","\x14"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClipTrack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClipTrack_obj::__mClass,"__mClass");
};

#endif

hx::Class ClipTrack_obj::__mClass;

void ClipTrack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.animation.ClipTrack","\x34","\xde","\x7c","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ClipTrack_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClipTrack_obj >;
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
} // end namespace component
} // end namespace animation
