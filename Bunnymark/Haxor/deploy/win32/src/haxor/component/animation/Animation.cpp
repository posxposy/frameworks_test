#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Animation
#include <haxor/component/animation/Animation.h>
#endif
#ifndef INCLUDED_haxor_component_animation_AnimationClip
#include <haxor/component/animation/AnimationClip.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
namespace haxor{
namespace component{
namespace animation{

Void Animation_obj::__construct()
{
HX_STACK_FRAME("haxor.component.animation.Animation","new",0xefc3230f,"haxor.component.animation.Animation.new","haxor/component/animation/Animation.hx",86,0xcccd1d84)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(87)
	super::__construct(null());
	HX_STACK_LINE(88)
	Array< ::Dynamic > tmp = ::haxor::component::animation::Animation_obj::m_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	tmp->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(89)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	this->clips = tmp1;
	HX_STACK_LINE(90)
	this->m_time = (int)0;
	HX_STACK_LINE(91)
	this->reverse = false;
	HX_STACK_LINE(92)
	Float tmp2 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	this->m_clock = tmp2;
	HX_STACK_LINE(93)
	this->m_fade_elapsed = ((Float)0.0);
	HX_STACK_LINE(94)
	this->m_fade_duration = ((Float)0.0);
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new()
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct();
	return _result_;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct();
	return _result_;}

Float Animation_obj::get_time( ){
	HX_STACK_FRAME("haxor.component.animation.Animation","get_time",0xc6f31a87,"haxor.component.animation.Animation.get_time","haxor/component/animation/Animation.hx",59,0xcccd1d84)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	Float tmp = this->m_time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,get_time,return )

Float Animation_obj::set_time( Float v){
	HX_STACK_FRAME("haxor.component.animation.Animation","set_time",0x755073fb,"haxor.component.animation.Animation.set_time","haxor/component/animation/Animation.hx",61,0xcccd1d84)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(62)
	this->m_time = v;
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		Array< ::Dynamic > tmp = this->clips;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(63)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			if ((tmp2)){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(63)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(63)
			Array< ::Dynamic > tmp4 = this->clips;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			::haxor::component::animation::AnimationClip tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::animation::AnimationClip >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			Float tmp7 = this->m_time;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			tmp6->Sample(tmp7,null());
		}
	}
	HX_STACK_LINE(64)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,set_time,return )

bool Animation_obj::get_playing( ){
	HX_STACK_FRAME("haxor.component.animation.Animation","get_playing",0x0d2a8934,"haxor.component.animation.Animation.get_playing","haxor/component/animation/Animation.hx",72,0xcccd1d84)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		Array< ::Dynamic > tmp = this->clips;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		while((true)){
			HX_STACK_LINE(72)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			if ((tmp2)){
				HX_STACK_LINE(72)
				break;
			}
			HX_STACK_LINE(72)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			Array< ::Dynamic > tmp4 = this->clips;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			::haxor::component::animation::AnimationClip tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::animation::AnimationClip >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			bool tmp7 = tmp6->playing;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			if ((tmp7)){
				HX_STACK_LINE(72)
				return true;
			}
		}
	}
	HX_STACK_LINE(72)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,get_playing,return )

bool Animation_obj::Contains( ::haxor::component::animation::AnimationClip p_clip){
	HX_STACK_FRAME("haxor.component.animation.Animation","Contains",0x0068a930,"haxor.component.animation.Animation.Contains","haxor/component/animation/Animation.hx",103,0xcccd1d84)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_clip,"p_clip")
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		Array< ::Dynamic > tmp = this->clips;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
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
			Array< ::Dynamic > tmp4 = this->clips;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			::haxor::component::animation::AnimationClip tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::animation::AnimationClip >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			::haxor::component::animation::AnimationClip tmp7 = p_clip;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			if ((tmp8)){
				HX_STACK_LINE(104)
				return true;
			}
		}
	}
	HX_STACK_LINE(105)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,Contains,return )

Void Animation_obj::Add( ::haxor::component::animation::AnimationClip p_clip){
{
		HX_STACK_FRAME("haxor.component.animation.Animation","Add",0xefa0fcb0,"haxor.component.animation.Animation.Add","haxor/component/animation/Animation.hx",113,0xcccd1d84)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_clip,"p_clip")
		HX_STACK_LINE(114)
		::haxor::component::animation::AnimationClip tmp = p_clip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = this->Contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		if ((tmp1)){
			HX_STACK_LINE(114)
			return null();
		}
		HX_STACK_LINE(116)
		Array< ::Dynamic > tmp2 = this->clips;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		::haxor::component::animation::AnimationClip tmp3 = p_clip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		tmp2->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,Add,(void))

