#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_component_animation_FloatKeyFrame
#include <haxor/component/animation/FloatKeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
namespace haxor{
namespace component{
namespace animation{

Void FloatKeyFrame_obj::__construct()
{
HX_STACK_FRAME("haxor.component.animation.FloatKeyFrame","new",0xcd42ab55,"haxor.component.animation.FloatKeyFrame.new","haxor/component/animation/KeyFrame.hx",59,0xae9e4966)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(59)
	super::__construct();
	HX_STACK_LINE(59)
	this->value = (int)0;
}
;
	return null();
}

//FloatKeyFrame_obj::~FloatKeyFrame_obj() { }

Dynamic FloatKeyFrame_obj::__CreateEmpty() { return  new FloatKeyFrame_obj; }
hx::ObjectPtr< FloatKeyFrame_obj > FloatKeyFrame_obj::__new()
{  hx::ObjectPtr< FloatKeyFrame_obj > _result_ = new FloatKeyFrame_obj();
	_result_->__construct();
	return _result_;}

Dynamic FloatKeyFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FloatKeyFrame_obj > _result_ = new FloatKeyFrame_obj();
	_result_->__construct();
	return _result_;}

::haxor::component::animation::KeyFrame FloatKeyFrame_obj::Blend( ::haxor::component::animation::KeyFrame b,Float r){
	HX_STACK_FRAME("haxor.component.animation.FloatKeyFrame","Blend",0x52b59a66,"haxor.component.animation.FloatKeyFrame.Blend","haxor/component/animation/KeyFrame.hx",68,0xae9e4966)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(69)
	this->changed = false;
	HX_STACK_LINE(70)
	::haxor::component::animation::FloatKeyFrame ka = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(ka,"ka");
	HX_STACK_LINE(71)
	::haxor::component::animation::FloatKeyFrame kb = ((::haxor::component::animation::FloatKeyFrame)(b));		HX_STACK_VAR(kb,"kb");
	HX_STACK_LINE(72)
	Float va = ka->value;		HX_STACK_VAR(va,"va");
	HX_STACK_LINE(73)
	Float vb = kb->value;		HX_STACK_VAR(vb,"vb");
	HX_STACK_LINE(74)
	Float tmp = (va - vb);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	bool tmp2 = (tmp1 < ((Float)0.0001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	if ((tmp2)){
		HX_STACK_LINE(74)
		::haxor::component::animation::FloatKeyFrame tmp3 = ka;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		return tmp3;
	}
	HX_STACK_LINE(75)
	::haxor::component::animation::FloatKeyFrame tmp3 = ::haxor::component::animation::FloatKeyFrame_obj::m_temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	::haxor::component::animation::FloatKeyFrame k = tmp3;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(76)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		Float p_a = ka->value;		HX_STACK_VAR(p_a,"p_a");
		HX_STACK_LINE(76)
		Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		Float tmp6 = (kb->value - p_a);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		Float tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		tmp4 = (tmp5 + tmp8);
	}
	HX_STACK_LINE(76)
	k->value = tmp4;
	HX_STACK_LINE(77)
	k->changed = true;
	HX_STACK_LINE(78)
	::haxor::component::animation::FloatKeyFrame tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	return tmp5;
}


Dynamic FloatKeyFrame_obj::Sample( Dynamic v,hx::Null< Float >  __o_w){
Float w = __o_w.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.component.animation.FloatKeyFrame","Sample",0x88258075,"haxor.component.animation.FloatKeyFrame.Sample","haxor/component/animation/KeyFrame.hx",87,0xae9e4966)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(w,"w")
{
		HX_STACK_LINE(87)
		bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp)){
			HX_STACK_LINE(87)
			tmp1 = this->value;
		}
		else{
			HX_STACK_LINE(87)
			Float p_a = v;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(87)
			Float tmp2 = p_a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			Float tmp3 = this->value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			Float tmp4 = p_a;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			Float tmp6 = w;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			tmp1 = (tmp2 + tmp7);
		}
		HX_STACK_LINE(87)
		return tmp1;
	}
}


::haxor::component::animation::FloatKeyFrame FloatKeyFrame_obj::m_temp;


FloatKeyFrame_obj::FloatKeyFrame_obj()
{
}

Dynamic FloatKeyFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool FloatKeyFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_temp") ) { outValue = m_temp; return true;  }
	}
	return false;
}

Dynamic FloatKeyFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FloatKeyFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_temp") ) { m_temp=ioValue.Cast< ::haxor::component::animation::FloatKeyFrame >(); return true; }
	}
	return false;
}

void FloatKeyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FloatKeyFrame_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::component::animation::FloatKeyFrame*/ ,(void *) &FloatKeyFrame_obj::m_temp,HX_HCSTRING("m_temp","\x66","\x33","\xf1","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("Blend","\x31","\x58","\x22","\x48"),
	HX_HCSTRING("Sample","\x4a","\xd4","\xde","\x51"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FloatKeyFrame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FloatKeyFrame_obj::m_temp,"m_temp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatKeyFrame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FloatKeyFrame_obj::m_temp,"m_temp");
};

#endif

hx::Class FloatKeyFrame_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_temp","\x66","\x33","\xf1","\x94"),
	String(null()) };

void FloatKeyFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.animation.FloatKeyFrame","\xe3","\x5c","\xb3","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FloatKeyFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &FloatKeyFrame_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FloatKeyFrame_obj >;
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

void FloatKeyFrame_obj::__boot()
{
	m_temp= ::haxor::component::animation::FloatKeyFrame_obj::__new();
}

} // end namespace haxor
} // end namespace component
} // end namespace animation
