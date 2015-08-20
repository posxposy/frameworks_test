#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Vector3KeyFrame
#include <haxor/component/animation/Vector3KeyFrame.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace component{
namespace animation{

Void Vector3KeyFrame_obj::__construct()
{
HX_STACK_FRAME("haxor.component.animation.Vector3KeyFrame","new",0x5b261609,"haxor.component.animation.Vector3KeyFrame.new","haxor/component/animation/KeyFrame.hx",105,0xae9e4966)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(105)
	super::__construct();
	HX_STACK_LINE(105)
	::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	this->value = tmp;
}
;
	return null();
}

//Vector3KeyFrame_obj::~Vector3KeyFrame_obj() { }

Dynamic Vector3KeyFrame_obj::__CreateEmpty() { return  new Vector3KeyFrame_obj; }
hx::ObjectPtr< Vector3KeyFrame_obj > Vector3KeyFrame_obj::__new()
{  hx::ObjectPtr< Vector3KeyFrame_obj > _result_ = new Vector3KeyFrame_obj();
	_result_->__construct();
	return _result_;}

Dynamic Vector3KeyFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3KeyFrame_obj > _result_ = new Vector3KeyFrame_obj();
	_result_->__construct();
	return _result_;}

::haxor::component::animation::KeyFrame Vector3KeyFrame_obj::Blend( ::haxor::component::animation::KeyFrame b,Float r){
	HX_STACK_FRAME("haxor.component.animation.Vector3KeyFrame","Blend",0xb0501a1a,"haxor.component.animation.Vector3KeyFrame.Blend","haxor/component/animation/KeyFrame.hx",114,0xae9e4966)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(115)
	this->changed = false;
	HX_STACK_LINE(116)
	::haxor::component::animation::Vector3KeyFrame ka = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(ka,"ka");
	HX_STACK_LINE(117)
	::haxor::component::animation::Vector3KeyFrame kb = ((::haxor::component::animation::Vector3KeyFrame)(b));		HX_STACK_VAR(kb,"kb");
	HX_STACK_LINE(118)
	::haxor::math::Vector3 va = ka->value;		HX_STACK_VAR(va,"va");
	HX_STACK_LINE(119)
	::haxor::math::Vector3 vb = kb->value;		HX_STACK_VAR(vb,"vb");
	HX_STACK_LINE(120)
	Float tmp = (va->x - vb->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	bool tmp2 = (tmp1 < ((Float)0.0001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	if ((tmp2)){
		HX_STACK_LINE(121)
		Float tmp3 = (va->y - vb->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		bool tmp5 = (tmp4 < ((Float)0.0001));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		if ((tmp5)){
			HX_STACK_LINE(122)
			Float tmp6 = (va->z - vb->z);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			bool tmp8 = (tmp7 < ((Float)0.0001));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			if ((tmp8)){
				HX_STACK_LINE(122)
				::haxor::component::animation::Vector3KeyFrame tmp9 = ka;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(122)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(123)
	::haxor::component::animation::Vector3KeyFrame tmp3 = ::haxor::component::animation::Vector3KeyFrame_obj::m_temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	::haxor::component::animation::Vector3KeyFrame k = tmp3;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(124)
	::haxor::math::Vector3 tmp4 = va;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(124)
	::haxor::math::Vector3 tmp5 = vb;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(124)
	Float tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(124)
	::haxor::math::Vector3 tmp7 = k->value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(124)
	::haxor::math::Vector3 tmp8 = ::haxor::math::Vector3_obj::Lerp(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(124)
	k->value = tmp8;
	HX_STACK_LINE(126)
	k->changed = true;
	HX_STACK_LINE(127)
	::haxor::component::animation::Vector3KeyFrame tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(127)
	return tmp9;
}


Dynamic Vector3KeyFrame_obj::Sample( Dynamic v,hx::Null< Float >  __o_w){
Float w = __o_w.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.component.animation.Vector3KeyFrame","Sample",0x11babe41,"haxor.component.animation.Vector3KeyFrame.Sample","haxor/component/animation/KeyFrame.hx",136,0xae9e4966)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(w,"w")
{
		HX_STACK_LINE(136)
		bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		if ((tmp)){
			HX_STACK_LINE(136)
			tmp1 = this->value;
		}
		else{
			HX_STACK_LINE(136)
			Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			::haxor::math::Vector3 tmp3 = this->value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			::haxor::math::Vector3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			{
				HX_STACK_LINE(136)
				::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(136)
				::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(136)
				Array< ::Dynamic > tmp7 = _this->m_v3;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(136)
				int tmp8 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(136)
				int tmp9 = _this->m_v3->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(136)
				int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(136)
				int tmp11 = _this->m_nv3 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(136)
				tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector3 >();
			}
			HX_STACK_LINE(136)
			tmp1 = ::haxor::math::Vector3_obj::Lerp(tmp2,tmp3,tmp4,tmp5);
		}
		HX_STACK_LINE(136)
		return tmp1;
	}
}


::haxor::component::animation::Vector3KeyFrame Vector3KeyFrame_obj::m_temp;


Vector3KeyFrame_obj::Vector3KeyFrame_obj()
{
}

void Vector3KeyFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector3KeyFrame);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void Vector3KeyFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic Vector3KeyFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool Vector3KeyFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_temp") ) { outValue = m_temp; return true;  }
	}
	return false;
}

Dynamic Vector3KeyFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector3KeyFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_temp") ) { m_temp=ioValue.Cast< ::haxor::component::animation::Vector3KeyFrame >(); return true; }
	}
	return false;
}

void Vector3KeyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector3KeyFrame_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::component::animation::Vector3KeyFrame*/ ,(void *) &Vector3KeyFrame_obj::m_temp,HX_HCSTRING("m_temp","\x66","\x33","\xf1","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("Blend","\x31","\x58","\x22","\x48"),
	HX_HCSTRING("Sample","\x4a","\xd4","\xde","\x51"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector3KeyFrame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector3KeyFrame_obj::m_temp,"m_temp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector3KeyFrame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector3KeyFrame_obj::m_temp,"m_temp");
};

#endif

hx::Class Vector3KeyFrame_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_temp","\x66","\x33","\xf1","\x94"),
	String(null()) };

void Vector3KeyFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.animation.Vector3KeyFrame","\x97","\x5d","\xf6","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector3KeyFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &Vector3KeyFrame_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector3KeyFrame_obj >;
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

void Vector3KeyFrame_obj::__boot()
{
	m_temp= ::haxor::component::animation::Vector3KeyFrame_obj::__new();
}

} // end namespace haxor
} // end namespace component
} // end namespace animation