Void Animation_obj::Remove( ::haxor::component::animation::AnimationClip p_clip){
{
		HX_STACK_FRAME("haxor.component.animation.Animation","Remove",0x00395515,"haxor.component.animation.Animation.Remove","haxor/component/animation/Animation.hx",124,0xcccd1d84)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_clip,"p_clip")
		HX_STACK_LINE(125)
		::haxor::component::animation::AnimationClip tmp = p_clip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = this->Contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		if ((tmp2)){
			HX_STACK_LINE(125)
			return null();
		}
		HX_STACK_LINE(126)
		Array< ::Dynamic > tmp3 = this->clips;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		::haxor::component::animation::AnimationClip tmp4 = p_clip;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		tmp3->remove(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,Remove,(void))

::haxor::component::animation::AnimationClip Animation_obj::Get( ::String p_clip_name){
	HX_STACK_FRAME("haxor.component.animation.Animation","Get",0xefa58b25,"haxor.component.animation.Animation.Get","haxor/component/animation/Animation.hx",135,0xcccd1d84)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_clip_name,"p_clip_name")
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		Array< ::Dynamic > tmp = this->clips;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		while((true)){
			HX_STACK_LINE(136)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			if ((tmp2)){
				HX_STACK_LINE(136)
				break;
			}
			HX_STACK_LINE(136)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(136)
			Array< ::Dynamic > tmp4 = this->clips;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			::haxor::component::animation::AnimationClip tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::animation::AnimationClip >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(136)
			::String tmp7 = tmp6->get_name();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(136)
			::String tmp8 = p_clip_name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(136)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(136)
			if ((tmp9)){
				HX_STACK_LINE(136)
				Array< ::Dynamic > tmp10 = this->clips;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(136)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(136)
				::haxor::component::animation::AnimationClip tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::component::animation::AnimationClip >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(136)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(137)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,Get,return )

Void Animation_obj::Fade( ::haxor::component::animation::AnimationClip p_clip,hx::Null< Float >  __o_p_time,hx::Null< Float >  __o_p_fade){
Float p_time = __o_p_time.Default(((Float)0.0));
Float p_fade = __o_p_fade.Default(((Float)0.0));
	HX_STACK_FRAME("haxor.component.animation.Animation","Fade",0xc087e80d,"haxor.component.animation.Animation.Fade","haxor/component/animation/Animation.hx",147,0xcccd1d84)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_clip,"p_clip")
	HX_STACK_ARG(p_time,"p_time")
	HX_STACK_ARG(p_fade,"p_fade")
{
		HX_STACK_LINE(148)
		::haxor::component::animation::AnimationClip tmp = p_clip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		Float tmp1 = p_time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		this->Play(tmp,tmp1);
		HX_STACK_LINE(149)
		this->m_fade_elapsed = ((Float)0.0);
		HX_STACK_LINE(150)
		this->m_fade_duration = p_fade;
		HX_STACK_LINE(151)
		this->m_fade_clip = p_clip;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,Fade,(void))

Void Animation_obj::Play( ::haxor::component::animation::AnimationClip p_clip,hx::Null< Float >  __o_p_time){
Float p_time = __o_p_time.Default(((Float)0.0));
	HX_STACK_FRAME("haxor.component.animation.Animation","Play",0xc72c6085,"haxor.component.animation.Animation.Play","haxor/component/animation/Animation.hx",161,0xcccd1d84)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_clip,"p_clip")
	HX_STACK_ARG(p_time,"p_time")
{
		HX_STACK_LINE(162)
		::haxor::component::animation::AnimationClip tmp = p_clip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		bool tmp1 = this->Contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		if ((tmp2)){
			HX_STACK_LINE(165)
			return null();
		}
		HX_STACK_LINE(167)
		this->m_time = p_time;
		HX_STACK_LINE(168)
		Float tmp3 = p_time;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		p_clip->Sample(tmp3,null());
		HX_STACK_LINE(169)
		p_clip->playing = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,Play,(void))

Void Animation_obj::Stop( ::haxor::component::animation::AnimationClip p_clip){
{
		HX_STACK_FRAME("haxor.component.animation.Animation","Stop",0xc92e2293,"haxor.component.animation.Animation.Stop","haxor/component/animation/Animation.hx",178,0xcccd1d84)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_clip,"p_clip")
		HX_STACK_LINE(179)
		bool tmp = (p_clip == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		if ((tmp)){
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(179)
				Array< ::Dynamic > tmp1 = this->clips;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(179)
				int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(179)
				while((true)){
					HX_STACK_LINE(179)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(179)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(179)
					if ((tmp3)){
						HX_STACK_LINE(179)
						break;
					}
					HX_STACK_LINE(179)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(179)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(179)
					Array< ::Dynamic > tmp5 = this->clips;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(179)
					int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(179)
					::haxor::component::animation::AnimationClip tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::component::animation::AnimationClip >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(179)
					tmp7->playing = false;
				}
			}
			HX_STACK_LINE(179)
			return null();
		}
		HX_STACK_LINE(180)
		::haxor::component::animation::AnimationClip tmp1 = p_clip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		bool tmp2 = this->Contains(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		if ((tmp3)){
			HX_STACK_LINE(180)
			return null();
		}
		HX_STACK_LINE(181)
		p_clip->playing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,Stop,(void))

Void Animation_obj::Animate( ){
{
		HX_STACK_FRAME("haxor.component.animation.Animation","Animate",0xb93dd8b0,"haxor.component.animation.Animation.Animate","haxor/component/animation/Animation.hx",188,0xcccd1d84)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		bool is_playing = false;		HX_STACK_VAR(is_playing,"is_playing");
		HX_STACK_LINE(191)
		Float tmp = this->m_fade_elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		Float tmp1 = this->m_fade_duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		if ((tmp2)){
			HX_STACK_LINE(191)
			Float tmp3 = this->m_fade_duration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			this->m_fade_elapsed = tmp3;
		}
		HX_STACK_LINE(193)
		Float tmp3 = this->m_fade_duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		bool tmp4 = (tmp3 <= ((Float)0.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(193)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		if ((tmp4)){
			HX_STACK_LINE(193)
			tmp5 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(193)
			Float tmp6 = this->m_fade_elapsed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			Float tmp7 = this->m_fade_duration;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(193)
			tmp5 = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(193)
		Float w = tmp5;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(195)
		::haxor::core::Entity tmp6 = this->m_entity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		tmp6->m_transform->Lock();
		HX_STACK_LINE(198)
		Float spd = ((Float)1.0);		HX_STACK_VAR(spd,"spd");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(200)
			Array< ::Dynamic > tmp7 = this->clips;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(200)
			int _g = tmp7->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(200)
			while((true)){
				HX_STACK_LINE(200)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(200)
				if ((tmp9)){
					HX_STACK_LINE(200)
					break;
				}
				HX_STACK_LINE(200)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(200)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(202)
				Array< ::Dynamic > tmp11 = this->clips;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(202)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(202)
				::haxor::component::animation::AnimationClip tmp13 = tmp11->__get(tmp12).StaticCast< ::haxor::component::animation::AnimationClip >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(202)
				::haxor::component::animation::AnimationClip c = tmp13;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(203)
				bool tmp14 = c->playing;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(203)
				if ((tmp14)){
					HX_STACK_LINE(206)
					Float tmp15 = this->get_time();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(206)
					Float tmp16 = w;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(206)
					c->Sample(tmp15,tmp16);
					HX_STACK_LINE(207)
					spd = c->speed;
					HX_STACK_LINE(208)
					is_playing = true;
				}
			}
		}
		HX_STACK_LINE(212)
		bool tmp7 = (w >= ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		if ((tmp7)){
			HX_STACK_LINE(214)
			this->m_fade_clip = null();
			HX_STACK_LINE(215)
			Float tmp8 = this->m_fade_elapsed = ((Float)0.0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(215)
			this->m_fade_duration = tmp8;
		}
		HX_STACK_LINE(220)
		Float tmp8 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(220)
		Float tmp9 = this->m_clock;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		Float dt = tmp10;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(221)
		Float tmp11 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(221)
		this->m_clock = tmp11;
		HX_STACK_LINE(223)
		bool tmp12 = is_playing;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(223)
		if ((tmp12)){
			HX_STACK_LINE(225)
			bool tmp13 = this->reverse;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(225)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(225)
			if ((tmp13)){
				HX_STACK_LINE(225)
				Float tmp15 = dt;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(225)
				tmp14 = -(tmp15);
			}
			else{
				HX_STACK_LINE(225)
				tmp14 = dt;
			}
			HX_STACK_LINE(225)
			Float tmp15 = spd;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(225)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(225)
			hx::AddEq(this->m_time,tmp16);
			HX_STACK_LINE(226)
			hx::AddEq(this->m_fade_elapsed,dt);
		}
		HX_STACK_LINE(229)
		::haxor::core::Entity tmp13 = this->m_entity;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(229)
		tmp13->m_transform->Unlock(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,Animate,(void))

Array< ::Dynamic > Animation_obj::m_list;

int Animation_obj::m_iterator;

Void Animation_obj::Update( ){
{
		HX_STACK_FRAME("haxor.component.animation.Animation","Update",0x82b63eda,"haxor.component.animation.Animation.Update","haxor/component/animation/Animation.hx",24,0xcccd1d84)
		HX_STACK_LINE(25)
		Array< ::Dynamic > tmp = ::haxor::component::animation::Animation_obj::m_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		if ((tmp2)){
			HX_STACK_LINE(27)
			Array< ::Dynamic > tmp3 = ::haxor::component::animation::Animation_obj::m_list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			Float tmp6 = ::Math_obj::max(tmp5,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(27)
			int steps = tmp7;		HX_STACK_VAR(steps,"steps");
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				while((true)){
					HX_STACK_LINE(28)
					bool tmp8 = (_g < steps);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(28)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(28)
					if ((tmp9)){
						HX_STACK_LINE(28)
						break;
					}
					HX_STACK_LINE(28)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(28)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(30)
					Array< ::Dynamic > tmp11 = ::haxor::component::animation::Animation_obj::m_list;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(30)
					int tmp12 = ::haxor::component::animation::Animation_obj::m_iterator;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(30)
					::haxor::component::animation::Animation tmp13 = tmp11->__get(tmp12).StaticCast< ::haxor::component::animation::Animation >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(30)
					tmp13->Animate();
					HX_STACK_LINE(31)
					int tmp14 = ::haxor::component::animation::Animation_obj::m_iterator;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(31)
					int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(31)
					Array< ::Dynamic > tmp16 = ::haxor::component::animation::Animation_obj::m_list;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(31)
					int tmp17 = tmp16->length;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(31)
					int tmp18 = hx::Mod(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(31)
					::haxor::component::animation::Animation_obj::m_iterator = tmp18;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,Update,(void))

Void Animation_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.component.animation.Animation","Initialize",0x91e726a1,"haxor.component.animation.Animation.Initialize","haxor/component/animation/Animation.hx",40,0xcccd1d84)
		HX_STACK_LINE(41)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::haxor::component::animation::Animation_obj::m_list = tmp;
		HX_STACK_LINE(42)
		::haxor::component::animation::Animation_obj::m_iterator = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,Initialize,(void))


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(clips,"clips");
	HX_MARK_MEMBER_NAME(m_clock,"m_clock");
	HX_MARK_MEMBER_NAME(m_time,"m_time");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(m_fade_elapsed,"m_fade_elapsed");
	HX_MARK_MEMBER_NAME(m_fade_duration,"m_fade_duration");
	HX_MARK_MEMBER_NAME(m_fade_clip,"m_fade_clip");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clips,"clips");
	HX_VISIT_MEMBER_NAME(m_clock,"m_clock");
	HX_VISIT_MEMBER_NAME(m_time,"m_time");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(m_fade_elapsed,"m_fade_elapsed");
	HX_VISIT_MEMBER_NAME(m_fade_duration,"m_fade_duration");
	HX_VISIT_MEMBER_NAME(m_fade_clip,"m_fade_clip");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == hx::paccAlways) return get_time(); }
		if (HX_FIELD_EQ(inName,"Fade") ) { return Fade_dyn(); }
		if (HX_FIELD_EQ(inName,"Play") ) { return Play_dyn(); }
		if (HX_FIELD_EQ(inName,"Stop") ) { return Stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clips") ) { return clips; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_time") ) { return m_time; }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_clock") ) { return m_clock; }
		if (HX_FIELD_EQ(inName,"playing") ) { if (inCallProp == hx::paccAlways) return get_playing(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse; }
		if (HX_FIELD_EQ(inName,"Animate") ) { return Animate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_time") ) { return get_time_dyn(); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return set_time_dyn(); }
		if (HX_FIELD_EQ(inName,"Contains") ) { return Contains_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_playing") ) { return get_playing_dyn(); }
		if (HX_FIELD_EQ(inName,"m_fade_clip") ) { return m_fade_clip; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_fade_elapsed") ) { return m_fade_elapsed; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_fade_duration") ) { return m_fade_duration; }
	}
	return super::__Field(inName,inCallProp);
}

bool Animation_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { outValue = m_list; return true;  }
		if (HX_FIELD_EQ(inName,"Update") ) { outValue = Update_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_iterator") ) { outValue = m_iterator; return true;  }
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
	}
	return false;
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == hx::paccAlways) return set_time(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clips") ) { clips=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_time") ) { m_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_clock") ) { m_clock=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_fade_clip") ) { m_fade_clip=inValue.Cast< ::haxor::component::animation::AnimationClip >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_fade_elapsed") ) { m_fade_elapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_fade_duration") ) { m_fade_duration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Animation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { m_list=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_iterator") ) { m_iterator=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clips","\xa3","\x87","\x5e","\x48"));
	outFields->push(HX_HCSTRING("m_clock","\x3c","\xe1","\xed","\xf8"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("m_time","\x5f","\x3c","\xf4","\x94"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"));
	outFields->push(HX_HCSTRING("m_fade_elapsed","\x8b","\x95","\x95","\x17"));
	outFields->push(HX_HCSTRING("m_fade_duration","\x25","\xb7","\x16","\xf2"));
	outFields->push(HX_HCSTRING("m_fade_clip","\x21","\x9a","\xe4","\x87"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Animation_obj,clips),HX_HCSTRING("clips","\xa3","\x87","\x5e","\x48")},
	{hx::fsFloat,(int)offsetof(Animation_obj,m_clock),HX_HCSTRING("m_clock","\x3c","\xe1","\xed","\xf8")},
	{hx::fsFloat,(int)offsetof(Animation_obj,m_time),HX_HCSTRING("m_time","\x5f","\x3c","\xf4","\x94")},
	{hx::fsBool,(int)offsetof(Animation_obj,reverse),HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a")},
	{hx::fsFloat,(int)offsetof(Animation_obj,m_fade_elapsed),HX_HCSTRING("m_fade_elapsed","\x8b","\x95","\x95","\x17")},
	{hx::fsFloat,(int)offsetof(Animation_obj,m_fade_duration),HX_HCSTRING("m_fade_duration","\x25","\xb7","\x16","\xf2")},
	{hx::fsObject /*::haxor::component::animation::AnimationClip*/ ,(int)offsetof(Animation_obj,m_fade_clip),HX_HCSTRING("m_fade_clip","\x21","\x9a","\xe4","\x87")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Animation_obj::m_list,HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f")},
	{hx::fsInt,(void *) &Animation_obj::m_iterator,HX_HCSTRING("m_iterator","\x40","\x4b","\xe5","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clips","\xa3","\x87","\x5e","\x48"),
	HX_HCSTRING("m_clock","\x3c","\xe1","\xed","\xf8"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("set_time","\x0a","\xe1","\x14","\x7b"),
	HX_HCSTRING("m_time","\x5f","\x3c","\xf4","\x94"),
	HX_HCSTRING("get_playing","\x85","\x6f","\x12","\x10"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("m_fade_elapsed","\x8b","\x95","\x95","\x17"),
	HX_HCSTRING("m_fade_duration","\x25","\xb7","\x16","\xf2"),
	HX_HCSTRING("m_fade_clip","\x21","\x9a","\xe4","\x87"),
	HX_HCSTRING("Contains","\x3f","\x16","\x2d","\x06"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Fade","\x9c","\xe1","\x8e","\x2e"),
	HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"),
	HX_HCSTRING("Stop","\x22","\x1c","\x35","\x37"),
	HX_HCSTRING("Animate","\x81","\x02","\x9e","\x47"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Animation_obj::m_list,"m_list");
	HX_MARK_MEMBER_NAME(Animation_obj::m_iterator,"m_iterator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Animation_obj::m_list,"m_list");
	HX_VISIT_MEMBER_NAME(Animation_obj::m_iterator,"m_iterator");
};

#endif

hx::Class Animation_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f"),
	HX_HCSTRING("m_iterator","\x40","\x4b","\xe5","\xba"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	String(null()) };

void Animation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.animation.Animation","\x9d","\xef","\x7a","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Animation_obj::__GetStatic;
	__mClass->mSetStaticField = &Animation_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
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
