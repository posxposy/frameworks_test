#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_QuaternionKeyFrame
#include <haxor/component/animation/QuaternionKeyFrame.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
namespace haxor{
namespace component{
namespace animation{

Void QuaternionKeyFrame_obj::__construct()
{
HX_STACK_FRAME("haxor.component.animation.QuaternionKeyFrame","new",0xa6874005,"haxor.component.animation.QuaternionKeyFrame.new","haxor/component/animation/KeyFrame.hx",155,0xae9e4966)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(155)
	super::__construct();
	HX_STACK_LINE(155)
	::haxor::math::Quaternion tmp = ::haxor::math::Quaternion_obj::__new((int)0,(int)0,(int)0,((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	this->value = tmp;
}
;
	return null();
}

//QuaternionKeyFrame_obj::~QuaternionKeyFrame_obj() { }

Dynamic QuaternionKeyFrame_obj::__CreateEmpty() { return  new QuaternionKeyFrame_obj; }
hx::ObjectPtr< QuaternionKeyFrame_obj > QuaternionKeyFrame_obj::__new()
{  hx::ObjectPtr< QuaternionKeyFrame_obj > _result_ = new QuaternionKeyFrame_obj();
	_result_->__construct();
	return _result_;}

Dynamic QuaternionKeyFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuaternionKeyFrame_obj > _result_ = new QuaternionKeyFrame_obj();
	_result_->__construct();
	return _result_;}

::haxor::component::animation::KeyFrame QuaternionKeyFrame_obj::Blend( ::haxor::component::animation::KeyFrame b,Float r){
	HX_STACK_FRAME("haxor.component.animation.QuaternionKeyFrame","Blend",0x75ccbb16,"haxor.component.animation.QuaternionKeyFrame.Blend","haxor/component/animation/KeyFrame.hx",164,0xae9e4966)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(165)
	this->changed = true;
	HX_STACK_LINE(166)
	::haxor::component::animation::QuaternionKeyFrame ka = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(ka,"ka");
	HX_STACK_LINE(167)
	::haxor::component::animation::QuaternionKeyFrame kb = ((::haxor::component::animation::QuaternionKeyFrame)(b));		HX_STACK_VAR(kb,"kb");
	HX_STACK_LINE(168)
	::haxor::math::Quaternion va = ka->value;		HX_STACK_VAR(va,"va");
	HX_STACK_LINE(169)
	::haxor::math::Quaternion vb = kb->value;		HX_STACK_VAR(vb,"vb");
	HX_STACK_LINE(170)
	Float tmp = (va->x - vb->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	bool tmp2 = (tmp1 < ((Float)0.0001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	if ((tmp2)){
		HX_STACK_LINE(171)
		Float tmp3 = (va->y - vb->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		bool tmp5 = (tmp4 < ((Float)0.0001));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		if ((tmp5)){
			HX_STACK_LINE(172)
			Float tmp6 = (va->z - vb->z);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			bool tmp8 = (tmp7 < ((Float)0.0001));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			if ((tmp8)){
				HX_STACK_LINE(173)
				Float tmp9 = (va->w - vb->w);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(173)
				bool tmp11 = (tmp10 < ((Float)0.0001));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(173)
				if ((tmp11)){
					HX_STACK_LINE(173)
					::haxor::component::animation::QuaternionKeyFrame tmp12 = ka;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(173)
					return tmp12;
				}
			}
		}
	}
	HX_STACK_LINE(174)
	::haxor::component::animation::QuaternionKeyFrame tmp3 = ::haxor::component::animation::QuaternionKeyFrame_obj::m_temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	::haxor::component::animation::QuaternionKeyFrame k = tmp3;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(175)
	::haxor::math::Quaternion tmp4 = va;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(175)
	::haxor::math::Quaternion tmp5 = vb;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(175)
	Float tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(175)
	::haxor::math::Quaternion tmp7 = k->value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(175)
	::haxor::math::Quaternion tmp8 = ::haxor::math::Quaternion_obj::Lerp(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(175)
	k->value = tmp8;
	HX_STACK_LINE(177)
	k->changed = true;
	HX_STACK_LINE(178)
	::haxor::component::animation::QuaternionKeyFrame tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(178)
	return tmp9;
}


Dynamic QuaternionKeyFrame_obj::Sample( Dynamic v,hx::Null< Float >  __o_w){
Float w = __o_w.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.component.animation.QuaternionKeyFrame","Sample",0x194af9c5,"haxor.component.animation.QuaternionKeyFrame.Sample","haxor/component/animation/KeyFrame.hx",187,0xae9e4966)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(w,"w")
{
		HX_STACK_LINE(187)
		bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp)){
			HX_STACK_LINE(187)
			tmp1 = this->value;
		}
		else{
			HX_STACK_LINE(187)
			Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			::haxor::math::Quaternion tmp3 = this->value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			::haxor::math::Quaternion tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			{
				HX_STACK_LINE(187)
				::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(187)
				::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(187)
				Array< ::Dynamic > tmp7 = _this->m_q;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(187)
				int tmp8 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(187)
				int tmp9 = _this->m_q->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(187)
				int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				int tmp11 = _this->m_nq = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Quaternion >();
			}
			HX_STACK_LINE(187)
			tmp1 = ::haxor::math::Quaternion_obj::Lerp(tmp2,tmp3,tmp4,tmp5);
		}
		HX_STACK_LINE(187)
		return tmp1;
	}
}


::haxor::component::animation::QuaternionKeyFrame QuaternionKeyFrame_obj::m_temp;


QuaternionKeyFrame_obj::QuaternionKeyFrame_obj()
{
}

void QuaternionKeyFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuaternionKeyFrame);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void QuaternionKeyFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic QuaternionKeyFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"Blend") ) { return Blend_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Sample") ) { return Sample_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool QuaternionKeyFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_temp") ) { outValue = m_temp; return true;  }
	}
	return false;
}

Dynamic QuaternionKeyFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool QuaternionKeyFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_temp") ) { m_temp=ioValue.Cast< ::haxor::component::animation::QuaternionKeyFrame >(); return true; }
	}
	return false;
}

void QuaternionKeyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(QuaternionKeyFrame_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::component::animation::QuaternionKeyFrame*/ ,(void *) &QuaternionKeyFrame_obj::m_temp,HX_HCSTRING("m_temp","\x66","\x33","\xf1","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("Blend","\x31","\x58","\x22","\x48"),
	HX_HCSTRING("Sample","\x4a","\xd4","\xde","\x51"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuaternionKeyFrame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(QuaternionKeyFrame_obj::m_temp,"m_temp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuaternionKeyFrame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(QuaternionKeyFrame_obj::m_temp,"m_temp");
};

#endif

hx::Class QuaternionKeyFrame_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_temp","\x66","\x33","\xf1","\x94"),
	String(null()) };

void QuaternionKeyFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.animation.QuaternionKeyFrame","\x93","\xd9","\x83","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &QuaternionKeyFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &QuaternionKeyFrame_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuaternionKeyFrame_obj >;
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

void QuaternionKeyFrame_obj::__boot()
{
	m_temp= ::haxor::component::animation::QuaternionKeyFrame_obj::__new();
}

} // end namespace haxor
} // end namespace component
} // end namespace animation
