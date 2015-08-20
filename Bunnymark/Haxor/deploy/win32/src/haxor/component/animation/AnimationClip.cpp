#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_component_animation_AnimationClip
#include <haxor/component/animation/AnimationClip.h>
#endif
#ifndef INCLUDED_haxor_component_animation_AnimationEvent
#include <haxor/component/animation/AnimationEvent.h>
#endif
#ifndef INCLUDED_haxor_component_animation_ClipTrack
#include <haxor/component/animation/ClipTrack.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_math_Mathf
#include <haxor/math/Mathf.h>
#endif
namespace haxor{
namespace component{
namespace animation{

Void AnimationClip_obj::__construct()
{
HX_STACK_FRAME("haxor.component.animation.AnimationClip","new",0x44e6c87f,"haxor.component.animation.AnimationClip.new","haxor/component/animation/AnimationClip.hx",48,0x00dcd394)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(49)
	super::__construct(null());
	HX_STACK_LINE(50)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	this->tracks = tmp;
	HX_STACK_LINE(51)
	this->speed = ((Float)1.0);
	HX_STACK_LINE(52)
	this->playing = false;
	HX_STACK_LINE(53)
	this->m_length = (int)0;
	HX_STACK_LINE(54)
	this->wrap = (int)0;
	HX_STACK_LINE(55)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	this->m_events = tmp1;
	HX_STACK_LINE(56)
	this->m_last_frame = (int)0;
}
;
	return null();
}

//AnimationClip_obj::~AnimationClip_obj() { }

Dynamic AnimationClip_obj::__CreateEmpty() { return  new AnimationClip_obj; }
hx::ObjectPtr< AnimationClip_obj > AnimationClip_obj::__new()
{  hx::ObjectPtr< AnimationClip_obj > _result_ = new AnimationClip_obj();
	_result_->__construct();
	return _result_;}

Dynamic AnimationClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationClip_obj > _result_ = new AnimationClip_obj();
	_result_->__construct();
	return _result_;}

Float AnimationClip_obj::get_length( ){
	HX_STACK_FRAME("haxor.component.animation.AnimationClip","get_length",0xace6de70,"haxor.component.animation.AnimationClip.get_length","haxor/component/animation/AnimationClip.hx",38,0x00dcd394)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	Float tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,get_length,return )

Void AnimationClip_obj::AddEvent( int p_frame,Dynamic p_listener,hx::Null< int >  __o_p_repeat,Dynamic p_args){
int p_repeat = __o_p_repeat.Default(0);
	HX_STACK_FRAME("haxor.component.animation.AnimationClip","AddEvent",0x998de1da,"haxor.component.animation.AnimationClip.AddEvent","haxor/component/animation/AnimationClip.hx",68,0x00dcd394)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_frame,"p_frame")
	HX_STACK_ARG(p_listener,"p_listener")
	HX_STACK_ARG(p_repeat,"p_repeat")
	HX_STACK_ARG(p_args,"p_args")
{
		HX_STACK_LINE(69)
		::haxor::component::animation::AnimationEvent tmp = ::haxor::component::animation::AnimationEvent_obj::__new(p_frame,p_listener,p_repeat,p_args);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::haxor::component::animation::AnimationEvent e = tmp;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(70)
		Array< ::Dynamic > tmp1 = this->m_events;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::haxor::component::animation::AnimationEvent tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		tmp1->push(tmp2);
		HX_STACK_LINE(71)
		Array< ::Dynamic > tmp3 = this->m_events;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::haxor::component::animation::AnimationEvent a,::haxor::component::animation::AnimationEvent b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/component/animation/AnimationClip.hx",72,0x00dcd394)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(73)
				bool tmp4 = (a->frame < b->frame);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				if ((tmp4)){
					HX_STACK_LINE(73)
					tmp5 = (int)-1;
				}
				else{
					HX_STACK_LINE(73)
					tmp5 = (int)1;
				}
				HX_STACK_LINE(73)
				return tmp5;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(71)
		tmp3->sort( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AnimationClip_obj,AddEvent,(void))

Void AnimationClip_obj::RemoveEvent( hx::Null< int >  __o_p_frame){
int p_frame = __o_p_frame.Default(-1);
	HX_STACK_FRAME("haxor.component.animation.AnimationClip","RemoveEvent",0xe7b1ec35,"haxor.component.animation.AnimationClip.RemoveEvent","haxor/component/animation/AnimationClip.hx",82,0x00dcd394)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_frame,"p_frame")
{
		HX_STACK_LINE(83)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(84)
			Array< ::Dynamic > tmp1 = this->m_events;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			if ((tmp4)){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(86)
			Array< ::Dynamic > tmp5 = this->m_events;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(86)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			::haxor::component::animation::AnimationEvent tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::component::animation::AnimationEvent >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			int tmp8 = tmp7->frame;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			int tmp9 = p_frame;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(86)
			if ((tmp11)){
				HX_STACK_LINE(86)
				tmp12 = (p_frame < (int)0);
			}
			else{
				HX_STACK_LINE(86)
				tmp12 = true;
			}
			HX_STACK_LINE(86)
			if ((tmp12)){
				HX_STACK_LINE(86)
				Array< ::Dynamic > tmp13 = this->m_events;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(86)
				Array< ::Dynamic > tmp14 = this->m_events;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(86)
				int tmp15 = (i)--;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(86)
				::haxor::component::animation::AnimationEvent tmp16 = tmp14->__get(tmp15).StaticCast< ::haxor::component::animation::AnimationEvent >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(86)
				tmp13->remove(tmp16);
			}
			HX_STACK_LINE(87)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,RemoveEvent,(void))

::haxor::component::animation::ClipTrack AnimationClip_obj::Add( Dynamic p_target,::String p_property){
	HX_STACK_FRAME("haxor.component.animation.AnimationClip","Add",0x44c4a220,"haxor.component.animation.AnimationClip.Add","haxor/component/animation/AnimationClip.hx",98,0x00dcd394)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_target,"p_target")
	HX_STACK_ARG(p_property,"p_property")
	HX_STACK_LINE(99)
	::haxor::component::animation::ClipTrack tmp = ::haxor::component::animation::ClipTrack_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::haxor::component::animation::ClipTrack ct = tmp;		HX_STACK_VAR(ct,"ct");
	HX_STACK_LINE(100)
	ct->target = p_target;
	HX_STACK_LINE(101)
	ct->property = p_property;
	HX_STACK_LINE(102)
	Array< ::Dynamic > tmp1 = this->tracks;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::haxor::component::animation::ClipTrack tmp2 = ct;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	tmp1->push(tmp2);
	HX_STACK_LINE(103)
	this->UpdateLength();
	HX_STACK_LINE(104)
	::haxor::component::animation::ClipTrack tmp3 = ct;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_obj,Add,return )

Void AnimationClip_obj::Remove( Dynamic p_target,::String __o_p_property){
::String p_property = __o_p_property.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.component.animation.AnimationClip","Remove",0x9d32b5a5,"haxor.component.animation.AnimationClip.Remove","haxor/component/animation/AnimationClip.hx",113,0x00dcd394)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_target,"p_target")
	HX_STACK_ARG(p_property,"p_property")
{
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(114)
			Array< ::Dynamic > tmp = this->tracks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(114)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(114)
			while((true)){
				HX_STACK_LINE(114)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(114)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(114)
				if ((tmp2)){
					HX_STACK_LINE(114)
					break;
				}
				HX_STACK_LINE(114)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(114)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(116)
				Array< ::Dynamic > tmp4 = this->tracks;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(116)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(116)
				::haxor::component::animation::ClipTrack tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::animation::ClipTrack >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(116)
				Dynamic tmp7 = tmp6->target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(116)
				Dynamic tmp8 = p_target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(116)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(116)
				if ((tmp9)){
					HX_STACK_LINE(118)
					bool tmp10 = (p_property == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(118)
					if ((tmp10)){
						HX_STACK_LINE(118)
						Array< ::Dynamic > tmp11 = this->tracks;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(118)
						Array< ::Dynamic > tmp12 = this->tracks;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(118)
						int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(118)
						::haxor::component::animation::ClipTrack tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::component::animation::ClipTrack >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(118)
						tmp11->remove(tmp14);
					}
					else{
						HX_STACK_LINE(120)
						bool tmp11 = (p_property == p_property);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(120)
						if ((tmp11)){
							HX_STACK_LINE(120)
							Array< ::Dynamic > tmp12 = this->tracks;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(120)
							Array< ::Dynamic > tmp13 = this->tracks;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(120)
							int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(120)
							::haxor::component::animation::ClipTrack tmp15 = tmp13->__get(tmp14).StaticCast< ::haxor::component::animation::ClipTrack >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(120)
							tmp12->remove(tmp15);
						}
					}
				}
			}
		}
		HX_STACK_LINE(123)
		this->UpdateLength();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_obj,Remove,(void))

Void AnimationClip_obj::Sample( Float p_time,hx::Null< Float >  __o_p_weight){
Float p_weight = __o_p_weight.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.component.animation.AnimationClip","Sample",0xb5f4798b,"haxor.component.animation.AnimationClip.Sample","haxor/component/animation/AnimationClip.hx",132,0x00dcd394)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_time,"p_time")
	HX_STACK_ARG(p_weight,"p_weight")
{
		HX_STACK_LINE(133)
		bool tmp = this->playing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		if ((tmp1)){
			HX_STACK_LINE(133)
			return null();
		}
		HX_STACK_LINE(135)
		Float tmp2 = this->speed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		Float tmp3 = ::Math_obj::max((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		Float spd = tmp3;		HX_STACK_VAR(spd,"spd");
		HX_STACK_LINE(136)
		Float t = p_time;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int tmp4 = this->wrap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			switch( (int)(tmp5)){
				case (int)0: {
					HX_STACK_LINE(139)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(139)
					{
						HX_STACK_LINE(139)
						Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(139)
						Float tmp8 = ::Math_obj::max(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(139)
						Float a = tmp8;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(139)
						Float tmp9 = this->get_length();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(139)
						Float b = tmp9;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(139)
						Float tmp10 = a;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(139)
						Float tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(139)
						tmp6 = ::Math_obj::min(tmp10,tmp11);
					}
					HX_STACK_LINE(139)
					t = tmp6;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(140)
					Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(140)
					Float tmp7 = this->get_length();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					Float tmp8 = ::haxor::math::Mathf_obj::Loop(tmp6,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(140)
					t = tmp8;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(141)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(141)
					{
						HX_STACK_LINE(141)
						Float tmp7 = this->get_length();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(141)
						Float p_v1 = tmp7;		HX_STACK_VAR(p_v1,"p_v1");
						HX_STACK_LINE(141)
						Float tmp8 = p_v1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(141)
						Float tmp9 = ::Math_obj::min((int)0,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(141)
						Float vv0 = tmp9;		HX_STACK_VAR(vv0,"vv0");
						HX_STACK_LINE(141)
						Float tmp10 = p_v1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(141)
						Float tmp11 = ::Math_obj::max((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(141)
						Float vv1 = tmp11;		HX_STACK_VAR(vv1,"vv1");
						HX_STACK_LINE(141)
						Float tmp12 = (vv1 - vv0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(141)
						Float dv = tmp12;		HX_STACK_VAR(dv,"dv");
						HX_STACK_LINE(141)
						bool tmp13 = (dv <= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(141)
						if ((tmp13)){
							HX_STACK_LINE(141)
							tmp6 = vv0;
						}
						else{
							HX_STACK_LINE(141)
							Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(141)
							Float tmp15 = dv;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(141)
							Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(141)
							Float n = tmp16;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(141)
							Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(141)
							{
								HX_STACK_LINE(141)
								Float tmp18 = (n - ((Float)1.0));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(141)
								Float tmp19 = ::haxor::math::Mathf_obj::Loop(tmp18,((Float)-1.0),((Float)1.0));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(141)
								Float p_a = tmp19;		HX_STACK_VAR(p_a,"p_a");
								HX_STACK_LINE(141)
								bool tmp20 = (p_a < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(141)
								if ((tmp20)){
									HX_STACK_LINE(141)
									Float tmp21 = p_a;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(141)
									tmp17 = -(tmp21);
								}
								else{
									HX_STACK_LINE(141)
									tmp17 = p_a;
								}
							}
							HX_STACK_LINE(141)
							Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(141)
							Float tmp19 = (tmp18 + ((Float)1.0));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(141)
							Float r = tmp19;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(141)
							Float tmp20 = p_v1;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(141)
							Float tmp21 = r;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(141)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(141)
							tmp6 = tmp22;
						}
					}
					HX_STACK_LINE(141)
					t = tmp6;
				}
				;break;
			}
		}
		HX_STACK_LINE(144)
		int frame = (int)-1;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(145)
			Array< ::Dynamic > tmp4 = this->tracks;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			int _g = tmp4->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(145)
			while((true)){
				HX_STACK_LINE(145)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(145)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(145)
				if ((tmp6)){
					HX_STACK_LINE(145)
					break;
				}
				HX_STACK_LINE(145)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(145)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(147)
				Array< ::Dynamic > tmp8 = this->tracks;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				::haxor::component::animation::ClipTrack tmp10 = tmp8->__get(tmp9).StaticCast< ::haxor::component::animation::ClipTrack >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(147)
				Float tmp12 = p_weight;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(147)
				int tmp13 = tmp10->Sample(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(147)
				frame = tmp13;
			}
		}
		HX_STACK_LINE(150)
		bool tmp4 = (frame >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		if ((tmp4)){
			HX_STACK_LINE(152)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(153)
			int tmp5 = this->m_last_frame;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			int tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			if ((tmp7)){
				HX_STACK_LINE(155)
				while((true)){
					HX_STACK_LINE(155)
					int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(155)
					Array< ::Dynamic > tmp9 = this->m_events;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(155)
					int tmp10 = tmp9->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(155)
					bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(155)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(155)
					if ((tmp12)){
						HX_STACK_LINE(155)
						break;
					}
					HX_STACK_LINE(157)
					Array< ::Dynamic > tmp13 = this->m_events;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(157)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(157)
					::haxor::component::animation::AnimationEvent tmp15 = tmp13->__get(tmp14).StaticCast< ::haxor::component::animation::AnimationEvent >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(157)
					::haxor::component::animation::AnimationEvent ev = tmp15;		HX_STACK_VAR(ev,"ev");
					HX_STACK_LINE(158)
					int ef = ev->frame;		HX_STACK_VAR(ef,"ef");
					HX_STACK_LINE(159)
					int tmp16 = ef;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(159)
					int tmp17 = this->m_last_frame;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(159)
					bool tmp18 = (tmp16 >= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(159)
					if ((tmp18)){
						HX_STACK_LINE(160)
						bool tmp19 = (ef <= frame);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(160)
						if ((tmp19)){
							HX_STACK_LINE(162)
							bool tmp20 = ev->Dispatch();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(162)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(162)
							if ((tmp21)){
								HX_STACK_LINE(164)
								Array< ::Dynamic > tmp22 = this->m_events;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(164)
								::haxor::component::animation::AnimationEvent tmp23 = ev;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(164)
								tmp22->remove(tmp23);
								HX_STACK_LINE(164)
								(i)--;
							}
						}
					}
					HX_STACK_LINE(167)
					(i)++;
				}
				HX_STACK_LINE(169)
				this->m_last_frame = frame;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_obj,Sample,(void))

::haxor::component::animation::AnimationClip AnimationClip_obj::Split( int p_start,int p_end){
	HX_STACK_FRAME("haxor.component.animation.AnimationClip","Split",0xddf4d899,"haxor.component.animation.AnimationClip.Split","haxor/component/animation/AnimationClip.hx",182,0x00dcd394)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_start,"p_start")
	HX_STACK_ARG(p_end,"p_end")
	HX_STACK_LINE(183)
	::haxor::component::animation::AnimationClip tmp = ::haxor::component::animation::AnimationClip_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	::haxor::component::animation::AnimationClip nc = tmp;		HX_STACK_VAR(nc,"nc");
	HX_STACK_LINE(184)
	Float tmp1 = this->speed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	nc->speed = tmp1;
	HX_STACK_LINE(185)
	int tmp2 = this->wrap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	nc->wrap = tmp2;
	HX_STACK_LINE(186)
	bool tmp3 = this->playing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(186)
	nc->playing = tmp3;
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(188)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		Array< ::Dynamic > tmp4 = this->tracks;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		int _g = tmp4->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		while((true)){
			HX_STACK_LINE(188)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(188)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(188)
			if ((tmp6)){
				HX_STACK_LINE(188)
				break;
			}
			HX_STACK_LINE(188)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(188)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(190)
			Array< ::Dynamic > tmp8 = this->tracks;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(190)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(190)
			::haxor::component::animation::ClipTrack tmp10 = tmp8->__get(tmp9).StaticCast< ::haxor::component::animation::ClipTrack >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(190)
			::haxor::component::animation::ClipTrack ct = tmp10;		HX_STACK_VAR(ct,"ct");
			HX_STACK_LINE(191)
			int tmp11 = p_start;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			int tmp12 = p_end;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			::haxor::component::animation::ClipTrack tmp13 = ct->Split(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			::haxor::component::animation::ClipTrack nct = tmp13;		HX_STACK_VAR(nct,"nct");
			HX_STACK_LINE(192)
			::haxor::component::animation::ClipTrack tmp14 = nct;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(192)
			nc->tracks->push(tmp14);
		}
	}
	HX_STACK_LINE(194)
	nc->UpdateLength();
	HX_STACK_LINE(195)
	::haxor::component::animation::AnimationClip tmp4 = nc;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(195)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_obj,Split,return )

Void AnimationClip_obj::UpdateLength( ){
{
		HX_STACK_FRAME("haxor.component.animation.AnimationClip","UpdateLength",0x6d3013f0,"haxor.component.animation.AnimationClip.UpdateLength","haxor/component/animation/AnimationClip.hx",199,0x00dcd394)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		this->m_length = (int)0;
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			Array< ::Dynamic > tmp = this->tracks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(201)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(201)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(201)
				if ((tmp2)){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(201)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(201)
				Array< ::Dynamic > tmp4 = this->tracks;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(201)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				::haxor::component::animation::ClipTrack tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::animation::ClipTrack >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				Float tmp7 = tmp6->get_length();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				Float tmp8 = this->m_length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(201)
				Float tmp9 = ::Math_obj::max(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(201)
				this->m_length = tmp9;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,UpdateLength,(void))


AnimationClip_obj::AnimationClip_obj()
{
}

void AnimationClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationClip);
	HX_MARK_MEMBER_NAME(tracks,"tracks");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(m_length,"m_length");
	HX_MARK_MEMBER_NAME(m_events,"m_events");
	HX_MARK_MEMBER_NAME(m_last_frame,"m_last_frame");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimationClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tracks,"tracks");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(m_length,"m_length");
	HX_VISIT_MEMBER_NAME(m_events,"m_events");
	HX_VISIT_MEMBER_NAME(m_last_frame,"m_last_frame");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AnimationClip_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"Split") ) { return Split_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tracks") ) { return tracks; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		if (HX_FIELD_EQ(inName,"Sample") ) { return Sample_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_length") ) { return m_length; }
		if (HX_FIELD_EQ(inName,"m_events") ) { return m_events; }
		if (HX_FIELD_EQ(inName,"AddEvent") ) { return AddEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RemoveEvent") ) { return RemoveEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_last_frame") ) { return m_last_frame; }
		if (HX_FIELD_EQ(inName,"UpdateLength") ) { return UpdateLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tracks") ) { tracks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_length") ) { m_length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_events") ) { m_events=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_last_frame") ) { m_last_frame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AnimationClip_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AnimationClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tracks","\x88","\x2b","\x7d","\x45"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"));
	outFields->push(HX_HCSTRING("m_events","\xeb","\xf7","\x5b","\x5f"));
	outFields->push(HX_HCSTRING("m_last_frame","\x16","\xa8","\xbc","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AnimationClip_obj,tracks),HX_HCSTRING("tracks","\x88","\x2b","\x7d","\x45")},
	{hx::fsFloat,(int)offsetof(AnimationClip_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsBool,(int)offsetof(AnimationClip_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsInt,(int)offsetof(AnimationClip_obj,wrap),HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e")},
	{hx::fsFloat,(int)offsetof(AnimationClip_obj,m_length),HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AnimationClip_obj,m_events),HX_HCSTRING("m_events","\xeb","\xf7","\x5b","\x5f")},
	{hx::fsInt,(int)offsetof(AnimationClip_obj,m_last_frame),HX_HCSTRING("m_last_frame","\x16","\xa8","\xbc","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tracks","\x88","\x2b","\x7d","\x45"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"),
	HX_HCSTRING("m_events","\xeb","\xf7","\x5b","\x5f"),
	HX_HCSTRING("m_last_frame","\x16","\xa8","\xbc","\x69"),
	HX_HCSTRING("AddEvent","\x59","\xaa","\xd3","\xc8"),
	HX_HCSTRING("RemoveEvent","\x16","\x3d","\x2b","\x58"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Sample","\x4a","\xd4","\xde","\x51"),
	HX_HCSTRING("Split","\xba","\x5a","\x9c","\x14"),
	HX_HCSTRING("UpdateLength","\xef","\x87","\xdd","\x66"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationClip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimationClip_obj::__mClass;

void AnimationClip_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.animation.AnimationClip","\x0d","\x1d","\xa3","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AnimationClip_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationClip_obj >;
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
